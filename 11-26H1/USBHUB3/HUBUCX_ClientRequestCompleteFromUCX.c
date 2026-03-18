/*
 * XREFs of HUBUCX_ClientRequestCompleteFromUCX @ 0x140026430
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_ClientRequestCompleteFromUCX(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
    WdfDriverGlobals,
    a1,
    *(unsigned int *)(a3 + 8));
  return HUBSM_AddEvent(a4 + 512, 4016);
}
