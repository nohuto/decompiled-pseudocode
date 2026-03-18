/*
 * XREFs of xxxMenuDraw @ 0x140043508
 * Callers:
 *     xxxPaintMenuBar @ 0x14003F7B0 (xxxPaintMenuBar.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x14020258C (xxxMenuBarDraw.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1402BEEBC (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140022DA4 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreGetTextAlign @ 0x14003F490 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x14003F4D8 (GreSetTextAlign.c)
 *     GreSetViewportOrg @ 0x14003F55C (GreSetViewportOrg.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x14003F6E8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     xxxSendUAHInitMenuMessage @ 0x14003FA78 (xxxSendUAHInitMenuMessage.c)
 *     xxxSendUAHMenuMessage @ 0x14003FB0C (xxxSendUAHMenuMessage.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x140040284 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 *     MNGetpItemFromIndex @ 0x140042B84 (MNGetpItemFromIndex.c)
 *     MNIspItemValid @ 0x140043458 (MNIspItemValid.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x140048F9C (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140050410 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     GreSetBkMode @ 0x140054F30 (GreSetBkMode.c)
 *     DrawEdge @ 0x1400552A8 (DrawEdge.c)
 *     ?CalcbfExtra@@YAIXZ @ 0x14021FD48 (-CalcbfExtra@@YAIXZ.c)
 */

__int64 __fastcall xxxMenuDraw(HDC a1, struct tagMENU *a2, const struct tagWND *a3)
{
  char v3; // r14
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rdx
  int v9; // r13d
  int v10; // r15d
  __int64 v11; // rcx
  HFONT *DPIMETRICS; // rax
  int TextAlign; // eax
  _DWORD **v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagITEM *v22; // r14
  unsigned int v23; // r15d
  unsigned int v24; // r12d
  int v25; // r13d
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rax
  unsigned int WindowDpiLastNotify; // eax
  __int64 v32; // rcx
  struct tagTHREADINFO *v33; // rax
  __int64 result; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct tagTHREADINFO *v37; // rax
  bool v38; // r15
  __int64 v39; // rax
  int v40; // ecx
  int *v41; // r8
  int v42; // ecx
  __int64 CurrentProcessWin32Process; // rax
  struct _POINTL v44; // [rsp+30h] [rbp-49h] BYREF
  __int128 v45; // [rsp+38h] [rbp-41h]
  int v46; // [rsp+48h] [rbp-31h]
  int v47; // [rsp+4Ch] [rbp-2Dh]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v49; // [rsp+60h] [rbp-19h] BYREF
  int v50; // [rsp+68h] [rbp-11h]
  int v51; // [rsp+6Ch] [rbp-Dh]
  struct tagTHREADINFO *v52; // [rsp+78h] [rbp-1h]
  HFONT v53; // [rsp+80h] [rbp+7h]
  struct tagMENU **v54[9]; // [rsp+88h] [rbp+Fh] BYREF
  int v55; // [rsp+E8h] [rbp+6Fh]

  v3 = 0;
  v45 = 0LL;
  v7 = PtiCurrent((__int64)a1, (__int64)a2);
  v8 = *((_QWORD *)a2 + 5);
  v9 = 0;
  v52 = v7;
  v44 = 0LL;
  v55 = 0;
  v10 = *(_DWORD *)(v8 + 40) & 1;
  v46 = v10;
  if ( !IsInsideUserApiHook(v11, v8) || !a3 )
    a3 = (const struct tagWND *)*((_QWORD *)a2 + 10);
  GreGetDCPoint(a1, 4u, &v44);
  DPIMETRICS = (HFONT *)GetDPIMETRICS(a3);
  v53 = (HFONT)GreSelectFont(a1, *DPIMETRICS);
  TextAlign = GreGetTextAlign(a1);
  v14 = (_DWORD **)*((_QWORD *)a2 + 11);
  v47 = TextAlign;
  if ( v14 && (**v14 & 0x2000) != 0 )
    GreSetTextAlign(a1, TextAlign | 0x100);
  CalcbfExtra();
  v17 = PtiCurrent(v16, v15);
  Win32HM_LockIntoThread<1>(v17, a3, BugCheckParameter3);
  v19 = *((_QWORD *)a2 + 5);
  if ( *(_QWORD *)(v19 + 24) )
    goto LABEL_5;
  if ( IsInsideUserApiHook(v19, v18) && v10 )
  {
    v38 = 0;
    if ( a3 )
    {
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(&v49, (__int64)a2);
      v3 = 1;
      if ( (unsigned int)xxxSendUAHInitMenuMessage(a3, (__int64)&v49) )
        v38 = 1;
    }
    if ( (v3 & 1) != 0 )
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v49);
    if ( v38 )
    {
      xxxSendUAHMenuMessage(a3, 0x91u);
LABEL_5:
      v9 = GreSetBkMode(a1);
      v55 = v9;
      goto LABEL_6;
    }
    a3 = (const struct tagWND *)*((_QWORD *)a2 + 10);
    Win32HM_ExchangeThreadLock<1>(a3, BugCheckParameter3);
  }
LABEL_6:
  if ( (*((_DWORD *)a2 + 31) & 3) != 0 )
  {
    v39 = MNGetpItemFromIndex((__int64)a2, *((_DWORD *)a2 + 29));
    v22 = (struct tagITEM *)v39;
    if ( v39 )
      LODWORD(v39) = *(_DWORD *)(*(_QWORD *)v39 + 68LL);
    GreSetViewportOrg(a1, v44.x, v44.y - v39);
    v23 = *((_DWORD *)a2 + 29);
  }
  else
  {
    v22 = (struct tagITEM *)*((_QWORD *)a2 + 11);
    v23 = 0;
  }
  v24 = 0;
  if ( v23 < *(_DWORD *)(*((_QWORD *)a2 + 5) + 44LL) )
  {
    v25 = v46;
    v20 = 1024LL;
    while ( 1 )
    {
      if ( !v22 )
      {
LABEL_25:
        v9 = v55;
        goto LABEL_26;
      }
      v26 = **(_DWORD **)v22;
      if ( (v26 & 0x20) != 0 && v25 )
      {
        if ( (v26 & 0x2000) != 0 && v23 )
          v40 = *(_DWORD *)(*((_QWORD *)v22 - 12) + 64LL);
        else
          v40 = *(_DWORD *)(*(_QWORD *)v22 + 64LL);
        *(_QWORD *)&v45 = (unsigned int)(v40 - 3);
        DWORD2(v45) = v40 - 1;
        HIDWORD(v45) = *((_DWORD *)a2 + 17);
        DrawEdge(a1);
      }
      v27 = **(_DWORD **)v22;
      if ( (v27 & 0x800) == 0 || (v27 & 0x100) != 0 && *((_WORD *)v52 + 336) >= 0x400u )
        break;
      if ( (unsigned int)MNIsUAHMenu(a2) )
        break;
      v41 = *(int **)v22;
      v42 = *(_DWORD *)(*(_QWORD *)v22 + 64LL);
      HIDWORD(v49) = (*(_DWORD *)(*(_QWORD *)v22 + 76LL) >> 1) - 1 + *(_DWORD *)(*(_QWORD *)v22 + 68LL);
      LODWORD(v49) = v42 + 1;
      v50 = v41[18] - 1 + v42;
      v51 = HIDWORD(v49) + 2;
      DrawEdge(a1);
      MNDrawInsertionBar(a1, v22);
LABEL_23:
      if ( (*((_DWORD *)a2 + 31) & 3) != 0 )
      {
        v24 += *(_DWORD *)(*(_QWORD *)v22 + 76LL);
        if ( v24 > *((_DWORD *)a2 + 17) )
          goto LABEL_25;
      }
LABEL_24:
      v22 = (struct tagITEM *)MNGetpItemFromIndex((__int64)a2, ++v23);
      v20 = 1024LL;
      if ( v23 >= *(_DWORD *)(*((_QWORD *)a2 + 5) + 44LL) )
        goto LABEL_25;
    }
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v54, (__int64)a2);
    if ( a3 )
    {
      v28 = *((_QWORD *)a3 + 5);
      v29 = *(_DWORD *)(v28 + 288) & 0xF;
      if ( v29 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v28 + 288) >> 8) & 0x1FF;
      }
      else
      {
        if ( (*(_DWORD *)(v28 + 232) & 0x400) == 0 )
        {
          if ( v29
            || (v30 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 496LL)) == 0
            || (*(_DWORD *)(**(_QWORD **)(v30 + 8) + 64LL) & 1) == 0 )
          {
            WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 464LL) + 272LL);
            goto LABEL_22;
          }
          goto LABEL_21;
        }
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a3);
      }
    }
    else
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
      {
LABEL_21:
        WindowDpiLastNotify = 96;
        goto LABEL_22;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      WindowDpiLastNotify = *(unsigned __int16 *)(CurrentProcessWin32Process + 272);
    }
LABEL_22:
    xxxDrawMenuItem(a1, WindowDpiLastNotify, v54, (__int64)v22, 0, a3);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v54);
    if ( !MNIspItemValid((__int64)a2, (__int64)v22) )
      goto LABEL_24;
    goto LABEL_23;
  }
LABEL_26:
  v33 = PtiCurrent(v21, v20);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v33, BugCheckParameter3);
  BugCheckParameter3[1] = 0LL;
  BugCheckParameter3[0] = -1LL;
  if ( v9 )
    GreSetBkMode(a1);
  GreSetViewportOrg(a1, v44.x, v44.y);
  GreSetTextAlign(a1, v47);
  result = GreSelectFont(a1, v53);
  if ( BugCheckParameter3[0] != -1LL )
  {
    v37 = PtiCurrent(v36, v35);
    return Win32HM_UnlockFromThread<1>((ULONG_PTR)v37, BugCheckParameter3);
  }
  return result;
}
