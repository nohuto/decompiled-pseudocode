/*
 * XREFs of ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1400834FC
 * Callers:
 *     imp_WdfPdoInitAddDeviceText @ 0x14003D440 (imp_WdfPdoInitAddDeviceText.c)
 *     ?_CleanupList@FxDeviceText@@SAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140095048 (-_CleanupList@FxDeviceText@@SAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxDeviceText@@QEAA@XZ @ 0x140083524 (--1FxDeviceText@@QEAA@XZ.c)
 */

FxDeviceText *__fastcall FxDeviceText::`scalar deleting destructor'(FxDeviceText *this)
{
  FxDeviceText::~FxDeviceText(this);
  FxPoolFree(this);
  return this;
}
