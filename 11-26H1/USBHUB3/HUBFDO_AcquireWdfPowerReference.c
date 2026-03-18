/*
 * XREFs of HUBFDO_AcquireWdfPowerReference @ 0x14000C9D4
 * Callers:
 *     HUBHSM_AcquiringWdfPowerReferenceOnInterrupt @ 0x1400087D0 (HUBHSM_AcquiringWdfPowerReferenceOnInterrupt.c)
 *     HUBHSM_AcquiringWdfPowerReferenceOnInterruptFailureAndCheckingIfRootHub @ 0x140008800 (HUBHSM_AcquiringWdfPowerReferenceOnInterruptFailureAndCheckingIfRootHub.c)
 *     HUBHSM_SuspendedWithPendingReset @ 0x14000A180 (HUBHSM_SuspendedWithPendingReset.c)
 *     HUBHSM_UnblockResumeWaitingForStop @ 0x14000A1B0 (HUBHSM_UnblockResumeWaitingForStop.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

void __fastcall HUBFDO_AcquireWdfPowerReference(__int64 a1)
{
  KIRQL v2; // di
  int v3; // ebx

  v2 = KfRaiseIrql(2u);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015
                                                                                                 + 3504))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16),
         0LL,
         0LL,
         2696,
         "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
  KeLowerIrql(v2);
  if ( v3 >= 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x4000u);
}
