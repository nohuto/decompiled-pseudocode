/*
 * XREFs of ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1400487E4
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x140047FCC (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     GetLastTopMostWindow @ 0x140048390 (GetLastTopMostWindow.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x140049100 (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x14004952C (-CheckTopmost@@YAHPEAUtagCVR@@@Z.c)
 *     ?GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z @ 0x14008BC58 (-GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x140179C70 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     SetWindowGroupBand @ 0x14017A7AC (SetWindowGroupBand.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1401C2BA8 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner(struct tagSMWP *a1)
{
  struct tagSMWP *v1; // rbx
  int v2; // r13d
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // ebp
  int v6; // eax
  __int128 *v7; // rcx
  int v8; // r12d
  __int64 v9; // r14
  __int64 v10; // rax
  struct tagWND *v11; // r15
  struct tagWND *v12; // r14
  struct tagWND *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r10
  int v16; // edx
  int v17; // eax
  _OWORD *v19; // rdx
  int v20; // esi
  struct tagWND *v21; // rdi
  int v22; // r14d
  unsigned int v23; // r8d
  struct tagWND *v24; // rcx
  __int64 v25; // r15
  __int64 v26; // r14
  _QWORD *LastTopMostWindow; // rax
  int v28; // r8d
  struct tagWND *WindowWorker; // rax
  int v30; // ecx
  __int128 v31; // [rsp+30h] [rbp-E8h]
  __int128 v32; // [rsp+40h] [rbp-D8h]
  __int128 v33; // [rsp+50h] [rbp-C8h]
  __int128 v34; // [rsp+60h] [rbp-B8h]
  __int128 v35; // [rsp+70h] [rbp-A8h]
  __int128 v36; // [rsp+80h] [rbp-98h]
  __int128 v37; // [rsp+90h] [rbp-88h]
  __int128 v38; // [rsp+A0h] [rbp-78h]
  __int128 v39; // [rsp+B0h] [rbp-68h]
  __int128 v40; // [rsp+C0h] [rbp-58h]
  __int64 v41; // [rsp+D0h] [rbp-48h]
  HWND v42; // [rsp+130h] [rbp+18h] BYREF
  HWND v43; // [rsp+138h] [rbp+20h] BYREF

  v1 = a1;
  if ( FindValidWindowPos(a1) )
  {
    Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline();
    v2 = *((_DWORD *)v1 + 7);
    while ( v2 )
    {
      v3 = *((_QWORD *)v1 + 5);
      --v2;
      v4 = *((int *)v1 + 7);
      v5 = v4 - 1;
      if ( *(_QWORD *)v3 )
      {
        v42 = *(HWND *)(v3 + 8);
        v6 = CheckTopmost((struct tagCVR *)v3);
        v7 = (__int128 *)*((_QWORD *)v1 + 5);
        v8 = v6;
        v9 = v4;
        v31 = *v7;
        v32 = v7[1];
        v33 = v7[2];
        v34 = v7[3];
        v35 = v7[4];
        v36 = v7[5];
        v37 = v7[6];
        v38 = v7[7];
        v39 = v7[8];
        v40 = v7[9];
        v41 = *((_QWORD *)v7 + 20);
        if ( (_DWORD)v4 != 1 )
        {
          memmove(v7, (char *)v7 + 168, 168 * v4 - 168);
          v19 = (_OWORD *)(168 * v4 + *((_QWORD *)v1 + 5) - 168LL);
          *v19 = v31;
          v19[1] = v32;
          v19[2] = v33;
          v19[3] = v34;
          v19[4] = v35;
          v19[5] = v36;
          v19[6] = v37;
          v19 += 8;
          *(v19 - 1) = v38;
          *v19 = v39;
          v19[1] = v40;
          *((_QWORD *)v19 + 4) = v41;
        }
        v1 = ZOrderByOwner2(v1, v5);
        if ( !v1 )
          return v1;
        if ( v8 )
        {
          v20 = 0;
          v21 = (struct tagWND *)_HMObjectFromHandle(v31);
          if ( v8 == 2 )
          {
            v25 = *((_QWORD *)v1 + 5);
            v26 = 168 * v9;
            v43 = (HWND)_HMObjectFromHandle(*(_QWORD *)(v26 + v25 - 168));
            if ( (*(_BYTE *)(*((_QWORD *)v43 + 5) + 24LL) & 8) != 0 && v42 == (HWND)-2LL )
            {
              LastTopMostWindow = (_QWORD *)GetLastTopMostWindow((__int64)v21);
              if ( LastTopMostWindow )
                LastTopMostWindow = (_QWORD *)*LastTopMostWindow;
              *(_QWORD *)(v26 + v25 - 160) = LastTopMostWindow;
              if ( LastTopMostWindow == *(_QWORD **)(v26 + v25 - 168) )
              {
                WindowWorker = GetWindowWorker((struct tagWND *)v43, 3u, v28);
                if ( WindowWorker )
                  WindowWorker = *(struct tagWND **)WindowWorker;
                *(_QWORD *)(v26 + v25 - 160) = WindowWorker;
              }
            }
          }
          if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)&v37 + 1) + 456LL) + 808LL) & 2) != 0
            && ((v30 = *(_DWORD *)(*((_QWORD *)v21 + 5) + 236LL), v30 == 2) || v30 == 1) )
          {
            v23 = 0;
            v22 = 1;
            LOBYTE(v20) = v8 == 1;
            ++v20;
          }
          else
          {
            v22 = 0;
            v23 = ((unsigned int)v33 >> 9) & 1;
          }
          if ( *(_DWORD *)(*((_QWORD *)v21 + 5) + 236LL) == 1 || v20 == 1 )
            SetTopmostEnum(v21, v8 == 1, v23);
          if ( v22
            && *(_DWORD *)(*((_QWORD *)v21 + 5) + 236LL) != v20
            && *((_QWORD *)v21 + 13) == GetDesktopWindow((__int64)v21) )
          {
            SetWindowGroupBand(v24);
          }
        }
        v10 = *((int *)v1 + 7);
        v11 = 0LL;
        v43 = 0LL;
        v42 = 0LL;
        if ( (int)v10 <= 0 )
          v12 = 0LL;
        else
          v12 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(168 * v10 + *((_QWORD *)v1 + 5) - 168));
        v13 = 0LL;
        if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
          && (v33 & 0x200000) != 0 )
        {
          v13 = (struct tagWND *)_HMObjectFromHandle(*((_QWORD *)&v31 + 1));
        }
        if ( v5 != *((_DWORD *)v1 + 7) )
        {
          v14 = 168LL * v5;
          do
          {
            v15 = v14 + *((_QWORD *)v1 + 5);
            if ( *(_QWORD *)v15 == (_QWORD)v31 )
            {
              v16 = *(_DWORD *)(v15 + 32);
              *(_OWORD *)v15 = v31;
              *(_OWORD *)(v15 + 16) = v32;
              *(_OWORD *)(v15 + 32) = v33;
              *(_OWORD *)(v15 + 48) = v34;
              *(_OWORD *)(v15 + 64) = v35;
              *(_OWORD *)(v15 + 80) = v36;
              *(_OWORD *)(v15 + 96) = v37;
              *(_OWORD *)(v15 + 112) = v38;
              *(_OWORD *)(v15 + 128) = v39;
              *(_OWORD *)(v15 + 144) = v40;
              *(_QWORD *)(v15 + 160) = v41;
              v17 = v16 ^ (v33 ^ v16) & 0xFFFFFFFB;
              *(_DWORD *)(v15 + 32) = v17;
              if ( (v17 & 0x20000) != 0 )
                *(_DWORD *)(v15 + 32) = v17 & 0xFFFDFBFF | 0x400;
            }
            ++v5;
            v14 += 168LL;
            v11 = TrackZorder((struct tagWINDOWPOS *)v15, v11, v13, v12, &v43, &v42);
          }
          while ( v5 != *((_DWORD *)v1 + 7) );
        }
      }
      else
      {
        if ( (_DWORD)v4 != 1 )
          memmove((void *)v3, (const void *)(v3 + 168), 168 * v4 - 168);
        --*((_DWORD *)v1 + 7);
      }
    }
  }
  return v1;
}
