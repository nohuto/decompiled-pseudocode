/*
 * XREFs of xxxSleepThread2 @ 0x14001E134
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     xxxIsDragging @ 0x1401171C8 (xxxIsDragging.c)
 *     xxxSleepThread @ 0x140117848 (xxxSleepThread.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 *     xxxWaitMessageEx @ 0x14016BF60 (xxxWaitMessageEx.c)
 *     NtUserWaitMessage @ 0x14016BFD0 (NtUserWaitMessage.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     NtUserRealWaitMessageEx @ 0x14029BF40 (NtUserRealWaitMessageEx.c)
 * Callees:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x14001E1E0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x14001ED60 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall xxxSleepThread2(unsigned int a1, unsigned int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // edi
  unsigned int v10; // ebx

  v5 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*((_QWORD *)PtiCurrent() + 59) + 112LL) )
  {
    v5 = 1;
    xxxUpdateInputHangInfo(0LL, 0LL);
  }
  v10 = xxxRealSleepThread(a1, a2, a3, a4, a5);
  if ( v5 )
    xxxUpdateInputHangInfo(0LL, 1LL);
  return v10;
}
