/*
 * XREFs of ?xxxSwitchToThisWindow@@YAHPEAUtagWND@@H@Z @ 0x14023CE88
 * Callers:
 *     NtUserSwitchToThisWindow @ 0x14024F1F0 (NtUserSwitchToThisWindow.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x14014BCD0 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x140169118 (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

__int64 __fastcall xxxSwitchToThisWindow(struct tagTHREADINFO **a1, __int64 a2)
{
  int v2; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct tagWND *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = a2;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888) )
  {
    if ( !v2 )
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18888);
      v7 = *(struct tagWND **)(v6 + 128);
      if ( v7 )
      {
        if ( _GetNextQueueWindow(*(struct tagWND **)(v6 + 128), 0LL, 1) )
        {
          v8 = *((_QWORD *)v7 + 5);
          if ( (*(_BYTE *)(v8 + 24) & 8) == 0 && (*(_BYTE *)(v8 + 20) & 0x20) == 0 )
          {
            Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v7);
            xxxSetWindowPos(v7, 1LL, 0LL, 0LL, 0, 0, 16403);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v9);
          }
        }
      }
    }
  }
  xxxSetForegroundWindowWithOptions(a1, 2LL, 0LL);
  if ( v2 && (*((_BYTE *)a1[5] + 31) & 0x20) != 0 && !IsThreadHung(a1[2], v10) )
    PostEventMessageEx(
      a1[2],
      *((struct tagQ **)a1[2] + 59),
      7u,
      (LARGE_INTEGER *)a1,
      0x112u,
      (LARGE_INTEGER)61728LL,
      0LL,
      0LL);
  return 1LL;
}
