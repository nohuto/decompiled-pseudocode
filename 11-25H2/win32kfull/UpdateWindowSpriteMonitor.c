/*
 * XREFs of UpdateWindowSpriteMonitor @ 0x140090008
 * Callers:
 *     UpdateWindowMonitor @ 0x140033EB0 (UpdateWindowMonitor.c)
 *     ComposeWindow @ 0x14004D908 (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1400B4EC4 (SetRedirectedWindow.c)
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1401E6A50 (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     GreDwmNotifySpriteMonitorChange @ 0x14009009C (GreDwmNotifySpriteMonitorChange.c)
 *     InitializeMonitorInfo @ 0x1400901C8 (InitializeMonitorInfo.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall UpdateWindowSpriteMonitor(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  _BYTE v9[80]; // [rsp+20h] [rbp-58h] BYREF

  if ( a2 )
  {
    v2 = a1[5];
    if ( (*(_BYTE *)(v2 + 26) & 8) != 0 )
    {
      memset_0(v9, 0, 0x48uLL);
      InitializeMonitorInfo(v9, *(unsigned int *)(v2 + 288), a2, a1);
      v5 = *a1;
      UserSessionState = W32GetUserSessionState(v7, v6);
      GreDwmNotifySpriteMonitorChange(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL), v5, 0LL, v9);
    }
  }
}
