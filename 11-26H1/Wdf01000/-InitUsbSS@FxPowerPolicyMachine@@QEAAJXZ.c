/*
 * XREFs of ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x14007A790
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x14003FA3C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?Initialize@FxUsbIdleInfo@@QEAAJXZ @ 0x140083988 (-Initialize@FxUsbIdleInfo@@QEAAJXZ.c)
 *     ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1400A857C (--_GFxUsbIdleInfo@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxPowerPolicyMachine::InitUsbSS(FxPowerPolicyMachine *this)
{
  FxPkgPnp *m_PkgPnp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v4; // rax
  FxUsbIdleInfo *v5; // rbx
  FxPkgPnp *v6; // rax
  unsigned int v7; // edx
  int v8; // esi
  __m128i v10; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( this->m_Owner->m_UsbIdle )
    return 0LL;
  m_PkgPnp = this->m_PkgPnp;
  v10.m128i_i64[0] = 0LL;
  v10.m128i_i64[1] = 64LL;
  m_Globals = m_PkgPnp->m_Globals;
  if ( m_Globals->FxPoolTrackingOn )
    v4 = retaddr;
  else
    v4 = 0LL;
  v5 = (FxUsbIdleInfo *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v10, 0x28uLL, m_Globals->Tag, v4);
  if ( v5 )
  {
    v6 = this->m_PkgPnp;
    v5->m_IdleCallbackEvent = 0LL;
    v5->m_IdleIrp.m_Irp = 0LL;
    v5->m_CallbackInfo.IdleCallback = (void (__fastcall *)(void *))FxUsbIdleInfo::_UsbIdleCallback;
    v5->m_CallbackInfo.IdleContext = v6;
    v5->m_EventDropped = 0;
    v8 = FxUsbIdleInfo::Initialize(v5);
    if ( v8 < 0 )
    {
      FxUsbIdleInfo::`scalar deleting destructor'(v5, v7);
      return (unsigned int)v8;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Owner->m_UsbIdle, (signed __int64)v5, 0LL) )
      FxUsbIdleInfo::`scalar deleting destructor'(v5, v7);
    return 0LL;
  }
  return 3221225626LL;
}
