/*
 * XREFs of xxxEnumDisplayMonitors @ 0x14003FE60
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x14004D210 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     _HMPheFromObject @ 0x14003F320 (_HMPheFromObject.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x140040C50 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140040DDC (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     GetCurrentThreadCompositedDpi @ 0x140040DF8 (GetCurrentThreadCompositedDpi.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreIntersectClipRect @ 0x140043770 (GreIntersectClipRect.c)
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     ReleaseCacheDC @ 0x140046EA0 (ReleaseCacheDC.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140063190 (TransformRectBetweenCoordinateSpaces.c)
 *     GetMonitorRectForDpi @ 0x140064158 (GetMonitorRectForDpi.c)
 *     GetStyleWindow @ 0x14008A0B8 (GetStyleWindow.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14008A5F0 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     GreGetClipBox @ 0x14008E7A0 (GreGetClipBox.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ @ 0x14009EA20 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14009F95C (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BAED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x14012B338 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(
        HDC a1,
        int *a2,
        __int64 (__fastcall *a3)(struct tagMONITOR *, HDC, struct tagRECT *, __int64),
        __int64 a4,
        int a5)
{
  HDC v6; // r12
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  ULONG_PTR v10; // r13
  __int64 StyleWindow; // rdi
  unsigned __int16 CurrentThreadCompositedDpi; // di
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 y; // rdx
  __int64 *v16; // rbx
  __int64 x; // rcx
  __m128i v18; // xmm2
  unsigned int v19; // ebx
  __int64 v20; // rdx
  ULONG_PTR v21; // rcx
  struct tagMONITOR *j; // r15
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 *v26; // rax
  __int64 v27; // rax
  unsigned __int16 v28; // bx
  __int64 v29; // rax
  __int128 v30; // xmm0
  unsigned int v31; // ecx
  unsigned __int64 v32; // rsi
  int v33; // rcx^4
  int v34; // eax
  signed int v35; // r9d
  unsigned __int64 v36; // rax
  __int128 v37; // rtt
  int v38; // r10d
  signed int v39; // r11d
  int v40; // edx
  unsigned __int64 v41; // rax
  int v42; // r9d
  unsigned __int64 v43; // r11
  int v44; // esi
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdi
  int v47; // ecx
  signed int v48; // r8d
  unsigned __int64 v49; // rax
  __int64 v50; // r10
  int v51; // ecx
  signed int v52; // r9d
  unsigned __int64 v53; // r8
  int v54; // ecx
  signed int v55; // r9d
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // rbx
  int v60; // r15d
  int v61; // r13d
  int v62; // r12d
  __m128i *MonitorRectForDpi; // rax
  __m128i v64; // xmm1
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // xmm1_8
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  ULONG_PTR i; // rbx
  int v74; // eax
  __int64 v75; // rax
  ULONG_PTR *v76; // rax
  ULONG_PTR v77; // rcx
  __int64 v78; // rax
  bool v79; // zf
  struct tagTHREADINFO *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rcx
  ULONG_PTR k; // rbx
  int v87; // eax
  __int64 v88; // rax
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v90; // rax
  HDC v91; // rdi
  __int64 v92; // rcx
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdx
  char *v98; // rbx
  tagDomLock *v99; // rcx
  char v100; // bl
  __int64 v101; // rax
  int (*v102)(void); // rax
  __int64 v103; // rbx
  __int64 (__fastcall *v104)(__int64, HDC, struct tagRECT *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)); // rax
  __int64 v105; // rax
  struct tagMONITOR *v106; // rax
  HDC MonitorDC; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  int v110; // ecx
  int v111; // edx
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // eax
  int v117; // eax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  int v121; // [rsp+30h] [rbp-D0h]
  int v122; // [rsp+30h] [rbp-D0h]
  struct _POINTL v123; // [rsp+40h] [rbp-C0h] BYREF
  HDC v124; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-B0h] BYREF
  struct tagMONITOR *v126; // [rsp+58h] [rbp-A8h]
  __int64 v127; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall *v128)(struct tagMONITOR *, HDC, struct tagRECT *, __int64); // [rsp+68h] [rbp-98h]
  __int64 v129; // [rsp+70h] [rbp-90h]
  __int64 v130; // [rsp+78h] [rbp-88h]
  __m128i v131; // [rsp+80h] [rbp-80h] BYREF
  __int128 v132; // [rsp+90h] [rbp-70h] BYREF
  __m128i v133; // [rsp+A0h] [rbp-60h]
  __int128 v134; // [rsp+B0h] [rbp-50h]
  char v135[16]; // [rsp+C0h] [rbp-40h] BYREF
  char v136[16]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v137; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v138; // [rsp+F0h] [rbp-10h] BYREF
  PERESOURCE *DomainLockRef; // [rsp+100h] [rbp+0h]
  char v140; // [rsp+108h] [rbp+8h] BYREF
  __int64 v141; // [rsp+110h] [rbp+10h]
  char v142; // [rsp+118h] [rbp+18h]
  __int64 v143; // [rsp+120h] [rbp+20h]
  char v144; // [rsp+128h] [rbp+28h]
  char v145; // [rsp+130h] [rbp+30h]

  v129 = a4;
  v128 = a3;
  v137 = 0LL;
  v123 = 0LL;
  v138 = 0LL;
  v6 = a1;
  v124 = a1;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged )
    v127 = *CurrentThreadNonPaged;
  else
    v127 = 0LL;
  BugCheckParameter3 = 0LL;
  v10 = 0LL;
  v130 = 0LL;
  StyleWindow = 0LL;
  if ( !v6 )
  {
    CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
    v16 = *(__int64 **)(W32GetUserSessionState(v14, v13) + 56968);
    x = *v16;
    if ( CurrentThreadCompositedDpi )
    {
      if ( *(_DWORD *)x == 1 )
      {
        UserSessionState = W32GetUserSessionState(x, y);
        v18 = *(__m128i *)GetMonitorRectForDpi(
                            v135,
                            *(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 104LL),
                            CurrentThreadCompositedDpi);
      }
      else
      {
        v59 = v16[14];
        v18 = 0LL;
        v131 = 0LL;
        if ( v59 )
        {
          v122 = _mm_cvtsi128_si32((__m128i)0LL);
          v60 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
          v61 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
          v62 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
          do
          {
            x = *(unsigned int *)(*(_QWORD *)(v59 + 40) + 24LL);
            if ( (x & 1) != 0 )
            {
              MonitorRectForDpi = (__m128i *)GetMonitorRectForDpi(v136, v59, CurrentThreadCompositedDpi);
              y = (unsigned int)v122;
              v64 = *MonitorRectForDpi;
              v65 = MonitorRectForDpi->m128i_i64[0];
              v66 = _mm_srli_si128(v64, 8).m128i_u64[0];
              if ( v122 >= (int)v65 )
                y = (unsigned int)v65;
              v67 = HIDWORD(v65);
              v131.m128i_i32[0] = y;
              v122 = y;
              if ( v61 >= (int)v67 )
                v61 = v67;
              v131.m128i_i32[1] = v61;
              if ( v62 <= (int)v66 )
                v62 = v66;
              v131.m128i_i32[2] = v62;
              if ( v60 <= SHIDWORD(v66) )
                v60 = HIDWORD(v66);
              v131.m128i_i32[3] = v60;
              v18 = _mm_load_si128(&v131);
            }
            v59 = *(_QWORD *)(v59 + 56);
          }
          while ( v59 );
          v6 = v124;
          v10 = BugCheckParameter3;
        }
      }
    }
    else
    {
      v18 = *(__m128i *)(x + 24);
    }
    v133 = v18;
    v137 = v18;
    if ( a2 )
    {
      v110 = v137.m128i_i32[2];
      v111 = v137.m128i_i32[0];
      if ( v133.m128i_i32[0] <= *a2 )
        v111 = *a2;
      v112 = a2[2];
      v137.m128i_i32[0] = v111;
      if ( v137.m128i_i32[2] >= v112 )
        v110 = v112;
      v137.m128i_i32[2] = v110;
      if ( v111 >= v110 )
        return 1LL;
      v113 = a2[1];
      y = v137.m128i_u32[1];
      x = v137.m128i_u32[3];
      if ( v137.m128i_i32[1] <= v113 )
        y = (unsigned int)v113;
      v114 = a2[3];
      v137.m128i_i32[1] = y;
      if ( v137.m128i_i32[3] >= v114 )
        x = (unsigned int)v114;
      v137.m128i_i32[3] = x;
      if ( (int)y >= (int)x )
        return 1LL;
    }
    goto LABEL_7;
  }
  v68 = W32GetUserSessionState(v9, v8);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v68 + 56968) + 48LL));
  v72 = *(_QWORD *)(W32GetUserSessionState(v70, v69) + 56968);
  for ( i = *(_QWORD *)(v72 + 24); ; i = *(_QWORD *)i )
  {
    v72 = *(_QWORD *)(W32GetUserSessionState(v72, v71) + 56968) + 24LL;
    if ( i == v72 )
      break;
    v74 = *(_DWORD *)(i + 48);
    if ( (v74 & 0x400800) == 0 && *(HDC *)(i + 16) == v6 && (v74 & 0x1000) != 0 && !*(_QWORD *)(i + 72) )
    {
      v10 = i;
      break;
    }
  }
  if ( v10 )
  {
    v79 = (*(_DWORD *)(v10 + 48) & 0x4000) == 0;
    v130 = *(_QWORD *)(v10 + 80);
    if ( !v79 )
      StyleWindow = GetStyleWindow();
    if ( (unsigned int)GreGetClipBox(v6) == 1 )
      goto LABEL_185;
    if ( StyleWindow
      && (*(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x2FFF) == 0x29D
      && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
    {
      TransformRectBetweenCoordinateSpaces(&v137, &v137, 0LL, StyleWindow);
    }
    if ( a2 )
    {
      v108 = v137.m128i_u32[0];
      v109 = v137.m128i_u32[2];
      if ( v137.m128i_i32[0] <= *a2 )
        v108 = (unsigned int)*a2;
      v115 = a2[2];
      v137.m128i_i32[0] = v108;
      if ( v137.m128i_i32[2] >= v115 )
        v109 = (unsigned int)v115;
      v137.m128i_i32[2] = v109;
      if ( (int)v108 >= (int)v109 )
        goto LABEL_184;
      v116 = a2[1];
      v108 = v137.m128i_u32[1];
      v109 = v137.m128i_u32[3];
      if ( v137.m128i_i32[1] <= v116 )
        v108 = (unsigned int)v116;
      v117 = a2[3];
      v137.m128i_i32[1] = v108;
      if ( v137.m128i_i32[3] >= v117 )
        v109 = (unsigned int)v117;
      v137.m128i_i32[3] = v109;
      if ( (int)v108 >= (int)v109 )
      {
LABEL_184:
        v137 = 0LL;
LABEL_185:
        v118 = W32GetUserSessionState(v109, v108);
        GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v118 + 56968) + 48LL));
        return 1LL;
      }
    }
    if ( StyleWindow )
    {
      if ( (*(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x2FFF) != 0x29D )
      {
        GreGetDCPoint(v6, 0x20u, &v123);
        x = (unsigned int)(*(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 88LL) + v123.x);
        v123.x += *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 88LL);
        v119 = *(_QWORD *)(StyleWindow + 40);
        y = (unsigned int)(*(_DWORD *)(v119 + 92) + v123.y);
        v123.y += *(_DWORD *)(v119 + 92);
        goto LABEL_162;
      }
    }
    else
    {
      GreGetDCPoint(v6, 0x20u, &v123);
    }
    x = (unsigned int)v123.x;
    y = (unsigned int)v123.y;
LABEL_162:
    v137.m128i_i32[0] += x;
    v137.m128i_i32[2] += x;
    v137.m128i_i32[3] += y;
    v137.m128i_i32[1] += y;
LABEL_7:
    v19 = 1;
    v121 = 1;
    v21 = *(_QWORD *)(W32GetUserSessionState(x, y) + 56968);
    for ( j = *(struct tagMONITOR **)(v21 + 112); ; j = (struct tagMONITOR *)*((_QWORD *)j + 7) )
    {
      if ( !j )
      {
        if ( v6 )
        {
          v105 = W32GetUserSessionState(v21, v20);
          GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v105 + 56968) + 48LL));
        }
        return v19;
      }
      v21 = *(unsigned int *)(*((_QWORD *)j + 5) + 24LL);
      if ( (v21 & 1) != 0 )
        break;
LABEL_63:
      ;
    }
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
    {
      v24 = (_QWORD *)W32GetCurrentThreadNonPaged();
      v25 = v24 ? *v24 : 0LL;
      if ( !*(_QWORD *)(v25 + 496)
        || ((v26 = (__int64 *)W32GetCurrentThreadNonPaged()) == 0LL ? (v27 = 0LL) : (v27 = *v26),
            (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v27 + 496) + 8LL) + 64LL) & 1) == 0) )
      {
        CurrentThreadDpiAwarenessContext = 18;
      }
    }
    v28 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v29 = *((_QWORD *)j + 5);
    v30 = *(_OWORD *)(v29 + 28);
    v31 = *(unsigned __int16 *)(v29 + 62);
    v32 = *(unsigned __int16 *)(v29 + 60);
    v132 = v30;
    if ( v28 )
    {
      v33 = DWORD1(v132);
      v34 = -(int)v132;
      v35 = ((int)v132 >> 31) & 0xFFFFFFFE;
      if ( (int)v132 >= 0 )
        v34 = v132;
      if ( v31
        && (v37 = (__int64)(((unsigned __int64)v31 >> 1) + v28 * (__int64)v34),
            v36 = (__int64)(((unsigned __int64)v31 >> 1) + v28 * (__int64)v34) / (int)v31,
            v38 = v37 / (int)v31,
            v36 <= 0x7FFFFFFF) )
      {
        if ( v35 <= -1 )
          v38 = -(int)v36;
      }
      else
      {
        v38 = 0x80000000;
        if ( v35 > -1 )
          v38 = 0x7FFFFFFF;
      }
      v39 = (SDWORD1(v132) >> 31) & 0xFFFFFFFE;
      v40 = -DWORD1(v132);
      if ( SDWORD1(v132) > 0 )
        v40 = DWORD1(v132);
      if ( v31
        && (v41 = (__int64)(((unsigned __int64)v31 >> 1) + v40 * (unsigned __int64)v28) / v31,
            v42 = v41,
            v41 <= 0x7FFFFFFF) )
      {
        if ( v39 <= -1 )
          v42 = -(int)v41;
      }
      else
      {
        v42 = 0x80000000;
        if ( v39 > -1 )
          v42 = 0x7FFFFFFF;
      }
      v43 = v32;
      v134 = v30;
      v44 = 0;
      v124 = (HDC)&v132;
      if ( (_DWORD)v43 )
      {
        v45 = (v43 >> 1) / (int)v43;
        if ( v45 > 0x7FFFFFFF )
          LODWORD(v45) = 0x7FFFFFFF;
      }
      else
      {
        LODWORD(v45) = 0x7FFFFFFF;
      }
      v46 = DWORD1(v134);
      *(_DWORD *)v124 = v38 + v45;
      v47 = v33 - v46;
      v48 = (((int)v46 - v33) >> 31) & 0xFFFFFFFE;
      if ( (int)v46 - v33 >= 0 )
        v47 = v46 - v33;
      if ( (_DWORD)v43 && (v49 = (__int64)((v43 >> 1) + v47 * (unsigned __int64)v28) / (int)v43, v49 <= 0x7FFFFFFF) )
      {
        if ( v48 <= -1 )
          LODWORD(v49) = -(int)v49;
      }
      else
      {
        LODWORD(v49) = 0x80000000;
        if ( v48 > -1 )
          LODWORD(v49) = 0x7FFFFFFF;
      }
      v50 = *((_QWORD *)&v134 + 1);
      *((_DWORD *)v124 + 1) = v42 + v49;
      v51 = v134 - v50;
      v52 = (((int)v50 - (int)v134) >> 31) & 0xFFFFFFFE;
      if ( (int)v50 - (int)v134 >= 0 )
        v51 = v50 - v134;
      if ( (_DWORD)v43 )
      {
        v53 = (__int64)((v43 >> 1) + v51 * (unsigned __int64)v28) / (int)v43;
        if ( v53 > 0x7FFFFFFF )
        {
          LODWORD(v53) = 0x80000000;
          if ( v52 > -1 )
            LODWORD(v53) = 0x7FFFFFFF;
        }
        else if ( v52 <= -1 )
        {
          LODWORD(v53) = -(int)v53;
        }
      }
      else
      {
        LODWORD(v53) = 0x80000000;
        if ( v52 > -1 )
          LODWORD(v53) = 0x7FFFFFFF;
      }
      v54 = v46 - HIDWORD(v50);
      v55 = ((HIDWORD(v50) - (int)v46) >> 31) & 0xFFFFFFFE;
      *((_DWORD *)v124 + 2) = v53 + *(_DWORD *)v124;
      if ( HIDWORD(v50) - (int)v46 >= 0 )
        v54 = HIDWORD(v50) - v46;
      if ( (_DWORD)v43 )
      {
        v56 = (__int64)((v43 >> 1) + v54 * (unsigned __int64)v28) / (__int64)v43;
        if ( v56 > 0x7FFFFFFF )
        {
          LODWORD(v56) = 0x80000000;
          if ( v55 > -1 )
            LODWORD(v56) = 0x7FFFFFFF;
        }
        else if ( v55 <= -1 )
        {
          LODWORD(v56) = -(int)v56;
        }
      }
      else
      {
        LODWORD(v56) = 0x80000000;
        if ( v55 > -1 )
          LODWORD(v56) = 0x7FFFFFFF;
      }
      *((_DWORD *)v124 + 3) = v56 + *((_DWORD *)v124 + 1);
    }
    else
    {
      v44 = 0;
    }
    v20 = (unsigned int)v132;
    if ( v137.m128i_i32[0] > (int)v132 )
      v20 = v137.m128i_u32[0];
    v21 = DWORD2(v132);
    v138.left = v20;
    if ( v137.m128i_i32[2] < SDWORD2(v132) )
      v21 = v137.m128i_u32[2];
    v138.right = v21;
    if ( (int)v20 >= (int)v21 )
      goto LABEL_62;
    v57 = DWORD1(v132);
    if ( v137.m128i_i32[1] > SDWORD1(v132) )
      LODWORD(v57) = v137.m128i_i32[1];
    v58 = HIDWORD(*((_QWORD *)&v132 + 1));
    v138.top = v57;
    if ( v137.m128i_i32[3] < SHIDWORD(v132) )
      LODWORD(v58) = v137.m128i_i32[3];
    v138.bottom = v58;
    if ( (int)v57 >= (int)v58 )
    {
LABEL_62:
      v19 = v121;
      v138 = 0LL;
      goto LABEL_63;
    }
    if ( v6 )
    {
      v106 = AdjustDisplayMonitor(j, &v138);
      MonitorDC = (HDC)GetMonitorDC(v10, v106, v106 != j);
      v91 = MonitorDC;
      if ( !MonitorDC )
        goto LABEL_87;
      v138.left -= v123.x;
      v138.right -= v123.x;
      v138.bottom -= v123.y;
      v138.top -= v123.y;
      GreIntersectClipRect(MonitorDC, v138.bottom);
    }
    else
    {
      v91 = 0LL;
    }
    v92 = v127;
    v126 = j;
    BugCheckParameter3 = *(_QWORD *)(v127 + 456);
    *(_QWORD *)(v127 + 456) = &BugCheckParameter3;
    _InterlockedAdd((volatile signed __int32 *)j + 2, 1u);
    if ( v6 )
    {
      v101 = W32GetUserSessionState(v92, v20);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v101 + 56968) + 48LL));
    }
    if ( a5 )
    {
      v93 = v128(j, v91, &v138, v129);
    }
    else
    {
      v102 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2704LL);
      if ( !v102 || v102() < 0 )
        goto LABEL_126;
      v103 = *(_QWORD *)j;
      v104 = *(__int64 (__fastcall **)(__int64, HDC, struct tagRECT *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2712LL);
      if ( !v104 )
      {
        v121 = 0;
LABEL_126:
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(14LL);
        v140 = 0;
        v96 = W32GetUserSessionState(v95, v94);
        v142 = 0;
        v141 = v96 + 42360;
        v143 = 0LL;
        v144 = 0;
        v145 = 0;
        if ( IS_USERCRIT_OWNED_SHAREDONLY() )
        {
          v145 = 1;
          if ( !v144 )
          {
            v98 = &v140;
            do
            {
              v99 = (tagDomLock *)*((_QWORD *)v98 - 1);
              if ( v99 )
              {
                if ( *v98 )
                  tagDomLock::LockExclusive(v99);
                else
                  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v99);
              }
              ++v44;
              v98 += 16;
            }
            while ( !v44 );
            v144 = 1;
          }
        }
        v100 = *(_BYTE *)(HMPheFromObject((int *)j, v97) + 25) & 1;
        if ( v144 && v145 && DomainLockRef )
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        v76 = (ULONG_PTR *)W32GetCurrentThreadNonPaged();
        if ( v76 )
          v77 = *v76;
        else
          v77 = 0LL;
        v78 = Win32HM_UnlockFromThread<0>(v77, (ULONG_PTR)&BugCheckParameter3);
        v21 = -1LL;
        v126 = 0LL;
        BugCheckParameter3 = -1LL;
        if ( !v78 || v100 )
        {
          v19 = 0;
          v121 = 0;
        }
        else
        {
          v19 = v121;
        }
        if ( v91 )
        {
          ReleaseCacheDC(v91, 0LL);
          v21 = BugCheckParameter3;
        }
        if ( !v19 )
        {
          v79 = v21 == -1LL;
          goto LABEL_100;
        }
        if ( v6 )
        {
          v82 = W32GetUserSessionState(v21, v20);
          GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v82 + 56968) + 48LL));
          v10 = 0LL;
          v85 = *(_QWORD *)(W32GetUserSessionState(v84, v83) + 56968);
          for ( k = *(_QWORD *)(v85 + 24); ; k = *(_QWORD *)k )
          {
            v85 = *(_QWORD *)(W32GetUserSessionState(v85, v20) + 56968) + 24LL;
            if ( k == v85 )
              break;
            v87 = *(_DWORD *)(k + 48);
            if ( (v87 & 0x400800) == 0 && *(HDC *)(k + 16) == v6 && (v87 & 0x1000) != 0 && !*(_QWORD *)(k + 72) )
            {
              v10 = k;
              break;
            }
          }
          if ( !v10 )
          {
            v120 = W32GetUserSessionState(v85, v20);
            GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v120 + 56968) + 48LL));
            Win32HMThreadLockBase<tagMONITOR,0,1>::~Win32HMThreadLockBase<tagMONITOR,0,1>((ULONG_PTR)&BugCheckParameter3);
            return 0LL;
          }
          if ( *(_QWORD *)(v10 + 80) != v130 )
          {
            v88 = W32GetUserSessionState(v85, v20);
            GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v88 + 56968) + 48LL));
            v79 = BugCheckParameter3 == -1LL;
LABEL_100:
            if ( !v79 )
            {
              v81 = PtiCurrent();
              Win32HM_UnlockFromThread<0>((ULONG_PTR)v81, (ULONG_PTR)&BugCheckParameter3);
            }
            return 0LL;
          }
          v21 = BugCheckParameter3;
          v19 = v121;
        }
        if ( v21 != -1LL )
        {
          v90 = PtiCurrent();
          Win32HM_UnlockFromThread<0>((ULONG_PTR)v90, (ULONG_PTR)&BugCheckParameter3);
        }
        goto LABEL_63;
      }
      v93 = v104(v103, v91, &v138, v129, (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v128);
    }
    v121 = v93;
    goto LABEL_126;
  }
LABEL_87:
  v75 = W32GetUserSessionState(v72, v71);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v75 + 56968) + 48LL));
  return 0LL;
}
