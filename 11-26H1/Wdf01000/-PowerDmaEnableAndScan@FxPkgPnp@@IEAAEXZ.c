/*
 * XREFs of ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x140042D64
 * Callers:
 *     ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x140042D40 (-PowerWakingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnableNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14007ACD0 (-PowerWakingDmaEnableNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14007AED0 (-PowerD0StartingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14004326C (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x1400434F8 (-PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140043578 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerDmaEnableAndScan(FxPkgPnp *this)
{
  FxEnumerationInfo *m_EnumInfo; // rcx
  _LIST_ENTRY *p_m_ListHead; // rbx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *Flink; // rax
  __int16 v6; // dx
  unsigned __int64 v7; // rcx

  if ( !FxPkgPnp::PowerDmaPowerUp(this) )
    return 0;
  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
    p_m_ListHead = 0LL;
LABEL_4:
    if ( !p_m_ListHead )
      p_m_ListHead = &this->m_EnumInfo->m_ChildListList.m_ListHead;
    while ( 1 )
    {
      p_m_ListHead = p_m_ListHead->Flink;
      if ( p_m_ListHead == &this->m_EnumInfo->m_ChildListList.m_ListHead )
        break;
      if ( LODWORD(p_m_ListHead[2].Flink) == 1 )
      {
        if ( !p_m_ListHead )
          break;
        Blink = p_m_ListHead[2].Blink;
        Flink = Blink[12].Flink;
        v6 = WORD1(Blink->Blink);
        if ( Flink )
        {
          v7 = (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !v6 )
            v7 = 0LL;
          ((void (__fastcall *)(unsigned __int64))Flink)(v7);
        }
        goto LABEL_4;
      }
    }
    FxTransactionedList::UnlockFromEnum(&this->m_EnumInfo->m_ChildListList, this->m_Globals);
  }
  return 1;
}
