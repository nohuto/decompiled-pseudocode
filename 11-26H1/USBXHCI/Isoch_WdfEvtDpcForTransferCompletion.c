/*
 * XREFs of Isoch_WdfEvtDpcForTransferCompletion @ 0x14004CFD0
 * Callers:
 *     <none>
 * Callees:
 *     Isoch_ProcessTransferCompletion @ 0x14004CE00 (Isoch_ProcessTransferCompletion.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Isoch_WdfEvtDpcForTransferCompletion(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 912))(WdfDriverGlobals, a1);
  Isoch_ProcessTransferCompletion(v1);
}
