/*
 * XREFs of ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x14004C710
 * Callers:
 *     ?Cursor_DaemonTimeRateChanged@@YAX_N@Z @ 0x14004E660 (-Cursor_DaemonTimeRateChanged@@YAX_N@Z.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14004C8FC (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     SetDeepDelayableVisRITTimer @ 0x14004CA4C (SetDeepDelayableVisRITTimer.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     zzzUpdateCursorImage @ 0x14004D350 (zzzUpdateCursorImage.c)
 */

void __fastcall zzzAnimateCursor(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 UserSessionState; // rax
  struct tagCURSOR *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagCURSOR *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  signed int v13; // ebp
  int v14; // ebx
  int v15; // ebx
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // esi
  int v21; // r10d
  int v22; // r8d
  int v23; // eax
  struct tagTHREADINFO *v24; // rax
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = FixupCursorForMonitor(*(struct tagCURSOR **)(UserSessionState + 36320));
  v8 = v5;
  if ( v5 && (v7 = *((unsigned int *)v5 + 20), (v7 & 8) != 0) && *((_QWORD *)v5 + 14) )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v7, v6) + 36336) )
    {
      v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v12 = W32GetUserSessionState(v10, v9);
      v10 = *((int *)v8 + 30);
      v13 = 0;
      v9 = 100 * *(_DWORD *)(*((_QWORD *)v8 + 14) + 4 * v10) / 6u;
      v14 = v11 - v9 - *(_DWORD *)(v12 + 36336);
      if ( v14 >= 0 )
        v13 = v14;
    }
    else
    {
      v13 = 0;
    }
    v15 = 0;
    if ( *((_DWORD *)v8 + 30) + 1 < *((_DWORD *)v8 + 23) )
      v15 = *((_DWORD *)v8 + 30) + 1;
    *((_DWORD *)v8 + 30) = v15;
    v16 = PtiCurrent(v10, v9);
    Win32HM_LockIntoThread<0>(v16, v8, BugCheckParameter3);
    if ( a3 )
      zzzUpdateCursorImage();
    v18 = *((_QWORD *)v8 + 14);
    v19 = (unsigned int)(100 * *(_DWORD *)(v18 + 4LL * v15));
    LODWORD(v17) = (2863311531u * (unsigned __int64)(unsigned int)v19) >> 32;
    v20 = (unsigned int)v19 / 6;
    if ( (int)((unsigned int)v19 / 6) <= v13 )
    {
      v21 = *((_DWORD *)v8 + 23);
      v22 = *((_DWORD *)v8 + 30);
      do
      {
        v23 = v22 + 1;
        v13 -= v20;
        v22 = 0;
        if ( v23 < v21 )
          v22 = v23;
        *((_DWORD *)v8 + 30) = v22;
        v19 = (unsigned int)(100 * *(_DWORD *)(v18 + 4LL * v22));
        LODWORD(v17) = (2863311531u * (unsigned __int64)(unsigned int)v19) >> 32;
        v20 = (unsigned int)v19 / 6;
      }
      while ( (int)((unsigned int)v19 / 6) <= v13 );
    }
    v24 = PtiCurrent(v19, v17);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v24, BugCheckParameter3);
    v25 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v13;
    *(_DWORD *)(W32GetUserSessionState(v27, v26) + 36336) = v25;
    v30 = W32GetUserSessionState(v29, v28);
    v31 = SetDeepDelayableVisRITTimer(*(_QWORD *)(v30 + 36272), v20 - v13);
    *(_QWORD *)(W32GetUserSessionState(v33, v32) + 36272) = v31;
  }
  else
  {
    *(_DWORD *)(W32GetUserSessionState(v7, v6) + 36336) = 0;
  }
}
