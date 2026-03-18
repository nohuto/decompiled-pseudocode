/*
 * XREFs of xxxInternalDoSyncPaint @ 0x1400356D0
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1400356D0 (xxxInternalDoSyncPaint.c)
 *     xxxDoSyncPaint @ 0x1401B0128 (xxxDoSyncPaint.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1400356D0 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1400359F0 (xxxSimpleDoSyncPaint.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140036370 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall xxxInternalDoSyncPaint(struct tagWND *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct tagBWL *v10; // rax
  __int64 v11; // rdx
  struct tagBWL *v12; // r12
  _QWORD *v13; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rdi
  _QWORD *i; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 UserSessionState; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbp
  ULONG_PTR *v34; // rbx
  ULONG_PTR v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  ULONG_PTR *v38; // rax
  ULONG_PTR v39; // rcx
  __int64 v40; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-38h] BYREF

  xxxSimpleDoSyncPaint(a1);
  if ( (a2 & 0x20) != 0 || (a2 & 4) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) != 0 )
  {
    v6 = (struct tagWND *)*((_QWORD *)a1 + 14);
    v9 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 63440);
    if ( v9 )
    {
      *(_QWORD *)(W32GetUserSessionState(v8, v7) + 63440) = 0LL;
    }
    else
    {
      v40 = Win32AllocPoolZInit(296LL, 1819767637LL);
      v9 = v40;
      if ( !v40 )
        return;
      *(_QWORD *)(v40 + 16) = v40 + 280;
    }
    *(_QWORD *)(v9 + 8) = v9 + 32;
    *(_QWORD *)(v9 + 24) = 0LL;
    v10 = InternalBuildHwndList((struct tagBWL *)v9, v6, 2u);
    v12 = v10;
    v13 = (_QWORD *)*((_QWORD *)v10 + 1);
    if ( (unsigned __int64)v13 >= *((_QWORD *)v10 + 2) )
    {
      Win32FreePool(v10);
    }
    else
    {
      *v13 = 1LL;
      CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v13, v11);
      if ( CurrentThreadNonPaged )
        v15 = *CurrentThreadNonPaged;
      else
        v15 = 0LL;
      *((_QWORD *)v12 + 3) = v15;
      *((_QWORD *)v12 + 3) = PtiCurrent();
      v18 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 63248);
      *(_QWORD *)v12 = v18;
      *(_QWORD *)(W32GetUserSessionState(v18, v19) + 63248) = v12;
      v22 = (__int64 *)W32GetCurrentThreadNonPaged(v21, v20);
      if ( v22 )
        v25 = *v22;
      else
        v25 = 0LL;
      v26 = *((_QWORD *)v12 + 4);
      for ( i = (_QWORD *)((char *)v12 + 32); v26 != 1; ++i )
      {
        if ( v26 )
        {
          W32GetCurrentThreadNonPaged(v24, v23);
          v24 = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 19872);
          if ( (unsigned __int64)(unsigned __int16)v26 < *(_QWORD *)(v24 + 8) )
          {
            UserSessionState = W32GetUserSessionState(v24, v23);
            v33 = *(_QWORD *)(UserSessionState + 19888)
                + *(_DWORD *)(W32GetUserSessionState(v32, v31) + 19896) * (unsigned int)(unsigned __int16)v26;
            v34 = (ULONG_PTR *)HMPkheFromPhe(v33);
            LOWORD(v26) = WORD1(v26) & 0x7FFF;
            if ( ((WORD1(v26) & 0x7FFF) == *(_WORD *)(v33 + 26)
               || (_WORD)v26 == 0x7FFF
               || !(_WORD)v26 && PsGetCurrentProcessWow64Process(v24, v23))
              && (*(_BYTE *)(v33 + 25) & 1) == 0
              && *(_BYTE *)(v33 + 24) == 1 )
            {
              v35 = *v34;
              if ( v35 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(v35 + 40) + 31LL) & 0x40) == 0 || v25 == *(_QWORD *)(v35 + 16) )
                {
                  BugCheckParameter3[0] = *(_QWORD *)(v25 + 456);
                  *(_QWORD *)(v25 + 456) = BugCheckParameter3;
                  BugCheckParameter3[1] = v35;
                  HMLockObject(v35);
                  xxxInternalDoSyncPaint(v35, a2);
                  v38 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v37, v36);
                  if ( v38 )
                    v39 = *v38;
                  else
                    v39 = 0LL;
                  Win32HM_UnlockFromThread<0>(v39, BugCheckParameter3);
                }
              }
            }
          }
        }
        v26 = i[1];
      }
      FreeHwndList(v12, v23);
    }
  }
}
