/*
 * XREFs of sub_1409E9DA0 @ 0x1409E9DA0
 * Callers:
 *     sub_1409E8440 @ 0x1409E8440 (sub_1409E8440.c)
 *     sub_1409E8670 @ 0x1409E8670 (sub_1409E8670.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     sub_1409EA080 @ 0x1409EA080 (sub_1409EA080.c)
 *     sub_1409EAA60 @ 0x1409EAA60 (sub_1409EAA60.c)
 *     sub_1409EB368 @ 0x1409EB368 (sub_1409EB368.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409E9DA0(__int64 a1, __int64 a2, _QWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // esi
  _QWORD *v8; // rdi
  void *v9; // rdx
  LegacyAutoBoost *v10; // rbx
  int i; // ebx
  int v12; // ebp
  __int64 v13; // rax
  int v14; // ecx
  int v15; // ebx
  __int64 v16; // rdx
  struct _KTHREAD *v17; // rcx
  bool v18; // zf
  struct _KLOCK_ENTRIES *v20; // r9
  void *v21; // rcx
  struct _KTHREAD *v22; // rax
  AutoBoost *v23; // rax
  void *v24; // rdx
  int v25; // r8d
  AutoBoost *v26; // rbx
  _QWORD *v27; // [rsp+70h] [rbp+8h] BYREF
  struct _KTHREAD *v28; // [rsp+88h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v28 = CurrentThread;
  v27 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = 0LL;
  v10 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 128, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 128), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 128), 0, v10, (struct _KTHREAD *)(a1 + 128));
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  for ( i = *(_DWORD *)(a1 + 92) - 1; ; i = v14 )
  {
    if ( v7 > i )
    {
      v15 = -1073741198;
      goto LABEL_19;
    }
    v12 = (i + v7) / 2;
    v13 = guard_dispatch_icall_no_overrides(
            *(_QWORD *)((unsigned int)(*(_DWORD *)(a1 + 88) * v12) + *(_QWORD *)(a1 + 104)),
            (__int64)v28);
    if ( !v13 )
      break;
    if ( v13 >= 0 )
      v7 = v12 + 1;
    v14 = v12 - 1;
    if ( v13 >= 0 )
      v14 = i;
  }
  v8 = *(_QWORD **)((unsigned int)(*(_DWORD *)(a1 + 88) * v12) + *(_QWORD *)(a1 + 104));
  if ( v8 )
    _InterlockedIncrement64(v8 + 1);
  v27 = v8;
  v15 = 0;
LABEL_19:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 128), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 128));
  KeAbPostRelease(a1 + 128);
  v17 = KeGetCurrentThread();
  v18 = v17->SpecialApcDisable++ == -1;
  if ( v18 && ($241382875694CED3D471BC5892DE3337 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery((__int64)v17, v16);
  if ( v15 == -1073741198 )
  {
    v15 = sub_1409EAA60(a1, v28, &v27);
    if ( v15 < 0 )
    {
      v8 = v27;
      goto LABEL_28;
    }
    v22 = KeGetCurrentThread();
    --v22->SpecialApcDisable;
    v23 = (AutoBoost *)KeAbPreAcquire(a1 + 128, 0LL, 0LL, v20);
    v26 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 128), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 128), v23, a1 + 128);
    if ( v26 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v26, v24);
      else
        *((_BYTE *)v26 + 10) = 1;
    }
    v8 = v27;
    v15 = sub_1409EB368((int)a1 + 88, (_DWORD)v27, v25, *v27, 8, -1);
    if ( v15 >= 0 )
      _InterlockedIncrement64(v8 + 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 128));
    KeAbPostRelease(a1 + 128);
    KeLeaveGuardedRegion();
  }
  if ( v15 >= 0 && a3 )
  {
    *a3 = v8;
    v8 = 0LL;
  }
LABEL_28:
  if ( v8
    && _InterlockedExchangeAdd64(v8 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1
    && (int)sub_1409EA080(a1, v8, 0xFFFFFFFFLL) >= 0 )
  {
    v21 = (void *)v8[3];
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)v15;
}
