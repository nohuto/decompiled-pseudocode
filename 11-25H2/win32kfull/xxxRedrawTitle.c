/*
 * XREFs of xxxRedrawTitle @ 0x140021BF8
 * Callers:
 *     xxxEnableMenuItem @ 0x140045E50 (xxxEnableMenuItem.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x140068988 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1401E47E0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     NtUserRedrawTitle @ 0x14024C170 (NtUserRedrawTitle.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     xxxHelpLoop @ 0x1402EB044 (xxxHelpLoop.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140022DA4 (-IsInsideUserApiHook@@YAHXZ.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxRedrawTitle(struct tagWND *a1, __int64 a2)
{
  unsigned int v3; // esi
  _BYTE *v4; // rcx
  unsigned int v5; // ebp
  __int64 v7; // rbx
  HDC DCEx; // rbx

  v3 = a2;
  v4 = (_BYTE *)*((_QWORD *)a1 + 5);
  v5 = 1;
  if ( (v4[31] & 0x10) != 0 )
  {
    if ( (v4[30] & 0xC0) == 0xC0 )
    {
      if ( (v4[16] & 0x40) != 0
        && *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) == *(_QWORD *)(W32GetUserSessionState(v4, a2) + 18888) )
      {
        v3 |= 1u;
      }
      if ( (unsigned int)IsInsideUserApiHook() )
      {
        xxxSendMessage(a1, 174LL, v3);
      }
      else
      {
        DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
        xxxDrawCaptionBar(a1, DCEx);
        _ReleaseDC(DCEx);
      }
    }
    else
    {
      v5 = 0;
    }
  }
  if ( (unsigned __int8)IsTrayWindow(a1, 1LL) && (v3 & 0xC) != 0 )
  {
    v7 = *(_QWORD *)a1;
    xxxCallHook(6, *(_QWORD *)a1, 0LL, 10);
    PostShellHookMessagesEx((LastWokenThread *)6, v7);
  }
  return v5;
}
