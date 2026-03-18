/*
 * XREFs of ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x18011560C
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x180112DE4 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180114240 (-RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x180114CCC (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ?SendReportToE3Worker@CEnergyReporter@@AEAAXXZ @ 0x180115518 (-SendReportToE3Worker@CEnergyReporter@@AEAAXXZ.c)
 *     ?WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z @ 0x180116970 (-WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x180153B44 (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z.c)
 *     ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18022C1B0 (-DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z @ 0x18022C23C (-GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z.c)
 *     ?SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z @ 0x18022C2D0 (-SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CReadWriteLock::AcquireExclusive(RTL_SRWLOCK *this)
{
  AcquireSRWLockExclusive(this);
  LODWORD(this[1].Ptr) = GetCurrentThreadId();
}
