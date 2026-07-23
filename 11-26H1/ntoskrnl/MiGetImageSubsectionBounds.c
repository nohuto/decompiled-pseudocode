/*
 * XREFs of MiGetImageSubsectionBounds @ 0x140AB9F48
 * Callers:
 *     MiWalkEntireImage @ 0x140ACA024 (MiWalkEntireImage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiGetSharedProtos @ 0x140374988 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiGetImageSubsectionBounds(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v5; // edx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 *v11; // rdi
  LegacyAutoBoost *v12; // rbp
  __int64 v13; // rdx
  __int64 SharedProtos; // rax
  signed __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rdx
  $241382875694CED3D471BC5892DE3337 *v20; // rcx

  v5 = *(_DWORD *)(*(_QWORD *)a1 + 24LL);
  *(_QWORD *)(a1 + 40) = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(v6 + 8);
  *(_QWORD *)(a1 + 24) = v7;
  v8 = *(_QWORD *)v6;
  *(_DWORD *)(a1 + 32) = (v7 - *(_QWORD *)(*(_QWORD *)v6 + 136LL)) >> 3;
  if ( (*(_DWORD *)(v6 + 32) & 0x20000) == 0 )
    return 1LL;
  if ( (v5 & 2) != 0 )
    return 0LL;
  if ( (*(_DWORD *)(v8 + 56) & 8) == 0 || (*(_DWORD *)(v8 + 56) & 0x20) == 0 )
    return 1LL;
  if ( (v5 & 4) != 0 || (v5 & 1) != 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = (signed __int64 *)(*(_QWORD *)v8 + 40LL);
  --CurrentThread->SpecialApcDisable;
  v12 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v11, 0LL, 0LL, a4);
  v13 = 17LL;
  if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx(v11, 0, v12, (struct _KTHREAD *)v11);
    v13 = 17LL;
  }
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, (void *)0x11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( !*(_QWORD *)(v6 + 24) )
  {
    v15 = v13;
    goto LABEL_22;
  }
  SharedProtos = MiGetSharedProtos(v8, *(_DWORD *)(a1 + 16), v6);
  *(_QWORD *)(a1 + 40) = SharedProtos;
  if ( !SharedProtos )
  {
    v15 = 17LL;
LABEL_22:
    if ( v15 != _InterlockedCompareExchange64(v11, 0LL, v15) )
      ExfReleasePushLockShared(v11);
    KeAbPostRelease((unsigned __int64)v11);
    v18 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v18 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v17, v16);
    return 0LL;
  }
  ++*(_DWORD *)(SharedProtos + 80);
  if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v11);
  KeAbPostRelease((unsigned __int64)v11);
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 )
  {
    v20 = &CurrentThread->152;
    if ( ($241382875694CED3D471BC5892DE3337 *)v20->ApcState.ApcListHead[0].Flink != v20 )
      KiCheckForKernelApcDelivery((__int64)v20, v19);
  }
  result = 1LL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL);
  return result;
}
