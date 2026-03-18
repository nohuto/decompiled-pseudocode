/*
 * XREFs of ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14004BFCC
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14004AF3C (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401663E8 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14002BD18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14002C4D4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x14002C6E0 (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140051270 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 */

struct tagWLDBI *__fastcall BuildWindowListWithDpiBoundaryInfo(
        struct tagWND *a1,
        struct tagWND *a2,
        struct tagBWL *a3,
        int *a4)
{
  __int64 v4; // rdi
  unsigned __int8 v5; // si
  char v6; // r12
  int *v7; // r15
  struct tagBWL *v8; // rbx
  struct tagWND *v9; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // r14
  __int64 v23; // rax
  __int64 *v24; // r15
  __int64 v25; // rax
  struct tagWND *v26; // rsi
  __int64 v27; // r9
  __int16 v28; // r8
  char v29; // dl
  __int64 v30; // rax
  _DWORD *v31; // rdi
  struct tagWND *v32; // r9
  __int64 v33; // rax
  const struct tagWND *v34; // r9
  int v35; // eax
  __int64 v36; // rax
  __int128 v37; // [rsp+20h] [rbp-58h] BYREF
  __int128 v38; // [rsp+30h] [rbp-48h]
  char v39; // [rsp+80h] [rbp+8h]
  __int64 v40; // [rsp+90h] [rbp+18h] BYREF
  int *v41; // [rsp+98h] [rbp+20h]

  v41 = a4;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v40 = 0LL;
  v39 = 0;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( a3 )
    goto LABEL_10;
  v13 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 63424);
  if ( v13 )
  {
    *(_QWORD *)(W32GetUserSessionState(v12, v11) + 63424) = 0LL;
  }
  else
  {
    v36 = Win32AllocPoolZInit(296LL, 1819767637LL);
    v13 = v36;
    if ( !v36 )
      goto LABEL_6;
    *(_QWORD *)(v36 + 16) = v36 + 280;
  }
  *(_QWORD *)(v13 + 24) = 0LL;
  *(_QWORD *)(v13 + 8) = v13 + 32;
  v8 = InternalBuildHwndList((struct tagBWL *)v13, a1, 1u);
  v15 = (_QWORD *)*((_QWORD *)v8 + 1);
  if ( (unsigned __int64)v15 >= *((_QWORD *)v8 + 2) )
  {
    Win32FreePool(v8);
    goto LABEL_6;
  }
  *v15 = 1LL;
  *((_QWORD *)v8 + 3) = PtiCurrent(v14);
  *((_QWORD *)v8 + 3) = PtiCurrent(v17);
  v20 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 63232);
  *(_QWORD *)v8 = v20;
  v6 = 1;
  *(_QWORD *)(W32GetUserSessionState(v20, v21) + 63232) = v8;
  if ( v8 )
  {
LABEL_10:
    v22 = (_QWORD *)((char *)v8 + 32);
    v23 = *((_QWORD *)v8 + 4);
    if ( v23 != 1 )
    {
      v24 = &v40;
      do
      {
        LOBYTE(a2) = 1;
        v25 = HMValidateHandleNoSecure(v23, a2);
        v26 = (struct tagWND *)v25;
        if ( v25 && *(_QWORD *)(v25 + 104) && v9 && !(unsigned int)IsTopLevelWindow(v25, a2) )
        {
          v28 = (*(_DWORD *)(*((_QWORD *)v26 + 5) + 288LL) >> 8) & 0x1FF;
          v29 = v28 != ((*(_DWORD *)(*(_QWORD *)(v27 + 40) + 288LL) >> 8) & 0x1FF);
          if ( v26 == a1 )
            v29 |= v28 != ((*(_DWORD *)(*((_QWORD *)v9 + 5) + 288LL) >> 8) & 0x1FF);
          if ( v29 )
          {
            v30 = Win32AllocPoolZInit(32LL, 1819767637LL);
            v31 = (_DWORD *)v30;
            if ( v30 )
            {
              *v24 = v30;
              v24 = (__int64 *)v30;
              *(_QWORD *)v30 = 0LL;
              *(_QWORD *)(v30 + 8) = *(_QWORD *)v26;
              if ( v26 == a1 )
              {
                v32 = v9;
                v39 = 1;
              }
              else
              {
                v32 = (struct tagWND *)*((_QWORD *)v26 + 13);
              }
              *(_DWORD *)(v30 + 28) = v26 == a1;
              v33 = *((_QWORD *)v26 + 5);
              v37 = *(_OWORD *)(*((_QWORD *)v32 + 5) + 104LL);
              v38 = *(_OWORD *)(v33 + 88);
              if ( IsDpiBoundaryBetweenWindows(v26, v32) )
              {
                LogicalToPhysicalInPlaceRectWithSubpixel(v34, (int *)&v37, 0LL);
                PhysicalToLogicalInPlaceRectWithSubpixel(v26, (int *)&v37, 0LL);
                v35 = 1;
              }
              else
              {
                v35 = 0;
              }
              v31[6] = v35;
              v31[4] = v38 - v37;
              v31[5] = DWORD1(v38) - DWORD1(v37);
            }
          }
        }
        v23 = *++v22;
      }
      while ( *v22 != 1LL );
      v4 = v40;
      v7 = v41;
      v5 = v39;
    }
    if ( v6 )
      FreeHwndList(v8);
  }
LABEL_6:
  if ( v7 )
    *v7 = v5;
  return (struct tagWLDBI *)v4;
}
