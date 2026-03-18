/*
 * XREFs of xxxDWP_UpdateUIState @ 0x1401CE994
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x140243864 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     BuildHwndList @ 0x140036200 (BuildHwndList.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall xxxDWP_UpdateUIState(struct tagWND **a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 UserSessionState; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r14
  struct tagBWL *v18; // rax
  __int64 v19; // rdx
  struct tagBWL *v20; // rbp
  __int64 *i; // rbx
  __int64 v22; // rax
  struct tagWND *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct tagTHREADINFO *v26; // rax
  int v27; // ecx
  __int64 v28; // rdx
  _DWORD *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // edi
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  v4 = a2 >> 16;
  LOWORD(v6) = a2;
  if ( (a2 & 0xFFF80000) != 0 || (unsigned __int16)a2 > 3u || a3 )
    return 0LL;
  if ( (_WORD)a2 == 3 )
  {
    v29 = *(_DWORD **)(W32GetUserSessionState(a1, a2) + 19872);
    if ( (*v29 & 0x80u) != 0 )
      return 0LL;
    v31 = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 19872);
    if ( (*(_DWORD *)(v31 + 7004) & 0x20) != 0
      || *(int *)(*(_QWORD *)(W32GetUserSessionState(v31, v30) + 19872) + 7004LL) >= 0
      || (GetAppCompatFlags2(1024LL, v32) & 2) != 0 )
    {
      return 0LL;
    }
    LOBYTE(v4) = 3;
    v6 = (unsigned __int16)(((**(_DWORD **)(W32GetUserSessionState(v34, v33) + 19872) & 0x40) != 0) + 1);
    v3 = v6 | 0x30000;
LABEL_10:
    v10 = (unsigned int)(unsigned __int16)v6 - 1;
    if ( (unsigned __int16)v6 == 1 )
    {
      if ( (v4 & 2) != 0 )
        SetOrClrWF(1, (struct tagWND *)a1, 0xB40u, 1);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(1, (struct tagWND *)a1, 0xB80u, 1);
      if ( (v4 & 4) == 0 )
        goto LABEL_16;
      v27 = 1;
    }
    else
    {
      v10 = (unsigned int)(unsigned __int16)v6 - 2;
      if ( (unsigned __int16)v6 != 2 )
      {
        if ( (unsigned __int16)v6 == 3 )
        {
          v35 = **(_DWORD **)(W32GetUserSessionState(v10, v7) + 19872) & 0x40;
          SetOrClrWF(v35 == 0, (struct tagWND *)a1, 0xB80u, 1);
          SetOrClrWF(v35 == 0, (struct tagWND *)a1, 0xB40u, 1);
          v3 = (v35 != 0) + 196609LL;
        }
        goto LABEL_16;
      }
      if ( (v4 & 2) != 0 )
        SetOrClrWF(0, (struct tagWND *)a1, 0xB40u, 1);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(0, (struct tagWND *)a1, 0xB80u, 1);
      if ( (v4 & 4) == 0 )
      {
LABEL_16:
        if ( a1[14] )
        {
          UserSessionState = W32GetUserSessionState(v10, v7);
          if ( PtiCurrent(v14, v13) == *(struct tagTHREADINFO **)(UserSessionState + 68480)
            || (v17 = 0LL, PtiCurrent(v16, v15) == *(struct tagTHREADINFO **)(UserSessionState + 68552)) )
          {
            v17 = 1LL;
          }
          v18 = BuildHwndList(a1[14], 2LL, 0LL, 1);
          v20 = v18;
          if ( v18 )
          {
            for ( i = (__int64 *)((char *)v18 + 32); *i != 1; ++i )
            {
              LOBYTE(v19) = 1;
              v22 = HMValidateHandleNoSecure(*i, v19);
              v23 = (struct tagWND *)v22;
              if ( v22 )
              {
                Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v22);
                if ( v17 )
                  xxxSendNotifyMessage(v23, 0x128u, v3, 0LL, 1);
                else
                  xxxSendMessage(v23, 0x128u);
                v26 = PtiCurrent(v25, v24);
                Win32HM_UnlockFromThread<0>((ULONG_PTR)v26, BugCheckParameter3);
              }
            }
            FreeHwndList(v20, v19);
          }
        }
        return 0LL;
      }
      v27 = 0;
    }
    SetOrClrWF(v27, (struct tagWND *)a1, 0xB04u, 1);
    goto LABEL_16;
  }
  v8 = *(_DWORD **)(W32GetUserSessionState(a1, a2) + 19872);
  if ( (*v8 & 0x80u) != 0
    || (v9 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19872), (*(_DWORD *)(v9 + 7004) & 0x20) != 0)
    || *(int *)(*(_QWORD *)(W32GetUserSessionState(v9, v7) + 19872) + 7004LL) >= 0
    || (GetAppCompatFlags2(1024LL, v7) & 2) != 0 )
  {
    LOWORD(v4) = v4 & 0xFFFC;
  }
  if ( (_WORD)v4 )
    goto LABEL_10;
  return 0LL;
}
