/*
 * XREFs of ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x14003DB8C
 * Callers:
 *     xxxHotTrack @ 0x14003DB64 (xxxHotTrack.c)
 * Callees:
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x140034CF8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x14003DA44 (xxxMNRecomputeBarIfNeeded.c)
 *     GreGetTextAlign @ 0x14003F490 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x14003F4D8 (GreSetTextAlign.c)
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 *     MNGetpItemFromIndex @ 0x140042B84 (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x140042E30 (GetDPIMETRICSForDpi.c)
 *     MNIspItemValid @ 0x140043458 (MNIspItemValid.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 */

__int64 __fastcall xxxHotTrackMenu(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // ecx
  HDC DCEx; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 UserSessionState; // rax
  __int64 v21; // rdx
  int v22; // ecx
  unsigned int WindowDpiLastNotify; // eax
  HFONT *DPIMETRICSForDpi; // rax
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct tagTHREADINFO *v29; // rax
  __int64 v31; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v33[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+50h] [rbp-10h]

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 1) == 0 )
    return 0LL;
  v6 = *((_QWORD *)a1 + 21);
  if ( !v6 )
    return 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v33, v6);
  v7 = v34;
  if ( v34 )
  {
    v8 = v34;
  }
  else
  {
    v7 = 0LL;
    v8 = *(_QWORD *)v33[0];
  }
  v9 = MNGetpItemFromIndex(v8, a2, v7);
  if ( !v9 )
  {
LABEL_34:
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v33);
    return 0LL;
  }
  if ( !v10 )
    v10 = *(_QWORD *)v33[0];
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v10);
  xxxMNRecomputeBarIfNeeded((__int64)a1, v33, v11, v12);
  v13 = v34;
  if ( !v34 )
    v13 = *(_QWORD *)v33[0];
  if ( !(unsigned __int8)MNIspItemValid(v13, v9) )
  {
LABEL_33:
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v14);
    goto LABEL_34;
  }
  v15 = *(_DWORD *)(*(_QWORD *)v9 + 4LL);
  if ( a3 )
  {
    if ( (v15 & 1) == 0 )
    {
      v16 = v15 | 0x100;
      goto LABEL_13;
    }
    goto LABEL_33;
  }
  v16 = v15 & 0xFFFFFEFF;
LABEL_13:
  *(_DWORD *)(*(_QWORD *)v9 + 4LL) = v16;
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65539LL);
  UserSessionState = W32GetUserSessionState(v19, v18);
  GreSelectBrush(DCEx, *(_QWORD *)(*(_QWORD *)(UserSessionState + 19872) + 4752LL));
  v21 = *((_QWORD *)a1 + 5);
  v22 = *(_DWORD *)(v21 + 288) & 0xF;
  if ( v22 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v21 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v21 + 232) & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
  }
  else if ( !v22
         && (v31 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v31 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
  }
  DPIMETRICSForDpi = (HFONT *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
  GreSelectFont(DCEx, *DPIMETRICSForDpi);
  GreGetTextAlign(DCEx);
  if ( *(_QWORD *)(*(_QWORD *)v33[0] + 88LL) && (***(_DWORD ***)(*(_QWORD *)v33[0] + 88LL) & 0x2000) != 0 )
    GreSetTextAlign(DCEx);
  v25 = *((_QWORD *)a1 + 5);
  v26 = *(_DWORD *)(v25 + 288) & 0xF;
  if ( v26 != 3 && (*(_DWORD *)(v25 + 232) & 0x400) != 0 )
    GetWindowDpiLastNotify((__int64)a1);
  xxxDrawMenuItem(DCEx, 0, 0LL);
  GreSetTextAlign(DCEx);
  _ReleaseDC(DCEx);
  v29 = PtiCurrent(v28, v27);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v29, BugCheckParameter3);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v33);
  return 1LL;
}
