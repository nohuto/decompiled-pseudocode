/*
 * XREFs of xxxMNInvertItem @ 0x14003E628
 * Callers:
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1402E16B0 (xxxHiliteMenuItem.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetpwndNotifypMenuState @ 0x14003F0BC (GetpwndNotifypMenuState.c)
 *     xxxSendMenuSelect @ 0x14003F1D4 (xxxSendMenuSelect.c)
 *     GreGetTextAlign @ 0x14003F490 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x14003F4D8 (GreSetTextAlign.c)
 *     GreSetViewportOrg @ 0x14003F55C (GreSetViewportOrg.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x14003F6E8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x140040014 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x140042B54 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x140042B84 (MNGetpItemFromIndex.c)
 *     MNIspItemValid @ 0x140043458 (MNIspItemValid.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140044D78 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxGetSysMenuPtr @ 0x140047518 (xxxGetSysMenuPtr.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x14004F880 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     GreSetBkMode @ 0x140054F30 (GreSetBkMode.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1401DA770 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     MNPositionSysMenu @ 0x140209594 (MNPositionSysMenu.c)
 *     xxxMNSetTop @ 0x1402C0490 (xxxMNSetTop.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1402EA738 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 *     MNDrawArrow @ 0x1402EA96C (MNDrawArrow.c)
 *     MNEraseBackground @ 0x1402EAB2C (MNEraseBackground.c)
 */

struct tagITEM *__fastcall xxxMNInvertItem(__int64 **a1, struct tagMENU ***a2, int a3, struct tagWND *a4, int a5)
{
  struct tagITEM *v6; // r15
  int v8; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  struct tagWND *v14; // rdi
  struct tagMENU *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // edx
  int v20; // r8d
  HDC DC; // r14
  HFONT *DPIMETRICS; // rax
  __int64 v23; // r8
  int v24; // ecx
  unsigned int v25; // ecx
  __int64 v26; // rdx
  int v27; // ecx
  __int64 v28; // rax
  int v29; // ecx
  struct tagMENU *v30; // rcx
  struct tagTHREADINFO *v31; // rax
  struct tagTHREADINFO *v33; // rax
  __int64 v34; // rcx
  struct tagMENU *v35; // rcx
  __int64 SysMenuPtr; // rax
  struct tagMENU *v37; // rcx
  __int64 v38; // r11
  int v39; // edx
  int v40; // r10d
  __int64 v41; // rax
  struct tagMENU *v42; // rcx
  __int64 DCEx; // rax
  __int64 v44; // rcx
  int v45; // edx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // ecx
  unsigned int v50; // eax
  __int64 v51; // rax
  int DpiDependentMetric; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 UserSessionState; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  struct tagMENU *v59; // rcx
  int v60; // [rsp+38h] [rbp-31h]
  int v61; // [rsp+38h] [rbp-31h]
  int v62; // [rsp+3Ch] [rbp-2Dh]
  int v63; // [rsp+40h] [rbp-29h]
  int v64; // [rsp+44h] [rbp-25h]
  int v65; // [rsp+48h] [rbp-21h]
  struct _POINTL v66; // [rsp+50h] [rbp-19h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v68; // [rsp+68h] [rbp-1h]
  int v69; // [rsp+6Ch] [rbp+3h]
  HFONT v70; // [rsp+70h] [rbp+7h]
  _QWORD v71[4]; // [rsp+78h] [rbp+Fh] BYREF

  v62 = 0;
  v6 = 0LL;
  v8 = a3;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v71);
  BugCheckParameter3[0] = -1LL;
  v65 = 0;
  v66 = 0LL;
  BugCheckParameter3[1] = 0LL;
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(a2) || !a4 )
  {
LABEL_39:
    if ( BugCheckParameter3[0] != -1LL )
    {
      v31 = PtiCurrent(v11, v10);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v31, BugCheckParameter3);
    }
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v71);
    return 0LL;
  }
  if ( **a1 )
  {
    v13 = **a1;
    v14 = *(struct tagWND **)(v13 + 16);
    if ( v14 != a4 )
      Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(BugCheckParameter3, *(_QWORD *)(v13 + 16));
  }
  else
  {
    v14 = a4;
  }
  if ( v8 < 0 )
  {
    if ( **a1 && (unsigned int)(v8 + 4) <= 1 )
      MNDrawArrow(0LL, a1, (unsigned int)v8);
LABEL_35:
    v28 = GetpwndNotifypMenuState(a4);
    xxxSendMenuSelect(v29, (_DWORD)v14, (_DWORD)a2, v8, v28);
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(*((_QWORD *)**a2 + 5) + 40LL) & 1) == 0 )
  {
    SysMenuPtr = xxxGetSysMenuPtr(a4);
    v71[2] = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v71, SysMenuPtr);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(a2, v71) )
    {
      MNPositionSysMenu(a4);
      v62 = 1;
    }
  }
  v15 = (struct tagMENU *)a2[2];
  if ( !v15 )
    v15 = **a2;
  v16 = MNGetpItemFromIndex(v15, (unsigned int)v8, v12);
  v6 = (struct tagITEM *)v16;
  if ( v16
    && ((*(_DWORD *)(*((_QWORD *)**a2 + 5) + 40LL) & 1) != 0 || (*(_BYTE *)(*((_QWORD *)a4 + 5) + 31LL) & 0x20) == 0) )
  {
    if ( (**(_DWORD **)v16 & 0x800) != 0 )
      goto LABEL_34;
    if ( (*(_DWORD *)(*(_QWORD *)v16 + 4LL) & 0x80) != a5 )
    {
      if ( !a5 || !**a1 || (*((_DWORD *)**a2 + 31) & 3) == 0 )
        goto LABEL_15;
      if ( a3 >= *((_DWORD *)**a2 + 29) )
      {
        v37 = (struct tagMENU *)a2[2];
        if ( !v37 )
          v37 = **a2;
        v38 = MNGetpItemFromIndex(v37, *((unsigned int *)v37 + 29), v17);
        v39 = *((_DWORD *)**a2 + 29);
        v40 = *(_DWORD *)(*(_QWORD *)v6 + 68LL)
            + *(_DWORD *)(*(_QWORD *)v6 + 76LL)
            - *((_DWORD *)**a2 + 17)
            - *(_DWORD *)(*(_QWORD *)v38 + 68LL);
        while ( v40 > 0 && v39 < *(_DWORD *)(*((_QWORD *)**a2 + 5) + 44LL) )
        {
          v41 = *(_QWORD *)v38;
          v38 += 96LL;
          v40 -= *(_DWORD *)(v41 + 76);
          ++v39;
        }
      }
      if ( (unsigned int)xxxMNSetTop(a1) )
        xxxInternalUpdateWindow(v14, 1u);
      v42 = (struct tagMENU *)a2[2];
      if ( !v42 )
        v42 = **a2;
      if ( (unsigned __int8)MNIspItemValid(v42, v6) )
      {
LABEL_15:
        v18 = *(_QWORD *)v6;
        v19 = *(_DWORD *)(*(_QWORD *)v6 + 64LL);
        v20 = *(_DWORD *)(*(_QWORD *)v6 + 68LL);
        v68 = v19 + *(_DWORD *)(*(_QWORD *)v6 + 72LL);
        v64 = v19;
        v69 = v20 + *(_DWORD *)(v18 + 76);
        v63 = v20;
        if ( (*(_DWORD *)(*((_QWORD *)**a2 + 5) + 40LL) & 1) != 0 )
        {
          DC = (HDC)_GetDC(v14);
        }
        else
        {
          DCEx = _GetDCEx(v14, 0LL, 65537LL);
          v44 = *((_QWORD *)v14 + 5);
          DC = (HDC)DCEx;
          if ( (*(_BYTE *)(v44 + 30) & 4) != 0 && !v62 )
          {
            v60 = *(_DWORD *)(v44 + 96) - *(_DWORD *)(v44 + 88);
            v45 = *(_DWORD *)(v44 + 288) & 0xF;
            if ( v45 == 3 )
            {
              WindowDpiLastNotify = (*(_DWORD *)(v44 + 288) >> 8) & 0x1FF;
            }
            else if ( (*(_DWORD *)(v44 + 232) & 0x400) != 0 )
            {
              WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v14);
            }
            else if ( !v45
                   && (v47 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 496LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v47 + 8) + 64LL) & 1) != 0 )
            {
              WindowDpiLastNotify = 96;
            }
            else
            {
              WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 464LL) + 272LL);
            }
            v61 = v60 - GetDpiDependentMetric(14LL, WindowDpiLastNotify);
            v48 = *((_QWORD *)v14 + 5);
            v49 = *(_DWORD *)(v48 + 288) & 0xF;
            if ( v49 == 3 )
            {
              v50 = (*(_DWORD *)(v48 + 288) >> 8) & 0x1FF;
            }
            else if ( (*(_DWORD *)(v48 + 232) & 0x400) != 0 )
            {
              v50 = GetWindowDpiLastNotify((__int64)v14);
            }
            else if ( !v49
                   && (v51 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 496LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v51 + 8) + 64LL) & 1) != 0 )
            {
              v50 = 96;
            }
            else
            {
              v50 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 464LL) + 272LL);
            }
            DpiDependentMetric = GetDpiDependentMetric(15LL, v50);
            v54 = v68;
            LODWORD(v70) = DpiDependentMetric;
            if ( (int)v68 > v61
              || (v54 = *((_QWORD *)v14 + 5), v69 > *(_DWORD *)(v54 + 100) - *(_DWORD *)(v54 + 92) - DpiDependentMetric) )
            {
              UserSessionState = W32GetUserSessionState(v54, v53);
              GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
              v65 = 1;
              GreIntersectVisRect(
                DC,
                (unsigned int)(*(_DWORD *)(*((_QWORD *)v14 + 5) + 88LL) + v64),
                (unsigned int)(*(_DWORD *)(*((_QWORD *)v14 + 5) + 92LL) + v63),
                (unsigned int)(*(_DWORD *)(*((_QWORD *)v14 + 5) + 88LL) + v61),
                *(_DWORD *)(*((_QWORD *)v14 + 5) + 100LL) - (_DWORD)v70);
              v58 = W32GetUserSessionState(v57, v56);
              GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v58 + 56968) + 48LL));
            }
          }
        }
        GreGetTextAlign(DC);
        if ( (**(_DWORD **)v6 & 0x2000) != 0 )
          GreSetTextAlign(DC);
        DPIMETRICS = (HFONT *)GetDPIMETRICS(v14);
        v70 = (HFONT)GreSelectFont(DC, *DPIMETRICS);
        GreGetDCPoint(DC, 4u, &v66);
        v24 = *(_DWORD *)(*(_QWORD *)v6 + 4LL);
        if ( a5 )
          v25 = v24 | 0x80;
        else
          v25 = v24 & 0xFFFFFF7F;
        *(_DWORD *)(*(_QWORD *)v6 + 4LL) = v25;
        if ( !v62 && (*(_QWORD *)(*(_QWORD *)v6 + 96LL) != 1LL || (*(_DWORD *)(*((_QWORD *)**a2 + 5) + 40LL) & 1) != 0) )
        {
          if ( (*((_DWORD *)**a2 + 31) & 3) != 0 )
          {
            v59 = (struct tagMENU *)a2[2];
            if ( !v59 )
              v59 = **a2;
            MNGetpItemFromIndex(v59, *((unsigned int *)v59 + 29), v23);
            GreSetViewportOrg(DC);
          }
          if ( *(_QWORD *)(*((_QWORD *)**a2 + 5) + 24LL) && !(unsigned int)MNDrawHilite(a2, v6) )
          {
            v35 = (struct tagMENU *)a2[2];
            if ( !v35 )
              v35 = **a2;
            if ( !(unsigned int)MNIsOwnerDrawItem(v35, v6) )
            {
              GreSetBkMode(DC);
              MNEraseBackground(DC, *(_DWORD *)(*(_QWORD *)v6 + 72LL), *(_DWORD *)(*(_QWORD *)v6 + 76LL));
              GreSetBkMode(DC);
            }
          }
          if ( v14 )
          {
            v26 = *((_QWORD *)v14 + 5);
            v27 = *(_DWORD *)(v26 + 288) & 0xF;
            if ( v27 != 3 && (*(_DWORD *)(v26 + 232) & 0x400) != 0 )
              GetWindowDpiLastNotify((__int64)v14);
          }
          else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
          {
            PsGetCurrentProcessWin32Process(v34);
          }
          xxxDrawMenuItem(DC, 1, (__int64)v14);
        }
        if ( v65 )
          RecalcDCVisRgn(DC);
        GreSelectFont(DC, v70);
        GreSetViewportOrg(DC);
        GreSetTextAlign(DC);
        _ReleaseDC(DC);
        v8 = a3;
LABEL_34:
        if ( !a5 )
          goto LABEL_36;
        goto LABEL_35;
      }
    }
  }
LABEL_36:
  v30 = (struct tagMENU *)a2[2];
  if ( !v30 )
    v30 = **a2;
  if ( !(unsigned __int8)MNIspItemValid(v30, v6) )
    goto LABEL_39;
  if ( BugCheckParameter3[0] != -1LL )
  {
    v33 = PtiCurrent(v11, v10);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v33, BugCheckParameter3);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v71);
  return v6;
}
