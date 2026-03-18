/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14003364C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     GetRect @ 0x140052B80 (GetRect.c)
 *     GetStyleWindow @ 0x14005A130 (GetStyleWindow.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x140064EE4 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     GetNewMonitor @ 0x14006568C (GetNewMonitor.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x140065D0C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x140065E14 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x140152738 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x140155710 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1401951B4 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1401A924C (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     _FChildVisible @ 0x1401AD490 (_FChildVisible.c)
 *     ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401CB264 (-s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x1401D9D38 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z.c)
 *     DwmAsyncNotifyWindowMoveReason @ 0x14021E78C (DwmAsyncNotifyWindowMoveReason.c)
 *     ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x1402326A0 (-CheckTopmost@@YAHPEAUtagCVR@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x140233760 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x1402340C4 (-xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z.c)
 *     CheckFullScreen @ 0x140236038 (CheckFullScreen.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14024092C (xxxAppAdjustDpiCandidateRect.c)
 *     ?SendNotifications@DwmNotifyMoveReason@@SAXPEAUtagWND@@@Z @ 0x140271FD4 (-SendNotifications@DwmNotifyMoveReason@@SAXPEAUtagWND@@@Z.c)
 *     Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline @ 0x140272100 (Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCalcValidRects(struct tagSMWP *a1)
{
  unsigned int v1; // r14d
  struct tagWINDOWPOS *ValidWindowPos; // rax
  const struct tagWND *v5; // r13
  __int64 v6; // rdx
  __int128 *v7; // rdi
  int v8; // eax
  __int64 v9; // rsi
  int v10; // ebx
  __int64 v11; // r12
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // r13d
  __int64 DesktopWindow; // rax
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // r15d
  __int64 v24; // rcx
  int v25; // r10d
  _DWORD *v26; // rcx
  int v27; // r9d
  int v28; // r12d
  __int64 v29; // rcx
  int v30; // eax
  char v31; // al
  __int64 UserSessionState; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _DWORD *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  __int64 IsEnabledDeviceUsageNoInline; // rcx
  __int64 v41; // rbx
  void *v42; // rax
  int v43; // ebx
  unsigned int v44; // ebx
  int v45; // r15d
  int v46; // r10d
  int v47; // r9d
  __int64 v48; // rax
  __int64 v49; // rbx
  __int16 v50; // r15
  LONG v51; // edx
  int v52; // ecx
  __int64 NewMonitor; // rax
  int v54; // ecx
  __int64 v55; // rdx
  __int128 v56; // xmm1
  __int64 v57; // xmm0_8
  unsigned int v58; // r12d
  unsigned int v59; // r13d
  int v60; // ebx
  unsigned int v61; // r15d
  __int64 v62; // rdx
  __int64 v63; // rdx
  int v64; // eax
  __int64 v65; // rdx
  int v66; // ecx
  __int64 v67; // r12
  int v68; // r9d
  int v69; // edx
  int v70; // r11d
  int v71; // r9d
  int v72; // r8d
  int v73; // r10d
  int v74; // ebx
  char v75; // r12
  int v76; // eax
  __int64 v77; // rdx
  int v78; // r8d
  int v79; // edx
  int v80; // r8d
  int v81; // r8d
  int v82; // eax
  int v83; // r8d
  int v84; // edx
  int v85; // r9d
  int v86; // r10d
  __int64 v87; // rdx
  int v88; // [rsp+58h] [rbp-B0h]
  int v89; // [rsp+5Ch] [rbp-ACh]
  int v90; // [rsp+60h] [rbp-A8h]
  int v91; // [rsp+64h] [rbp-A4h]
  int v92; // [rsp+68h] [rbp-A0h]
  int v93; // [rsp+6Ch] [rbp-9Ch]
  int v94; // [rsp+70h] [rbp-98h]
  int v95; // [rsp+74h] [rbp-94h]
  const struct tagWND *v96; // [rsp+78h] [rbp-90h]
  int v97; // [rsp+80h] [rbp-88h]
  unsigned int v98; // [rsp+84h] [rbp-84h]
  __int128 v99; // [rsp+88h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+98h] [rbp-70h] BYREF
  ULONG_PTR v101[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v102; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v103; // [rsp+C8h] [rbp-40h]
  __int64 v104; // [rsp+D8h] [rbp-30h]
  __int128 v105; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v106; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v107; // [rsp+100h] [rbp-8h] BYREF
  __int128 *v108; // [rsp+110h] [rbp+8h]
  struct tagRECT v109; // [rsp+118h] [rbp+10h] BYREF

  v1 = 0;
  v108 = 0LL;
  v105 = 0LL;
  v94 = 0;
  v106 = 0LL;
  v89 = 0;
  v107 = 0LL;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0LL;
  v5 = *(const struct tagWND **)(_HMObjectFromHandle(*(_QWORD *)ValidWindowPos) + 104);
  v96 = v5;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v101, (__int64)v5);
  v7 = (__int128 *)*((_QWORD *)a1 + 5);
  v88 = *((_DWORD *)a1 + 7) - 1;
  v93 = 1;
  if ( v88 < 0 )
  {
LABEL_152:
    v1 = 1;
    goto LABEL_153;
  }
  v8 = *((_DWORD *)a1 + 7) - 1;
  while ( !*(_QWORD *)v7 )
  {
LABEL_151:
    v7 = (__int128 *)((char *)v7 + 168);
    v88 = --v8;
    if ( v8 < 0 )
      goto LABEL_152;
  }
  LOBYTE(v6) = 1;
  v9 = HMValidateHandleNoSecure(*(_QWORD *)v7, v6);
  if ( !v9 || !(unsigned int)IsStillWindowC(*((HWND *)v7 + 1), v6) )
  {
    *(_QWORD *)v7 = 0LL;
    *((_DWORD *)v7 + 8) = 6159;
    goto LABEL_150;
  }
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v9);
  xxxProcessPreemptiveDpiChange((struct tagWND *)v9, (struct tagCVR *)v7);
  v10 = *((_DWORD *)v7 + 8);
  if ( (v10 & 0x400) == 0 )
  {
    v11 = *((_QWORD *)v7 + 1);
    xxxSendPosMessage((struct tagWND *)v9, 0x46u, (struct tagWINDOWPOS *)v7);
    v13 = *((_DWORD *)v7 + 8) | v10 & 0x1FC0000;
    *((_DWORD *)v7 + 8) = v13;
    LOBYTE(v14) = v13;
    if ( (v10 & 0x40) != 0 && (v13 & 0x40) == 0 )
    {
      NotifyShell::CuratedWindowHidden(v9, v12);
      v14 = *((_DWORD *)v7 + 8);
    }
    v15 = *((unsigned int *)v7 + 39);
    if ( (v15 & 0x20) == 0 && (v14 & 3) != 3 )
    {
      if ( (v15 & 0x200) == 0 )
        *((_QWORD *)v7 + 16) = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 256LL);
      v15 = (unsigned int)v15 | 0x20;
      *((_DWORD *)v7 + 39) = v15;
    }
    if ( (v14 & 4) == 0 && ((v10 & 4) != 0 || *((_WORD *)v7 + 4) != (_WORD)v11) )
    {
      if ( !(unsigned int)IsStillWindowC(*((HWND *)v7 + 1), v15) )
      {
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v16);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v101, v87);
        return 0LL;
      }
      if ( *((_WORD *)v7 + 4) != (_WORD)v11 || *((_QWORD *)v7 + 1) >= 0xFFFFFFFFFFFFFFFEuLL )
      {
        v17 = CheckTopmost((struct tagCVR *)v7);
        if ( v17 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(v9 + 40) + 236LL) == 1 )
            SetTopmostEnum((struct tagWND *)v9, v17 == 1, (*((_DWORD *)v7 + 8) >> 9) & 1);
        }
      }
    }
  }
  CRecalcProp::s_xxxOnWindowBecomingVisible((struct tagWND *)v9, (struct tagWINDOWPOS *)v7);
  *((_DWORD *)v7 + 39) = *((_DWORD *)v7 + 39) & 0xFFFFFFDF ^ (*((_DWORD *)v7 + 39) & 0x20 | ((v7[2] & 3) != 3 ? 0x20 : 0));
  v99 = *(_OWORD *)(*((_QWORD *)v5 + 5) + 104LL);
  if ( IsChildWindowDpiBoundary((const struct tagWND *)v9) )
  {
    LogicalToPhysicalInPlaceRectWithSubpixel(v5, (int *)&v99, 0LL);
    PhysicalToLogicalInPlaceRectWithSubpixel((const struct tagWND *)v9, (int *)&v99, 0LL);
  }
  v18 = *(_QWORD *)(v9 + 40);
  v19 = *(_DWORD *)(v18 + 88);
  v98 = v19;
  v95 = *(_DWORD *)(v18 + 92);
  *((_DWORD *)v7 + 20) = v19;
  *((_DWORD *)v7 + 21) = v95;
  DesktopWindow = GetDesktopWindow(v9);
  v23 = DWORD2(v99);
  v90 = DWORD1(v99);
  v92 = v99;
  if ( v96 == (const struct tagWND *)DesktopWindow )
  {
    v25 = v89;
  }
  else
  {
    v19 -= v99;
    v22 -= DWORD1(v99);
    v98 = v19;
    v95 = v22;
    if ( (*(_BYTE *)(*((_QWORD *)v96 + 5) + 26LL) & 0x40) != 0
      && (v24 = *(_QWORD *)(v9 + 40), (*(_BYTE *)(v24 + 31) & 0xC0) == 0x40) )
    {
      v89 = 1;
      v21 = (unsigned int)(DWORD2(v99) - *(_DWORD *)(v24 + 96));
      v25 = 1;
    }
    else
    {
      v25 = 0;
      v89 = 0;
      v21 = v19;
    }
  }
  v26 = *(_DWORD **)(v9 + 40);
  v27 = v26[24] - v26[22];
  v28 = v26[25] - v26[23];
  v29 = *((unsigned int *)v7 + 8);
  v91 = v27;
  *((_DWORD *)v7 + 8) |= 0x1800u;
  if ( (v29 & 2) != 0 )
  {
    *((_DWORD *)v7 + 39) |= 0x100u;
    *((_DWORD *)v7 + 4) = v21;
    *((_DWORD *)v7 + 5) = v22;
  }
  else
  {
    if ( *((_DWORD *)v7 + 4) == (_DWORD)v21 && *((_DWORD *)v7 + 5) == v22 )
    {
      v30 = v94;
      v29 = (unsigned int)v29 | 0x1802;
      *((_DWORD *)v7 + 8) = v29;
      if ( v25 )
        v30 = 1;
      v94 = v30;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 31LL) & 0x20) != 0 )
    {
      v31 = IsTrayWindow((_QWORD *)v9, 1LL);
      v27 = v91;
      if ( v31 )
      {
        *((_DWORD *)v7 + 4) = -32000;
        *((_DWORD *)v7 + 5) = -32000;
      }
    }
  }
  if ( (v7[2] & 1) != 0 )
  {
    *((_DWORD *)v7 + 6) = v27;
    *((_DWORD *)v7 + 7) = v28;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 31LL) & 0x20) != 0
      && (UserSessionState = W32GetUserSessionState(v29, v21),
          GetProp(v9, *(unsigned __int16 *)(UserSessionState + 41334), 1u)) )
    {
      v35 = (_DWORD *)v7 + 6;
      *((_DWORD *)v7 + 6) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v34, v33) + 19872) + 2124LL);
      v38 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v37, v36) + 19872) + 2128LL);
      *((_DWORD *)v7 + 7) = v38;
    }
    else
    {
      v35 = (_DWORD *)v7 + 6;
      if ( *((int *)v7 + 6) < 0 )
        *v35 = 0;
      v38 = *((_DWORD *)v7 + 7);
      if ( v38 < 0 )
      {
        *((_DWORD *)v7 + 7) = 0;
        v38 = 0;
      }
    }
    if ( *v35 == v91 && v38 == v28 )
      *((_DWORD *)v7 + 8) |= 1u;
  }
  IsEnabledDeviceUsageNoInline = (unsigned int)Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline();
  if ( (v7[2] & 3) != 3 )
  {
    if ( (_DWORD)IsEnabledDeviceUsageNoInline )
    {
      DwmNotifyMoveReason::SendNotifications((struct tagWND *)v9);
    }
    else if ( (*(_DWORD *)(v9 + 380) & 0x200) != 0 )
    {
      v41 = *(_QWORD *)v9;
      v42 = (void *)ReferenceDwmApiPort(IsEnabledDeviceUsageNoInline, v39);
      DwmAsyncNotifyWindowMoveReason(v42, v41, 1);
      *(_DWORD *)(v9 + 380) &= ~0x200u;
    }
  }
  if ( v89 )
    *((_DWORD *)v7 + 4) = v23 - *((_DWORD *)v7 + 6) - *((_DWORD *)v7 + 4) - v92;
  v43 = *((_DWORD *)v7 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 31LL) & 0x10) != 0 )
  {
    v44 = v43 & 0xFFFFFFBF;
LABEL_67:
    *((_DWORD *)v7 + 8) = v44;
    goto LABEL_68;
  }
  v44 = v43 & 0xFFFFFF7F;
  *((_DWORD *)v7 + 8) = v44;
  if ( (v44 & 0x40) == 0 )
  {
    v44 |= 8u;
    goto LABEL_67;
  }
LABEL_68:
  v45 = v44;
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 27LL) & 2) == 0 && GetStyleWindow(v9, 2818) )
  {
    v45 = v44 | 0x100;
    *((_DWORD *)v7 + 8) = v44 | 0x100;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 20LL) & 0x20) != 0 )
  {
    v45 &= ~4u;
    *((_QWORD *)v7 + 1) = 1LL;
    *((_DWORD *)v7 + 8) = v45;
  }
  if ( v93 )
  {
    if ( (v45 & 4) == 0 )
    {
      v93 = 0;
      if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 19LL) & 4) == 0 )
      {
        if ( (unsigned int)ValidateZorder((struct tagCVR *)v7) )
        {
          *((_DWORD *)v7 + 8) |= 4u;
          v93 = 1;
        }
      }
    }
  }
  v46 = *((_DWORD *)v7 + 8);
  v47 = v46;
  if ( (v46 & 8) == 0 && ((v7[2] & 0x18E7) == 0x1807 || !(unsigned int)FChildVisible(v9)) )
  {
    v47 = v46 | 8;
    *((_DWORD *)v7 + 8) = v46 | 8;
  }
  if ( (*((_DWORD *)v7 + 39) & 0x20) != 0
    && (v47 & 0x80000) == 0
    && IsWindowBroadcastingDpiToChildrenX((struct tagWND *)v9) )
  {
    v48 = ValidateHmonitor(*((_QWORD *)v7 + 16));
    v49 = v48;
    v50 = v48 ? *(_WORD *)(*(_QWORD *)(v48 + 40) + 60LL) : 0;
    v51 = *((_DWORD *)v7 + 5);
    v109.left = *((_DWORD *)v7 + 4);
    v109.right = *((_DWORD *)v7 + 6) + v109.left;
    v52 = *((_DWORD *)v7 + 7);
    v109.top = v51;
    v109.bottom = v51 + v52;
    NewMonitor = GetNewMonitor((struct tagWND *)v9, &v109, 0LL);
    if ( NewMonitor )
    {
      if ( v49 != NewMonitor && v50 != *(_WORD *)(*(_QWORD *)(NewMonitor + 40) + 60LL) )
        *((_DWORD *)v7 + 39) ^= ((unsigned __int8)*((_DWORD *)v7 + 39) ^ (unsigned __int8)((unsigned __int8)xxxAppAdjustDpiCandidateRect((struct tagWND *)v9) << 7)) & 0x80;
    }
  }
  v54 = *((_DWORD *)v7 + 8);
  if ( (v54 & 0x21) == 1 )
  {
    v68 = v95;
    goto LABEL_135;
  }
  *((_DWORD *)v7 + 39) |= 4u;
  v55 = *(_QWORD *)(v9 + 40);
  v102 = 0LL;
  v104 = 0LL;
  v103 = 0LL;
  if ( (*(_BYTE *)(v55 + 31) & 0x40) == 0 && *(char *)(v55 + 24) >= 0 )
    CheckFullScreen((struct tagWND *)v9, (struct tagSIZERECT *)(v7 + 1));
  v56 = v7[1];
  v102 = *v7;
  v57 = *((_QWORD *)v7 + 4);
  v108 = &v102;
  LODWORD(v105) = *((_DWORD *)v7 + 4);
  DWORD2(v105) = *((_DWORD *)v7 + 6) + v105;
  DWORD1(v105) = *((_DWORD *)v7 + 5);
  HIDWORD(v105) = *((_DWORD *)v7 + 7) + DWORD1(v105);
  v103 = v56;
  v104 = v57;
  GetRect(v9, (__int64)&v106, 66);
  GetRect(v9, (__int64)&v107, 65);
  v58 = DWORD1(v107);
  v59 = v107;
  v60 = DWORD2(v107) - v107;
  v97 = HIDWORD(v107) - DWORD1(v107);
  v61 = xxxSendTransformableMessageTimeout(
          (struct tagTHREADINFO **)v9,
          131LL,
          1uLL,
          (struct tagDRAWITEMSTRUCT *)&v105,
          0,
          0,
          0LL,
          1,
          0);
  if ( (unsigned int)IsStillWindowC(*((HWND *)v7 + 1), v62) )
  {
    if ( v61 - 16 > 0x3F0 )
    {
      v61 = 48;
      v106 = v105;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 26LL) & 0x40) != 0 )
      v64 = DWORD2(v106) - DWORD2(v107);
    else
      v64 = v106 - v107;
    *((_DWORD *)v7 + 18) = v64;
    *((_DWORD *)v7 + 19) = DWORD1(v106) - DWORD1(v107);
    *((_QWORD *)v7 + 5) = v105;
    v65 = (unsigned int)(DWORD2(v105) - v105);
    *((_DWORD *)v7 + 12) = v65;
    v66 = HIDWORD(v105) - DWORD1(v105);
    *((_DWORD *)v7 + 13) = HIDWORD(v105) - DWORD1(v105);
    if ( __PAIR64__(v58, v59) != (_QWORD)v105 )
      *((_DWORD *)v7 + 8) &= ~0x1000u;
    if ( v60 != (_DWORD)v65 || v97 != v66 )
      *((_DWORD *)v7 + 8) &= ~0x800u;
    v54 = *((_DWORD *)v7 + 8);
    if ( (v54 & 0x100) != 0 )
      goto LABEL_133;
    if ( v94 )
      goto LABEL_133;
    v67 = *(_QWORD *)(v9 + 40);
    if ( (*(_BYTE *)(v67 + 24) & 0x20) != 0 )
      goto LABEL_133;
    if ( (v7[2] & 0x821) != 0x801
      || (v19 = v98, *((_DWORD *)v7 + 18) != *((_DWORD *)v7 + 4) - v98)
      || (v68 = v95, *((_DWORD *)v7 + 19) != *((_DWORD *)v7 + 5) - v95) )
    {
      if ( (v60 == (_DWORD)v65
         || (v61 & 0x100) == 0 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 136) + 8LL) + 8LL) & 2) == 0)
        && (v97 == *((_DWORD *)v7 + 13)
         || (v61 & 0x200) == 0 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 136) + 8LL) + 8LL) & 1) == 0) )
      {
        v69 = DWORD2(v107) - v107;
        v70 = HIDWORD(v107) - DWORD1(v107);
        v71 = v106;
        v72 = DWORD2(v106) - v106;
        v73 = DWORD1(v106);
        v74 = HIDWORD(v106) - DWORD1(v106);
        v75 = *(_BYTE *)(v67 + 26) & 0x40;
        if ( ((v61 >> 7) & 1) != (v75 != 0) )
        {
          if ( v75 && v69 > v72 )
            v76 = v69 - v72;
          else
            v76 = v72 - v69;
          v71 = v76 + v106;
          LODWORD(v106) = v76 + v106;
        }
        if ( (v61 & 0x40) != 0 )
        {
          v73 = HIDWORD(v106) - v70;
          DWORD1(v106) = HIDWORD(v106) - v70;
        }
        if ( v69 < v72 )
          DWORD2(v106) = v71 + v69;
        if ( v70 < v74 )
          HIDWORD(v106) = v73 + v70;
        *(__int128 *)((char *)v7 + 56) = v106;
        v5 = v96;
        if ( v96 != (const struct tagWND *)GetDesktopWindow(v9) )
        {
          *((_DWORD *)v7 + 14) += v92;
          *((_DWORD *)v7 + 16) += v92;
          *((_DWORD *)v7 + 17) += v90;
          *((_DWORD *)v7 + 15) += v90;
        }
LABEL_148:
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v77);
        goto LABEL_150;
      }
LABEL_133:
      *(__int128 *)((char *)v7 + 56) = 0LL;
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v65);
      v5 = v96;
LABEL_150:
      v8 = v88;
      goto LABEL_151;
    }
LABEL_135:
    if ( (v54 & 0x100) != 0 )
    {
      *(__int128 *)((char *)v7 + 56) = 0LL;
    }
    else
    {
      v78 = *((_DWORD *)v7 + 5);
      *((_DWORD *)v7 + 14) = *((_DWORD *)v7 + 4);
      *((_DWORD *)v7 + 15) = v78;
      if ( v96 != (const struct tagWND *)GetDesktopWindow(v9) )
      {
        v79 += v92;
        v80 += v90;
        *((_DWORD *)v7 + 14) = v79;
        *((_DWORD *)v7 + 15) = v80;
      }
      *((_DWORD *)v7 + 16) = v79 + *((_DWORD *)v7 + 6);
      *((_DWORD *)v7 + 17) = v80 + *((_DWORD *)v7 + 7);
    }
    v81 = *((_DWORD *)v7 + 4);
    if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 26LL) & 0x40) != 0 )
      v77 = v81 + *((_DWORD *)v7 + 6) - v91 - v19;
    else
      v77 = v81 - v19;
    *((_DWORD *)v7 + 18) = v77;
    v82 = *((_DWORD *)v7 + 8);
    v83 = *((_DWORD *)v7 + 5) - v68;
    *((_DWORD *)v7 + 19) = v83;
    if ( (v82 & 2) != 0 )
    {
      v5 = v96;
    }
    else
    {
      *((_DWORD *)v7 + 8) = v82 & 0xFFFFEFFF;
      *((_DWORD *)v7 + 10) = v77 + *(_DWORD *)(*(_QWORD *)(v9 + 40) + 104LL);
      *((_DWORD *)v7 + 11) = v83 + *(_DWORD *)(*(_QWORD *)(v9 + 40) + 108LL);
      v5 = v96;
      if ( v96 != (const struct tagWND *)GetDesktopWindow(v9) )
      {
        *((_DWORD *)v7 + 10) = v85 - v92;
        *((_DWORD *)v7 + 11) = v84 - v86;
      }
      *((_DWORD *)v7 + 12) = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 112LL) - *(_DWORD *)(*(_QWORD *)(v9 + 40) + 104LL);
      v77 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v9 + 40) + 116LL) - *(_DWORD *)(*(_QWORD *)(v9 + 40) + 108LL));
      *((_DWORD *)v7 + 13) = v77;
    }
    goto LABEL_148;
  }
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v63);
LABEL_153:
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v101, v6);
  return v1;
}
