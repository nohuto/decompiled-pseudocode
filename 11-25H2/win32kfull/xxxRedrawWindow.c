/*
 * XREFs of xxxRedrawWindow @ 0x140030830
 * Callers:
 *     xxxValidateRect @ 0x14002D168 (xxxValidateRect.c)
 *     NtUserRedrawWindow @ 0x14002D3B0 (NtUserRedrawWindow.c)
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     xxxUserResetDisplayDevice @ 0x140125400 (xxxUserResetDisplayDevice.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     NtUserInvalidateRgn @ 0x1401D0770 (NtUserInvalidateRgn.c)
 *     _DwmLockScreenUpdates @ 0x1402177A0 (_DwmLockScreenUpdates.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x140243864 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserValidateRgn @ 0x14024F6E0 (NtUserValidateRgn.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxMinimizeHungWindow @ 0x14026BDFC (xxxMinimizeHungWindow.c)
 *     RemoteRedrawRectangle @ 0x1402AF088 (RemoteRedrawRectangle.c)
 *     ?xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402AF590 (-xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxDwmStopRedirection @ 0x1402B5280 (xxxDwmStopRedirection.c)
 *     xxxInvalidateRect @ 0x1402BEDA4 (xxxInvalidateRect.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MirrorRegion @ 0x14004E3F4 (MirrorRegion.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxRedrawWindow(struct tagWND *a1, __int64 a2, __int64 a3, int a4)
{
  ULONG_PTR v4; // rdi
  int *v7; // r14
  struct tagWND *v8; // rbx
  struct tagWND *i; // rcx
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagWND *v14; // rax
  __int64 v15; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  ULONG_PTR *v20; // rax
  __int64 UserSessionState; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // edx
  int v29; // eax
  int v30; // edx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v7 = (int *)a2;
  v8 = a1;
  if ( !a1 )
    v8 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent() + 62) + 8LL) + 24LL);
  for ( i = v8; i; i = (struct tagWND *)*((_QWORD *)i + 13) )
  {
    a2 = *((_QWORD *)i + 5);
    v10 = *(_BYTE *)(a2 + 31);
    if ( (v10 & 0x10) == 0 || (v10 & 0x20) != 0 && i != v8 )
      return 1LL;
    if ( (*(_WORD *)(a2 + 42) & 0x2FFF) == 0x29D )
      break;
  }
  if ( (a4 & 9) != 0 )
  {
    if ( a3 )
    {
      if ( a3 != 1 )
      {
        UserSessionState = W32GetUserSessionState(i, a2);
        GreCombineRgn(*(_QWORD *)(UserSessionState + 63360), a3, 0LL, 5LL);
        v25 = W32GetUserSessionState(v24, v23);
        MirrorRegion(v8, *(_QWORD *)(v25 + 63360), 1LL);
        a3 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 63360);
      }
      if ( v8 != (struct tagWND *)GetDesktopWindow(v8) )
        GreOffsetRgn(a3, *(unsigned int *)(*((_QWORD *)v8 + 5) + 104LL), *(unsigned int *)(*((_QWORD *)v8 + 5) + 108LL));
    }
    else if ( v7 )
    {
      v11 = W32GetUserSessionState(i, a2);
      v12 = *((_QWORD *)v8 + 5);
      a3 = *(_QWORD *)(v11 + 63360);
      if ( (*(_BYTE *)(v12 + 26) & 0x40) != 0 )
      {
        v28 = *(_DWORD *)(v12 + 112) - *(_DWORD *)(v12 + 104);
        v29 = v28 - v7[2];
        v30 = v28 - *v7;
        *v7 = v29;
        v7[2] = v30;
      }
      v13 = *((_QWORD *)v8 + 3);
      v14 = 0LL;
      if ( v13 )
      {
        v15 = *(_QWORD *)(v13 + 8);
        if ( v15 )
          v14 = *(struct tagWND **)(v15 + 24);
      }
      if ( v8 == v14 )
        SetRectRgnIndirect(a3, v7);
      else
        GreSetRectRgn(
          a3,
          (unsigned int)(*v7 + *(_DWORD *)(*((_QWORD *)v8 + 5) + 104LL)),
          (unsigned int)(*(_DWORD *)(*((_QWORD *)v8 + 5) + 108LL) + v7[1]),
          (unsigned int)(*(_DWORD *)(*((_QWORD *)v8 + 5) + 104LL) + v7[2]),
          *(_DWORD *)(*((_QWORD *)v8 + 5) + 108LL) + v7[3]);
    }
    else
    {
      a3 = 1LL;
    }
  }
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(i, a2);
  if ( CurrentThreadNonPaged )
    v17 = *CurrentThreadNonPaged;
  else
    v17 = 0LL;
  BugCheckParameter3[0] = *(_QWORD *)(v17 + 456);
  *(_QWORD *)(v17 + 456) = BugCheckParameter3;
  BugCheckParameter3[1] = (ULONG_PTR)v8;
  if ( v8 )
    HMLockObject(v8);
  xxxInternalInvalidate(v8, (HRGN)a3, a4 | 0x1000);
  v20 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v19, v18);
  if ( v20 )
    v4 = *v20;
  Win32HM_UnlockFromThread<1>(v4, BugCheckParameter3);
  return 1LL;
}
