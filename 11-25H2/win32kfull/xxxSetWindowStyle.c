/*
 * XREFs of xxxSetWindowStyle @ 0x14004EEC0
 * Callers:
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1402151B0 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxSetModernAppWindow @ 0x140254280 (xxxSetModernAppWindow.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1402ACA34 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1402ACB30 (xxxSetBridgeWindowChild.c)
 *     xxxSetWindowData @ 0x1402DE828 (xxxSetWindowData.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140023794 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     xxxRedrawWindow @ 0x140030830 (xxxRedrawWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x140034FB4 (IsTopLevelOrLayeredChildWindow.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14004B110 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     NeedsWindowEdge @ 0x14004F5D8 (NeedsWindowEdge.c)
 *     DwmAsyncChildStyleChange @ 0x14004F614 (DwmAsyncChildStyleChange.c)
 *     ?VisWindow@@YAHPEAUtagWND@@K@Z @ 0x14004F6C8 (-VisWindow@@YAHPEAUtagWND@@K@Z.c)
 *     UnsetRedirectedWindow @ 0x140058298 (UnsetRedirectedWindow.c)
 *     ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x1400586A4 (-DecVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     GetStyleWindow @ 0x14005A130 (GetStyleWindow.c)
 *     ?IncVisWindows@@YAXPEAUtagWND@@@Z @ 0x14005A898 (-IncVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     UnsetLayeredWindow @ 0x14005AAD8 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1400B4EC4 (SetRedirectedWindow.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1401C4E98 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     _IsWindowVisible @ 0x1401D72AC (_IsWindowVisible.c)
 *     xxxTurnOffCompositing @ 0x1402062A8 (xxxTurnOffCompositing.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x14020E030 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1402CA070 (-DecComposited@@YAXPEAUtagWND@@@Z.c)
 *     ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1402CA090 (-IncComposited@@YAXPEAUtagWND@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxSetWindowStyle(struct tagWND *a1, int a2, int a3)
{
  int v4; // r12d
  int v5; // r14d
  _DWORD *v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // r13
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r10d
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r11
  char v22; // r14
  int v23; // esi
  int v24; // r10d
  __int64 v25; // r11
  int v26; // ebx
  __int64 v27; // rax
  int v28; // ecx
  unsigned int v29; // ecx
  int v30; // r15d
  unsigned int v31; // r10d
  __int64 v32; // rdx
  char v33; // r10
  _BYTE *v34; // r11
  char v35; // r10
  __int64 v36; // rdx
  void *v37; // rax
  unsigned int v39; // ebx
  int v40; // ecx
  int v41; // edx
  __int64 v42; // r15
  int v43; // ebx
  int v44; // esi
  unsigned int v45; // ecx
  unsigned int v46; // edx
  int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // [rsp+80h] [rbp+40h]
  unsigned int v52; // [rsp+84h] [rbp+44h]
  int v53; // [rsp+90h] [rbp+50h]
  unsigned int v54; // [rsp+90h] [rbp+50h]
  unsigned int v55; // [rsp+90h] [rbp+50h]

  v4 = 0;
  v5 = 0;
  v7 = (_DWORD *)*((_QWORD *)a1 + 5);
  v53 = (v7[7] >> 26) & 4 | (v7[6] >> 22) & 8;
  if ( a2 == -16 )
  {
    v8 = v7[7];
    if ( (v7[6] & 0x800) != 0 )
      v8 |= 0x10000000u;
  }
  else
  {
    v8 = v7[6] & (((~(unsigned __int8)v7[58] & 2) << 18) | 0xA7777FF);
  }
  xxxSendMessage(a1, 0x7Cu);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    v50 = v8;
    v11 = IsTrayWindow(a1, 1LL);
    if ( a2 == -16 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      v15 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v14 = -*(_QWORD *)CurrentProcessWin32Process;
        v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        v15 = v13 & CurrentProcessWin32Process;
      }
      if ( v15 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL)
        || *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 19872) + 870LL) != *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL)
                                                                                                 + 2LL) )
      {
        v16 = a3;
        v17 = v8;
      }
      else
      {
        v17 = v8;
        v16 = a3;
        if ( (v8 & 0x20) != 0 && (a3 & 0x20) == 0 )
        {
          v47 = 5;
LABEL_61:
          UserSetLastError(v47);
          return 0LL;
        }
      }
      v18 = *((_QWORD *)a1 + 3);
      v19 = 0LL;
      if ( v18 )
      {
        v20 = *(_QWORD *)(v18 + 8);
        if ( v20 )
          v19 = *(_QWORD *)(v20 + 24);
      }
      if ( *((_QWORD *)a1 + 13) == v19 )
        v16 |= 0x4000000u;
      if ( ((v17 ^ v16) & 0x6000000) != 0 )
        zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)a1, 1LL, 0LL);
      v21 = *((_QWORD *)a1 + 5);
      v22 = *(_BYTE *)(v21 + 31) & 0xC0;
      v23 = VisWindow(a1, *(_DWORD *)(v21 + 28));
      v26 = v11 && (unsigned int)IsWindowVisible(a1);
      *(_DWORD *)(v25 + 28) = v24;
      v27 = *((_QWORD *)a1 + 5);
      v28 = *(_DWORD *)(v27 + 24);
      if ( (*(_DWORD *)(v27 + 28) & 0x10000000) != 0 )
        v29 = v28 | 0x800;
      else
        v29 = v28 & 0xFFFFF7FF;
      *(_DWORD *)(v27 + 24) = v29;
      v30 = VisWindow(a1, *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL));
      v32 = *((_QWORD *)a1 + 5);
      v54 = *(_BYTE *)(v32 + 27) & 2 | v53 & 0xFFFFFFFC | (v31 >> 28) & 1;
      if ( (v22 == 64) != ((*(_BYTE *)(v32 + 31) & 0xC0) == 64) )
      {
        *(_QWORD *)(v32 + 320) = 0LL;
        *(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) &= ~1u;
        UnlockWndMenuWorker(a1, 0);
      }
      funcs_14004F0CA[v54](a1);
      if ( v23 != v30 )
      {
        if ( v23 )
        {
          DecVisWindows(a1);
        }
        else
        {
          IncVisWindows(a1);
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
            ComposeWindowIfNeeded(a1);
        }
      }
      tagWND::ComputeDominantState(a1);
      if ( IsTrayWindow(a1, 1LL) && v26 != (unsigned int)IsWindowVisible(a1) )
      {
        v48 = 22;
        if ( !v26 )
          v48 = 17;
        PostIAMShellHookMessage(v48, *(_QWORD *)a1);
      }
      goto LABEL_25;
    }
    if ( (GetAppCompatFlags2(1024LL, v9) & 4) != 0 )
      v39 = a3 & 0x777FF;
    else
      v39 = a3 & 0xA7F77FF;
    v40 = v50 & 8;
    v52 = v39;
    if ( v40 != (v39 & 8) )
    {
      v39 = v40 | v39 & 0xFFFFFFF7;
      v52 = v39;
    }
    v41 = v39 & 0x80000;
    if ( (((~(unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) << 18) & *(_DWORD *)(*((_QWORD *)a1 + 5)
                                                                                               + 24LL)) != 0 )
    {
      if ( v41 )
      {
LABEL_41:
        v42 = *((_QWORD *)a1 + 5);
        if ( ((*(_DWORD *)(v42 + 24) & 0x200000) != 0) != ((v39 >> 21) & 1)
          || (*(_DWORD *)(v42 + 24) & 0x200000) != 0 && (v39 & 0x2000000) != 0 )
        {
          v47 = 87;
          goto LABEL_61;
        }
        v43 = v39 & 0x2000000;
        v44 = *(_DWORD *)(v42 + 24) & 0x2000000;
        if ( !v44 && v43 && GetStyleWindow(*((_QWORD *)a1 + 13), 2818LL) )
          return 0LL;
        v55 = (*(_DWORD *)(v42 + 28) >> 28) & 1 | v53 & 0xFFFFFFFC | (v43 != 0 ? 2 : 0);
        if ( v44 )
        {
          if ( !v43 )
          {
            UnsetRedirectedWindow(a1);
            SetOrClrWF(0, a1, 0xB02u, 0);
          }
        }
        else if ( v43 )
        {
          if ( (int)SetRedirectedWindow(a1) < 0 )
            return 0LL;
          SetOrClrWF(1, a1, 0xB02u, 0);
          v4 = 1;
        }
        funcs_14004F0CA[v55](a1);
        if ( v4 )
          xxxTurnOffCompositing(a1, 1LL);
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) = v52 & 0xFDF7FFFF | *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) & 0xF7888800;
        v45 = v52;
        v46 = v50;
        if ( ((v50 ^ v52) & 0x407000) != 0 )
        {
          xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
          v45 = v52;
          v46 = v50;
        }
        if ( ((v46 ^ v45) & 0x80000) != 0 && v5 )
          xxxRedrawWindow(a1, 0LL, 0LL, 1157);
LABEL_25:
        if ( (unsigned int)NeedsWindowEdge(
                             *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
                             *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL),
                             1LL) )
          v35 = v33 | 1;
        else
          v35 = v33 & 0xFE;
        *v34 = v35;
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          DirtyVisRgnTrackers(a1, v36);
          v37 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildStyleChange(v37);
          WindowMargins::CheckForChanges(a1, 1LL);
        }
        if ( v11 == IsTrayWindow(a1, 1LL) )
          goto LABEL_30;
        if ( v11 )
        {
          v49 = 18;
        }
        else
        {
          if ( !(unsigned int)IsWindowVisible(a1) )
          {
LABEL_30:
            xxxSendMessage(a1, 0x7Du);
            return v50;
          }
          v49 = 17;
        }
        PostIAMShellHookMessage(v49, *(_QWORD *)a1);
        goto LABEL_30;
      }
      if ( (unsigned int)IsTopLevelOrLayeredChildWindow((__int64)a1) && !IsTopLevelWindow((__int64)a1) )
        v5 = 1;
      UnsetLayeredWindow(a1);
    }
    else
    {
      if ( !v41 )
        goto LABEL_41;
      if ( (int)xxxSetLayeredWindow(a1) < 0 )
        return 0LL;
    }
    v39 = v52;
    goto LABEL_41;
  }
  return v8;
}
