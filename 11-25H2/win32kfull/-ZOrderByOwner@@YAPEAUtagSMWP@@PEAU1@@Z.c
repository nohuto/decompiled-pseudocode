/*
 * XREFs of ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x140232848
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1400650CC (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     GetLastTopMostWindow @ 0x140065958 (GetLastTopMostWindow.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x140152738 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     SetWindowGroupBand @ 0x140152834 (SetWindowGroupBand.c)
 *     ?GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z @ 0x1401692A4 (-GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1401951B4 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1401954D4 (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x1402326A0 (-CheckTopmost@@YAHPEAUtagCVR@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner(struct tagSMWP *a1)
{
  struct tagSMWP *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int i; // r12d
  __int64 v6; // rcx
  int v7; // esi
  int v8; // eax
  __int128 *v9; // rcx
  int v10; // r15d
  __int64 v11; // r14
  _OWORD *v12; // rcx
  _BOOL8 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // ebp
  struct tagWND *v17; // rbx
  _QWORD *v18; // r14
  __int64 v19; // rdx
  struct tagWND *v20; // r13
  _QWORD *LastTopMostWindow; // rax
  struct tagWND *WindowWorker; // rax
  int v23; // r14d
  __int64 v24; // rax
  struct tagWND *v25; // r15
  struct tagWND *v26; // r14
  struct tagWND *v27; // rbp
  __int64 v28; // rbx
  __int64 v29; // r10
  int v30; // r8d
  int v31; // r8d
  __int128 v33; // [rsp+30h] [rbp-E8h]
  __int128 v34; // [rsp+40h] [rbp-D8h]
  __int128 v35; // [rsp+50h] [rbp-C8h]
  __int128 v36; // [rsp+60h] [rbp-B8h]
  __int128 v37; // [rsp+70h] [rbp-A8h]
  __int128 v38; // [rsp+80h] [rbp-98h]
  __int128 v39; // [rsp+90h] [rbp-88h]
  __int128 v40; // [rsp+A0h] [rbp-78h]
  __int128 v41; // [rsp+B0h] [rbp-68h]
  __int128 v42; // [rsp+C0h] [rbp-58h]
  __int64 v43; // [rsp+D0h] [rbp-48h]
  HWND v44; // [rsp+130h] [rbp+18h] BYREF
  HWND v45; // [rsp+138h] [rbp+20h] BYREF

  v1 = a1;
  if ( FindValidWindowPos(a1) )
  {
    Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v3, v2, v4);
    for ( i = *((_DWORD *)v1 + 7); i; --i )
    {
      v6 = *((_QWORD *)v1 + 5);
      v7 = *((_DWORD *)v1 + 7) - 1;
      if ( *(_QWORD *)v6 )
      {
        v44 = *(HWND *)(v6 + 8);
        v8 = CheckTopmost((struct tagCVR *)v6);
        v9 = (__int128 *)*((_QWORD *)v1 + 5);
        v10 = v8;
        v33 = *v9;
        v34 = v9[1];
        v35 = v9[2];
        v36 = v9[3];
        v37 = v9[4];
        v38 = v9[5];
        v39 = v9[6];
        v40 = v9[7];
        v41 = v9[8];
        v42 = v9[9];
        v43 = *((_QWORD *)v9 + 20);
        if ( v7 )
        {
          v11 = v7;
          memmove(v9, (char *)v9 + 168, 168LL * v7);
          v12 = (_OWORD *)(168LL * v7 + *((_QWORD *)v1 + 5));
          *v12 = v33;
          v12[1] = v34;
          v12[2] = v35;
          v12[3] = v36;
          v12[4] = v37;
          v12[5] = v38;
          v12[6] = v39;
          v12 += 8;
          *(v12 - 1) = v40;
          *v12 = v41;
          v12[1] = v42;
          *((_QWORD *)v12 + 4) = v43;
        }
        else
        {
          v11 = 0LL;
        }
        v1 = ZOrderByOwner2(v1, v7);
        if ( !v1 )
          return v1;
        if ( v10 )
        {
          v16 = 0;
          v17 = (struct tagWND *)_HMObjectFromHandle(v33);
          if ( v10 == 2 )
          {
            v18 = (_QWORD *)(*((_QWORD *)v1 + 5) + 168 * v11);
            v20 = (struct tagWND *)_HMObjectFromHandle(*v18);
            if ( (*(_BYTE *)(*((_QWORD *)v20 + 5) + 24LL) & 8) != 0 && v44 == (HWND)-2LL )
            {
              LastTopMostWindow = (_QWORD *)GetLastTopMostWindow((__int64)v17, v19);
              if ( LastTopMostWindow )
                LastTopMostWindow = (_QWORD *)*LastTopMostWindow;
              v18[1] = LastTopMostWindow;
              if ( LastTopMostWindow == (_QWORD *)*v18 )
              {
                WindowWorker = GetWindowWorker(v20, 3);
                if ( WindowWorker )
                  WindowWorker = *(struct tagWND **)WindowWorker;
                v18[1] = WindowWorker;
              }
            }
          }
          v13 = v10 == 1;
          v14 = *(_QWORD *)(*((_QWORD *)&v39 + 1) + 464LL);
          if ( (*(_BYTE *)(v14 + 808) & 2) != 0
            && (v14 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v17 + 5) + 236LL) - 1), (unsigned int)v14 <= 1) )
          {
            v15 = 0LL;
            v23 = 1;
            LOBYTE(v16) = v10 == 1;
            ++v16;
          }
          else
          {
            v23 = 0;
            v15 = ((unsigned int)v35 >> 9) & 1;
          }
          if ( *(_DWORD *)(*((_QWORD *)v17 + 5) + 236LL) == 1 || v16 == 1 )
            SetTopmostEnum(v17, v13, v15);
          if ( v23
            && *(_DWORD *)(*((_QWORD *)v17 + 5) + 236LL) != v16
            && *((_QWORD *)v17 + 13) == GetDesktopWindow((__int64)v17) )
          {
            SetWindowGroupBand((struct tagWND *)v14, v16, 1);
          }
        }
        v24 = *((int *)v1 + 7);
        v25 = 0LL;
        v45 = 0LL;
        v44 = 0LL;
        if ( (int)v24 <= 0 )
          v26 = 0LL;
        else
          v26 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(168 * v24 + *((_QWORD *)v1 + 5) - 168));
        v27 = 0LL;
        if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v14, v13, v15)
          && (v35 & 0x200000) != 0 )
        {
          v27 = (struct tagWND *)_HMObjectFromHandle(*((_QWORD *)&v33 + 1));
        }
        if ( v7 != *((_DWORD *)v1 + 7) )
        {
          v28 = 168LL * v7;
          do
          {
            v29 = v28 + *((_QWORD *)v1 + 5);
            if ( *(_QWORD *)v29 == (_QWORD)v33 )
            {
              v30 = *(_DWORD *)(v29 + 32) & 4;
              *(_OWORD *)v29 = v33;
              *(_OWORD *)(v29 + 16) = v34;
              *(_OWORD *)(v29 + 32) = v35;
              *(_OWORD *)(v29 + 48) = v36;
              *(_OWORD *)(v29 + 64) = v37;
              *(_OWORD *)(v29 + 80) = v38;
              *(_OWORD *)(v29 + 96) = v39;
              *(_OWORD *)(v29 + 112) = v40;
              *(_OWORD *)(v29 + 128) = v41;
              *(_OWORD *)(v29 + 144) = v42;
              *(_QWORD *)(v29 + 160) = v43;
              v31 = v35 & 0xFFFFFFFB ^ v30;
              *(_DWORD *)(v29 + 32) = v31;
              if ( (v31 & 0x20000) != 0 )
                *(_DWORD *)(v29 + 32) = v31 & 0xFFFDFBFF | 0x400;
            }
            ++v7;
            v28 += 168LL;
            v25 = TrackZorder((struct tagWINDOWPOS *)v29, v25, v27, v26, &v45, &v44);
          }
          while ( v7 != *((_DWORD *)v1 + 7) );
        }
      }
      else
      {
        if ( *((_DWORD *)v1 + 7) != 1 )
          memmove((void *)v6, (const void *)(v6 + 168), 168LL * v7);
        --*((_DWORD *)v1 + 7);
      }
    }
  }
  return v1;
}
