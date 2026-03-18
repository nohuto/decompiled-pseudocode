/*
 * XREFs of HUBHSM_ReportingErrorToPnp @ 0x140009C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBMISC_ReportPnPFailureProblem @ 0x140086FF8 (HUBMISC_ReportPnPFailureProblem.c)
 */

__int64 __fastcall HUBHSM_ReportingErrorToPnp(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = (_QWORD *)(v1 + 16);
  if ( *(_DWORD *)(v1 + 2612) )
    HUBMISC_ReportPnPFailureProblem(*v2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 696))(WdfDriverGlobals, *v2, 2LL);
  return 2053LL;
}
