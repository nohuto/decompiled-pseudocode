/*
 * XREFs of ESM_WaitingToReissueStopEndpointCommand3 @ 0x140056200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ESM_WaitingToReissueStopEndpointCommand3(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  bool v3; // cc
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = -100000LL;
  v3 = *(_DWORD *)(v1 + 164) <= 0xAu;
  v4 = *(_QWORD *)(v1 + 1312);
  if ( !v3 )
    v2 = -1000000LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2552))(WdfDriverGlobals, v4, v2);
  return 1000LL;
}
