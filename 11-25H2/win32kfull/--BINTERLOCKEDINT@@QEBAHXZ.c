/*
 * XREFs of ??BINTERLOCKEDINT@@QEBAHXZ @ 0x1402756EC
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x14001E1E0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxGetInputEvent @ 0x14001E960 (xxxGetInputEvent.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x14001F190 (xxxMsgWaitForMultipleObjectsEx.c)
 *     NtUserGetQueueStatus @ 0x14001FC70 (NtUserGetQueueStatus.c)
 *     _GetQueueStatus @ 0x14001FFE0 (_GetQueueStatus.c)
 *     xxxDesktopThreadWaiter @ 0x140020F14 (xxxDesktopThreadWaiter.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x14002B4FC (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1400677E0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1400CAEE0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     ?WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z @ 0x14011F8C4 (-WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z.c)
 *     TransferWakeBit @ 0x140120600 (TransferWakeBit.c)
 *     SlowAppThreadInShellFrame @ 0x140151514 (SlowAppThreadInShellFrame.c)
 *     NtUserGetQueueStatusReadonly @ 0x1401695B0 (NtUserGetQueueStatusReadonly.c)
 *     ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A520 (-xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1401D4478 (xxxWaitForDITMouseInjectionFlush.c)
 *     IncPaintCountInterMoveSize @ 0x1402D3B50 (IncPaintCountInterMoveSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall INTERLOCKEDINT::operator int(unsigned int *a1)
{
  return *a1;
}
