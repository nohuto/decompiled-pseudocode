/*
 * XREFs of RIMCmActiveContactsEnd @ 0x140032834
 * Callers:
 *     RIMSuppressAllActiveContacts @ 0x14002E5A0 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x14002F41C (rimEndAllActiveContactsWorker.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14002F720 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140030AA8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1400310C8 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x140031B74 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1400320D4 (rimProcessMissingPointerDeviceContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1400327B0 (RIMCmActiveContactsBeginNoButton.c)
 *     rimIsWakeablePointerFrame @ 0x140116C6C (rimIsWakeablePointerFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1401821AC (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x140182660 (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x140183C3C (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140183FB4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x14019BC10 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1401DCE20 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 * Callees:
 *     ListTableEnd @ 0x140185BE0 (ListTableEnd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsEnd(__int64 a1, __int64 a2)
{
  if ( !*(_DWORD *)(a2 + 1008) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 470LL);
  ListTableEnd(a1, a2 + 1000);
  return a1;
}
