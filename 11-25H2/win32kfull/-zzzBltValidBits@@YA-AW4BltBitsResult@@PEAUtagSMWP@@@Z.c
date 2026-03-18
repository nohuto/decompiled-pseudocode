/*
 * XREFs of ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetRedirectionBitmap @ 0x14001DFF0 (GetRedirectionBitmap.c)
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1400317E0 (PhysicalToLogicalInPlaceRgn.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400345C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SpbCheck @ 0x14005856C (SpbCheck.c)
 *     GetStyleWindow @ 0x14005A130 (GetStyleWindow.c)
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x14005BB80 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     DeleteOldRedirectionBitmap @ 0x14005DBBC (DeleteOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x14005DC14 (GetOldRedirectionBitmap.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     GreHintDCWnd @ 0x14009A6C0 (GreHintDCWnd.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1400DB204 (GreRedrawSpriteOverlapPresent.c)
 *     UnionRect @ 0x1401524B8 (UnionRect.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1401554B0 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x140155710 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     FreeSpb @ 0x140156450 (FreeSpb.c)
 *     SpbCheckRect @ 0x1401566D4 (SpbCheckRect.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1401A96B0 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1401CA320 (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     UpdateSpriteArea @ 0x1401DB604 (UpdateSpriteArea.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     FindSpb @ 0x1402B0DE8 (FindSpb.c)
 *     RestoreSpb @ 0x1402B0E30 (RestoreSpb.c)
 *     GreClientRgnDone @ 0x140302864 (GreClientRgnDone.c)
 *     GreUnlockDisplayArea @ 0x14032FFA0 (GreUnlockDisplayArea.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzBltValidBits(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // r15
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r14
  int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  struct tagWND *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rbx
  __m128i v29; // xmm0
  int v30; // ecx
  int v31; // edx
  char v32; // bl
  unsigned int v33; // edi
  unsigned int v34; // r12d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 *v39; // r13
  HRGN v40; // rdx
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // r14d
  __int64 v45; // rsi
  __int64 RedirectionBitmap; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // r15d
  int v53; // r12d
  int v54; // edi
  int v55; // ebx
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  unsigned int v71; // edi
  unsigned int v72; // ebx
  __int64 v73; // rax
  __int64 v74; // r15
  __int64 v75; // r8
  __int64 v76; // rax
  HRGN v77; // rdi
  int v78; // eax
  int v79; // r12d
  __int64 v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  unsigned int v84; // ebx
  __int64 v85; // rdi
  __int64 v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  struct tagWND *StyleWindow; // rax
  struct tagWND *v98; // rbx
  HDC v99; // rdi
  __int64 OldRedirectionBitmap; // r15
  int v101; // r12d
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rax
  HDC v109; // r9
  __int64 v110; // rax
  HRGN v111; // rdi
  HRGN v112; // rbx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rax
  int v117; // eax
  __int64 v118; // rcx
  __int64 v119; // rax
  int v120; // r12d
  int v121; // esi
  int v122; // r15d
  __int64 v123; // rdi
  __int64 v124; // rdx
  __int64 v125; // rcx
  HDC v126; // rbx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  HDC v130; // rbx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rdi
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rbx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rdi
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rbx
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rdi
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rbx
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rax
  HRGN v159; // rdi
  HRGN v160; // rbx
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rbx
  __int64 v168; // rax
  __int64 v169; // r9
  __int64 v170; // r8
  __int64 v171; // rdi
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // rdi
  __int64 v177; // rbx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rax
  int v181; // eax
  char *Spb; // rax
  __int64 v183; // rdx
  int v184; // eax
  __int64 v185; // rdx
  __int64 v186; // rcx
  int v187; // edi
  __int64 v188; // rax
  __int64 v189; // r9
  __int64 v190; // r8
  __int64 v191; // rbx
  __int64 v192; // rdx
  __int64 v193; // rcx
  HRGN v194; // rbx
  __int64 v195; // rax
  __int64 *v196; // rdi
  int v197; // ebx
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // rax
  HDC v201; // rbx
  __int64 v202; // rax
  int v204; // edi
  __int64 *v205; // rbx
  int v206; // [rsp+68h] [rbp-A0h]
  int valid; // [rsp+6Ch] [rbp-9Ch]
  int v208; // [rsp+6Ch] [rbp-9Ch]
  int v209; // [rsp+70h] [rbp-98h]
  char v210; // [rsp+74h] [rbp-94h]
  int v211; // [rsp+74h] [rbp-94h]
  int v212; // [rsp+78h] [rbp-90h]
  HRGN v213; // [rsp+80h] [rbp-88h] BYREF
  int v214; // [rsp+88h] [rbp-80h]
  int v215; // [rsp+8Ch] [rbp-7Ch]
  __int128 v216; // [rsp+98h] [rbp-70h] BYREF
  HDC v217; // [rsp+A8h] [rbp-60h] BYREF
  struct tagWND *v218; // [rsp+B0h] [rbp-58h]
  HDC v219; // [rsp+B8h] [rbp-50h]
  struct tagWND *v220; // [rsp+C0h] [rbp-48h]
  HRGN v221; // [rsp+C8h] [rbp-40h]
  _QWORD v222[3]; // [rsp+D0h] [rbp-38h] BYREF
  __m128i v223; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v224; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v225; // [rsp+108h] [rbp+0h] BYREF

  v222[0] = a1;
  v217 = 0LL;
  v225 = 0LL;
  v2 = 0;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  ++*(_DWORD *)(UserSessionState + 70600);
  v7 = W32GetUserSessionState(v6, v5);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v7 + 56968) + 48LL));
  valid = BltValidInit((struct tagSMWP *)v3, v8);
  if ( !valid )
    goto LABEL_151;
  v11 = 0LL;
  v12 = *(_DWORD *)(v3 + 28) - 1;
  v13 = *(_QWORD *)(v3 + 40);
  if ( v12 < 0 )
    goto LABEL_151;
  do
  {
    LOBYTE(v9) = 1;
    v14 = HMValidateHandleNoSecure(*(_QWORD *)v13, v9);
    v15 = v14;
    if ( v14 && *(_QWORD *)(v14 + 104) && (unsigned int)IsStillWindowC(*(HWND *)(v13 + 8), v9) )
    {
      if ( *(_QWORD *)(v13 + 112) == 2LL
        && ((*(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL) & 1) == 0 || *(_QWORD *)(v15 + 104) != GetDesktopWindow(v15)) )
      {
        *(_QWORD *)(v13 + 112) = 0LL;
      }
      if ( !v11 )
        v11 = (_QWORD *)v13;
    }
    else
    {
      *(_QWORD *)v13 = 0LL;
      *(_DWORD *)(v13 + 32) = 6159;
    }
    v13 += 168LL;
    --v12;
  }
  while ( v12 >= 0 );
  if ( v11 )
  {
    v16 = *(struct tagWND **)(_HMObjectFromHandle(*v11) + 104);
    v220 = v16;
    v20 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 56968);
    if ( *(_QWORD *)(v20 + 40) )
      SpbCheck(v20, v19);
    zzzChangeStates(v16, (struct tagSMWP *)v3);
    v21 = 0;
    v212 = 0;
    v24 = PtiCurrent(v23, v22);
    if ( !(unsigned int)IsThreadDesktopComposed(v24) )
    {
      v27 = *(_DWORD *)(v3 + 28) - 1;
      v28 = *(_QWORD *)(v3 + 40);
      if ( v27 >= 0 )
      {
        do
        {
          v26 = *(_QWORD *)v28;
          if ( *(_QWORD *)v28 )
          {
            if ( (*(_DWORD *)(v28 + 32) & 8) == 0 )
            {
              _HMObjectFromHandle(v26);
              v25 = *(unsigned int *)(v28 + 72);
              if ( *(_QWORD *)(v28 + 72) )
              {
                v30 = -*(_DWORD *)(v28 + 76);
                v31 = -(int)v25;
                v216 = *(_OWORD *)(v28 + 56);
                v29 = (__m128i)v216;
                DWORD2(v216) += v31;
                HIDWORD(v216) += v30;
                DWORD1(v216) += v30;
                v223 = v29;
                LODWORD(v216) = v31 + _mm_cvtsi128_si32(v29);
                UnionRect(&v225, v223.m128i_i32, (int *)&v216);
                v21 = 1;
              }
            }
          }
          v28 += 168LL;
          --v27;
        }
        while ( v27 >= 0 );
        v212 = v21;
      }
    }
    v32 = *(_BYTE *)(*((_QWORD *)v16 + 5) + 31LL) & 2;
    v33 = ~((unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v26, v25) + 132, 0, 0) >> 14) & 2;
    v209 = v33;
    zzzLockDisplayAreaAndInvalidateDCCache(
      (ULONG_PTR)v16,
      v32 != 0 ? 28 : 26,
      (int *)((unsigned __int64)&v225 & -(__int64)(v21 != 0)));
    v34 = 96;
    v206 = 96;
    v37 = W32GetUserSessionState(v36, v35);
    v39 = *(__int64 **)(v3 + 40);
    v40 = *(HRGN *)(v37 + 63312);
    LODWORD(v37) = *(_DWORD *)(v3 + 28) - 1;
    v221 = v40;
    v215 = v37;
    if ( (int)v37 >= 0 )
    {
      v41 = valid;
      v209 = v33;
      while ( 1 )
      {
        v38 = *v39;
        v208 = --v41;
        if ( *v39 )
          break;
LABEL_131:
        v39 += 21;
        if ( --v215 < 0 )
        {
          v3 = v222[0];
          v16 = v220;
          v21 = v212;
          goto LABEL_133;
        }
      }
      if ( (v39[4] & 8) != 0 )
      {
LABEL_130:
        v41 = v208;
        goto LABEL_131;
      }
      _HMObjectFromHandle(v38);
      v209 = v33 | 1;
      v42 = _HMObjectFromHandle(*v39);
      v44 = *((_DWORD *)v39 + 22);
      v45 = v42;
      *(_QWORD *)&v216 = v42;
      v210 = v44;
      if ( (*(_BYTE *)(*(_QWORD *)(v42 + 40) + 26LL) & 8) != 0 )
      {
        RedirectionBitmap = GetRedirectionBitmap(v42, (__int64)v40);
        v43 = *(_QWORD *)(v45 + 40);
        if ( !RedirectionBitmap && (*(_BYTE *)(v43 + 27) & 0x20) == 0
          || (*(_DWORD *)(v43 + 232) & 2) == 0 && (*((_DWORD *)v39 + 39) & 7) == 0 )
        {
          goto LABEL_84;
        }
        *(_DWORD *)(v45 + 380) |= 0x4000u;
      }
      v47 = W32GetUserSessionState(v43, v40);
      if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v45, *(HRGN *)(v47 + 63320)) )
      {
        LOBYTE(v44) = v44 | 1;
        v210 = v44;
      }
      v51 = *(_QWORD *)(W32GetUserSessionState(v49, v48) + 56968);
      if ( *(_QWORD *)(v51 + 40) )
        SpbCheckRect((struct tagWND *)v45, (struct tagRECT *)(*(_QWORD *)(v45 + 40) + 88LL), 1u);
      if ( (v44 & 3) == 0 && *(_QWORD *)(*(_QWORD *)(v45 + 40) + 136LL) != 1LL )
      {
        v52 = *((_DWORD *)v39 + 16);
        v53 = *((_DWORD *)v39 + 14);
        if ( v52 > v53 )
        {
          v51 = *((unsigned int *)v39 + 15);
          v214 = *((_DWORD *)v39 + 17);
          LODWORD(v213) = v51;
          if ( v214 > (int)v51 )
          {
            v54 = *((_DWORD *)v39 + 19);
            v55 = *((_DWORD *)v39 + 18);
            v56 = W32GetUserSessionState(v51, v50);
            GreSetRectRgn(
              *(_QWORD *)(v56 + 63328),
              (unsigned int)(v53 - v55),
              (unsigned int)((_DWORD)v213 - v54),
              (unsigned int)(v52 - v55),
              v214 - v54);
            v57 = v39[12];
            v60 = *(_QWORD *)(W32GetUserSessionState(v59, v58) + 63328);
            v63 = W32GetUserSessionState(v62, v61);
            if ( (unsigned int)GreCombineRgn(*(_QWORD *)(v63 + 63336), v60, v57, 1LL) >= 2 )
            {
              if ( (v206 & 0x20) != 0
                || (v64 = *(_QWORD *)(W32GetUserSessionState(v51, v50) + 63344),
                    v67 = *(_QWORD *)(W32GetUserSessionState(v66, v65) + 63336),
                    v70 = W32GetUserSessionState(v69, v68),
                    (unsigned int)GreCombineRgn(*(_QWORD *)(v70 + 63336), v67, v64, 4LL) >= 2) )
              {
                v71 = *((_DWORD *)v39 + 18);
                if ( v71 || *((_DWORD *)v39 + 19) )
                {
                  v72 = *((_DWORD *)v39 + 19);
                  v73 = W32GetUserSessionState(v51, v50);
                  GreOffsetRgn(*(_QWORD *)(v73 + 63336), v71, v72);
                }
                v74 = v45;
                v75 = 0LL;
                while ( 1 )
                {
                  v76 = *(_QWORD *)(v74 + 40);
                  v77 = *(HRGN *)(v76 + 136);
                  if ( v77 == (HRGN)1 )
                    break;
                  if ( v77 )
                  {
                    v213 = *(HRGN *)(v76 + 136);
                    if ( v75 )
                    {
                      v78 = PhysicalToLogicalInPlaceRgn(v75, (__int64)&v213);
                      v77 = v213;
                      v79 = v78;
                    }
                    else
                    {
                      v79 = 0;
                    }
                    v80 = *(_QWORD *)(W32GetUserSessionState(v51, v50) + 63336);
                    v83 = W32GetUserSessionState(v82, v81);
                    v84 = GreCombineRgn(*(_QWORD *)(v83 + 63336), v80, v77, 4LL);
                    if ( v79 )
                      GreDeleteObject(v77);
                    if ( v84 < 2 )
                      break;
                    v75 = v74;
                  }
                  v74 = *(_QWORD *)(v74 + 104);
                  if ( !v74 || (*(_BYTE *)(*(_QWORD *)(v74 + 40) + 31LL) & 2) != 0 )
                  {
                    v85 = v39[15];
                    if ( !v85
                      || (v86 = *(_QWORD *)(W32GetUserSessionState(v51, v50) + 63336),
                          v89 = W32GetUserSessionState(v88, v87),
                          (unsigned int)GreCombineRgn(*(_QWORD *)(v89 + 63336), v86, v85, 4LL) >= 2) )
                    {
                      v90 = *(_QWORD *)(W32GetUserSessionState(v51, v50) + 63320);
                      v93 = *(_QWORD *)(W32GetUserSessionState(v92, v91) + 63336);
                      v96 = W32GetUserSessionState(v95, v94);
                      if ( (unsigned int)GreCombineRgn(*(_QWORD *)(v96 + 63336), v93, v90, 1LL) > 1 )
                        goto LABEL_65;
                    }
                    break;
                  }
                }
              }
            }
          }
        }
      }
      LOBYTE(v44) = v44 | 4;
      v210 = v44;
LABEL_65:
      if ( (v44 & 4) == 0 && (*((_DWORD *)v39 + 18) || *((_DWORD *)v39 + 19)) )
      {
        StyleWindow = (struct tagWND *)GetStyleWindow(v45, 2568);
        v218 = StyleWindow;
        v98 = StyleWindow;
        if ( StyleWindow && (v219 = (HDC)GetRedirectionBitmap((__int64)StyleWindow, v50), (v99 = v219) != 0LL) )
        {
          if ( (struct tagWND *)v45 == v98 )
          {
            if ( (*((_DWORD *)v39 + 39) & 1) != 0
              || *((_DWORD *)v39 + 18) != *((_DWORD *)v39 + 4) - *((_DWORD *)v39 + 20)
              || (v51 = (unsigned int)(*((_DWORD *)v39 + 5) - *((_DWORD *)v39 + 21)),
                  *((_DWORD *)v39 + 19) != (_DWORD)v51) )
            {
              OldRedirectionBitmap = GetOldRedirectionBitmap((__int64)v98, v50);
              v101 = -*((_DWORD *)v39 + 19);
              LODWORD(v213) = *((_DWORD *)v39 + 21);
              v214 = *((_DWORD *)v39 + 20);
              v211 = -*((_DWORD *)v39 + 18);
              v218 = *(struct tagWND **)(W32GetUserSessionState(v103, v102) + 63336);
              v219 = *(HDC *)(W32GetUserSessionState(v105, v104) + 43256);
              v108 = W32GetUserSessionState(v107, v106);
              if ( OldRedirectionBitmap )
              {
                v109 = *(HDC *)(v108 + 43248);
              }
              else
              {
                v109 = *(HDC *)(v108 + 43256);
                OldRedirectionBitmap = (__int64)v99;
              }
              UpdateSpriteArea(
                v98,
                (__int64)v99,
                OldRedirectionBitmap,
                v109,
                v219,
                (__int64)v218,
                (struct tagRECT *)(v39 + 7),
                v211,
                v101,
                v214,
                (int)v213);
            }
          }
          else
          {
            v119 = *((_QWORD *)v98 + 5);
            v120 = -*((_DWORD *)v39 + 19);
            v121 = -*((_DWORD *)v39 + 18);
            v44 = *(_DWORD *)(v119 + 92);
            v122 = *(_DWORD *)(v119 + 88);
            v123 = *(_QWORD *)(W32GetUserSessionState(v51, v50) + 63336);
            v126 = *(HDC *)(W32GetUserSessionState(v125, v124) + 43248);
            v129 = W32GetUserSessionState(v128, v127);
            UpdateSpriteArea(
              v218,
              (__int64)v219,
              (__int64)v219,
              *(HDC *)(v129 + 43248),
              v126,
              v123,
              (struct tagRECT *)(v39 + 7),
              v121,
              v120,
              v122,
              v44);
            v45 = v216;
            LOBYTE(v44) = v210;
          }
        }
        else if ( (*(_BYTE *)(*(_QWORD *)(v45 + 40) + 26LL) & 8) == 0 )
        {
          v130 = v217;
          if ( !v217 )
          {
            v130 = *(HDC *)(*(_QWORD *)(W32GetUserSessionState(v51, v50) + 56968) + 64LL);
            v217 = v130;
          }
          GreHintDCWnd(v130, *(_QWORD *)v45, 0LL, 0, 0);
          v133 = W32GetUserSessionState(v132, v131);
          GreSelectVisRgn(v130, *(_QWORD *)(v133 + 63336), 2LL);
          GreBitBltInternal(
            v130,
            *((_DWORD *)v39 + 14),
            *((_DWORD *)v39 + 15),
            *((_DWORD *)v39 + 16) - *((_DWORD *)v39 + 14),
            *((_DWORD *)v39 + 17) - *((_DWORD *)v39 + 15),
            v130,
            *((_DWORD *)v39 + 14) - *((_DWORD *)v39 + 18),
            *((_DWORD *)v39 + 15) - *((_DWORD *)v39 + 19),
            0xCC0020u,
            0,
            1u);
          GreHintDCWnd(v130, 0LL, 0LL, 0, 0);
        }
      }
      if ( *(char *)(*(_QWORD *)(v45 + 40) + 16LL) >= 0
        || (v44 & 2) != 0
        || (v110 = W32GetUserSessionState(v51, v50),
            v111 = (HRGN)v39[12],
            v112 = *(HRGN *)(v110 + 63320),
            v115 = W32GetUserSessionState(v114, v113),
            !CombineOldNewVis(*(HRGN *)(v115 + 63352), v111, v112, 4LL, v44)) )
      {
        if ( v39[12] )
        {
          v158 = W32GetUserSessionState(v51, v50);
          v159 = (HRGN)v39[12];
          v160 = *(HRGN *)(v158 + 63320);
          v163 = W32GetUserSessionState(v162, v161);
          if ( !CombineOldNewVis(*(HRGN *)(v163 + 63352), v159, v160, 2LL, v44) )
            goto LABEL_83;
        }
        else
        {
          v224 = *(_OWORD *)(*((_QWORD *)v220 + 5) + 88LL);
          TransformRectBetweenCoordinateSpaces(&v224, &v224, v45, v220);
          v157 = W32GetUserSessionState(v156, v155);
          SetRectRgnIndirect(*(_QWORD *)(v157 + 63352), &v224);
        }
LABEL_101:
        v34 = v206;
        if ( (v44 & 4) == 0 )
        {
          v164 = W32GetUserSessionState(v118, v40);
          if ( (v206 & 0x20) != 0 )
          {
            v167 = *(_QWORD *)(v164 + 63336);
            v168 = W32GetUserSessionState(v166, v165);
            v169 = 5LL;
            v170 = 0LL;
          }
          else
          {
            v171 = *(_QWORD *)(v164 + 63344);
            v167 = *(_QWORD *)(W32GetUserSessionState(v166, v165) + 63336);
            v168 = W32GetUserSessionState(v173, v172);
            v169 = 2LL;
            v170 = v171;
          }
          GreCombineRgn(*(_QWORD *)(v168 + 63344), v167, v170, v169);
          v34 = v206 & 0xFFFFFFDF;
          v206 &= ~0x20u;
        }
        if ( (v34 & 0x20) != 0 )
        {
          if ( (v44 & 4) != 0 )
            goto LABEL_111;
          v176 = *(_QWORD *)(W32GetUserSessionState(v118, v40) + 63336);
        }
        else
        {
          v176 = *(_QWORD *)(W32GetUserSessionState(v118, v40) + 63344);
        }
        v177 = *(_QWORD *)(W32GetUserSessionState(v175, v174) + 63352);
        v180 = W32GetUserSessionState(v179, v178);
        if ( (unsigned int)GreCombineRgn(*(_QWORD *)(v180 + 63352), v177, v176, 4LL) > 1 )
          goto LABEL_111;
LABEL_84:
        *(_DWORD *)(v45 + 380) &= ~0x4000u;
        LOBYTE(v44) = v44 | 8;
LABEL_111:
        if ( *(char *)(*(_QWORD *)(v45 + 40) + 16LL) < 0 )
        {
          v181 = *((_DWORD *)v39 + 8);
          if ( (v181 & 0x40) == 0 && (v181 & 0x87) != 7 )
          {
            Spb = (char *)FindSpb(v45);
            FreeSpb(Spb, v183);
          }
        }
        v38 = v39[12];
        if ( v38 )
        {
          GreDeleteObject(v38);
          v39[12] = 0LL;
        }
        if ( (v44 & 8) != 0 )
          goto LABEL_129;
        if ( (v44 & 5) == 4 )
        {
          v223.m128i_i8[0] = 0;
          v223.m128i_i64[1] = 0LL;
          AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v223);
          xxxInternalInvalidate((struct tagWND *)v45, (HRGN)1, 0x485u);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v223);
        }
        v213 = *(HRGN *)(W32GetUserSessionState(v38, v40) + 63352);
        v184 = LogicalToPhysicalInPlaceRgnWorker((const struct tagWND *)v45, &v213, 0);
        v187 = v184;
        if ( (v34 & 0x40) != 0 )
        {
          if ( !v208 && !v184 )
          {
            v221 = *(HRGN *)(W32GetUserSessionState(v186, v185) + 63352);
LABEL_128:
            v34 &= ~0x40u;
            v206 = v34;
LABEL_129:
            v33 = v209;
            goto LABEL_130;
          }
          v188 = W32GetUserSessionState(v186, v185);
          v189 = 5LL;
          v190 = 0LL;
        }
        else
        {
          v191 = *(_QWORD *)(W32GetUserSessionState(v186, v185) + 63312);
          v188 = W32GetUserSessionState(v193, v192);
          v189 = 2LL;
          v190 = v191;
        }
        v194 = v213;
        GreCombineRgn(*(_QWORD *)(v188 + 63312), v213, v190, v189);
        if ( v187 )
          GreDeleteObject(v194);
        goto LABEL_128;
      }
      v116 = W32GetUserSessionState(v51, v50);
      v117 = RestoreSpb(v45, *(_QWORD *)(v116 + 63352), &v217);
      if ( v117 )
      {
        if ( v117 == 2 && (v206 & 0x20) == 0 )
        {
          v134 = *(_QWORD *)(W32GetUserSessionState(v118, v40) + 63352);
          v137 = *(_QWORD *)(W32GetUserSessionState(v136, v135) + 63344);
          v140 = W32GetUserSessionState(v139, v138);
          GreCombineRgn(*(_QWORD *)(v140 + 63344), v137, v134, 4LL);
        }
        if ( (v44 & 1) != 0 )
          goto LABEL_95;
      }
      else if ( (v44 & 1) != 0 )
      {
LABEL_83:
        v34 = v206;
        goto LABEL_84;
      }
      v141 = *(_QWORD *)(W32GetUserSessionState(v118, v40) + 63320);
      v144 = *(_QWORD *)(W32GetUserSessionState(v143, v142) + 63352);
      v147 = W32GetUserSessionState(v146, v145);
      GreCombineRgn(*(_QWORD *)(v147 + 63352), v144, v141, 2LL);
LABEL_95:
      if ( (v44 & 0x20) == 0 )
      {
        v148 = *(_QWORD *)(W32GetUserSessionState(v118, v40) + 63352);
        v151 = *(_QWORD *)(W32GetUserSessionState(v150, v149) + 63336);
        v154 = W32GetUserSessionState(v153, v152);
        if ( (unsigned int)GreCombineRgn(*(_QWORD *)(v154 + 63336), v151, v148, 4LL) <= 1 )
          LOBYTE(v44) = v44 | 0x20;
      }
      goto LABEL_101;
    }
LABEL_133:
    if ( v21 )
    {
      v195 = W32GetUserSessionState(v38, v40);
      GreUnlockDisplayArea(*(_QWORD *)(*(_QWORD *)(v195 + 56968) + 48LL), &v225);
    }
    v196 = *(__int64 **)(v3 + 40);
    v197 = *(_DWORD *)(v3 + 28);
    while ( --v197 >= 0 )
    {
      v38 = *v196;
      if ( *v196 )
      {
        v40 = (HRGN)_HMObjectFromHandle(v38);
        if ( (*(_BYTE *)(*((_QWORD *)v40 + 5) + 26LL) & 8) != 0 )
          DeleteOldRedirectionBitmap((__int64)v40);
      }
      v196 += 21;
    }
    if ( (v34 & 0x40) == 0 )
    {
      if ( !*(_DWORD *)(v3 + 28) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5239LL);
      LOBYTE(v222[0]) = 0;
      v222[1] = 0LL;
      AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v222);
      xxxInternalInvalidate(v16, v221, 0x85u);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v222);
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v38, v40) + 43272) )
      GreClientRgnDone();
    v200 = W32GetUserSessionState(v199, v198);
    GreRedrawSpriteOverlapPresent(*(_QWORD *)(*(_QWORD *)(v200 + 56968) + 48LL));
    v201 = v217;
    if ( v217 )
    {
      GreSelectVisRgn(v217, 0LL, 1LL);
      GreGetBounds(v201, 0LL, 0LL);
    }
    v2 = v209;
  }
  else
  {
LABEL_151:
    v204 = *(_DWORD *)(v3 + 28) - 1;
    if ( v204 >= 0 )
    {
      v205 = (__int64 *)(*(_QWORD *)(v3 + 40) + 96LL);
      do
      {
        v10 = *v205;
        if ( *v205 )
        {
          GreDeleteObject(v10);
          *v205 = 0LL;
        }
        v205 += 21;
        --v204;
      }
      while ( v204 >= 0 );
    }
  }
  v202 = W32GetUserSessionState(v10, v9);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v202 + 56968) + 48LL));
  zzzEndDeferWinEventNotify();
  return v2;
}
