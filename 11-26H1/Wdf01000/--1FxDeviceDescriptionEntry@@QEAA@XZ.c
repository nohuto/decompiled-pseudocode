/*
 * XREFs of ??1FxDeviceDescriptionEntry@@QEAA@XZ @ 0x140080EF8
 * Callers:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140043B90 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x140046CEC (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxDeviceDescriptionEntry::~FxDeviceDescriptionEntry(FxDeviceDescriptionEntry *this)
{
  this->m_DeviceList->Release(
    this->m_DeviceList,
    this,
    77,
    "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxchildlist.cpp");
}
