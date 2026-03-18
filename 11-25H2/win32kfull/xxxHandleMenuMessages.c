/*
 * XREFs of xxxHandleMenuMessages @ 0x1400439DC
 * Callers:
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x14022EC60 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     xxxTranslateMessage @ 0x14002187C (xxxTranslateMessage.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14002EA3C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxMNButtonUp @ 0x14003CC8C (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x14003D33C (xxxMNCancel.c)
 *     xxxMNMouseMove @ 0x140044310 (xxxMNMouseMove.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x140044744 (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x14004476C (xxxMNFindWindowFromPoint.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140044D78 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxMNButtonDown @ 0x14016D560 (xxxMNButtonDown.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x140220DBC (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x14026B040 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     UnlockMFMWFPWindow @ 0x14026B510 (UnlockMFMWFPWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140285BFC (safe_cast_fnid_to_PMENUWND.c)
 *     IsPointerPrimary @ 0x14028EAD4 (IsPointerPrimary.c)
 *     GetMenuStateWindow @ 0x1402BF318 (GetMenuStateWindow.c)
 *     LockMFMWFPWindow @ 0x1402BF34C (LockMFMWFPWindow.c)
 *     xxxMNChar @ 0x1402BF514 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1402BFA0C (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402C07A4 (xxxMNSwitchToAlternateMenu.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxHandleMenuMessages(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v7; // r9
  __int64 v9; // r12
  unsigned int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // eax
  _DWORD *v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  struct tagTHREADINFO *v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r12
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned __int16 v29; // bx
  struct tagTHREADINFO *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  int v37; // eax
  unsigned int v38; // edx
  int v39; // eax
  __int64 v40; // r8
  struct tagWND *v41; // rbx
  int v42; // r15d
  __int64 v43; // rdx
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  __int64 v48; // rcx
  int v49; // ebx
  __int64 v50; // rdx
  int v51; // eax
  __int64 MenuStateWindow; // rax
  struct tagWND *v53; // rbx
  __int64 v54; // rdx
  int v55; // eax
  unsigned int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  struct tagWND *v60; // rcx
  unsigned int v61; // [rsp+20h] [rbp-50h] BYREF
  ULONG_PTR v62; // [rsp+28h] [rbp-48h] BYREF
  ULONG_PTR v63; // [rsp+30h] [rbp-40h]
  __int64 v64; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR v66[2]; // [rsp+50h] [rbp-20h] BYREF

  v3 = *a3;
  BugCheckParameter3[1] = 0LL;
  v5 = -1LL;
  v61 = 0;
  BugCheckParameter3[0] = -1LL;
  v7 = *(_QWORD *)v3;
  if ( !*(_QWORD *)(*(_QWORD *)v3 + 40LL) )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_DWORD *)(a1 + 8);
  v11 = *(_DWORD *)(a1 + 16);
  v64 = v9;
  if ( v10 > 0x105 )
  {
    v12 = 515LL;
    if ( v10 <= 0x203 )
    {
      if ( v10 == 515 )
        goto LABEL_102;
      v44 = v10 - 262;
      if ( v44 )
      {
        v45 = v44 - 18;
        if ( !v45 )
          goto LABEL_117;
        v46 = v45 - 232;
        if ( !v46 )
        {
LABEL_7:
          v14 = *(_DWORD *)(a2 + 8);
          if ( (v14 & 0x400) != 0 && (v14 & 8) != 0 && (v14 & 0x80u) == 0 && (v14 & 0x40) == 0 )
          {
            if ( *(_QWORD *)(a2 + 64) )
            {
              v62 = *(_QWORD *)(a2 + 56);
              v63 = v62;
              v48 = *(_QWORD *)(W32GetUserSessionState(v12, -1LL) + 19872);
              v49 = *(_DWORD *)(v48 + 2172);
              HIDWORD(v62) -= v49;
              HIDWORD(v63) += v49;
              v51 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v48, v50) + 19872) + 2168LL);
              LODWORD(v62) = v62 - v51;
              LODWORD(v63) = v51 + v63;
              LODWORD(v64) = (__int16)v9;
              HIDWORD(v64) = SWORD1(v9);
              if ( !(unsigned int)PtInRect(&v62) )
              {
                MenuStateWindow = GetMenuStateWindow(a2);
                if ( MenuStateWindow )
                {
                  *(_DWORD *)(a2 + 8) |= 0x80u;
                  PostMessage(MenuStateWindow, 500, 0, 0);
                }
              }
            }
          }
          xxxMNMouseMove(a3, a2, (unsigned int)v9);
          goto LABEL_9;
        }
        v47 = v46 - 1;
        if ( !v47 )
          goto LABEL_20;
        if ( v47 != 1 )
          return 0LL;
LABEL_52:
        v39 = *(_DWORD *)(a2 + 8);
        if ( (v39 & 8) == 0 )
        {
LABEL_117:
          Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v5);
          return 1LL;
        }
        if ( (v39 & 0x400) != 0 )
        {
          UnlockMFMWFPWindow(a2 + 64);
          v56 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
          *(_DWORD *)(a2 + 8) = v56;
          if ( (v56 & 0x2000) != 0 )
          {
            *(_DWORD *)(a2 + 8) = v56 & 0xFFFFDFF7;
            goto LABEL_117;
          }
        }
        AdjustMouseCoordinates(*(struct tagWND **)(*(_QWORD *)*a3 + 16LL), &v64);
        v40 = v64;
        *(_DWORD *)(a2 + 12) = (__int16)v64;
        *(_DWORD *)(a2 + 16) = SWORD1(v40);
        v41 = (struct tagWND *)xxxMNFindWindowFromPoint(a3, &v61, v40);
        v42 = IsMFMWFPWindow(v41);
        if ( v42 )
          Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(BugCheckParameter3, v41);
        v15 = *(_DWORD **)*a3;
        if ( (*v15 & 2) != 0 )
        {
          v16 = v61;
          if ( !v41 && !v61 )
            goto LABEL_28;
          if ( v41 != (struct tagWND *)0xFFFFFFFFLL )
          {
LABEL_60:
            if ( v42 )
              xxxSendMessage(v41, 0x1EFu);
            else
              *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
            goto LABEL_9;
          }
          if ( (**(_DWORD **)*a3 & 4) != 0 && (**(_DWORD **)*a3 & 0x80u) != 0 )
            goto LABEL_28;
        }
        else
        {
          if ( !v41 && !v61 && (**(_DWORD **)*a3 & 0x200) == 0 )
          {
            Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(
              &v62,
              *(_QWORD *)(*(_QWORD *)*a3 + 16LL));
            xxxSendMessage(*(struct tagWND **)(*(_QWORD *)*a3 + 16LL), 0x1E6u);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)&v62, v57);
            goto LABEL_9;
          }
          **(_DWORD **)*a3 &= ~0x200u;
          if ( v41 != (struct tagWND *)0xFFFFFFFFLL )
          {
            v16 = v61;
            goto LABEL_60;
          }
        }
        xxxMNButtonUp(a3, a2, v61, 0LL);
        goto LABEL_9;
      }
      goto LABEL_100;
    }
    v25 = v10 - 516;
    if ( !v25 )
    {
LABEL_19:
      if ( (**(_DWORD **)*a3 & 0x40) != 0 )
      {
LABEL_20:
        *(_DWORD *)(a2 + 20) = -1;
        AdjustMouseCoordinates(*(struct tagWND **)(*(_QWORD *)*a3 + 16LL), &v64);
        v23 = v64;
        *(_DWORD *)(a2 + 12) = (__int16)v64;
        *(_DWORD *)(a2 + 16) = SWORD1(v23);
        v24 = xxxMNFindWindowFromPoint(a3, &v61, v23);
        if ( (unsigned int)IsMFMWFPWindow(v24) )
          Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(BugCheckParameter3, v24);
        if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
        {
          *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
          *(_DWORD *)(a2 + 72) = v61;
          LockMFMWFPWindow(a2 + 64, v24);
        }
        if ( (*(_DWORD *)(a2 + 8) & 0x500) != 0 )
          *(_DWORD *)(a2 + 76) = ((v11 & 2) != 0) + 1;
        if ( !v24 && !v61 )
          goto LABEL_28;
        if ( (**(_DWORD **)*a3 & 2) != 0 && v24 == 4294967291LL )
        {
          xxxMNSwitchToAlternateMenu(a3, a2);
LABEL_138:
          xxxMNButtonDown(a3, a2, v61, 1LL);
          goto LABEL_139;
        }
        if ( v24 == 0xFFFFFFFFLL )
          goto LABEL_138;
        if ( (unsigned int)IsMFMWFPWindow(v24) )
        {
          xxxSendMessage(v60, 0x1EDu);
LABEL_139:
          if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
          {
            v38 = 516;
LABEL_51:
            xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), v38);
          }
LABEL_9:
          if ( BugCheckParameter3[0] != -1LL )
          {
            v17 = PtiCurrent(v16, (__int64)v15);
            Win32HM_UnlockFromThread<1>((ULONG_PTR)v17, BugCheckParameter3);
          }
          return 1LL;
        }
LABEL_28:
        xxxMNCancel(a2, 0, 0LL, 0LL);
        goto LABEL_9;
      }
      goto LABEL_48;
    }
    v26 = v25 - 1;
    if ( !v26 )
      goto LABEL_111;
    v27 = v26 - 1;
    if ( v27 )
    {
      v28 = v27 - 60;
      if ( v28 && v28 != 4 )
        return 0LL;
      v29 = *(_WORD *)(a1 + 16);
      v30 = PtiCurrent(515LL, -1LL);
      if ( (unsigned int)IsPointerPrimary(v30, v29) && !xxxMNFindWindowFromPoint(a3, &v61, (unsigned int)v9) )
        xxxMNCancel(a2, 0, 0LL, 0LL);
      goto LABEL_12;
    }
LABEL_48:
    *(_DWORD *)(a2 + 20) = -1;
    AdjustMouseCoordinates(*(struct tagWND **)(*(_QWORD *)*a3 + 16LL), &v64);
    if ( xxxMNFindWindowFromPoint(a3, &v61, (unsigned int)v64) )
    {
      if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
        goto LABEL_9;
      v38 = 0;
      goto LABEL_51;
    }
    goto LABEL_73;
  }
  if ( v10 == 261 )
  {
    if ( v11 == 18 || v11 == 121 )
      goto LABEL_117;
    goto LABEL_84;
  }
  v12 = 165LL;
  if ( v10 > 0xA5 )
  {
    v33 = v10 - 166;
    if ( v33 )
    {
      v34 = v33 - 90;
      if ( !v34 )
        goto LABEL_43;
      v35 = v34 - 1;
      if ( !v35 )
        goto LABEL_84;
      v36 = v35 - 1;
      if ( v36 )
      {
        if ( v36 != 2 )
          return 0LL;
LABEL_43:
        v37 = *(_DWORD *)(a2 + 8);
        if ( (v37 & 8) != 0 && v11 != 112 )
        {
          if ( (v37 & 0x80u) != 0 && v11 == 27 )
            *(_DWORD *)(a2 + 8) = v37 | 0x2000;
          return 1LL;
        }
        *(_DWORD *)(a2 + 20) = 1;
        if ( v11 > 0x25 )
        {
          if ( v11 != 38 && v11 != 39 && v11 != 40 && v11 != 112 && v11 != 121 )
            goto LABEL_84;
        }
        else if ( v11 != 37 && v11 != 3 )
        {
          if ( v11 == 9 )
          {
            if ( (**(_DWORD **)*a3 & 1) != 0 && !*(_QWORD *)(*(_QWORD *)*a3 + 56LL) )
              goto LABEL_73;
          }
          else if ( v11 == 13 || v11 == 18 || v11 == 27 )
          {
            goto LABEL_79;
          }
LABEL_84:
          if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
            xxxTranslateMessage(a1, 0);
          goto LABEL_117;
        }
LABEL_79:
        if ( !*(_QWORD *)(*(_QWORD *)*a3 + 56LL) )
        {
          xxxMNKeyDown(a3, a2, v11);
          goto LABEL_117;
        }
LABEL_81:
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&v62, *(_QWORD *)(*(_QWORD *)*a3 + 56LL));
        xxxSendMessage(*(struct tagWND **)(*(_QWORD *)*a3 + 56LL), *(_DWORD *)(a1 + 8));
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)&v62, v43);
        goto LABEL_117;
      }
LABEL_100:
      if ( !*(_QWORD *)(*(_QWORD *)*a3 + 56LL) )
      {
        xxxMNChar(a3, a2, v11);
        goto LABEL_117;
      }
      goto LABEL_81;
    }
    goto LABEL_48;
  }
  if ( v10 == 165 )
  {
LABEL_111:
    if ( (**(_DWORD **)*a3 & 0x40) != 0 )
      goto LABEL_52;
    v55 = *(_DWORD *)(a2 + 8);
    if ( (v55 & 8) != 0 )
    {
      if ( (v55 & 0x100) == 0 )
        xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0);
      goto LABEL_117;
    }
    if ( *(_DWORD *)(a1 + 8) != 517 || (**(_DWORD **)*a3 & 0x800) != 0 )
      return 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(&v62, 0LL, a3, v7);
    v58 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)*a3 + 56LL));
    if ( v58 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v62, *(_QWORD *)(v58 + 8));
      if ( *(_QWORD *)v62 )
      {
        if ( *(int *)(*(_QWORD *)v62 + 80LL) >= 0 && *(_QWORD *)(*(_QWORD *)v62 + 8LL) )
        {
          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v66, *(_QWORD *)(*(_QWORD *)v62 + 8LL));
          xxxSendMessage(*(struct tagWND **)(*(_QWORD *)v62 + 8LL), 0x122u);
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v66, v59);
        }
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v62);
LABEL_12:
    if ( BugCheckParameter3[0] != -1LL )
    {
      v19 = PtiCurrent(v32, v31);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v19, BugCheckParameter3);
    }
    return 0LL;
  }
  v13 = v10 - 160;
  if ( !v13 )
    goto LABEL_7;
  v20 = v13 - 1;
  if ( !v20 )
    goto LABEL_20;
  v21 = v20 - 1;
  if ( !v21 )
    goto LABEL_52;
  v22 = v21 - 1;
  if ( !v22 )
  {
LABEL_102:
    *(_DWORD *)(a2 + 20) = -1;
    AdjustMouseCoordinates(*(struct tagWND **)(*(_QWORD *)*a3 + 16LL), &v64);
    v53 = (struct tagWND *)xxxMNFindWindowFromPoint(a3, &v61, (unsigned int)v64);
    if ( v53 || v61 )
    {
      if ( (**(_DWORD **)*a3 & 2) != 0 && v53 == (struct tagWND *)4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
      }
      else if ( v53 != (struct tagWND *)0xFFFFFFFFLL )
      {
        if ( (unsigned int)IsMFMWFPWindow(v53) )
        {
          Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(BugCheckParameter3, v53);
          xxxSendMessage(v53, 0x1F1u);
          Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v54);
          goto LABEL_117;
        }
        goto LABEL_73;
      }
      xxxMNDoubleClick(a2, a3, v61);
      goto LABEL_117;
    }
LABEL_73:
    xxxMNCancel(a2, 0, 0LL, 0LL);
    goto LABEL_117;
  }
  if ( v22 == 1 )
    goto LABEL_19;
  return 0LL;
}
