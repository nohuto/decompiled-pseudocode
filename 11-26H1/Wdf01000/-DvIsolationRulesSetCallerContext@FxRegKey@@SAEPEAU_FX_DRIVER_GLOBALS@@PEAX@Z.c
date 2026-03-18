/*
 * XREFs of ?DvIsolationRulesSetCallerContext@FxRegKey@@SAEPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14009A614
 * Callers:
 *     imp_WdfRegistryCreateKey @ 0x140081210 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1400814D0 (imp_WdfRegistryOpenKey.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

char __fastcall FxRegKey::DvIsolationRulesSetCallerContext(_FX_DRIVER_GLOBALS *pFxDriverGlobals, void *CallerAddress)
{
  __int64 (__fastcall *v3)(void *, _QWORD); // rax
  char v4; // bl

  if ( !unk_1400C8EE0 )
    return 0;
  v3 = *(__int64 (__fastcall **)(void *, _QWORD))(unk_1400C8EE0 + 8LL);
  if ( !v3 )
    return 0;
  v4 = v3(CallerAddress, 0LL);
  if ( !v4 )
    WPP_IFR_SF_(pFxDriverGlobals, 3u, 0x11u, 0xAu, WPP_FxRegKeyKM_cpp_Traceguids);
  return v4;
}
