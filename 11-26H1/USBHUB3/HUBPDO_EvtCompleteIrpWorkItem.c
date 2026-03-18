/*
 * XREFs of HUBPDO_EvtCompleteIrpWorkItem @ 0x140015530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_EvtCompleteIrpWorkItem(__int64 a1)
{
  PIRP *v2; // rax

  v2 = (PIRP *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 a1,
                 off_14006D220);
  IofCompleteRequest(*v2, 0);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
