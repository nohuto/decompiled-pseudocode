/*
 * XREFs of ?_CleanupList@FxDeviceText@@SAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140095048
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x14003A720 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x14003A948 (--1FxPkgPdo@@UEAA@XZ.c)
 * Callees:
 *     ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1400834FC (--_GFxDeviceText@@QEAAPEAXI@Z.c)
 */

void __fastcall FxDeviceText::_CleanupList(_SINGLE_LIST_ENTRY *Head)
{
  FxDeviceText *Next; // rcx

  Next = (FxDeviceText *)Head->Next;
  if ( Next )
  {
    Next->m_Entry.Next = 0LL;
    FxDeviceText::`scalar deleting destructor'(Next);
  }
  Head->Next = 0LL;
}
