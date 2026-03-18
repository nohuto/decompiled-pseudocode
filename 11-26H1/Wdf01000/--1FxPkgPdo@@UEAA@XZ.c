/*
 * XREFs of ??1FxPkgPdo@@UEAA@XZ @ 0x14003A948
 * Callers:
 *     ??_EFxPkgPdo@@UEAAPEAXI@Z @ 0x14003A910 (--_EFxPkgPdo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14003AF3C (--1FxPkgPnp@@MEAA@XZ.c)
 *     ?_CleanupList@FxDeviceText@@SAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140095048 (-_CleanupList@FxDeviceText@@SAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1400A3160 (--_GFxRelatedDeviceList@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPdo::~FxPkgPdo(FxPkgPdo *this)
{
  unsigned int v2; // edx
  wchar_t *m_IDsAllocation; // rcx
  FxChildList *m_OwningChildList; // rcx
  FxRelatedDeviceList *m_EjectionDeviceList; // rcx

  this->__vftable = (FxPkgPdo_vtbl *)FxPkgPdo::`vftable';
  FxDeviceText::_CleanupList(&this->m_DeviceTextHead);
  m_IDsAllocation = this->m_IDsAllocation;
  if ( m_IDsAllocation )
  {
    FxPoolFree(m_IDsAllocation);
    this->m_IDsAllocation = 0LL;
  }
  m_OwningChildList = this->m_OwningChildList;
  if ( m_OwningChildList )
    m_OwningChildList->Release(
      m_OwningChildList,
      this,
      178,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpdo.cpp");
  m_EjectionDeviceList = this->m_EjectionDeviceList;
  if ( m_EjectionDeviceList )
  {
    FxRelatedDeviceList::`scalar deleting destructor'(m_EjectionDeviceList, v2);
    this->m_EjectionDeviceList = 0LL;
  }
  FxPkgPnp::~FxPkgPnp(this);
}
