/*
 * XREFs of ?PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x14007D01C
 * Callers:
 *     ?_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14003F990 (-_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x140040960 (-DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyHandleSystemQueryPower(FxPkgPnp *this, int QueryState)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( QueryState < 5 && !this->m_WakeFromShutdownOptIn && QueryState > this->m_SystemWake )
  {
    WPP_IFR_SF_D(this->m_Globals, 3u, 0xCu, 0x3Du, WPP_FxPkgPnp_cpp_Traceguids, QueryState - 1);
    return (unsigned int)-1073741101;
  }
  return v2;
}
