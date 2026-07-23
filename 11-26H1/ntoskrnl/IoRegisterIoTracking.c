/*
 * XREFs of IoRegisterIoTracking @ 0x14079A670
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     IoPerfInit @ 0x14050857C (IoPerfInit.c)
 *     IopIrpExtensionControl @ 0x1405CD314 (IopIrpExtensionControl.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IoRegisterIoTracking(__int64 a1, _QWORD *a2)
{
  __int64 Pool2; // rax
  struct _KLOCK_ENTRIES *v5; // r9
  _QWORD *v6; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  signed __int8 v11; // cf
  AutoBoost *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *v16; // r8

  *a2 = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  v6 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)&IopPerfIoTrackingLock, 0LL, 0LL, v5);
  v11 = _interlockedbittestandset64(&IopPerfIoTrackingLock.Header.Lock, 0LL);
  v12 = v9;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&IopPerfIoTrackingLock, v9, (__int64)&IopPerfIoTrackingLock);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v10);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = (_QWORD *)qword_140F853F8;
  if ( *(__int64 **)qword_140F853F8 != &IopPerfIoTrackingListHead )
    __fastfail(3u);
  *v6 = &IopPerfIoTrackingListHead;
  v6[1] = v13;
  *v13 = v6;
  qword_140F853F8 = (__int64)v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IopPerfIoTrackingLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&IopPerfIoTrackingLock);
  v16 = KeGetCurrentThread();
  if ( v16->SpecialApcDisable++ == -1
    && ($241382875694CED3D471BC5892DE3337 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
  {
    KiCheckForKernelApcDelivery(v15, v14);
  }
  IopIrpExtensionControl(2, 1);
  IoPerfInit(2);
  result = 0LL;
  *a2 = v6;
  return result;
}
