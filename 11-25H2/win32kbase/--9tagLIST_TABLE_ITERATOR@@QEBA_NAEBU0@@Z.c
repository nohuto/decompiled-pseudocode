/*
 * XREFs of ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1400CDA28
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14002F720 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140030AA8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1400310C8 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMCmActiveContactsNext @ 0x1400328EC (RIMCmActiveContactsNext.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1401821AC (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x140182660 (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x140183C3C (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140183FB4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1401DCE20 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagLIST_TABLE_ITERATOR::operator!=(__int64 a1, __int64 a2)
{
  return *(_QWORD *)a1 != *(_QWORD *)a2
      || *(_DWORD *)(a1 + 8) != *(_DWORD *)(a2 + 8)
      || *(_QWORD *)(a1 + 16) != *(_QWORD *)(a2 + 16);
}
