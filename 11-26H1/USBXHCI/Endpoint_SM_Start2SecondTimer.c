/*
 * XREFs of Endpoint_SM_Start2SecondTimer @ 0x14001EFB0
 * Callers:
 *     ESM_ProcessingExpectedEventTRBsAfterEndpointStop @ 0x14001E930 (ESM_ProcessingExpectedEventTRBsAfterEndpointStop.c)
 *     ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x14001EF60 (ESM_WaitingForFSEAfterStopEndpointCommandCompletion.c)
 *     ESM_WaitingForHaltedCompletionCode @ 0x14003D560 (ESM_WaitingForHaltedCompletionCode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_SM_Start2SecondTimer(__int64 a1)
{
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 1312),
           -20000000LL);
}
