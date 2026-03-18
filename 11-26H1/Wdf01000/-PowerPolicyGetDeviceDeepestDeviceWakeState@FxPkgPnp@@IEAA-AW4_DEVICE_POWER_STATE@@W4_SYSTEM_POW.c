/*
 * XREFs of ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x14004BEE8
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x14003FA3C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x14004CC54 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14004BEC0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_LL @ 0x1400A72A8 (WPP_IFR_SF_LL.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(FxPkgPnp *this, unsigned int SystemState)
{
  __int64 v2; // rdx
  unsigned int v3; // r8d
  __int64 v4; // r9
  _FX_DRIVER_GLOBALS **v5; // r10
  __int64 v6; // r11
  unsigned int id; // ebx
  __int64 v9; // rax
  const _GUID *v10; // [rsp+20h] [rbp-48h]
  unsigned int v11[4]; // [rsp+40h] [rbp-28h]
  unsigned int v12; // [rsp+50h] [rbp-18h]
  unsigned int v13; // [rsp+54h] [rbp-14h]

  if ( this->m_WakeFromShutdownOptIn )
    return 4LL;
  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, SystemState, 0xBu) )
  {
    if ( (int)v6 - 1 > v3 - 7 )
    {
      id = 1;
    }
    else
    {
      _mm_lfence();
      v2 = *(unsigned __int8 *)(v6 + v4 + 1035);
      v12 = v3 - 7;
      v13 = v3 - 7;
      *(__m128i *)v11 = _mm_load_si128((const __m128i *)&_xmm);
      if ( (unsigned __int8)v2 >= 6u )
        id = 0;
      else
        id = v11[v2];
      v5 = (_FX_DRIVER_GLOBALS **)(v4 + 16);
    }
  }
  else
  {
    v9 = *(unsigned __int8 *)(v4 + 1036);
    v12 = v3 - 7;
    v13 = v3 - 7;
    *(__m128i *)v11 = _mm_load_si128((const __m128i *)&_xmm);
    if ( (unsigned __int8)v9 >= 6u )
      id = 0;
    else
      id = v11[v9];
  }
  if ( !id || !*(_BYTE *)(v4 + 1041) )
    WPP_IFR_SF_LL(*v5, v2, v3, v4, v10, *(unsigned __int8 *)(v4 + 1041), id);
  return id;
}
