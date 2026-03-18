/*
 * XREFs of _GetMessagePos @ 0x1400385F8
 * Callers:
 *     NtUserGetMessagePos @ 0x1400385C0 (NtUserGetMessagePos.c)
 *     xxxSendHelpMessage @ 0x140225E8C (xxxSendHelpMessage.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x14025F3B0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z @ 0x1402B68D4 (-DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 *     xxxEndScroll @ 0x1402E85E0 (xxxEndScroll.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetMessagePos(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = PtiCurrent(a1, a2);
  v5 = *(_QWORD *)((char *)v2 + 796);
  if ( *((_DWORD *)v2 + 201) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(*((_DWORD *)v2 + 201) >> 8)) & 0x1FF) != 0 )
    {
      LogicalToPhysicalDPIPoint(&v5, &v5, *((unsigned int *)v2 + 201), 0LL);
      PhysicalToLogicalDPIPoint(&v5, &v5, CurrentThreadDpiAwarenessContext, 0LL);
    }
  }
  else
  {
    v5 = 0LL;
  }
  return (unsigned __int16)v5 | (WORD2(v5) << 16);
}
