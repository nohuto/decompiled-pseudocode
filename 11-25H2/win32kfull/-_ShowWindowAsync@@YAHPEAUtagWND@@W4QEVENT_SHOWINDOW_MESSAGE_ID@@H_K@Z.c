/*
 * XREFs of ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x14012931C
 * Callers:
 *     NtUserShowWindowAsync @ 0x140129240 (NtUserShowWindowAsync.c)
 *     xxxSetWindowPlacement @ 0x14016FB84 (xxxSetWindowPlacement.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1402D3C90 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall _ShowWindowAsync(struct tagWND *a1, __int64 a2, unsigned int a3, unsigned __int64 a4)
{
  struct tagQ **v4; // r14
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 UserSessionState; // rax

  v4 = (struct tagQ **)*((_QWORD *)a1 + 2);
  v6 = a3;
  v7 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return PostEventMessageEx(
           (struct tagTHREADINFO *)v4,
           v4[59],
           1u,
           a1,
           v7,
           a4,
           v6 | *(_DWORD *)(UserSessionState + 66800) & 0x10000,
           0LL);
}
