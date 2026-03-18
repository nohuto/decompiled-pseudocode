/*
 * XREFs of ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x140064C08
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x140063BF8 (zzzUpdateWindowsAfterModeChange.c)
 *     UpdateMonitorForWindowAndChildren @ 0x140064088 (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x140064724 (xxxInheritWindowMonitor.c)
 * Callees:
 *     BuildHwndList @ 0x140036200 (BuildHwndList.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x140065D0C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x140065E14 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x140065F60 (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 */

struct tagWLDBI *__fastcall BuildWindowListWithDpiBoundaryInfo(
        struct tagWND *a1,
        struct tagWND *a2,
        struct tagBWL *a3,
        int *a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // di
  char v6; // r12
  int *v7; // r15
  struct tagBWL *v8; // rsi
  struct tagWND *v9; // r13
  _QWORD *v11; // r14
  __int64 v12; // rax
  __int64 *v13; // r15
  __int64 v14; // rax
  struct tagWND *v15; // rdi
  __int64 v16; // r9
  __int16 v17; // r8
  __int64 v19; // rax
  _DWORD *v20; // rbx
  struct tagWND *v21; // r9
  __int64 v22; // rax
  __int64 v23; // r9
  int v24; // eax
  __int128 v25; // [rsp+20h] [rbp-58h] BYREF
  __int128 v26; // [rsp+30h] [rbp-48h]
  char v27; // [rsp+80h] [rbp+8h]
  __int64 v28; // [rsp+90h] [rbp+18h] BYREF
  int *v29; // [rsp+98h] [rbp+20h]

  v29 = a4;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v28 = 0LL;
  v27 = 0;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( a3 || (v8 = BuildHwndList(a1, 1LL, 0LL, 1), v6 = 1, v8) )
  {
    v11 = (_QWORD *)((char *)v8 + 32);
    v12 = *((_QWORD *)v8 + 4);
    if ( v12 != 1 )
    {
      v13 = &v28;
      do
      {
        LOBYTE(a2) = 1;
        v14 = HMValidateHandleNoSecure(v12, a2);
        v15 = (struct tagWND *)v14;
        if ( v14 && *(_QWORD *)(v14 + 104) && v9 && !IsTopLevelWindow(v14) )
        {
          v17 = (*(_DWORD *)(*((_QWORD *)v15 + 5) + 288LL) >> 8) & 0x1FF;
          LOBYTE(a2) = v17 != ((*(_DWORD *)(*(_QWORD *)(v16 + 40) + 288LL) >> 8) & 0x1FF);
          if ( v15 == a1 )
            LOBYTE(a2) = (v17 != ((*(_DWORD *)(*((_QWORD *)v9 + 5) + 288LL) >> 8) & 0x1FF)) | (unsigned __int8)a2;
          if ( (_BYTE)a2 )
          {
            v19 = Win32AllocPoolZInit(32LL, 1819767637LL);
            v20 = (_DWORD *)v19;
            if ( v19 )
            {
              *v13 = v19;
              v13 = (__int64 *)v19;
              *(_QWORD *)v19 = 0LL;
              *(_QWORD *)(v19 + 8) = *(_QWORD *)v15;
              if ( v15 == a1 )
              {
                v21 = v9;
                v27 = 1;
              }
              else
              {
                v21 = (struct tagWND *)*((_QWORD *)v15 + 13);
              }
              *(_DWORD *)(v19 + 28) = v15 == a1;
              v22 = *((_QWORD *)v15 + 5);
              v25 = *(_OWORD *)(*((_QWORD *)v21 + 5) + 104LL);
              v26 = *(_OWORD *)(v22 + 88);
              if ( IsDpiBoundaryBetweenWindows(v15, v21) )
              {
                LogicalToPhysicalInPlaceRectWithSubpixel(v23, &v25, 0LL);
                PhysicalToLogicalInPlaceRectWithSubpixel(v15, &v25, 0LL);
                v24 = 1;
              }
              else
              {
                v24 = 0;
              }
              v20[6] = v24;
              v20[4] = v26 - v25;
              v20[5] = DWORD1(v26) - DWORD1(v25);
            }
          }
        }
        v12 = *++v11;
      }
      while ( *v11 != 1LL );
      v4 = v28;
      v7 = v29;
      v5 = v27;
    }
    if ( v6 )
      FreeHwndList(v8, (__int64)a2);
  }
  if ( v7 )
    *v7 = v5;
  return (struct tagWLDBI *)v4;
}
