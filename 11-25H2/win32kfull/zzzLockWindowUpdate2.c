/*
 * XREFs of zzzLockWindowUpdate2 @ 0x1401558AC
 * Callers:
 *     NtUserLockWindowUpdate @ 0x140155840 (NtUserLockWindowUpdate.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x14023B7E4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     SpbCheck @ 0x14005856C (SpbCheck.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     SpbCheckPwnd @ 0x140155C10 (SpbCheckPwnd.c)
 *     CreateSpb @ 0x140155CBC (CreateSpb.c)
 *     FreeSpb @ 0x140156450 (FreeSpb.c)
 */

__int64 __fastcall zzzLockWindowUpdate2(ULONG_PTR a1, __int64 a2)
{
  int v2; // edi
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _BOOL8 v12; // rcx
  int v14; // ecx
  __int64 UserSessionState; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct tagWND *DesktopWindow; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct tagTHREADINFO *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  ULONG_PTR v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rbp
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 *i; // rbx
  BOOL v49; // esi
  _QWORD v50[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v4 = PtiCurrent(a1, a2);
  if ( (*(_DWORD *)(W32GetUserSessionState(v6, v5) + 66800) & 0x20000000) != 0
    || *(_QWORD *)(W32GetUserSessionState(v8, v7) + 63240)
    && *(struct tagTHREADINFO **)(W32GetUserSessionState(v10, v9) + 63240) != v4
    && !v2 )
  {
    v14 = 1440;
    goto LABEL_9;
  }
  v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 63240) != 0LL;
  if ( (a1 != 0) == v12 )
  {
    if ( v2 )
      return 0LL;
    v14 = 87;
LABEL_9:
    UserSetLastError(v14);
    return 0LL;
  }
  UserSessionState = W32GetUserSessionState(v12, v11);
  ++*(_DWORD *)(UserSessionState + 70600);
  v18 = W32GetUserSessionState(v17, v16);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v18 + 56968) + 48LL));
  if ( a1 )
  {
    SpbCheckPwnd(a1);
    CreateSpb(a1, 2LL, 0LL);
    v50[1] = a1;
    v50[0] = W32GetUserSessionState(v22, v21) + 56976;
    HMAssignmentLock(v50, 0LL);
    *(_QWORD *)(W32GetUserSessionState(v24, v23) + 63240) = v4;
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
  }
  else
  {
    SpbCheck(v20, v19);
    v37 = *(_QWORD *)(W32GetUserSessionState(v36, v35) + 56976);
    Win32HM_LockIntoThread<1>((__int64)v4, v37, (__int64 *)BugCheckParameter3);
    *(_QWORD *)(W32GetUserSessionState(v39, v38) + 63240) = 0LL;
    v42 = W32GetUserSessionState(v41, v40);
    HMAssignmentUnlock(v42 + 56976);
    zzzLockDisplayAreaAndInvalidateDCCache(v37, 1LL, 0LL);
    v43 = 1LL;
    v47 = *(_QWORD *)(W32GetUserSessionState(v45, v44) + 56968);
    for ( i = *(__int64 **)(v47 + 40); i; i = (__int64 *)*i )
    {
      if ( (i[6] & 2) != 0 )
      {
        if ( i[5] )
        {
          v43 = *(_QWORD *)(W32GetUserSessionState(v47, v46) + 43088);
          SetRectRgnIndirect(v43, i + 3);
          v49 = GreCombineRgn(v43, v43, i[5], 4LL) != 1;
        }
        else
        {
          v49 = 0;
        }
        FreeSpb(i);
        if ( !v49 )
          goto LABEL_16;
        break;
      }
    }
    DesktopWindow = (struct tagWND *)v37;
    if ( v37 )
    {
      while ( (*(_BYTE *)(*((_QWORD *)DesktopWindow + 5) + 26LL) & 8) == 0 )
      {
        DesktopWindow = (struct tagWND *)*((_QWORD *)DesktopWindow + 13);
        if ( !DesktopWindow )
          goto LABEL_14;
      }
      if ( DesktopWindow != (struct tagWND *)v37
        && (*(_WORD *)(*((_QWORD *)DesktopWindow + 5) + 42LL) & 0x2FFF) == 0x29D )
      {
        goto LABEL_14;
      }
    }
    if ( !DesktopWindow )
LABEL_14:
      DesktopWindow = (struct tagWND *)GetDesktopWindow(v37);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v50);
    v30 = W32GetUserSessionState(v29, v28);
    ++*(_DWORD *)(v30 + 70600);
    xxxInternalInvalidate(DesktopWindow, (HRGN)v43, 0x10485u);
    zzzEndDeferWinEventNotify();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v50);
LABEL_16:
    SpbCheckPwnd(v37);
    v33 = PtiCurrent(v32, v31);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v33, BugCheckParameter3);
  }
  v34 = W32GetUserSessionState(v26, v25);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v34 + 56968) + 48LL));
  zzzEndDeferWinEventNotify();
  return 1LL;
}
