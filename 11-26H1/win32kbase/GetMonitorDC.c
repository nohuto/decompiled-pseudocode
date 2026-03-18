/*
 * XREFs of GetMonitorDC @ 0x140036C34
 * Callers:
 *     UserGetMonitorDC @ 0x140035F78 (UserGetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreIsRendering @ 0x1400196C0 (GreIsRendering.c)
 *     GreSetRectRgn @ 0x14001D700 (GreSetRectRgn.c)
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     GreOffsetRgn @ 0x1400208C0 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x14003AEDC (IsGreSelectRedirectionBitmapSupported.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14003B980 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     CreateCacheDC @ 0x140081BD0 (CreateCacheDC.c)
 *     ?SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140081E98 (-SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GreSetDCOwnerEx @ 0x140081F10 (GreSetDCOwnerEx.c)
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140081F70 (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140081FE4 (-SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1400820A8 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 *     IsGetStyleWindowSupported @ 0x1400824D4 (IsGetStyleWindowSupported.c)
 *     GetStyleWindow @ 0x14008250C (GetStyleWindow.c)
 *     CreateMonitorRegion @ 0x1400839C4 (CreateMonitorRegion.c)
 *     GetMonitorRect @ 0x140083AF4 (GetMonitorRect.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140083B38 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorRectForDpi @ 0x140085450 (GetMonitorRectForDpi.c)
 *     GreCopyVisRgn @ 0x1400C4DA0 (GreCopyVisRgn.c)
 *     GreGetDCOrgEx @ 0x1400C4E60 (GreGetDCOrgEx.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400C4ED4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400C4FD4 (--1DCOBJA@@QEAA@XZ.c)
 *     GreGetBounds @ 0x1400FCD60 (GreGetBounds.c)
 *     GreSetDCOrg @ 0x1400FD7E0 (GreSetDCOrg.c)
 *     UpdateDCEInUseCount @ 0x1401028C8 (UpdateDCEInUseCount.c)
 *     GreHintDCWnd @ 0x14011769C (GreHintDCWnd.c)
 *     IsGreHintDCWndSupported @ 0x1401270C0 (IsGreHintDCWndSupported.c)
 *     GreSelectRedirectionBitmap @ 0x14012A6F0 (GreSelectRedirectionBitmap.c)
 *     GetRedirectionBitmap @ 0x14012B1A0 (GetRedirectionBitmap.c)
 *     IsGetRedirectionBitmapSupported @ 0x14012D418 (IsGetRedirectionBitmapSupported.c)
 *     GreReferenceObjectCheckOwner @ 0x140154080 (GreReferenceObjectCheckOwner.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall GetMonitorDC(__int64 a1, struct tagMONITOR *a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  tagDCE *i; // rsi
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  struct HOBJ__ *RectRgnIndirect; // rax
  __int64 v19; // rdx
  _QWORD *v20; // r14
  __int64 StyleWindow; // rax
  __int64 RedirectionBitmap; // rbx
  __int64 UserSessionState; // rax
  __int64 v24; // rax
  int v25; // ebx
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  HRGN MonitorRegion; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  HRGN v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // edi
  int v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  HDC v61; // rbx
  __int64 v62; // rax
  int v63; // r8d
  int v64; // ecx
  int v65; // edi
  int v66; // r15d
  int v67; // r12d
  int v68; // ebx
  unsigned int CurrentThreadCompositedDpiContext; // eax
  int v70; // r8d
  int v71; // edx
  __int64 v72; // rax
  int v73; // edx
  int v74; // ecx
  unsigned int v75; // edi
  unsigned int v76; // ebx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  HRGN v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rax
  __int128 v93; // xmm0
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rcx
  unsigned int v100; // eax
  bool v101; // zf
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rdx
  __int128 v109; // [rsp+30h] [rbp-59h] BYREF
  int v110; // [rsp+40h] [rbp-49h]
  struct _POINTL v111; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v112[8]; // [rsp+50h] [rbp-39h] BYREF
  __int128 v113; // [rsp+90h] [rbp+7h] BYREF

  v110 = a3;
  v109 = 0LL;
  v4 = a3;
  v111 = 0LL;
  while ( 2 )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3, a4) + 56968);
    for ( i = *(tagDCE **)(v8 + 24); ; i = *(tagDCE **)i )
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7, v9, v10) + 56968) + 24LL;
      if ( i == (tagDCE *)v8 )
        break;
      if ( (*((_DWORD *)i + 12) & 0x401000) == 0
        && !(unsigned int)GreIsRendering(*((_QWORD *)i + 2))
        && *((struct tagMONITOR **)i + 9) == a2
        && (unsigned int)GreSetDCOwnerEx(*((struct HOBJ__ **)i + 2), 0x80000002, 0, 0) )
      {
        tagDCE::SetPwndOrg(i, *(struct tagWND **)(a1 + 80));
        tagDCE::SetPwndClip(i, *(struct tagWND **)(a1 + 88));
        tagDCE::SetPwndRedirect(i, *(struct tagWND **)(a1 + 96));
        *((_QWORD *)i + 7) = *(_QWORD *)(a1 + 56);
        *((_QWORD *)i + 8) = *(_QWORD *)(a1 + 64);
        *((_DWORD *)i + 12) = *(_DWORD *)(a1 + 48) & 0x947F9 | 0x1002;
        v17 = *(_QWORD *)(a1 + 24);
        if ( v17 <= 1 )
        {
          *((_QWORD *)i + 3) = v17;
        }
        else
        {
          v113 = 0LL;
          RectRgnIndirect = GreCreateRectRgnIndirect((int *)&v113);
          LOBYTE(v19) = 4;
          *((_QWORD *)i + 3) = RectRgnIndirect;
          GreReferenceObjectCheckOwner(RectRgnIndirect, v19);
          SetMonitorRegion(a2, *((HRGN *)i + 3), *(HRGN *)(a1 + 24));
        }
        v20 = 0LL;
        if ( (*((_DWORD *)i + 12) & 0x4000) != 0
          && (int)IsGetStyleWindowSupported() >= 0
          && (StyleWindow = GetStyleWindow(*((_QWORD *)i + 10)), (v20 = (_QWORD *)StyleWindow) != 0LL) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(StyleWindow + 40) + 26LL) & 0x20) == 0
            && (int)IsGetRedirectionBitmapSupported() >= 0 )
          {
            RedirectionBitmap = GetRedirectionBitmap(v20);
            if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0
              && !(unsigned int)GreSelectRedirectionBitmap(*((_QWORD *)i + 2), RedirectionBitmap) )
            {
              GreSelectVisRgn(*((_QWORD *)i + 2), 0LL, 1);
            }
          }
          UserSessionState = W32GetUserSessionState(v14, v13, v15, v16);
          GreCopyVisRgn(*(HDC *)(a1 + 16), *(HRGN *)(UserSessionState + 43088));
          v24 = v20[5];
          v25 = *(_DWORD *)(v24 + 92);
          v26 = *(_DWORD *)(v24 + 88);
          v31 = W32GetUserSessionState(v28, v27, v29, v30);
          GreOffsetRgn(*(HRGN *)(v31 + 43088), v26, v25);
          MonitorRegion = (HRGN)CreateMonitorRegion(a2);
          v37 = *(HRGN *)(W32GetUserSessionState(v34, v33, v35, v36) + 43088);
          v42 = W32GetUserSessionState(v39, v38, v40, v41);
          if ( !(unsigned int)GreCombineRgn(*(HRGN *)(v42 + 43088), v37, MonitorRegion, 1) )
          {
            v47 = W32GetUserSessionState(v44, v43, v45, v46);
            GreSetRectRgn(*(HRGN *)(v47 + 43088), 0, 0, 0, 0);
          }
          GreDeleteObject(MonitorRegion);
          v48 = v20[5];
          v49 = -*(_DWORD *)(v48 + 92);
          v50 = -*(_DWORD *)(v48 + 88);
          v55 = W32GetUserSessionState(v52, v51, v53, v54);
          GreOffsetRgn(*(HRGN *)(v55 + 43088), v50, v49);
          v60 = W32GetUserSessionState(v57, v56, v58, v59);
          GreSelectVisRgn(*((_QWORD *)i + 2), *(HRGN *)(v60 + 43088), 2);
          v61 = *(HDC *)(a1 + 16);
          DCOBJA::DCOBJA((DCOBJA *)v112, v61);
          if ( v112[0] )
          {
            v109 = *(_OWORD *)(v112[0] + 1032LL);
            GreGetDCPoint(v61, 0x20u, &v111);
          }
          DCOBJA::~DCOBJA((DCOBJA *)v112);
          if ( v4 )
          {
            v62 = v20[5];
            v63 = *(_DWORD *)(v62 + 92);
            v64 = *(_DWORD *)(v62 + 88);
            v65 = v109 + 2 * v64;
            v66 = DWORD2(v109) + 2 * v64;
            v67 = HIDWORD(v109) + 2 * v63;
            v68 = DWORD1(v109) + 2 * v63;
            CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
            GetMonitorRectForDpi(&v113, a2, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
            v70 = v65;
            if ( v65 <= (int)v113 )
            {
              v65 = v113;
              v70 = v113;
            }
            v71 = v66;
            if ( v66 >= SDWORD2(v113) )
            {
              v66 = DWORD2(v113);
              v71 = DWORD2(v113);
            }
            if ( v70 >= v71 )
              goto LABEL_37;
            if ( v68 <= SDWORD1(v113) )
              v68 = DWORD1(v113);
            if ( v67 >= SHIDWORD(v113) )
              v67 = HIDWORD(v113);
            if ( v68 >= v67 )
            {
LABEL_37:
              v67 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
              v68 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
              v109 = 0LL;
              v66 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
              v65 = _mm_cvtsi128_si32((__m128i)0LL);
            }
            v72 = v20[5];
            v73 = -*(_DWORD *)(v72 + 92);
            v74 = -*(_DWORD *)(v72 + 88);
            v75 = v65 - *(_DWORD *)(v72 + 88);
            HIDWORD(v109) = v67 - *(_DWORD *)(v72 + 92);
            v4 = v110;
            v76 = v73 + v68;
            *(_QWORD *)&v109 = __PAIR64__(v76, v75);
            DWORD2(v109) = v74 + v66;
          }
          else
          {
            v76 = DWORD1(v109);
            v75 = v109;
          }
          GreSetDCOrg(*((_QWORD *)i + 2), v75, v76, &v109);
          GreGetBounds(*((_QWORD *)i + 2), 0LL, 5LL);
        }
        else
        {
          v77 = W32GetUserSessionState(v14, v13, v15, v16);
          GreCopyVisRgn(*(HDC *)(a1 + 16), *(HRGN *)(v77 + 43088));
          v82 = *(HRGN *)(W32GetUserSessionState(v79, v78, v80, v81) + 43088);
          v87 = W32GetUserSessionState(v84, v83, v85, v86);
          SetMonitorRegion(a2, *(HRGN *)(v87 + 43088), v82);
          v92 = W32GetUserSessionState(v89, v88, v90, v91);
          GreSelectVisRgn(*((_QWORD *)i + 2), *(HRGN *)(v92 + 43088), 2);
          v93 = *(_OWORD *)GetMonitorRect(&v113, a2);
          v113 = v93;
          if ( v4 )
            v109 = v93;
          else
            GreGetDCOrgEx(*(HDC *)(a1 + 16), &v111);
          HIDWORD(v109) -= DWORD1(v113);
          DWORD2(v109) -= v113;
          v94 = *((_QWORD *)i + 2);
          LODWORD(v109) = v109 - v113;
          DWORD1(v109) -= DWORD1(v113);
          GreSetDCOrg(v94, (unsigned int)v109, DWORD1(v109), &v109);
        }
        if ( (int)IsGreHintDCWndSupported() >= 0 )
          GreHintDCWnd(*((_QWORD *)i + 2), **((_QWORD **)i + 10), 0, 0, 0, 0);
        if ( v20 && (*(_BYTE *)(v20[5] + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 )
        {
          v99 = v20[5];
          v100 = *(_WORD *)(v99 + 42) & 0x2FFF;
          v101 = v100 == 669;
          LOBYTE(v100) = ~*(_BYTE *)(v99 + 27);
          GreHintDCWnd(
            *((_QWORD *)i + 2),
            **((_QWORD **)i + 10),
            *v20,
            *(_QWORD *)(v20[2] + 456LL),
            (v100 >> 1) & 1,
            v101);
        }
        v102 = W32GetUserSessionState(v96, v95, v97, v98);
        --*(_DWORD *)(v102 + 19692);
        if ( v4 )
        {
          *((_DWORD *)i + 12) |= 0x80000000;
          *((_QWORD *)i + 7) = 0LL;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v103);
          if ( CurrentProcessWin32Process )
          {
            v105 = -*(_QWORD *)CurrentProcessWin32Process;
            CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          }
          *((_QWORD *)i + 8) = CurrentProcessWin32Process;
          v106 = PsGetCurrentProcessWin32Process(v105);
          if ( v106 )
            v106 &= -(__int64)(*(_QWORD *)v106 != 0LL);
          *(_DWORD *)(v106 + 12) |= 0x200u;
        }
        v107 = *((_QWORD *)i + 7);
        if ( v107 )
          v108 = *(_QWORD *)(v107 + 456);
        else
          v108 = *((_QWORD *)i + 8);
        UpdateDCEInUseCount(1LL, v108);
        return *((_QWORD *)i + 2);
      }
    }
    result = CreateCacheDC(0LL);
    if ( result )
      continue;
    return result;
  }
}
