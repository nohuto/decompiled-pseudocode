/*
 * XREFs of xxxInternalGetMessage @ 0x1401153B0
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1401148A0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x140114C00 (xxxSetCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140114EA8 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserGetMessage @ 0x140115120 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x140115210 (NtUserPeekMessage.c)
 *     xxxIsDragging @ 0x1401171C8 (xxxIsDragging.c)
 *     xxxDCETrackCaptionButton @ 0x140117458 (xxxDCETrackCaptionButton.c)
 *     xxxTrackCaptionButton @ 0x1401192EC (xxxTrackCaptionButton.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x14026B040 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1402AA348 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxMNDoubleClick @ 0x1402BFA0C (xxxMNDoubleClick.c)
 *     xxxDragObject @ 0x1402E1078 (xxxDragObject.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E3E2C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1402EB044 (xxxHelpLoop.c)
 * Callees:
 *     ClientGetMessageMPH @ 0x140115430 (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxInternalGetMessage(__int64 a1, __int64 a2, int a3, int a4, unsigned __int64 a5, int a6)
{
  int v8; // esi
  _QWORD *CurrentThreadNonPaged; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-18h]

  v8 = a2;
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
  LODWORD(v12) = a5;
  if ( *(int *)(CurrentThreadNonPaged[61] + 28LL) <= 0 )
    return xxxRealInternalGetMessage(a1, v12, a6);
  else
    return ClientGetMessageMPH(a1, v8, a3, a4, a5, a6);
}
