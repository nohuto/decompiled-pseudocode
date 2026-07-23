/*
 * XREFs of ExNotifyWithProcessing @ 0x140427F90
 * Callers:
 *     PoNotifySystemTimeSet @ 0x140427DFC (PoNotifySystemTimeSet.c)
 *     IopSessionChangeWorker @ 0x140427F30 (IopSessionChangeWorker.c)
 *     HvlPhase2Initialize @ 0x1405BB378 (HvlPhase2Initialize.c)
 *     KiDynamicProcessorAddNotification @ 0x1405F3270 (KiDynamicProcessorAddNotification.c)
 *     ExRebootSystemForRecovery @ 0x1406CF57C (ExRebootSystemForRecovery.c)
 *     SepImageVerificationCallbackWorker @ 0x140B2F130 (SepImageVerificationCallbackWorker.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140C8617C (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x140CCA044 (PnpNotifyEarlyLaunchImageLoad.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpCallProcessing @ 0x140428144 (ExpCallProcessing.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall ExNotifyWithProcessing(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  _QWORD *v4; // rdi
  KSPIN_LOCK *v8; // r14
  KIRQL v9; // al
  _QWORD *v10; // rbx
  KIRQL v11; // bp
  int v12; // eax
  bool v13; // zf

  if ( a1 )
  {
    v4 = (_QWORD *)(a1 + 16);
    if ( (_QWORD *)*v4 != v4 )
    {
      v8 = (KSPIN_LOCK *)(a1 + 8);
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
      v10 = (_QWORD *)*v4;
      v11 = v9;
      if ( v9 == 2 )
      {
        while ( v10 != v4 )
        {
          ExpCallProcessing(1, v10[4], a2, a3, (__int64)a4);
          guard_dispatch_icall_no_overrides(v10[4], a2);
          ExpCallProcessing(0, v10[4], a2, a3, (__int64)a4);
          v10 = (_QWORD *)*v10;
        }
      }
      else
      {
        while ( v10 != v4 )
        {
          if ( !*((_BYTE *)v10 + 44) )
          {
            ++*((_DWORD *)v10 + 10);
            KeReleaseSpinLock(v8, v11);
            if ( a4 && *a4 )
              guard_dispatch_icall_no_overrides(v10[4], a2);
            guard_dispatch_icall_no_overrides(v10[4], a2);
            if ( a4 && a4[1] )
              guard_dispatch_icall_no_overrides(v10[4], a2);
            v11 = KeAcquireSpinLockRaiseToDpc(v8);
            v12 = *((_DWORD *)v10 + 10) - 1;
            v13 = *((_BYTE *)v10 + 44) == 0;
            *((_DWORD *)v10 + 10) = v12;
            if ( !v13 && !v12 )
              KeSetEvent(&word_140EFF2A0, 0, 0);
          }
          v10 = (_QWORD *)*v10;
        }
      }
      KxReleaseSpinLock(v8);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      __writecr8(v11);
    }
  }
}
