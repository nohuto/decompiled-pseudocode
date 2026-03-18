/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x140082180 (UserSetDCVisRgn.c)
 * Callees:
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140013030 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?ReleaseLock@GrePushLock@@QEBAXXZ @ 0x1400150BC (-ReleaseLock@GrePushLock@@QEBAXXZ.c)
 *     ??$GrepReleaseLockValidate@$0L@@@YAXXZ @ 0x140015598 (--$GrepReleaseLockValidate@$0L@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0L@@@YAXXZ @ 0x140015634 (--$GrepAcquireLockValidate@$0L@@@YAXXZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140017E8C (-PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?AcquireLockExclusive@GreInnermostPushLock@@QEAAXXZ @ 0x140017EF0 (-AcquireLockExclusive@GreInnermostPushLock@@QEAAXXZ.c)
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?ReleaseLock@GreInnermostPushLock@@QEBAXXZ @ 0x14001B2E0 (-ReleaseLock@GreInnermostPushLock@@QEBAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x14001ED10 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x140026D44 (-vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     HmgDecProcessHandleCount @ 0x140056DC4 (HmgDecProcessHandleCount.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1400820A8 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     HmgIncProcessHandleCount @ 0x1400C5A0C (HmgIncProcessHandleCount.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1400FEB6C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vReleaseVis@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140179DF8 (-vReleaseVis@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall ResetOrg(HRGN a1, struct tagDCE *a2, int a3)
{
  __int64 v3; // rax
  __int64 v6; // rcx
  __m128i v7; // xmm6
  LONG right; // r12d
  LONG bottom; // esi
  __int64 v10; // rcx
  int (*v11)(void); // rax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rdi
  int (*v15)(void); // rax
  __int64 (__fastcall *v16)(__int64); // rax
  __int64 v17; // rax
  int v18; // r15d
  int v19; // edi
  __int64 v20; // rax
  int v21; // eax
  int v22; // r15d
  int v23; // edi
  int v24; // r12d
  volatile signed __int16 *v25; // rcx
  _QWORD **v26; // rax
  __int64 v27; // rax
  _QWORD **v28; // rax
  __int64 v29; // rdi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 SessionState; // rax
  __int128 v41; // kr00_16
  __int64 v42; // rdi
  struct Gre::Base::SESSION_GLOBALS *v43; // rcx
  __int64 *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  struct Gre::Base::SESSION_GLOBALS *v49; // r12
  HSEMAPHORE v50; // rsi
  DC *v51; // rcx
  struct _ENTRY *v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rdi
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rax
  DC *v61; // rdi
  _DWORD *v62; // r14
  __int64 v63; // rbx
  _QWORD *v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 *v68; // rax
  __int64 v69; // r10
  __int64 v70; // r11
  __int64 v71; // rax
  int v72; // eax
  int v73; // edx
  int v74; // r8d
  int v75; // r9d
  bool v76; // zf
  __int64 v77; // rax
  __int64 v78; // r14
  int v79; // r8d
  DC *v80; // rdi
  DC *v81; // rcx
  struct _ENTRY *v82; // rax
  DC *v83; // rbx
  __int64 v84; // rcx
  struct _GRETHREAD *v85; // rax
  __int64 v86; // rcx
  _QWORD **v87; // rax
  __int64 v88; // rax
  __int128 v89; // kr10_16
  __int64 v90; // r14
  unsigned int v91; // ebx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // r9
  __int64 v96; // r8
  __int64 v97; // rbx
  __int64 v98; // r10
  const struct BaseRustExports *v99; // rdi
  const struct REGION_CORE *v100; // rsi
  int v101; // ebx
  _DWORD *v102; // rcx
  __int64 *v103; // rbx
  __int64 v104; // rbx
  bool v105; // cc
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  LONG top; // r9d
  LONG v110; // r8d
  LONG v111; // edx
  HSURF v112; // rdx
  int v113; // r10d
  int v114; // r8d
  int v115; // r9d
  int v116; // edx
  int v117; // r9d
  unsigned int *i; // rax
  __int64 v119; // rdx
  unsigned int *v120; // r8
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  __m128i v124; // [rsp+30h] [rbp-D0h]
  __m128i v125; // [rsp+30h] [rbp-D0h]
  struct _RECTL v126; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v128; // [rsp+40h] [rbp-C0h] BYREF
  LONG left; // [rsp+48h] [rbp-B8h]
  __int64 v130; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v131; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v132; // [rsp+60h] [rbp-A0h]
  __int64 *v133; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v134)(); // [rsp+70h] [rbp-90h]
  __int64 v135; // [rsp+78h] [rbp-88h]
  DC *v136; // [rsp+80h] [rbp-80h] BYREF
  int v137; // [rsp+88h] [rbp-78h]
  struct Gre::Base::SESSION_GLOBALS *v138; // [rsp+90h] [rbp-70h]
  __int64 v139; // [rsp+98h] [rbp-68h]
  __int128 v140; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v141; // [rsp+B0h] [rbp-50h]
  __int64 v142; // [rsp+C0h] [rbp-40h] BYREF
  int v143; // [rsp+C8h] [rbp-38h]
  __int64 v144; // [rsp+D0h] [rbp-30h]
  __int64 v145; // [rsp+D8h] [rbp-28h]
  __int128 v146; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v147; // [rsp+F0h] [rbp-10h]
  _DWORD *v148; // [rsp+100h] [rbp+0h] BYREF
  __int64 v149; // [rsp+108h] [rbp+8h] BYREF
  _QWORD **v150; // [rsp+110h] [rbp+10h]
  int v151; // [rsp+130h] [rbp+30h]
  __int64 v152; // [rsp+138h] [rbp+38h] BYREF
  __int64 v153; // [rsp+140h] [rbp+40h] BYREF
  _QWORD **v154; // [rsp+148h] [rbp+48h]
  int v155; // [rsp+168h] [rbp+68h]
  __int64 v156; // [rsp+170h] [rbp+70h] BYREF
  __int64 v157; // [rsp+178h] [rbp+78h] BYREF
  _QWORD **v158; // [rsp+180h] [rbp+80h]
  int v159; // [rsp+1A0h] [rbp+A0h]
  struct _RECTL v160; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v161; // [rsp+1C0h] [rbp+C0h]

  v3 = *((_QWORD *)a2 + 10);
  LODWORD(v130) = a3;
  v124.m128i_i64[0] = 0LL;
  v6 = *(_QWORD *)(v3 + 40);
  if ( (*(_WORD *)(v6 + 42) & 0x2FFF) == 0x29D )
  {
    v92 = *(_QWORD *)(W32GetUserSessionState() + 56968);
    v93 = *(_QWORD *)(*(_QWORD *)v92 + 24LL);
    right = *(_QWORD *)(*(_QWORD *)v92 + 32LL) - v93;
    bottom = HIDWORD(*(_QWORD *)(*(_QWORD *)v92 + 32LL)) - HIDWORD(v93);
    v124.m128i_i64[1] = __PAIR64__(bottom, right);
    v7 = v124;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 12) & 1) != 0 )
    {
      v7 = *(__m128i *)(v6 + 88);
      right = *(_DWORD *)(v6 + 96);
    }
    else
    {
      v7 = *(__m128i *)(v6 + 104);
      right = *(_DWORD *)(v6 + 112);
    }
    bottom = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12));
    v124.m128i_i64[0] = v7.m128i_i64[0];
  }
  v10 = *((_QWORD *)a2 + 9);
  if ( !v10 || (*((_DWORD *)a2 + 12) & 0x4000) != 0 )
  {
    left = _mm_cvtsi128_si32(v7);
    LODWORD(v128) = _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
  }
  else
  {
    v160 = *(struct _RECTL *)(*(_QWORD *)(v10 + 40) + 28LL);
    right -= v160.left;
    left = v124.m128i_i32[0] - v160.left;
    v124.m128i_i32[0] -= v160.left;
    bottom -= v160.top;
    v124.m128i_i64[1] = __PAIR64__(bottom, right);
    LODWORD(v128) = v124.m128i_i32[1] - v160.top;
    v124.m128i_i32[1] -= v160.top;
    if ( a1 )
      SetMonitorRegion((struct tagMONITOR *)v10, a1, a1);
    v7 = v124;
  }
  if ( (*((_DWORD *)a2 + 12) & 0x4000000) != 0 )
    goto LABEL_30;
  v10 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v10) + 48);
  v11 = *(int (**)(void))(v10 + 2200);
  if ( !v11 || v11() < 0 )
    goto LABEL_40;
  v12 = *((_QWORD *)a2 + 10);
  v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10) + 48) + 2208LL);
  v14 = v13 ? v13(v12) : 0LL;
  if ( !v14 )
    goto LABEL_40;
  if ( (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 24LL) & 0x20000000) == 0
    || (v10 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v10) + 48), (v15 = *(int (**)(void))(v10 + 2216)) == 0LL)
    || v15() < 0
    || (v10 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v10) + 48),
        (v16 = *(__int64 (__fastcall **)(__int64))(v10 + 2224)) == 0LL)
    || !v16(v14) )
  {
LABEL_30:
    if ( a1 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v156, a1, 0, 0);
      v27 = v156;
      if ( v156 )
      {
        v160 = 0LL;
        RGNOBJ::vSet((RGNOBJ *)&v156, &v160);
        v27 = v156;
      }
      if ( !v159 )
      {
        RGNOBJ::UpdateUserRgn((RGNOBJ *)&v156);
        v27 = v156;
      }
      if ( v27 )
        _InterlockedDecrement16((volatile signed __int16 *)(v27 + 12));
      v10 = v157;
      v28 = v158;
      if ( *(__int64 **)(v157 + 8) != &v157 || *v158 != &v157 )
LABEL_45:
        __fastfail(3u);
      *v158 = (_QWORD *)v157;
      *(_QWORD *)(v10 + 8) = v28;
    }
LABEL_40:
    v24 = v128;
    goto LABEL_41;
  }
  v17 = *(_QWORD *)(v14 + 40);
  v18 = *(_DWORD *)(v17 + 88);
  v19 = *(_DWORD *)(v17 + 92);
  v20 = *((_QWORD *)a2 + 9);
  if ( !v20 || *((int *)a2 + 12) >= 0 )
    goto LABEL_19;
  v108 = *(_QWORD *)(v20 + 40);
  right += v18;
  bottom += v19;
  top = v19 + v128;
  left += v18;
  v110 = left;
  v160 = *(struct _RECTL *)(v108 + 28);
  if ( left <= v160.left )
  {
    left = v160.left;
    v110 = v160.left;
  }
  v10 = *(_QWORD *)&v160.right;
  v111 = right;
  if ( right >= v160.right )
  {
    right = v160.right;
    v111 = v160.right;
  }
  if ( v110 >= v111 )
    goto LABEL_177;
  if ( top <= v160.top )
    top = v160.top;
  v10 = HIDWORD(*(_QWORD *)&v160.right);
  LODWORD(v128) = top;
  if ( bottom >= v160.bottom )
    bottom = v160.bottom;
  if ( top >= bottom )
  {
LABEL_177:
    bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    LODWORD(v128) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
    right = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
    v21 = _mm_cvtsi128_si32((__m128i)0LL);
  }
  else
  {
LABEL_19:
    v21 = left;
  }
  v22 = -v18;
  v23 = -v19;
  v125.m128i_i32[2] = v22 + right;
  v24 = v23 + v128;
  left = v22 + v21;
  v125.m128i_i32[0] = v22 + v21;
  v125.m128i_i32[3] = v23 + bottom;
  v125.m128i_i32[1] = v23 + v128;
  if ( !a1 )
    goto LABEL_29;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v148, a1, 0, 0);
  v25 = (volatile signed __int16 *)v148;
  v128 = 0LL;
  if ( v148 )
  {
    v128 = __PAIR64__(v23, v22);
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v99 = *(const struct BaseRustExports **)WPP_MAIN_CB.Dpc.DeferredContext;
      v100 = (const struct REGION_CORE *)(v148 + 6);
      v101 = (*(__int64 (__fastcall **)(_DWORD *, unsigned __int64 *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 96LL))(
               v148 + 6,
               &v128);
      RgnCaptureLiveMemoryDumpOnZeroSizedScan(v99, v100);
      if ( v101 && WPP_MAIN_CB.Dpc.DeferredContext )
      {
        v102 = v148 + 6;
        if ( !v148 )
          v102 = 0LL;
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 32LL))(v102);
        v25 = (volatile signed __int16 *)v148;
        goto LABEL_22;
      }
    }
    else
    {
      if ( v148[12] == 1 )
        goto LABEL_22;
      v94 = (int)v148[13];
      v95 = (int)v148[15];
      v96 = (int)v148[16];
      v97 = (int)v148[14];
      v160.left = v94;
      v160.bottom = v96;
      if ( (int)v94 >= (int)v95 || (int)v97 >= (int)v96 )
        goto LABEL_22;
      v98 = v22 + v94;
      if ( v98 >= (__int64)0xFFFFFFFF80000000uLL && v98 <= 0x7FFFFFFF )
      {
        v121 = v23 + v96;
        v160.left = v22 + v94;
        if ( v121 >= (__int64)0xFFFFFFFF80000000uLL && v121 <= 0x7FFFFFFF )
        {
          v122 = v22 + v95;
          v160.bottom = v121;
          if ( v122 >= (__int64)0xFFFFFFFF80000000uLL && v122 <= 0x7FFFFFFF )
          {
            v123 = v23 + v97;
            v160.right = v122;
            if ( v123 >= (__int64)0xFFFFFFFF80000000uLL && v123 <= 0x7FFFFFFF )
            {
              v160.top = v123;
              v113 = v98 & 0xF8000000;
              if ( !v113 || v113 == -134217728 )
              {
                v114 = v121 & 0xF8000000;
                if ( !v114 || v114 == -134217728 )
                {
                  v115 = v122 & 0xF8000000;
                  if ( !v115 || v115 == -134217728 )
                  {
                    v116 = v123 & 0xF8000000;
                    if ( !v116 || v116 == -134217728 )
                    {
                      *(struct _RECTL *)(v148 + 13) = v160;
                      v117 = v148[12];
                      for ( i = (unsigned int *)*((_QWORD *)v148 + 3); v117; i += *i + 4 )
                      {
                        i[1] += v23;
                        --v117;
                        i[2] += v23;
                        v119 = *i;
                        if ( (_DWORD)v119 )
                        {
                          v120 = &i[v119 + 3];
                          do
                          {
                            *--v120 += v22;
                            LODWORD(v119) = v119 - 1;
                          }
                          while ( (_DWORD)v119 );
                        }
                      }
                      i[-*(i - 1) - 2] = 0x7FFFFFFF;
                      *(_DWORD *)(*((_QWORD *)v148 + 3) + 4LL) = 0x80000000;
                      v25 = (volatile signed __int16 *)v148;
                      goto LABEL_22;
                    }
                  }
                }
              }
            }
          }
        }
      }
      EngSetLastError(0x216u);
    }
    v25 = (volatile signed __int16 *)v148;
  }
LABEL_22:
  if ( !v151 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v148);
    v25 = (volatile signed __int16 *)v148;
  }
  if ( v25 )
    _InterlockedDecrement16(v25 + 6);
  v10 = v149;
  v26 = v150;
  if ( *(__int64 **)(v149 + 8) != &v149 || *v150 != &v149 )
    goto LABEL_45;
  *v150 = (_QWORD *)v149;
  *(_QWORD *)(v10 + 8) = v26;
LABEL_29:
  v7 = v125;
LABEL_41:
  v29 = *((_QWORD *)a2 + 2);
  v144 = *(_QWORD *)(W32GetSessionState(v10) + 88);
  v145 = 0LL;
  v142 = 0LL;
  v143 = 0;
  v146 = 0LL;
  v147 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
  if ( !CurrentThreadWin32Thread || (v31 = *CurrentThreadWin32Thread) == 0 )
  {
    *(_QWORD *)&v147 = &v142;
    *((_QWORD *)&v147 + 1) = UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic;
    goto LABEL_189;
  }
  *(_QWORD *)&v147 = &v142;
  *((_QWORD *)&v147 + 1) = UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic;
  v32 = v31 + 8;
  if ( !v32 )
  {
LABEL_189:
    *((_QWORD *)&v146 + 1) = &v146;
    *(_QWORD *)&v146 = &v146;
    goto LABEL_47;
  }
  v33 = *(_QWORD *)(v32 + 88);
  v34 = (_QWORD *)(v32 + 88);
  if ( *(_QWORD **)(v33 + 8) != v34 )
    goto LABEL_45;
  *(_QWORD *)&v146 = v33;
  *((_QWORD *)&v146 + 1) = v34;
  *(_QWORD *)(v33 + 8) = &v146;
  *v34 = &v146;
LABEL_47:
  v35 = HmgShareLock(v144, v29, 1LL, 1LL);
  v142 = v35;
  if ( v35 )
  {
    *(_DWORD *)(v35 + 8LL * (*(_DWORD *)(v35 + 40) & 1) + 1016) = left;
    *(_DWORD *)(v142 + 8LL * (*(_DWORD *)(v142 + 40) & 1) + 1020) = v24;
    v36 = v142;
    v37 = *(_DWORD *)(v142 + 40) & 1;
    *(_DWORD *)(v142 + 1192) = *(_DWORD *)(v142 + 124) + *(_DWORD *)(v142 + 8 * v37 + 1016);
    *(_DWORD *)(v36 + 1196) = *(_DWORD *)(v36 + 128) + *(_DWORD *)(v36 + 8 * v37 + 1020);
    *(__m128i *)(v142 + 1032) = v7;
    v38 = v142;
    v39 = *(unsigned int *)(v142 + 520);
    if ( (v39 & 1) != 0 && (v39 & 2) == 0 )
    {
      v39 = (unsigned int)v39 | 4;
      *(_DWORD *)(v142 + 36) |= 0x10u;
      *(_DWORD *)(v38 + 520) = v39;
      v38 = v142;
    }
    if ( v38 )
    {
      SessionState = W32GetSessionState(v39);
      HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v142);
      v142 = 0LL;
    }
  }
  v41 = v146;
  if ( *(__int128 **)(v146 + 8) != &v146 || **((__int128 ***)&v146 + 1) != &v146 )
    goto LABEL_45;
  **((_QWORD **)&v146 + 1) = v146;
  *(_QWORD *)(v41 + 8) = *((_QWORD *)&v41 + 1);
  if ( !(_DWORD)v130 )
    return;
  v42 = *((_QWORD *)a2 + 2);
  v43 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v41) + 88);
  v139 = 0LL;
  v136 = 0LL;
  v137 = 0;
  v138 = v43;
  v140 = 0LL;
  v141 = 0LL;
  v44 = (__int64 *)PsGetCurrentThreadWin32Thread();
  if ( !v44 || (v45 = *v44) == 0 )
  {
    *(_QWORD *)&v141 = &v136;
    *((_QWORD *)&v141 + 1) = UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic;
    goto LABEL_191;
  }
  *((_QWORD *)&v141 + 1) = UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic;
  *(_QWORD *)&v141 = &v136;
  v46 = v45 + 8;
  if ( !v46 )
  {
LABEL_191:
    *((_QWORD *)&v140 + 1) = &v140;
    *(_QWORD *)&v140 = &v140;
    goto LABEL_59;
  }
  v47 = *(_QWORD *)(v46 + 88);
  v48 = (_QWORD *)(v46 + 88);
  if ( *(_QWORD **)(v47 + 8) != v48 )
    goto LABEL_45;
  *(_QWORD *)&v140 = v47;
  *((_QWORD *)&v140 + 1) = v48;
  *(_QWORD *)(v47 + 8) = &v140;
  *v48 = &v140;
LABEL_59:
  v136 = (DC *)HmgShareLock(v138, v42, 1LL, 1LL);
  if ( !v136 )
    goto LABEL_107;
  v49 = v138;
  v50 = (HSEMAPHORE)(*(_QWORD *)v138 + 1248LL);
  GreAcquireSemaphoreInternal(v50);
  GrepAcquireLockValidate<11>();
  v51 = v136;
  *((_DWORD *)v136 + 9) |= 0x10u;
  v52 = DC::PentryFromPobj(v51, v49);
  *((_BYTE *)v52 + 15) |= 4u;
  if ( !a1 )
  {
    DC::vReleaseVis(v136, v49);
    DC::bSetDefaultRegion(v136);
    goto LABEL_102;
  }
  PsGetCurrentProcessId();
  v54 = *(_QWORD **)(W32GetSessionState(v53) + 88);
  v130 = *v54 + 1512LL;
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v55, v130);
  HANDLELOCK::HANDLELOCK(&v160, v54, a1, 1LL);
  if ( v160.right )
  {
    v56 = *(_QWORD *)&v160.left;
    if ( *(_BYTE *)(*(_QWORD *)&v160.left + 14LL) == 4
      && *(_WORD *)(*(_QWORD *)&v160.left + 12LL) == WORD1(a1)
      && ((v90 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v161 + 8) + 96LL))(
                   *(_QWORD *)(v161 + 8),
                   **(unsigned int **)&v160.left),
           GreGetCurrentThread(),
           !*(_WORD *)(v90 + 12))
       || *(struct _KTHREAD **)(v90 + 16) == KeGetCurrentThread()) )
    {
      v91 = *(_DWORD *)(v56 + 8) & 0xFFFFFFFE;
      if ( v91 && (unsigned int)HmgIncProcessHandleCount(0LL) )
      {
        HmgDecProcessHandleCount(v54, v91);
        HANDLELOCK::Pid((HANDLELOCK *)&v160, 0);
        *(_WORD *)(v90 + 14) &= ~0x10u;
      }
    }
    else
    {
      BYTE1(v160.bottom) = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v160);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v160);
  SEMOBJ<20>::vUnlock(&v130);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v152, a1, 0, 0);
  if ( !v152 )
  {
    v78 = *((_QWORD *)v49 + 533);
    goto LABEL_92;
  }
  v58 = *(_QWORD *)v136;
  v59 = W32GetSessionState(v57);
  v60 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v59 + 88) + 8LL) + 16LL))(
          *(_QWORD *)(*(_QWORD *)(v59 + 88) + 8LL),
          (unsigned __int16)v58 | ((unsigned int)v58 >> 8) & 0xFF0000);
  if ( !v60
    || *(_BYTE *)(v60 + 14) != 1
    || *(_WORD *)(v60 + 12) != WORD1(v58)
    || (*(_DWORD *)(v60 + 8) & 0xFFFFFFFE) != 0x80000012 )
  {
    v61 = v136;
    v62 = (_DWORD *)v152;
    if ( (*((_DWORD *)v136 + 9) & 0x100000) != 0 )
    {
      v63 = *((_QWORD *)v136 + 6);
      if ( v63 )
      {
        if ( v152 )
        {
          v131 = 0LL;
          v132 = 0LL;
          v64 = (_QWORD *)PsGetCurrentThreadWin32Thread();
          if ( v64 && *v64 )
          {
            v65 = *v64 + 8LL;
            v133 = &v131;
            v66 = (unsigned __int64)UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic;
            v134 = UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic;
            if ( v65 )
            {
              v67 = *(_QWORD *)(v65 + 88);
              v68 = (__int64 *)(v65 + 88);
              if ( *(__int64 **)(v67 + 8) != v68 )
                goto LABEL_45;
              v131 = v67;
              v132 = v68;
              *(_QWORD *)(v67 + 8) = &v131;
              v66 = (unsigned __int64)&v131;
              *v68 = (__int64)&v131;
LABEL_79:
              v76 = (*((_DWORD *)v61 + 9) & 0x40000) == 0;
              v69 = 0LL;
              v135 = 0LL;
              if ( v76 )
              {
                v70 = *((_QWORD *)v61 + 62);
                v71 = 0LL;
              }
              else
              {
                v112 = (HSURF)*((_QWORD *)v61 + 268);
                if ( v112 )
                {
                  SURFREF::vLock((SURFREF *)&v131, v112);
                  v69 = v135;
                  v70 = v135;
                  v71 = v135;
                }
                else
                {
                  v70 = *(_QWORD *)(v63 + 2544);
                  v71 = 0LL;
                }
              }
              if ( v70 )
              {
                if ( (*(_DWORD *)(v63 + 40) & 0x20000) == 0 || *(int *)(v70 + 112) >= 0 )
                {
                  v72 = *((_DWORD *)v61 + 9);
                  v73 = v62[13];
                  v74 = v62[14];
                  v75 = v62[15];
                  v66 = (unsigned int)v62[16];
                  v126.left = v73;
                  *(_QWORD *)&v126.top = __PAIR64__(v75, v74);
                  v126.bottom = v62[16];
                  if ( ((v72 & 0x1000) == 0 || (v72 & 0x4000) != 0)
                    && v74 != (_DWORD)v66
                    && v73 != v75
                    && (v73 != 0x7FFFFFFF || (_DWORD)v66 != 0x80000000 || v74 != 0x7FFFFFFF || v75 != (_DWORD)v66) )
                  {
                    v103 = (__int64 *)(v70 + 668);
                    if ( (*(_DWORD *)(v70 + 116) & 0x800) == 0 )
                      v103 = (__int64 *)(v70 + 56);
                    v104 = *v103;
                    v105 = v73 <= v75;
                    if ( v73 < v75 )
                    {
                      if ( v74 < (int)v66 && v73 >= 0 && (int)v104 >= v75 && v74 >= 0 && SHIDWORD(v104) >= (int)v66 )
                      {
                        if ( v69 )
                        {
                          v106 = W32GetSessionState(v66);
                          HmgDecrementShareReferenceCount(*(_QWORD *)(v106 + 88), v135);
                        }
                        goto LABEL_89;
                      }
                      v105 = v73 <= v75;
                    }
                    if ( !v105 )
                    {
                      v73 = v62[15];
                      v126.left = v73;
                      v75 = v62[13];
                      v126.right = v75;
                    }
                    if ( v74 > (int)v66 )
                    {
                      v126.top = v62[16];
                      v74 = v126.top;
                      v126.bottom = v62[14];
                      v66 = (unsigned int)v126.bottom;
                    }
                    if ( v73 < 0 )
                    {
                      v73 = 0;
                      v126.left = 0;
                    }
                    if ( v74 < 0 )
                    {
                      v74 = 0;
                      v126.top = 0;
                    }
                    if ( (int)v104 < v75 )
                    {
                      v75 = v104;
                      v126.right = v104;
                    }
                    if ( SHIDWORD(v104) < (int)v66 )
                    {
                      v66 = HIDWORD(v104);
                      v126.bottom = HIDWORD(v104);
                    }
                    if ( v75 < v73 )
                    {
                      v126.left = v75;
                    }
                    else if ( (int)v66 < v74 )
                    {
                      v126.top = v66;
                    }
                    v160 = v126;
                    if ( v69 )
                    {
                      v107 = W32GetSessionState(v66);
                      HmgDecrementShareReferenceCount(*(_QWORD *)(v107 + 88), v135);
                    }
                    PopThreadGuardedObject(&v131);
                    RGNOBJ::vSet((RGNOBJ *)&v152, &v160);
                    goto LABEL_90;
                  }
                }
                v76 = v69 == 0;
              }
              else
              {
                v76 = v71 == 0;
              }
              if ( !v76 )
              {
                v77 = W32GetSessionState(v66);
                HmgDecrementShareReferenceCount(*(_QWORD *)(v77 + 88), v135);
              }
LABEL_89:
              PopThreadGuardedObject(&v131);
              goto LABEL_90;
            }
          }
          else
          {
            v66 = (unsigned __int64)UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic;
            v133 = &v131;
            v134 = UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic;
          }
          v132 = &v131;
          v131 = (__int64)&v131;
          goto LABEL_79;
        }
      }
    }
  }
LABEL_90:
  v78 = v152;
  if ( !(unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)&v152) )
    goto LABEL_95;
  v152 = 0LL;
LABEL_92:
  v80 = v136;
  v81 = v136;
  *((_DWORD *)v136 + 9) |= 0x10u;
  v82 = DC::PentryFromPobj(v81, v49);
  *((_BYTE *)v82 + 15) |= 4u;
  GreInnermostPushLock::AcquireLockExclusive((DC *)((char *)v80 + 1112));
  v130 = *((_QWORD *)v80 + 142);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v130);
  *((_QWORD *)v80 + 142) = *((_QWORD *)v49 + 533);
  GreInnermostPushLock::ReleaseLock((DC *)((char *)v80 + 1112));
  v83 = v136;
  GreInnermostPushLock::AcquireLockExclusive((DC *)((char *)v136 + 1112));
  *((_QWORD *)v136 + 142) = v78;
  *(_DWORD *)(v78 + 72) = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(v84) + 88)
                                                                          + 4248LL));
  v85 = GreGetCurrentThreadCrossSessionCheck();
  if ( v85 )
    *(_QWORD *)v85 &= ~0x4000000000uLL;
  GrePushLock::ReleaseLock((DC *)((char *)v83 + 1112));
LABEL_95:
  if ( !v155 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v152);
  if ( v152 )
    _InterlockedDecrement16((volatile signed __int16 *)(v152 + 12));
  v86 = v153;
  v87 = v154;
  if ( *(__int64 **)(v153 + 8) != &v153 || *v154 != &v153 )
    goto LABEL_45;
  *v154 = (_QWORD *)v153;
  *(_QWORD *)(v86 + 8) = v87;
LABEL_102:
  if ( v50 )
  {
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v86, (unsigned int)&LockRelease, v79, (_DWORD)v50, (__int64)L"VisRgnPublish");
    GrepReleaseLockValidate<11>();
    GreReleaseSemaphoreSharedInternal(v50);
  }
  if ( v136 )
  {
    v88 = W32GetSessionState(v86);
    HmgDecrementShareReferenceCount(*(_QWORD *)(v88 + 88), v136);
    v136 = 0LL;
  }
LABEL_107:
  v89 = v140;
  if ( *(__int128 **)(v140 + 8) != &v140 || **((__int128 ***)&v140 + 1) != &v140 )
    goto LABEL_45;
  **((_QWORD **)&v140 + 1) = v140;
  *(_QWORD *)(v89 + 8) = *((_QWORD *)&v89 + 1);
}
