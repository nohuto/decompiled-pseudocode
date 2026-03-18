/*
 * XREFs of ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x140067398
 * Callers:
 *     ?PowerWakingConnectInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400670A0 (-PowerWakingConnectInterruptNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x140067170 (-PowerD0StartingConnectInterrupt@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400672D0 (-PowerWakingConnectInterrupt@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x140067650 (-Connect@FxInterrupt@@QEAAJK@Z.c)
 */

__int64 __fastcall FxPkgPnp::NotifyResourceObjectsD0(FxPkgPnp *this, unsigned int NotifyFlags)
{
  _LIST_ENTRY *p_m_InterruptListHead; // rsi
  _LIST_ENTRY *i; // rbx
  _LIST_ENTRY **p_Blink; // rdi
  int _a2; // r14d
  __int16 v9; // ax
  const void *_a1; // rdi

  p_m_InterruptListHead = &this->m_InterruptListHead;
  for ( i = this->m_InterruptListHead.Flink; ; i = i->Flink )
  {
    if ( i == p_m_InterruptListHead )
      return 0LL;
    p_Blink = &i[-28].Blink;
    _a2 = FxInterrupt::Connect((FxInterrupt *)&i[-28].Blink, NotifyFlags);
    if ( _a2 < 0 )
      break;
  }
  v9 = *((_WORD *)p_Blink + 5);
  _a1 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v9 )
    _a1 = 0LL;
  WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x52u, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
  return (unsigned int)_a2;
}
