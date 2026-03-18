/*
 * XREFs of xxxEnumDisplayMonitors @ 0x140086930
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x140199A90 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     GreGetClipBox @ 0x14003ACA0 (GreGetClipBox.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14003B980 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 *     GreIntersectClipRect @ 0x14003F300 (GreIntersectClipRect.c)
 *     _HMPheFromObject @ 0x1400488F0 (_HMPheFromObject.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140049888 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     GetStyleWindow @ 0x14008250C (GetStyleWindow.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140082FC0 (TransformRectBetweenCoordinateSpaces.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140083B38 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetScreenRectForDpi @ 0x140083BF4 (GetScreenRectForDpi.c)
 *     GetCurrentThreadCompositedDpi @ 0x140083D64 (GetCurrentThreadCompositedDpi.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRectForDpi @ 0x140085450 (GetMonitorRectForDpi.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ @ 0x140086F48 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400874A8 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?lock@?$ObjectLockBase@$$V@?$DomainExclusiveBase@$$V@?$DomainSharedBase@VDLT_HANDLEMANAGER@@@@AEAAXXZ @ 0x140087500 (-lock@-$ObjectLockBase@$$V@-$DomainExclusiveBase@$$V@-$DomainSharedBase@VDLT_HANDLEMANAGER@@@@AE.c)
 *     IntersectRect @ 0x14011D9FC (IntersectRect.c)
 *     LookupDC @ 0x1401363C0 (LookupDC.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x140166B7C (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(
        HDC a1,
        LONG *a2,
        __int64 (__fastcall *a3)(__int64, __int64, struct tagRECT *, __int64),
        __int64 a4,
        int a5)
{
  unsigned int v5; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 (__fastcall *StyleWindow)(__int64, __int64); // rsi
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  int v13; // r8d
  int top; // edx
  int bottom; // ecx
  int v16; // r8d
  unsigned int v17; // r12d
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  unsigned int CurrentThreadCompositedDpiContext; // eax
  int v22; // eax
  unsigned __int64 v23; // r8
  __int64 v24; // r15
  struct tagTHREADINFO *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r8d
  int (*v29)(void); // rax
  __int64 v30; // r12
  __int64 (__fastcall *v31)(__int64, __int64, struct tagRECT *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)); // rax
  unsigned int v32; // eax
  __int64 UserSessionState; // rax
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // edx
  int v41; // r8d
  __int64 v42; // rdx
  __int64 v43; // rcx
  char v44; // r13
  struct tagTHREADINFO *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // r8d
  LONG right; // ecx
  LONG left; // edx
  LONG v54; // eax
  LONG v55; // eax
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // r8d
  struct tagMONITOR *v59; // rax
  __int64 v60; // r9
  HDC MonitorDC; // rax
  __int64 v62; // rcx
  __int64 SessionState; // rax
  __int64 v64; // rdx
  int v65; // r8d
  __int64 v66; // rax
  __int64 v67; // rcx
  bool v68; // zf
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  int v74; // r8d
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdx
  int v79; // r8d
  __int64 v80; // rax
  __int64 v81; // rdx
  int v82; // r8d
  __int64 v83; // rax
  __int64 v84; // rdx
  int v85; // r8d
  struct _POINTL v86; // [rsp+30h] [rbp-A1h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-91h] BYREF
  __int64 v88; // [rsp+50h] [rbp-81h]
  __int64 (__fastcall *v89)(__int64, __int64, struct tagRECT *, __int64); // [rsp+58h] [rbp-79h]
  __int64 v90; // [rsp+60h] [rbp-71h]
  __int64 v91; // [rsp+68h] [rbp-69h]
  struct tagTHREADINFO *v92; // [rsp+70h] [rbp-61h]
  PERESOURCE *v93; // [rsp+78h] [rbp-59h] BYREF
  char v94; // [rsp+80h] [rbp-51h]
  __int64 v95; // [rsp+88h] [rbp-49h]
  char v96; // [rsp+90h] [rbp-41h]
  __int64 v97; // [rsp+98h] [rbp-39h]
  char v98; // [rsp+A0h] [rbp-31h]
  char v99; // [rsp+A8h] [rbp-29h]
  unsigned __int64 v100; // [rsp+B0h] [rbp-21h] BYREF
  unsigned __int64 v101; // [rsp+B8h] [rbp-19h]
  struct tagRECT v102; // [rsp+C0h] [rbp-11h] BYREF
  struct tagRECT v103; // [rsp+D0h] [rbp-1h] BYREF

  v90 = a4;
  v5 = 0;
  v89 = a3;
  v102 = 0LL;
  v86 = 0LL;
  v103 = 0LL;
  v92 = PtiCurrent((__int64)a1, (__int64)a2);
  v10 = 0LL;
  v88 = 0LL;
  StyleWindow = 0LL;
  v91 = 0LL;
  if ( !a1 )
  {
    CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi(v9, v8);
    GetScreenRectForDpi((__m128i *)BugCheckParameter3, CurrentThreadCompositedDpi, v13);
    v102 = *(struct tagRECT *)BugCheckParameter3;
    if ( a2 )
    {
      right = v102.right;
      left = v102.left;
      if ( SLODWORD(BugCheckParameter3[0]) <= *a2 )
        left = *a2;
      v54 = a2[2];
      v102.left = left;
      if ( v102.right >= v54 )
        right = v54;
      v102.right = right;
      if ( left >= right )
        return 1LL;
      top = v102.top;
      bottom = v102.bottom;
      if ( v102.top <= a2[1] )
        top = a2[1];
      v55 = a2[3];
      v102.top = top;
      if ( v102.bottom >= v55 )
        bottom = v55;
      v102.bottom = bottom;
      if ( top >= bottom )
        return 1LL;
    }
    goto LABEL_3;
  }
  SessionState = W32GetSessionState(v9);
  GrepLockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), v64, v65);
  v66 = LookupDC(a1, 1LL);
  v88 = v66;
  v10 = v66;
  if ( !v66 )
  {
LABEL_79:
    v80 = W32GetSessionState(v67);
    GrepUnlockVisRgn(*(struct _ERESOURCE ***)(v80 + 88), v81, v82);
    return v5;
  }
  v68 = (*(_DWORD *)(v66 + 48) & 0x4000) == 0;
  v69 = *(_QWORD *)(v66 + 80);
  v91 = v69;
  if ( !v68 )
    StyleWindow = GetStyleWindow(v69);
  if ( (unsigned int)GreGetClipBox(a1, (__int64)&v102, 0) == 1 )
    goto LABEL_78;
  if ( StyleWindow )
  {
    v71 = *(_WORD *)(*((_QWORD *)StyleWindow + 5) + 42LL) & 0x2FFF;
    if ( (_DWORD)v71 == 669 && (W32GetCurrentThreadDpiAwarenessContext(v71, v70) & 0xF) != 2 )
      TransformRectBetweenCoordinateSpaces(&v102, &v102, 0LL, (__int64)StyleWindow);
  }
  if ( a2 && !(unsigned int)IntersectRect(&v102, &v102, a2) )
  {
LABEL_78:
    v5 = 1;
    goto LABEL_79;
  }
  if ( StyleWindow )
  {
    if ( (*(_WORD *)(*((_QWORD *)StyleWindow + 5) + 42LL) & 0x2FFF) != 0x29D )
    {
      GreGetDCPoint(a1, 32, &v86);
      bottom = *(_DWORD *)(*((_QWORD *)StyleWindow + 5) + 88LL) + v86.x;
      v86.x = bottom;
      top = *(_DWORD *)(*((_QWORD *)StyleWindow + 5) + 92LL) + v86.y;
      v86.y = top;
      goto LABEL_72;
    }
  }
  else
  {
    GreGetDCPoint(a1, 32, &v86);
  }
  bottom = v86.x;
  top = v86.y;
LABEL_72:
  v102.left += bottom;
  v102.right += bottom;
  v102.bottom += top;
  v102.top += top;
LABEL_3:
  v17 = 1;
  v19 = *(_QWORD *)(W32GetUserSessionState(bottom, top, v16) + 56968);
  v20 = *(_QWORD *)(v19 + 104);
  while ( v20 )
  {
    v19 = *(unsigned int *)(*(_QWORD *)(v20 + 40) + 24LL);
    if ( (v19 & 1) == 0 )
      goto LABEL_17;
    CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext(v19, v18);
    GetMonitorRectForDpi(&v100, v20, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
    v18 = v100;
    v19 = (unsigned int)v100;
    if ( v102.left > (int)v100 )
      v19 = (unsigned int)v102.left;
    v22 = v101;
    v103.left = v19;
    if ( v102.right < (int)v101 )
      v22 = v102.right;
    v103.right = v22;
    if ( (int)v19 >= v22 )
      goto LABEL_16;
    v18 = HIDWORD(v100);
    if ( v102.top > SHIDWORD(v100) )
      v18 = (unsigned int)v102.top;
    v23 = HIDWORD(v101);
    v103.top = v18;
    if ( v102.bottom < SHIDWORD(v101) )
      LODWORD(v23) = v102.bottom;
    v103.bottom = v23;
    if ( (int)v18 >= (int)v23 )
    {
LABEL_16:
      v103 = 0LL;
      goto LABEL_17;
    }
    if ( a1 )
    {
      v59 = AdjustDisplayMonitor((struct tagMONITOR *)v20, &v103);
      MonitorDC = (HDC)GetMonitorDC(v10, v59, v59 != (struct tagMONITOR *)v20, v60);
      v24 = (__int64)MonitorDC;
      if ( !MonitorDC )
      {
        v83 = W32GetSessionState(v62);
        GrepUnlockVisRgn(*(struct _ERESOURCE ***)(v83 + 88), v84, v85);
        return 0LL;
      }
      v103.left -= v86.x;
      v103.right -= v86.x;
      v103.bottom -= v86.y;
      v103.top -= v86.y;
      GreIntersectClipRect(MonitorDC, v103.left, v103.top, v103.right, v103.bottom);
    }
    else
    {
      v24 = 0LL;
    }
    v25 = v92;
    BugCheckParameter3[1] = v20;
    BugCheckParameter3[0] = *((_QWORD *)v92 + 56);
    *((_QWORD *)v92 + 56) = BugCheckParameter3;
    _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
    if ( a1 )
    {
      v49 = W32GetSessionState(v25);
      GrepUnlockVisRgn(*(struct _ERESOURCE ***)(v49 + 88), v50, v51);
    }
    if ( a5 )
    {
      v32 = v89(v20, v24, &v103, v90);
    }
    else
    {
      v27 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v25) + 48);
      v29 = *(int (**)(void))(v27 + 2328);
      if ( !v29 || v29() < 0 )
        goto LABEL_28;
      v30 = *(_QWORD *)v20;
      v26 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v27) + 48);
      v31 = *(__int64 (__fastcall **)(__int64, __int64, struct tagRECT *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)))(v26 + 2336);
      if ( !v31 )
      {
        v17 = 0;
        goto LABEL_28;
      }
      v32 = v31(v30, v24, &v103, v90, (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v89);
    }
    v17 = v32;
LABEL_28:
    UserSessionState = W32GetUserSessionState(v27, v26, v28);
    v94 = 0;
    v93 = (PERESOURCE *)(UserSessionState + 42360);
    v37 = W32GetUserSessionState(v35, v34, v36);
    v96 = 0;
    v95 = v37 + 42384;
    v97 = 0LL;
    v98 = 0;
    v99 = 0;
    if ( IS_USERCRIT_OWNED_SHAREDONLY(v39, v38) )
    {
      v99 = 1;
      DomainSharedBase<DLT_HANDLEMANAGER>::DomainExclusiveBase<>::ObjectLockBase<>::lock(&v93);
    }
    v44 = *(_BYTE *)(HMPheFromObject((_DWORD *)v20, v40, v41) + 25) & 1;
    if ( v98 )
    {
      if ( v99 )
      {
        v43 = (__int64)v93;
        if ( v93 )
          ExReleaseResourceAndLeaveCriticalRegion(*v93);
      }
    }
    v45 = PtiCurrent(v43, v42);
    v46 = Win32HM_UnlockFromThread<0>((ULONG_PTR)v45, (ULONG_PTR)BugCheckParameter3);
    BugCheckParameter3[1] = 0LL;
    BugCheckParameter3[0] = -1LL;
    if ( !v46 || v44 )
      v17 = 0;
    if ( v24 )
      ReleaseCacheDC(v24, 0);
    if ( !v17 )
      goto LABEL_39;
    if ( a1 )
    {
      v72 = W32GetSessionState(v47);
      GrepLockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(v72 + 88), v73, v74);
      v75 = LookupDC(a1, 1LL);
      v88 = v75;
      if ( !v75 || (v76 = v91, *(_QWORD *)(v75 + 80) != v91) )
      {
        v77 = W32GetSessionState(v76);
        GrepUnlockVisRgn(*(struct _ERESOURCE ***)(v77 + 88), v78, v79);
LABEL_39:
        Win32HMThreadLockBase<tagMONITOR,0,1>::~Win32HMThreadLockBase<tagMONITOR,0,1>((ULONG_PTR)BugCheckParameter3);
        return 0LL;
      }
    }
    Win32HMThreadLockBase<tagMONITOR,0,1>::~Win32HMThreadLockBase<tagMONITOR,0,1>((ULONG_PTR)BugCheckParameter3);
LABEL_17:
    v20 = *(_QWORD *)(v20 + 56);
    v10 = v88;
  }
  if ( a1 )
  {
    v56 = W32GetSessionState(v19);
    GrepUnlockVisRgn(*(struct _ERESOURCE ***)(v56 + 88), v57, v58);
  }
  return v17;
}
