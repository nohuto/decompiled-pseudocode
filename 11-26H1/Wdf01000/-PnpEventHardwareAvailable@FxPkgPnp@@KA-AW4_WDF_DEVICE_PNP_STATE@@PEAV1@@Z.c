/*
 * XREFs of ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x140039710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?CreatePowerThreadIfNeeded@FxPkgPnp@@AEAAJXZ @ 0x140039628 (-CreatePowerThreadIfNeeded@FxPkgPnp@@AEAAJXZ.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1400397FC (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1400475A8 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x14004C474 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventHardwareAvailable(FxPkgPnp *This)
{
  FxPkgPnp_vtbl *v1; // rax
  __int64 result; // rax
  unsigned __int8 v4; // r8
  int _a1; // edi
  unsigned __int8 matched; // [rsp+40h] [rbp+8h] BYREF
  FxCxCallbackProgress progress; // [rsp+48h] [rbp+10h] BYREF

  v1 = This->__vftable;
  progress = FxCxCallbackProgressInitialized;
  matched = 0;
  if ( v1->QueryForReenumerationInterface(This) < 0 || (int)FxPkgPnp::CreatePowerThreadIfNeeded(This) < 0 )
    return 303LL;
  if ( FxPkgPnp::PnpPrepareHardware(This, &matched, &progress) < 0 )
  {
    if ( matched )
      return progress == FxCxCallbackProgressInitialized ? 303 : 298;
    return 303LL;
  }
  if ( !This->m_PowerPolicyMachine.m_Owner )
  {
LABEL_6:
    FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolStart, v4);
    return 314LL;
  }
  _a1 = FxPkgPnp::QueryForCapabilities(This);
  if ( _a1 >= 0 )
  {
    This->m_CapsQueried = 1;
    goto LABEL_6;
  }
  WPP_IFR_SF_D(This->m_Globals, 2u, 0xCu, 0xFu, WPP_PnpStateMachine_cpp_Traceguids, _a1);
  result = 298LL;
  This->m_PendingPnPIrp->IoStatus.Status = _a1;
  return result;
}
