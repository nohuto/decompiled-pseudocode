/*
 * XREFs of ESM_WaitingToReissueStopEndpointCommand2 @ 0x1400561B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ESM_WaitingToReissueStopEndpointCommand2(__int64 a1)
{
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 1312LL),
    -5000000LL);
  return 1000LL;
}
