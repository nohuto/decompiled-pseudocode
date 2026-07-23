/*
 * XREFs of MiIsRangeFullyCommitted @ 0x140A036A4
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140A02FF8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiIsRangeFullyCommitted(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *ProtoPteAddress; // rdi
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // r15
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v9; // r14d
  __int64 v10; // rbx
  signed __int64 *v11; // rbx
  void *v12; // rdx
  LegacyAutoBoost *v13; // rbp
  signed __int64 v14; // r8
  unsigned int *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  $241382875694CED3D471BC5892DE3337 *v19; // rcx
  unsigned int *v21; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v22; // [rsp+68h] [rbp+10h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  ProtoPteAddress = (_QWORD *)MiGetProtoPteAddress(a1, a2 >> 12, 2u, &v22);
  if ( !ProtoPteAddress )
    return 0LL;
  v7 = MiGetProtoPteAddress(a1, a3 >> 12, 2u, &v21);
  if ( !v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 1;
  v10 = ***(_QWORD ***)(a1 + 80);
  --CurrentThread->SpecialApcDisable;
  v11 = (signed __int64 *)(v10 + 40);
  v13 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v11, 0LL, 0LL, v6);
  v14 = 17LL;
  if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx(v11, 0, v13, (struct _KTHREAD *)v11);
    v14 = 17LL;
  }
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v15 = v22;
  while ( 1 )
  {
    v16 = v15 == v21 ? v7 : *((_QWORD *)v15 + 1) + 8LL * (v15[11] - 1);
    while ( (unsigned __int64)ProtoPteAddress <= v16 )
    {
      if ( !*ProtoPteAddress )
      {
        v9 = 0;
        break;
      }
      ++ProtoPteAddress;
    }
    if ( v15 == v21 )
      break;
    v15 = (unsigned int *)*((_QWORD *)v15 + 2);
    ProtoPteAddress = (_QWORD *)*((_QWORD *)v15 + 1);
    if ( !ProtoPteAddress )
    {
      v9 = 0;
      break;
    }
  }
  if ( v14 != _InterlockedCompareExchange64(v11, 0LL, v14) )
    ExfReleasePushLockShared(v11);
  KeAbPostRelease((unsigned __int64)v11);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v19 = &CurrentThread->152;
    if ( ($241382875694CED3D471BC5892DE3337 *)v19->ApcState.ApcListHead[0].Flink != v19 )
      KiCheckForKernelApcDelivery((__int64)v19, v17);
  }
  return v9;
}
