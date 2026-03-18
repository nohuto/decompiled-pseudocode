/*
 * XREFs of ExNotifyWithProcessing @ 0x140439330
 * Callers:
 *     PoNotifySystemTimeSet @ 0x14043919C (PoNotifySystemTimeSet.c)
 *     IopSessionChangeWorker @ 0x1404392D0 (IopSessionChangeWorker.c)
 *     HvlPhase2Initialize @ 0x1405B8B08 (HvlPhase2Initialize.c)
 *     KiDynamicProcessorAddNotification @ 0x1405F0900 (KiDynamicProcessorAddNotification.c)
 *     ExRebootSystemForRecovery @ 0x1406CB54C (ExRebootSystemForRecovery.c)
 *     SepImageVerificationCallbackWorker @ 0x140B2D0B0 (SepImageVerificationCallbackWorker.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140C8017C (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x140CC3F64 (PnpNotifyEarlyLaunchImageLoad.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpCallProcessing @ 0x1404394E4 (ExpCallProcessing.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
              KeSetEvent(&word_140EFEF60, 0, 0);
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
