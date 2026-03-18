/*
 * XREFs of ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     GreClientRgnUpdated @ 0x14001B35C (GreClientRgnUpdated.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14003364C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14004B110 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     UnlinkWindow @ 0x14004BBDC (UnlinkWindow.c)
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x14004EE38 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     SelectWindowRgn @ 0x14005B5EC (SelectWindowRgn.c)
 *     OffsetChildren @ 0x14005B830 (OffsetChildren.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x14005BB60 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     SetRedrawProp @ 0x14005BDA4 (SetRedrawProp.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14005DC60 (DeleteOrSetRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x14005DD28 (SetOldRedirectionBitmap.c)
 *     UpdateMonitorForWindowAndChildren @ 0x140064088 (UpdateMonitorForWindowAndChildren.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x140064194 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     PWInsertAfter @ 0x140064E98 (PWInsertAfter.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x140064EE4 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     GetNewMonitor @ 0x14006568C (GetNewMonitor.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x140065D0C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x140065E14 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     UpdateSprite @ 0x14007B8E4 (UpdateSprite.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x140155710 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     CreateSpb @ 0x140155CBC (CreateSpb.c)
 *     ?FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z @ 0x1401BD758 (-FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z.c)
 *     RemoveWindowFullScreen @ 0x14021536C (RemoveWindowFullScreen.c)
 *     zzzCalcStartCursorHide @ 0x140245FC0 (zzzCalcStartCursorHide.c)
 *     InvalidateGDIWindows @ 0x14026E8E4 (InvalidateGDIWindows.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline @ 0x1402721A8 (Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline.c)
 *     LinkWindow @ 0x1402B6200 (LinkWindow.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzChangeStates(struct tagWND *a1, struct tagSMWP *a2)
{
  int v2; // r15d
  struct tagWND *v3; // r14
  unsigned int v4; // edi
  int v5; // r13d
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // r12d
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rax
  __int64 v16; // rcx
  int v17; // edx
  unsigned __int64 v18; // rbx
  __int64 DesktopWindow; // rax
  int v20; // r8d
  int v21; // r9d
  int v22; // r11d
  LONG top; // ebx
  LONG left; // r14d
  _DWORD *v25; // rdx
  int v26; // r10d
  int v27; // ecx
  unsigned int v28; // r10d
  int v29; // r8d
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // r13d
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rcx
  struct tagRECT v42; // xmm0
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  BOOL v48; // ebx
  __int64 v49; // rdx
  __int64 v50; // rcx
  bool v51; // zf
  int v52; // r14d
  unsigned int v53; // ebx
  int v54; // r12d
  __int64 v55; // rdx
  char v56; // bl
  int v57; // r8d
  char v58; // bl
  LONG v59; // edx
  int v60; // r8d
  int v61; // eax
  HSURF v62; // rbx
  _DWORD *v63; // rdx
  __int64 UserSessionState; // rax
  __int64 v65; // r8
  unsigned int v66; // r14d
  HRGN ExplicitClipRgn; // rax
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // rcx
  BOOL v71; // ebx
  int v72; // ecx
  int v73; // r14d
  int v74; // ecx
  __int64 v75; // rax
  __int64 v76; // r8
  unsigned __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rax
  unsigned int v80; // ecx
  __int64 v81; // rdx
  __int64 NewMonitor; // rax
  BOOL v83; // eax
  struct tagRECT *v84; // r8
  struct tagRECT *v85; // rdx
  __int64 v86; // rbx
  __int64 v87; // rcx
  __int64 v88; // r9
  __int16 v89; // cx
  __int16 v90; // dx
  int v91; // eax
  __int64 v92; // rcx
  char v93; // bl
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  int v97; // ecx
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 i; // rbx
  struct tagSMWP *v105; // rcx
  __int64 v106; // rax
  char v107; // al
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rax
  int v111; // ecx
  __int64 v112; // rdx
  int v113; // [rsp+60h] [rbp-A0h]
  unsigned int updated; // [rsp+64h] [rbp-9Ch]
  int v115; // [rsp+68h] [rbp-98h]
  int v116; // [rsp+6Ch] [rbp-94h]
  BOOL v117; // [rsp+70h] [rbp-90h]
  unsigned int v118; // [rsp+74h] [rbp-8Ch]
  __int64 v119; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v120; // [rsp+80h] [rbp-80h]
  int v121; // [rsp+84h] [rbp-7Ch]
  struct tagWND *v122; // [rsp+88h] [rbp-78h]
  __int64 v123; // [rsp+90h] [rbp-70h]
  int v124; // [rsp+98h] [rbp-68h]
  struct tagSMWP *v125; // [rsp+A0h] [rbp-60h]
  int v126; // [rsp+A8h] [rbp-58h]
  struct tagSIZE v127; // [rsp+B0h] [rbp-50h] BYREF
  struct tagPOINT v128; // [rsp+B8h] [rbp-48h] BYREF
  int v129[4]; // [rsp+C0h] [rbp-40h] BYREF
  char v130[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v131; // [rsp+D8h] [rbp-28h]
  char v132[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v133; // [rsp+E8h] [rbp-18h]
  ULONG_PTR v134[2]; // [rsp+F0h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v136; // [rsp+110h] [rbp+10h] BYREF
  __int128 v137; // [rsp+120h] [rbp+20h] BYREF
  __int128 v138; // [rsp+130h] [rbp+30h] BYREF

  v2 = 0;
  v122 = a1;
  v3 = a1;
  updated = 0;
  v121 = 0;
  v4 = 0;
  v113 = 0;
  v5 = 0;
  v132[0] = 0;
  v133 = 0LL;
  v125 = a2;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v132);
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v3);
  v8 = *((_QWORD *)a2 + 5);
  v9 = *((_DWORD *)a2 + 7) - 1;
  v124 = v9;
  if ( v9 < 0 )
    goto LABEL_13;
  do
  {
    v119 = 0LL;
    v10 = *(_QWORD *)v8;
    v11 = 0;
    v116 = 0;
    v115 = 0;
    v136 = 0LL;
    if ( !v10 )
    {
      v2 = 0;
      goto LABEL_9;
    }
    LOBYTE(v7) = 1;
    v12 = HMValidateHandleNoSecure(v10, v7);
    if ( !v12 || !(unsigned int)IsStillWindowC(*(HWND *)(v8 + 8), v7) )
    {
      *(_QWORD *)v8 = 0LL;
      *(_DWORD *)(v8 + 32) = 6159;
    }
    v13 = *(_DWORD *)(v8 + 32);
    v10 = v13 & 0x18E7;
    if ( (v13 & 0x80000) == 0 && (_DWORD)v10 == 6151 )
    {
      *(_DWORD *)(v8 + 32) = v13 | 8;
      v2 = 0;
      goto LABEL_9;
    }
    if ( (_DWORD)v10 == 6147
      && (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 19LL) & 4) == 0
      && (unsigned int)ValidateZorder((struct tagCVR *)v8) )
    {
      *(_DWORD *)(v8 + 32) |= 0xCu;
      v2 = 0;
      v10 = *(_QWORD *)(v8 + 96);
      if ( v10 )
      {
        GreDeleteObject(v10);
        *(_QWORD *)(v8 + 96) = 0LL;
      }
      goto LABEL_9;
    }
    if ( (*(_DWORD *)(v8 + 32) & 0x1803) != 0x1803 )
    {
      v16 = *(_QWORD *)(v12 + 40);
      if ( ((*(_BYTE *)(v16 + 27) & 0x20) != 0 || (*(_BYTE *)(v16 + 26) & 8) != 0)
        && ((v17 = *(_DWORD *)(v16 + 100) - *(_DWORD *)(v16 + 92),
             LODWORD(v123) = *(_DWORD *)(v16 + 96) - *(_DWORD *)(v16 + 88),
             HIDWORD(v123) = v17,
             (_DWORD)v123 != *(_DWORD *)(v8 + 24))
         || v17 != *(_DWORD *)(v8 + 28)) )
      {
        v11 = 1;
        v116 = 1;
      }
      else
      {
        v123 = v119;
      }
      if ( *(_DWORD *)(v16 + 88) != *(_DWORD *)(v8 + 16) || *(_DWORD *)(v16 + 92) != *(_DWORD *)(v8 + 20) )
      {
        v2 = 1;
        v115 = 1;
      }
      v136 = *(struct tagRECT *)(*((_QWORD *)v3 + 5) + 104LL);
      if ( IsChildWindowDpiBoundary((const struct tagWND *)v12) )
      {
        v18 = 0LL;
        if ( (*(_DWORD *)(v8 + 156) & 0x100) == 0 )
        {
          v18 = v12 + 224;
          *(_DWORD *)(v12 + 224) = 0;
          *(_DWORD *)(v12 + 228) = 0;
        }
        LogicalToPhysicalInPlaceRectWithSubpixel(v3, &v136.left, v18);
        PhysicalToLogicalInPlaceRectWithSubpixel((const struct tagWND *)v12, &v136.left, v18);
        v113 = 1;
      }
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 88LL) = *(_DWORD *)(v8 + 16);
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL) = *(_DWORD *)(v8 + 20);
      DesktopWindow = GetDesktopWindow(v12);
      top = v136.top;
      left = v136.left;
      if ( v122 != (struct tagWND *)DesktopWindow )
      {
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 88LL) += v136.left;
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL) += top;
      }
      v25 = *(_DWORD **)(v12 + 40);
      v26 = v25[22];
      v27 = *(_DWORD *)(v8 + 24) + v26;
      v28 = v26 - v20;
      v29 = v25[23];
      v25[24] = v27;
      v30 = v29 - v21;
      v31 = *(_QWORD *)(v12 + 40);
      v120 = v28;
      v118 = v30;
      *(_DWORD *)(v31 + 100) = *(_DWORD *)(v8 + 28) + *(_DWORD *)(v31 + 92);
      v32 = *(_QWORD *)(v12 + 40);
      v33 = *(_DWORD *)(v32 + 88);
      if ( *(_DWORD *)(v32 + 96) < v33 )
        *(_DWORD *)(v32 + 96) = v33;
      v34 = *(_QWORD *)(v12 + 40);
      v35 = *(unsigned int *)(v34 + 92);
      if ( *(_DWORD *)(v34 + 100) < (int)v35 )
        *(_DWORD *)(v34 + 100) = v35;
      v36 = v30;
      LODWORD(v119) = v28;
      v126 = v22;
      if ( v12 == *(_QWORD *)(*((_QWORD *)PtiCurrent(v35, (__int64)v25) + 59) + 320LL) )
      {
        v37 = GetDesktopWindow(v12);
        if ( v122 != (struct tagWND *)v37 )
        {
          v39 -= left;
          v40 -= top;
        }
        if ( v39 | v40 )
        {
          *(_DWORD *)(v38 + 340) += v39;
          *(_DWORD *)(v38 + 344) += v40;
        }
      }
      v41 = *(_QWORD *)(v12 + 40);
      v42 = *(struct tagRECT *)(v41 + 104);
      *(_DWORD *)(v41 + 104) = *(_DWORD *)(v8 + 40);
      v43 = *(_QWORD *)(v12 + 40);
      v44 = *(_DWORD *)(v8 + 44);
      v136 = v42;
      *(_DWORD *)(v43 + 108) = v44;
      v45 = GetDesktopWindow(v12);
      if ( v122 != (struct tagWND *)v45 )
      {
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 104LL) += left;
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 108LL) += top;
      }
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 112LL) = *(_DWORD *)(v8 + 48) + *(_DWORD *)(*(_QWORD *)(v12 + 40) + 104LL);
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 116LL) = *(_DWORD *)(v8 + 52) + *(_DWORD *)(*(_QWORD *)(v12 + 40) + 108LL);
      v46 = *(_QWORD *)(v12 + 40);
      v47 = *(_QWORD *)&v136.left - *(_QWORD *)(v46 + 104);
      if ( *(_QWORD *)&v136.left == *(_QWORD *)(v46 + 104) )
        v47 = *(_QWORD *)&v136.right - *(_QWORD *)(v46 + 112);
      v48 = v47 == 0;
      v49 = *(_DWORD *)(v8 + 32) >> 3;
      v117 = v48;
      LOBYTE(v49) = (*(_DWORD *)(v8 + 32) & 8) == 0;
      FixupMonitorRgn((struct tagWND *)v12, v49);
      if ( v116 )
      {
        *(_DWORD *)(v8 + 156) |= 1u;
        if ( (unsigned int)Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline(v50) )
        {
          v51 = (*(_DWORD *)(v8 + 156) & 0x1000) == 0;
          v52 = v126;
          v53 = v119;
          v113 = v126;
          v120 = v119;
          v118 = v36;
          v116 = v11;
          if ( !v51 )
          {
            tagWND::ComputeDominantState((tagWND *)v12);
            v113 = v52;
            v120 = v53;
            v118 = v36;
            v116 = v11;
          }
          v54 = v2;
        }
        else
        {
          v54 = v115;
        }
        v55 = *(_QWORD *)(v12 + 40);
        if ( (*(_BYTE *)(v55 + 27) & 0x20) == 0 || (v56 = *(_BYTE *)(v55 + 26), (v56 & 0x20) != 0) )
        {
          if ( (unsigned int)IsWindowDesktopComposed(v12) )
          {
            v63 = *(_DWORD **)(v12 + 40);
            v127.cx = v63[24] - v63[22];
            v127.cy = v63[25] - v63[23];
            UserSessionState = W32GetUserSessionState((unsigned int)v127.cy, v63);
            updated = UpdateSprite(
                        *(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 48LL),
                        (struct tagWND *)v12,
                        v65,
                        0LL,
                        0LL,
                        &v127,
                        0LL,
                        0LL,
                        0,
                        0LL,
                        0,
                        0LL);
          }
        }
        else
        {
          v57 = *(_DWORD *)(v55 + 92);
          v58 = v56 & 8;
          v59 = *(_DWORD *)(v55 + 88) - *(_DWORD *)(v8 + 80);
          v60 = v57 - *(_DWORD *)(v8 + 84);
          v119 = 0LL;
          v61 = RecreateRedirectionBitmap(
                  (struct tagWND *)v12,
                  v59,
                  v60,
                  0,
                  0,
                  (HSURF *)((unsigned __int64)&v119 & -(__int64)(v58 != 0)));
          updated = v61;
          if ( v58 && v61 >= 0 )
          {
            v62 = (HSURF)v119;
            if ( v119 )
            {
              if ( (unsigned int)SetOldRedirectionBitmap(v12, v119) )
                v62 = 0LL;
            }
            else
            {
              v130[0] = 0;
              v131 = 0LL;
              AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v130);
              xxxInternalInvalidate((struct tagWND *)v12, (HRGN)1, 0x401u);
              AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v130);
            }
          }
          else
          {
            v62 = (HSURF)v119;
          }
          if ( v62 )
            DeleteOrSetRedirectionBitmap(v12, v62, 1);
        }
        v48 = v117;
      }
      else
      {
        v54 = v115;
      }
      v66 = v120;
      if ( v120 || v118 )
      {
        ExplicitClipRgn = tagWND::GetExplicitClipRgn((tagWND *)v12);
        if ( ExplicitClipRgn )
          GreOffsetRgn(ExplicitClipRgn, v66, v118);
      }
      v68 = *(unsigned int *)(v8 + 72);
      v5 = v113;
      if ( *(_QWORD *)(v8 + 72) || v113 )
      {
        v69 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 136LL);
        if ( v69 > 1 )
          GreOffsetRgn(v69, v68, *(unsigned int *)(v8 + 76));
        OffsetChildren((struct tagWND *)v12, *(_DWORD *)(v8 + 72), *(_DWORD *)(v8 + 76), 0LL);
      }
      if ( v54 || !v48 || v66 || v118 )
      {
        v70 = *(_QWORD *)(v12 + 40);
        v71 = 0;
        v128 = *(struct tagPOINT *)(v70 + 88);
        v137 = 0LL;
        if ( v54 )
        {
          if ( (*(_DWORD *)(v12 + 380) & 0x400) != 0 )
            RemoveWindowFullScreen(v12);
          v68 = *(_QWORD *)(v12 + 40);
          if ( (*(_BYTE *)(v68 + 26) & 8) != 0 )
          {
            if ( v116 )
            {
              v72 = *(_DWORD *)(v68 + 96) - *(_DWORD *)(v68 + 88);
              v73 = -v66;
              v129[0] = 0;
              v129[1] = 0;
              v129[2] = v72;
              v74 = *(_DWORD *)(v68 + 100) - *(_DWORD *)(v68 + 92);
              DWORD2(v137) = v73 + v123;
              v129[3] = v74;
              HIDWORD(v137) = HIDWORD(v123) - v118;
              LODWORD(v137) = v73;
              DWORD1(v137) = -v118;
              IntersectRect(&v137, (int *)&v137, v129);
            }
            if ( *(_DWORD *)(W32GetUserSessionState(v70, v68) + 43272) )
            {
              InvalidateGDIWindows(v12);
              GreClientRgnUpdated((Gre::Base *)1);
            }
            v71 = v116 && !(unsigned int)IsWindowDesktopComposed(v12);
          }
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 26LL) & 8) != 0 )
        {
          v75 = W32GetUserSessionState(v70, v68);
          updated = UpdateSprite(
                      *(HDEV *)(*(_QWORD *)(v75 + 56968) + 48LL),
                      (struct tagWND *)v12,
                      v76,
                      0LL,
                      &v128,
                      0LL,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0,
                      (struct tagRECT *)((unsigned __int64)&v137 & -(__int64)v71));
        }
      }
      v3 = v122;
    }
    if ( (*(_DWORD *)(v8 + 32) & 4) == 0 )
    {
      v77 = *(_QWORD *)(v8 + 8);
      if ( v77 >= 2 && (v77 >= 0xFFFFFFFFFFFFFFFDuLL || v77 == 0xFFFF)
        || (v113 = v5, !(unsigned int)ValidateWindowPos((struct tagCVR *)v8, v3)) )
      {
        *(_DWORD *)(v8 + 32) |= 4u;
        SetOrClrWF(0, (struct tagWND *)v12, 0x304u, 1);
      }
      else
      {
        UnlinkWindow((__int64 *)v12, (__int64 *)v3);
        PWInsertAfter(*(_QWORD *)(v8 + 8), v78);
        LinkWindow((struct tagWND *)v12);
        v79 = *(_QWORD *)(v12 + 40);
        ++v121;
        if ( (*(_BYTE *)(v79 + 19) & 4) != 0 )
        {
          SetOrClrWF(0, (struct tagWND *)v12, 0x304u, 1);
          LOBYTE(v80) = ~*(_BYTE *)(*(_QWORD *)(v12 + 40) + 24LL);
          SetOrClrWF((v80 >> 3) & 1, (struct tagWND *)v12, 0x808u, 1);
        }
        v113 = v5;
      }
    }
    v81 = *(unsigned int *)(v8 + 156);
    if ( (v81 & 0x20) == 0 || (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 0x20) != 0 )
    {
      v2 = 0;
    }
    else
    {
      if ( (v81 & 0x200) != 0 )
      {
        NewMonitor = ValidateHmonitorNoRip(*(_QWORD *)(v8 + 128), v81);
        v2 = 0;
      }
      else
      {
        v136 = 0LL;
        if ( (v81 & 0x80u) != 0LL )
          v136 = *(struct tagRECT *)(v8 + 136);
        v83 = IsRectEmptyInl(&v136);
        v2 = 0;
        v85 = &v136;
        if ( v83 )
          v85 = 0LL;
        NewMonitor = GetNewMonitor((struct tagWND *)v12, v85, v84);
      }
      v86 = NewMonitor;
      if ( NewMonitor )
      {
        v87 = _bittest((const signed __int32 *)(v8 + 156), 9u)
            ? *(_QWORD *)(*(_QWORD *)(v12 + 40) + 256LL)
            : *(_QWORD *)(v8 + 128);
        if ( ValidateHmonitor(v87) != NewMonitor
          || (v88 = *(_QWORD *)(v12 + 40), (v89 = *(_WORD *)(v88 + 286)) != 0)
          && *(_WORD *)(*(_QWORD *)(v86 + 40) + 60LL) != v89
          && (*(_DWORD *)(v88 + 288) & 0xF) == 2
          && (*(_DWORD *)(*(_QWORD *)(v12 + 16) + 688LL) & 0x2000000) == 0
          && IsTopLevelWindow(v12)
          || (*(_BYTE *)(v88 + 288) & 0xF) == 3
          && (v90 = *(_WORD *)(*(_QWORD *)(v86 + 40) + 84LL), v90 != ((*(_DWORD *)(v88 + 288) >> 8) & 0x1FF))
          && v90 != *(_WORD *)(v12 + 304) )
        {
          *(_DWORD *)(v8 + 156) ^= ((unsigned __int8)*(_DWORD *)(v8 + 156) ^ (unsigned __int8)((unsigned __int8)UpdateMonitorForWindowAndChildren((struct tagWND **)v12, (struct tagMONITOR *)v86, (_QWORD *)(v8 + 160), 0) << 6)) & 0x40;
        }
      }
    }
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v134, v12);
    v91 = *(_DWORD *)(v8 + 32);
    if ( (v91 & 0x40) != 0 )
    {
      v92 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 464LL);
      if ( (*(_DWORD *)(v92 + 12) & 0x40) != 0 )
        zzzCalcStartCursorHide(v92, 5000LL);
      SetRedrawProp(v12, 0);
      v93 = SetVisible(v12, 9u);
      v96 = W32GetUserSessionState(v95, v94);
      v97 = 3;
      if ( !*(_DWORD *)(v96 + 70600) )
        v97 = 1;
      xxxWindowEvent(0x8002u, (struct tagWND *)v12, 0, 0, v97);
      if ( v93 )
      {
        *(_DWORD *)(v8 + 156) |= 2u;
        if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 26LL) & 8) == 0 )
          updated = ComposeWindowIfNeeded((struct tagWND *)v12);
      }
      LOBYTE(v98) = IsTrayWindow((_QWORD *)v12, 1LL);
      v99 = *(_QWORD *)(v12 + 40);
      if ( (*(_WORD *)(v99 + 42) & 0x2FFF) == 0x2AA )
      {
        if ( (*(_BYTE *)(v99 + 16) & 0x40) != 0 )
        {
          *((_DWORD *)v125 + 6) |= 1u;
          *(_DWORD *)(v8 + 32) |= 0x40000000u;
        }
        v113 = v5;
        if ( (_BYTE)v98 )
        {
LABEL_145:
          if ( (*(_DWORD *)(v8 + 32) & 0x4008) != 8 )
          {
            v100 = *(_QWORD *)(*(_QWORD *)(v12 + 136) + 8LL);
            if ( (*(_BYTE *)(v100 + 9) & 8) != 0 )
            {
              v102 = *(_QWORD *)(W32GetUserSessionState(v100, v98) + 19144);
              if ( *(_QWORD *)(v12 + 24) == v102 )
              {
                v103 = *(_QWORD *)(v12 + 104);
                v136 = 0LL;
                for ( i = *(_QWORD *)(v103 + 112); i; i = *(_QWORD *)(i + 88) )
                {
                  if ( i == v12 )
                  {
                    v106 = W32GetUserSessionState(v102, v101);
                    CreateSpb((struct tagWND *)v12, 0, *(HDC *)(*(_QWORD *)(v106 + 56968) + 64LL));
                    goto LABEL_173;
                  }
                  v102 = *(_QWORD *)(i + 40);
                  if ( (*(_BYTE *)(v102 + 31) & 0x10) != 0 )
                  {
                    v138 = *(_OWORD *)(v102 + 88);
                    TransformRectBetweenCoordinateSpaces(&v138, &v138, v12, i);
                    if ( (unsigned int)IntersectRect(&v136, (int *)(*(_QWORD *)(v12 + 40) + 88LL), (int *)&v138) )
                      goto LABEL_173;
                  }
                }
              }
            }
          }
          goto LABEL_173;
        }
      }
      else
      {
        v105 = v125;
        if ( (*(_BYTE *)(v99 + 16) & 0x40) != 0 )
        {
          *((_DWORD *)v125 + 6) |= 1u;
          *(_DWORD *)(v8 + 32) |= 0x40000000u;
        }
        if ( (_BYTE)v98 || *(_QWORD *)(v12 + 120) )
        {
          *((_DWORD *)v105 + 6) |= 1u;
          *(_DWORD *)(v8 + 32) |= 0x10000000u;
          v113 = v5;
          if ( (_BYTE)v98 )
            goto LABEL_145;
          *(_DWORD *)(v8 + 156) |= 8u;
        }
        v113 = v5;
      }
      if ( !*(_QWORD *)(v12 + 120) && (*(_DWORD *)(v8 + 32) & 0x40000000) != 0 )
        *(_DWORD *)(v8 + 156) |= 0x10u;
      goto LABEL_145;
    }
    if ( (v91 & 0x80u) != 0 )
    {
      v107 = IsTrayWindow((_QWORD *)v12, 1LL);
      if ( (*(_BYTE *)(v8 + 32) & 0x1F) != 0x1F && v107 && (*(_WORD *)(*(_QWORD *)(v12 + 40) + 42LL) & 0x2FFF) != 0x2AA )
      {
        v113 = v5;
        *((_DWORD *)v125 + 6) |= 1u;
        *(_DWORD *)(v8 + 32) |= 0x20000000u;
      }
      SetRedrawProp(v12, 0);
      if ( SetVisible(v12, 0xAu) )
        DecomposeWindowIfNeeded((struct tagWND *)v12);
      v110 = W32GetUserSessionState(v109, v108);
      v111 = 3;
      if ( !*(_DWORD *)(v110 + 70600) )
        v111 = 1;
      xxxWindowEvent(0x8003u, (struct tagWND *)v12, 0, 0, v111);
    }
LABEL_173:
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 0x10) != 0 && (*(_DWORD *)(v8 + 32) & 0x8000) != 0 )
      SetOrClrWF(1, (struct tagWND *)v12, 0x108u, 1);
    v112 = *(_QWORD *)(v8 + 112);
    if ( v112 )
      SelectWindowRgn((struct tagWND *)v12, v112, ((*(_DWORD *)(v8 + 32) >> 3) & 1) == 0);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v134, v112);
    v5 = v113;
    v3 = v122;
    v9 = v124;
LABEL_9:
    v8 += 168LL;
    v124 = --v9;
  }
  while ( v9 >= 0 );
  if ( v121 )
  {
    v14 = W32GetUserSessionState(v10, v7);
    xxxWindowEvent(0x8004u, v3, -4, 0, *(_DWORD *)(v14 + 70600) != 0 ? 2 : 0);
  }
  v4 = updated;
LABEL_13:
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v7);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v132);
  return v4;
}
