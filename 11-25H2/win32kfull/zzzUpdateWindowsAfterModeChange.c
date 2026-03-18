/*
 * XREFs of zzzUpdateWindowsAfterModeChange @ 0x140063BF8
 * Callers:
 *     zzzResetSharedDesktops @ 0x1402557F0 (zzzResetSharedDesktops.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetRedirectionBitmap @ 0x14001DFF0 (GetRedirectionBitmap.c)
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     UpdateWindowMonitor @ 0x140033EB0 (UpdateWindowMonitor.c)
 *     BuildHwndList @ 0x140036200 (BuildHwndList.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     IsDesktopWindow @ 0x14004BF20 (IsDesktopWindow.c)
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14005DC60 (DeleteOrSetRedirectionBitmap.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     GetMessageWindow @ 0x140062A3C (GetMessageWindow.c)
 *     HMValidateCatHandleNoSecure @ 0x140064B20 (HMValidateCatHandleNoSecure.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x140064C08 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     GetNewMonitor @ 0x14006568C (GetNewMonitor.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x140065C00 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x140065C34 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1402876B4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     GreGetBitmapDpiScaleValue @ 0x1403329C8 (GreGetBitmapDpiScaleValue.c)
 */

void __fastcall zzzUpdateWindowsAfterModeChange(__int64 a1, __int64 a2)
{
  int v2; // r14d
  int v3; // ebp
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r15
  __int64 *v21; // r13
  ULONG_PTR v22; // rdi
  struct tagMONITOR *NewMonitor; // rbp
  struct tagBWL *v24; // rax
  struct tagBWL *v25; // rsi
  __int64 v26; // rdx
  struct tagWLDBI *v27; // rbx
  _QWORD *i; // r14
  struct tagWND *v29; // rax
  BOOL v30; // ebp
  __int64 v31; // rdx
  HSURF RedirectionBitmap; // rax
  int v33; // ebx
  int v34; // eax
  int v35; // r9d
  HSURF v36; // r14
  int v37; // r12d
  int v38; // esi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // ecx
  __int64 v44; // rax
  __int16 BitmapDpiScaleValue; // ax
  _BYTE v46[16]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v47[32]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v48; // [rsp+60h] [rbp-58h]
  int v49; // [rsp+C0h] [rbp+8h]
  int v50; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v51; // [rsp+D0h] [rbp+18h]
  HSURF v52; // [rsp+D8h] [rbp+20h] BYREF

  v50 = a2;
  v49 = a1;
  v2 = a2;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  ++*(_DWORD *)(UserSessionState + 70600);
  v7 = W32GetUserSessionState(v6, v5);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v7 + 56968) + 48LL));
  v10 = W32GetUserSessionState(v9, v8);
  v11 = *(_QWORD *)(v10 + 19888);
  v14 = v11 + 32LL * *(unsigned int *)(W32GetUserSessionState(v13, v12) + 19816);
  v51 = v14;
  v17 = W32GetUserSessionState(v16, v15);
  v20 = *(_QWORD *)(v10 + 19888);
  v21 = *(__int64 **)(v17 + 19832);
  while ( v20 <= v14 )
  {
    v52 = 0LL;
    if ( *(_BYTE *)(v20 + 24) == 1 )
    {
      v22 = *v21;
      if ( IsTopLevelWindow(*v21) || *(_QWORD *)(v22 + 104) == GetMessageWindow(v22) )
      {
        NewMonitor = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v22 + 40) + 256LL), v18);
        if ( !NewMonitor )
          NewMonitor = (struct tagMONITOR *)GetNewMonitor((struct tagWND *)v22);
        v24 = BuildHwndList((struct tagWND *)v22, 1LL, 0LL, 1);
        v25 = v24;
        if ( v24 )
        {
          v27 = BuildWindowListWithDpiBoundaryInfo((struct tagWND *)v22, *(struct tagWND **)(v22 + 104), v24, 0LL);
          for ( i = (_QWORD *)((char *)v25 + 32); *i != 1LL; ++i )
          {
            v29 = (struct tagWND *)HMValidateCatHandleNoSecure(*i);
            UpdateWindowMonitor(v29, NewMonitor);
          }
          if ( v27 )
          {
            UpdateWindowPositionsForDpiBoundaryChange(v27);
            FreeListFree(v27);
          }
          FreeHwndList(v25, v26);
          v2 = v50;
        }
        v3 = v49;
        v14 = v51;
      }
      v19 = *(_QWORD *)(v22 + 40);
      if ( (*(_BYTE *)(v19 + 27) & 0x20) != 0
        && (*(_BYTE *)(v19 + 26) & 0x20) == 0
        && (v3 || (unsigned int)IsWindowDesktopComposed(v22)) )
      {
        *(_DWORD *)(v22 + 380) &= ~0x20000u;
        v30 = GetRedirectionBitmap(v22, v18) == 0;
        RedirectionBitmap = (HSURF)GetRedirectionBitmap(v22, v31);
        SURFREF::SURFREF((SURFREF *)v47, RedirectionBitmap);
        v33 = v48;
        if ( v48 )
          v33 = *(_DWORD *)(v48 + 116) & 0x2000;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v47);
        if ( v33 )
          v2 = 1;
        v50 = v2;
        RecreateRedirectionBitmap((struct tagWND *)v22, 0, 0, v2, 0, &v52);
        LOBYTE(v34) = IsDesktopWindow(v22);
        v36 = v52;
        v37 = v34;
        v38 = v30;
        if ( !v52 )
        {
LABEL_25:
          if ( !v37 )
            goto LABEL_26;
          goto LABEL_36;
        }
        if ( v34
          || v35 >= 0
          || (v19 = *(_QWORD *)(v22 + 40), v18 = *(unsigned int *)(v19 + 232), (v18 & 2) == 0)
          || !(unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)v22, (HBITMAP)v52) )
        {
          v38 = v30;
          if ( PtiCurrent(v19, v18) )
          {
            if ( *((_QWORD *)PtiCurrent(v40, v39) + 62) )
            {
              if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v42, v41) + 62) + 8LL) + 64LL) & 1) != 0 )
              {
                v43 = *(_DWORD *)(*(_QWORD *)(v22 + 40) + 288LL);
                if ( (v43 & 0xF) == 0 && (v43 & 0x40000000) != 0 )
                {
                  BitmapDpiScaleValue = GreGetBitmapDpiScaleValue(v36);
                  v38 = v30 | (96 * BitmapDpiScaleValue != (unsigned __int16)GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v22 + 40) + 284LL)));
                }
              }
            }
          }
          DeleteOrSetRedirectionBitmap(v22, v36, 1);
          goto LABEL_25;
        }
LABEL_26:
        if ( v38 )
        {
LABEL_36:
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v46);
          zzzLockDisplayAreaAndInvalidateDCCache(v22, 0LL, 0LL);
          if ( v38 )
            xxxInternalInvalidate((struct tagWND *)v22, (HRGN)1, 0x401u);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v46);
        }
        v14 = v51;
      }
    }
    v2 = v50;
    v20 += 32LL;
    v3 = v49;
    v21 += 5;
  }
  v44 = W32GetUserSessionState(v19, v18);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v44 + 56968) + 48LL));
  zzzEndDeferWinEventNotify();
}
