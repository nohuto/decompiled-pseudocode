/*
 * XREFs of ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x14003BB54
 * Callers:
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x14003B3A0 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     imp_WdfCmResourceListRemoveByDescriptor @ 0x140099030 (imp_WdfCmResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceListRemoveByDescriptor @ 0x140099480 (imp_WdfIoResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x1400998D0 (imp_WdfIoResourceRequirementsListRemoveByIoResList.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x14009B058 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 * Callees:
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x14002E6F8 (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
 *     ?CleanupEntryObject@FxCollectionInternal@@QEAAXPEAVFxObject@@@Z @ 0x14003BB8C (-CleanupEntryObject@FxCollectionInternal@@QEAAXPEAVFxObject@@@Z.c)
 */

__int64 __fastcall FxCollectionInternal::RemoveEntry(FxCollectionInternal *this, FxCollectionEntry *Entry)
{
  FxCollectionInternal::CleanupEntryObject(this, Entry->m_Object);
  FxCollectionInternal::CleanupEntry(this, Entry);
  return 0LL;
}
