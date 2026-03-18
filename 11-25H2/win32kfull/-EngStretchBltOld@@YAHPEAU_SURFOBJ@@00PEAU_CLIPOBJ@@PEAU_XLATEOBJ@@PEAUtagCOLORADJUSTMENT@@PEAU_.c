/*
 * XREFs of ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x14022CD88
 * Callers:
 *     EngStretchBlt @ 0x140132EF0 (EngStretchBlt.c)
 * Callees:
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x14000AB94 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x140013B1C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x14006CB8C (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14006EF0C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     EngHTBlt @ 0x14006F20C (EngHTBlt.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DEA60 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     ?StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1401356B8 (-StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ?vInitStrDDA@stretch@@YAXPEAU_STRDDA@1@PEAU_RECTL@@11@Z @ 0x140136250 (-vInitStrDDA@stretch@@YAXPEAU_STRDDA@1@PEAU_RECTL@@11@Z.c)
 *     ?vInitBuffer@stretch@@YAXPEAU_XRUNLEN@1@PEAU_RECTL@@K@Z @ 0x1401364E4 (-vInitBuffer@stretch@@YAXPEAU_XRUNLEN@1@PEAU_RECTL@@K@Z.c)
 *     ?vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z @ 0x140143F00 (-vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x14014AFD0 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z @ 0x14017C180 (-vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z @ 0x140314430 (-vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z @ 0x140314650 (-vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z @ 0x1403146D0 (-vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z @ 0x140314760 (-vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EngStretchBltOld(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11,
        int *a12)
{
  struct _SURFOBJ *v13; // r10
  struct _SURFOBJ *v14; // r11
  struct _RECTL *v15; // r13
  struct _RECTL *v16; // r12
  unsigned int v17; // r8d
  PVOID *p_pvScan0; // rcx
  char *v19; // r15
  int v20; // edx
  int v21; // eax
  SIZEL v22; // rdi
  __int64 v23; // rbx
  unsigned int v24; // r14d
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // ecx
  LONG bottom; // eax
  LONG top; // r10d
  LONG v31; // r8d
  LONG right; // eax
  LONG left; // r9d
  LONG v34; // edx
  int v35; // eax
  int v36; // r11d
  int v37; // edx
  struct _SURFOBJ *v38; // rax
  LONG v39; // ecx
  LONG v40; // eax
  LONG v41; // r9d
  int v42; // ecx
  LONG v43; // r8d
  LONG v44; // edx
  LONG v45; // edx
  SURFOBJ *v46; // rax
  int v47; // eax
  unsigned int (__fastcall *v48)(_QWORD, SIZEL, _QWORD, XCLIPOBJ *, _QWORD, struct tagCOLORADJUSTMENT *, __int64 *, struct _RECTL *, __int128 *, __int64 *, unsigned int); // rax
  LONG v49; // ecx
  LONG v50; // eax
  PVOID *v51; // r13
  int v52; // eax
  Gre::Base *v53; // rcx
  struct Gre::Base::SESSION_GLOBALS *v54; // r9
  BOOL (__stdcall *v55)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r13
  unsigned __int64 v56; // rax
  int v57; // eax
  BOOL (__stdcall *v58)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  unsigned __int64 v59; // r9
  stretch *v60; // r8
  int v61; // eax
  int v62; // ecx
  __int64 v63; // rcx
  unsigned int v64; // ecx
  __int64 v65; // rbx
  int v66; // ecx
  int v67; // edx
  int v68; // ecx
  XCLIPOBJ *v69; // rdi
  int v70; // eax
  struct _RECTL *v71; // rcx
  LONG v72; // eax
  LONG v73; // ecx
  LONG v74; // edx
  LONG v75; // r8d
  LONG v76; // eax
  LONG v77; // ecx
  LONG v78; // r8d
  unsigned int v79; // eax
  unsigned int v80; // ecx
  _DWORD *v81; // rax
  _DWORD *v82; // rcx
  unsigned __int64 v83; // rdx
  unsigned int v84; // r8d
  unsigned int v85; // eax
  __int64 v86; // rcx
  HSURF v87; // r13
  struct tagCOLORADJUSTMENT *v88; // r8
  struct _SURFOBJ *v89; // r11
  __int64 v90; // r8
  int v91; // r8d
  _DWORD *v92; // r10
  LONG v93; // r9d
  int v94; // eax
  unsigned __int64 v95; // r12
  int v96; // edx
  __int64 v97; // rax
  PVOID *v98; // r15
  XCLIPOBJ *v100; // rbx
  void *v101; // [rsp+30h] [rbp-3D8h]
  struct _RECTL *v102; // [rsp+60h] [rbp-3A8h]
  unsigned int v103; // [rsp+70h] [rbp-398h]
  unsigned int v104; // [rsp+70h] [rbp-398h]
  int v105; // [rsp+74h] [rbp-394h]
  int v106; // [rsp+78h] [rbp-390h]
  int v107; // [rsp+78h] [rbp-390h]
  _DWORD v108[3]; // [rsp+7Ch] [rbp-38Ch] BYREF
  __int64 v109; // [rsp+88h] [rbp-380h] BYREF
  _DWORD *v110; // [rsp+90h] [rbp-378h]
  struct REGION *v111; // [rsp+98h] [rbp-370h] BYREF
  struct _SURFOBJ *v112; // [rsp+A0h] [rbp-368h]
  unsigned __int64 v113; // [rsp+A8h] [rbp-360h]
  unsigned __int64 v114; // [rsp+B0h] [rbp-358h]
  SIZEL sizl; // [rsp+B8h] [rbp-350h]
  struct tagCOLORADJUSTMENT *v116; // [rsp+C0h] [rbp-348h]
  struct REGION *v117; // [rsp+C8h] [rbp-340h] BYREF
  XCLIPOBJ *v118; // [rsp+D0h] [rbp-338h]
  unsigned __int64 v119; // [rsp+D8h] [rbp-330h]
  BOOL (__stdcall *v120)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+E0h] [rbp-328h]
  __int64 v121; // [rsp+E8h] [rbp-320h] BYREF
  char v122; // [rsp+F0h] [rbp-318h]
  int v123; // [rsp+F4h] [rbp-314h]
  PVOID *v124; // [rsp+F8h] [rbp-310h]
  stretch *v125; // [rsp+100h] [rbp-308h] BYREF
  char v126; // [rsp+108h] [rbp-300h]
  int v127; // [rsp+10Ch] [rbp-2FCh]
  __int64 *v128; // [rsp+110h] [rbp-2F8h]
  HSURF hsurf; // [rsp+118h] [rbp-2F0h]
  int v130; // [rsp+120h] [rbp-2E8h]
  struct _SURFOBJ *v131; // [rsp+128h] [rbp-2E0h]
  PVOID *v132; // [rsp+130h] [rbp-2D8h]
  int *v133; // [rsp+138h] [rbp-2D0h]
  SIZEL v134; // [rsp+140h] [rbp-2C8h]
  int v135; // [rsp+148h] [rbp-2C0h]
  __int64 *v136; // [rsp+150h] [rbp-2B8h]
  __int64 v137; // [rsp+158h] [rbp-2B0h] BYREF
  char v138; // [rsp+160h] [rbp-2A8h]
  int v139; // [rsp+164h] [rbp-2A4h]
  struct _CLIPOBJ *v140; // [rsp+168h] [rbp-2A0h]
  SIZEL v141; // [rsp+170h] [rbp-298h]
  _DWORD v142[4]; // [rsp+178h] [rbp-290h] BYREF
  __int64 v143; // [rsp+188h] [rbp-280h]
  int v144; // [rsp+190h] [rbp-278h]
  int v145; // [rsp+194h] [rbp-274h]
  _DWORD v146[4]; // [rsp+198h] [rbp-270h] BYREF
  __int64 v147; // [rsp+1A8h] [rbp-260h]
  int v148; // [rsp+1B0h] [rbp-258h]
  int v149; // [rsp+1B4h] [rbp-254h]
  void (*const near *v150)(struct stretch::_STRRUN *, struct stretch::_XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+1B8h] [rbp-250h]
  PVOID v151; // [rsp+1C0h] [rbp-248h] BYREF
  __int64 v152; // [rsp+1C8h] [rbp-240h] BYREF
  __int64 v153; // [rsp+1D0h] [rbp-238h] BYREF
  struct _RECTL v154; // [rsp+1D8h] [rbp-230h] BYREF
  struct _RECTL v155; // [rsp+1E8h] [rbp-220h] BYREF
  struct _RECTL v156; // [rsp+1F8h] [rbp-210h] BYREF
  __m128i v157; // [rsp+208h] [rbp-200h] BYREF
  struct _RECTL v158; // [rsp+218h] [rbp-1F0h] BYREF
  struct _RECTL v159; // [rsp+228h] [rbp-1E0h] BYREF
  __int128 v160; // [rsp+238h] [rbp-1D0h] BYREF
  struct _RECTL v161; // [rsp+248h] [rbp-1C0h] BYREF
  struct _RECTL v162; // [rsp+258h] [rbp-1B0h] BYREF
  int v163; // [rsp+268h] [rbp-1A0h]
  struct _RECTL v164; // [rsp+270h] [rbp-198h] BYREF
  _BYTE v165[160]; // [rsp+280h] [rbp-188h] BYREF
  _BYTE v166[4]; // [rsp+320h] [rbp-E8h] BYREF
  char v167[156]; // [rsp+324h] [rbp-E4h] BYREF

  v118 = (XCLIPOBJ *)a4;
  v131 = a3;
  v13 = a2;
  v112 = a2;
  v14 = a1;
  *(_QWORD *)&v108[1] = a1;
  v119 = (unsigned __int64)a5;
  v140 = a4;
  v116 = a6;
  v128 = (__int64 *)a7;
  v15 = a8;
  v16 = a9;
  v136 = (__int64 *)a10;
  v17 = a11;
  v103 = a11;
  v133 = a12;
  if ( a11 - 1 > 3 )
    return 0LL;
  p_pvScan0 = &a1[-1].pvScan0;
  if ( !v14 )
    p_pvScan0 = 0LL;
  v124 = p_pvScan0;
  v19 = (char *)&a2[-1].pvScan0;
  if ( !a2 )
    v19 = 0LL;
  v132 = a3 ? &a3[-1].pvScan0 : 0LL;
  if ( !p_pvScan0 )
    return 0LL;
  if ( !v19 )
    return 0LL;
  v20 = *((_DWORD *)p_pvScan0 + 24);
  if ( (unsigned int)(v20 - 7) <= 2 )
    return 0LL;
  v21 = *((_DWORD *)v19 + 24);
  if ( v21 == 9 || v20 == 10 || v21 == 10 )
    return 0LL;
  if ( a9->left != a9->right && a9->top != a9->bottom && a8->left != a8->right && a8->top != a8->bottom )
  {
    v22 = (SIZEL)p_pvScan0[6];
    v134 = v22;
    v141 = v22;
    v23 = *((_QWORD *)v19 + 6);
    v137 = 0LL;
    v138 = 0;
    v139 = 0;
    v164 = *a9;
    v24 = 1;
    if ( v13->iType == 1 && v23 && (*(_DWORD *)(v23 + 40) & 0x20000) != 0 )
    {
      if ( !(unsigned int)MulCopyDeviceToDIB(v13, (struct SURFMEM *)&v137, &v164) )
      {
LABEL_215:
        v24 = 0;
        goto LABEL_196;
      }
      if ( !v137 )
        goto LABEL_196;
      v16 = &v164;
      v13 = (struct _SURFOBJ *)((v137 + 24) & -(__int64)(v137 != 0));
      v112 = v13;
      v19 = (char *)((unsigned __int64)&v13[-1].pvScan0 & -(__int64)(v13 != 0LL));
      v23 = *((_QWORD *)v19 + 6);
      v14 = *(struct _SURFOBJ **)&v108[1];
      v17 = a11;
      a4 = (struct _CLIPOBJ *)v118;
    }
    if ( !v119 || (v25 = 1, (*(_DWORD *)(v119 + 4) & 8) == 0) )
      v25 = 0;
    v106 = v25;
    v135 = v25;
    if ( v25 )
    {
      if ( v13->iType )
        goto LABEL_215;
      if ( v14->iType != 1 )
        goto LABEL_215;
      v26 = (__int64)v131;
      if ( v131 )
        goto LABEL_215;
    }
    else
    {
      v26 = (__int64)v131;
    }
    if ( v17 != 4 )
      goto LABEL_41;
    if ( v25 )
      goto LABEL_215;
    v27 = EngHTBlt(v14, v13, v26, a4, (struct XLATE *)v119, v116, v128, a8, &v16->left, v136, 0, 0LL);
    if ( v27 == -1 )
      goto LABEL_215;
    if ( !v27 )
    {
      v103 = 3;
      goto LABEL_41;
    }
    if ( v27 != 1 )
    {
LABEL_41:
      v28 = 0;
      v108[0] = 0;
      bottom = a8->bottom;
      top = a8->top;
      v31 = bottom;
      if ( bottom < top )
      {
        v31 = a8->top;
        a8->top = bottom;
        a8->bottom = top;
        v28 = 2;
        v108[0] = 2;
        top = bottom;
      }
      right = a8->right;
      left = a8->left;
      v34 = right;
      if ( right < a8->left )
      {
        v34 = a8->left;
        a8->left = right;
        a8->right = left;
        v108[0] = v28 | 1;
        left = right;
      }
      v35 = v103;
      if ( v103 >= 3 || (v36 = 1, v132) )
        v36 = 0;
      v105 = v36;
      if ( v36 && v34 - left >= v16->right - v16->left )
      {
        if ( v31 - top >= v16->bottom - v16->top )
          v36 = 0;
        v105 = v36;
      }
      v130 = v36;
      if ( !v36 )
      {
        if ( v103 < 3 )
          v35 = 3;
        v103 = v35;
      }
      v37 = *((_DWORD *)v124 + 28);
      if ( (v37 & 0x40000) == 0 )
      {
        if ( v119 && (*(_DWORD *)(v119 + 4) & 1) == 0 )
        {
          v38 = v112;
        }
        else
        {
          v38 = v112;
          if ( !v112->iType )
            goto LABEL_61;
        }
        if ( *((_WORD *)v124 + 50) )
        {
          if ( (v37 & 2) != 0 && !v108[0] && !v131 )
          {
            v41 = v16->left;
            if ( v16->left >= 0 )
            {
              v42 = v16->top;
              if ( v42 >= 0 )
              {
                v43 = v16->right;
                if ( v43 <= v38->sizlBitmap.cx )
                {
                  v44 = v16->bottom;
                  if ( v44 <= v38->sizlBitmap.cy )
                  {
                    v160 = 0LL;
                    LODWORD(v113) = v43 - v41;
                    sizl.cx = v43 - v41;
                    v45 = v44 - v42;
                    LODWORD(v114) = v45;
                    sizl.cy = v45;
                    if ( v43 - v41 <= a8->right - a8->left && v45 <= a8->bottom - a8->top )
                    {
                      hsurf = (HSURF)EngCreateBitmap(sizl, 0, *(_DWORD *)(*(_QWORD *)&v108[1] + 72LL), 0, 0LL);
                      v46 = EngLockSurface(hsurf);
                      sizl = (SIZEL)v46;
                      if ( v46 )
                      {
                        v46->iUniq = 0;
                        *((_QWORD *)&v160 + 1) = __PAIR64__(v114, v113);
                        if ( (*((_DWORD *)v19 + 28) & 0x400) != 0 )
                          v47 = (*(__int64 (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))(v23 + 2832))(
                                  v46,
                                  v112,
                                  0LL,
                                  v119,
                                  &v160,
                                  v16);
                        else
                          v47 = ((__int64 (__fastcall *)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))EngCopyBits)(
                                  v46,
                                  v112,
                                  0LL,
                                  v119,
                                  &v160,
                                  v16);
                        if ( !v47
                          || (v48 = *(unsigned int (__fastcall **)(_QWORD, SIZEL, _QWORD, XCLIPOBJ *, _QWORD, struct tagCOLORADJUSTMENT *, __int64 *, struct _RECTL *, __int128 *, __int64 *, unsigned int))(*(_QWORD *)&v22 + 2840LL)) == 0LL
                          || !((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v48)(
                                *(_QWORD *)&v108[1],
                                sizl,
                                0LL,
                                v118,
                                0LL,
                                v116,
                                v128,
                                a8,
                                &v160,
                                v136,
                                v103) )
                        {
                          v24 = 0;
                        }
                        EngUnlockSurface(*(SURFOBJ **)&sizl);
                        EngDeleteSurface(hsurf);
                        goto LABEL_196;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_61:
      v121 = 0LL;
      v122 = 0;
      v123 = 0;
      v157 = 0LL;
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v165);
      v155 = 0LL;
      v109 = 0LL;
      v39 = *((_DWORD *)v19 + 15);
      v40 = *((_DWORD *)v19 + 14);
      *(_QWORD *)&v154.left = 0LL;
      v154.right = v40;
      v154.bottom = v39;
      v156 = 0LL;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v111);
      LOWORD(v113) = *((_WORD *)v124 + 50);
      if ( (_WORD)v113 || v124[4] == *((PVOID *)v19 + 4) )
      {
        v157 = *(__m128i *)a8;
        LODWORD(v114) = _mm_cvtsi128_si32(v157);
        v155.left = v114 - 1;
        v155.top = v157.m128i_i32[1] - 1;
        LODWORD(v110) = a8->right;
        v155.right = (_DWORD)v110 + 1;
        v155.bottom = HIDWORD(*(_QWORD *)&a8->right) + 1;
        v49 = *((_DWORD *)v124 + 15);
        v50 = *((_DWORD *)v124 + 14);
        *(_QWORD *)&v159.left = 0LL;
        v159.right = v50;
        v159.bottom = v49;
        ERECTL::operator*=(&v155.left, &v159.left);
        if ( ERECTL::bEmpty((ERECTL *)&v155) )
          goto LABEL_195;
        if ( (_WORD)v113
          || v155.left <= v16->right && v155.right >= v16->left && v155.top <= v16->bottom && v155.bottom >= v16->top )
        {
          v157.m128i_i32[0] = v114 - v155.left;
          v157.m128i_i32[1] -= v155.top;
          v157.m128i_i32[2] = (_DWORD)v110 - v155.left;
          v157.m128i_i32[3] -= v155.top;
          v142[3] = 0;
          v145 = 0;
          v142[1] = v155.right - v155.left + 1;
          v142[2] = v155.bottom - v155.top + 1;
          v143 = 0LL;
          v51 = v124;
          if ( v106 )
            v52 = *((_DWORD *)v19 + 24);
          else
            v52 = *((_DWORD *)v124 + 24);
          v142[0] = v52;
          v144 = (_DWORD)v124[14] & 0x40000;
          SURFMEM::bCreateDIB((SURFMEM *)&v121, (struct _DEVBITMAPINFO *)v142, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v121 )
            goto LABEL_214;
          v109 = *(_QWORD *)&v155.left;
          if ( !v111 )
            goto LABEL_214;
          *(_QWORD *)&v155.left = 0LL;
          v155.right -= v109;
          v155.bottom -= HIDWORD(v109);
          RGNOBJ::vSet((RGNOBJ *)&v111, &v155);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v165, v111, (const struct ERECTL *)&v155, 1);
          v151 = v51[6];
          hsurf = (HSURF)(v51 + 3);
          PDEVOBJ::vSync((PDEVOBJ *)&v151, (struct _SURFOBJ *)(v51 + 3), 0LL, 0);
          if ( v132 )
          {
            v54 = Gre::Base::Globals(v53);
            if ( ((_DWORD)v51[14] & 0x400) != 0 )
              v55 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)&v22 + 2832LL);
            else
              v55 = EngCopyBits;
            v120 = EngCopyBits;
            ((void (__fastcall *)(__int64, HSURF, _QWORD, char *, struct _RECTL *, __int64 *))v55)(
              (v121 + 24) & -(__int64)(v121 != 0),
              hsurf,
              0LL,
              (char *)v54 + 4552,
              &v155,
              &v109);
          }
          else
          {
            v120 = EngCopyBits;
          }
          *(_QWORD *)&v108[1] = v121;
          v15 = (struct _RECTL *)&v157;
          v113 = (unsigned __int64)v165;
LABEL_104:
          v152 = *((_QWORD *)v19 + 6);
          PDEVOBJ::vSync((PDEVOBJ *)&v152, v112, 0LL, 0);
          ERECTL::operator*=(&v154.left, &v16->left);
          if ( !ERECTL::bEmpty((ERECTL *)&v154) )
          {
            v125 = 0LL;
            v126 = 0;
            v127 = 0;
            v158 = 0LL;
            if ( v108[0] || *((_WORD *)v19 + 50) || (unsigned int)(*((_DWORD *)v19 + 24) - 7) <= 1 )
            {
              v146[3] = 0;
              v149 = 0;
              v146[1] = v154.right - v154.left;
              v146[2] = v154.bottom - v154.top;
              v147 = 0LL;
              if ( v106 )
                v57 = *((_DWORD *)v19 + 24);
              else
                v57 = *(_DWORD *)(*(_QWORD *)&v108[1] + 96LL);
              v146[0] = v57;
              v148 = *((_DWORD *)v19 + 28) & 0x40000;
              SURFMEM::bCreateDIB((SURFMEM *)&v125, (struct _DEVBITMAPINFO *)v146, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              if ( !v125 )
                goto LABEL_213;
              v158.right = v154.right - v154.left;
              v158.bottom = v154.bottom - v154.top;
              if ( (*((_DWORD *)v19 + 28) & 0x400) != 0 )
                v58 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v23 + 2832);
              else
                v58 = EngCopyBits;
              v59 = 0LL;
              if ( !v106 )
                v59 = v119;
              ((void (__fastcall *)(unsigned __int64, char *, _QWORD, unsigned __int64, struct _RECTL *, struct _RECTL *))v58)(
                ((unsigned __int64)v125 + 24) & -(__int64)(v125 != 0LL),
                v19 + 24,
                0LL,
                v59,
                &v158,
                &v154);
              v158.left = v16->left - v154.left;
              v158.top = v16->top - v154.top;
              v158.right = v16->right - v154.left;
              v158.bottom = v16->bottom - v154.top;
              v60 = v125;
              v19 = (char *)v125;
              v128 = (__int64 *)v125;
              v16 = &v158;
              v114 = 0LL;
              v154.right -= v154.left;
              v61 = v154.bottom - v154.top;
              v154.bottom -= v154.top;
              *(_QWORD *)&v154.left = 0LL;
              if ( (v108[0] & 2) != 0 )
              {
                v62 = *((_DWORD *)v125 + 22);
                if ( v62 <= 0 )
                  v63 = *((_QWORD *)v125 + 9);
                else
                  v63 = *((_QWORD *)v125 + 9) + v62 * (v61 - 1);
                *((_QWORD *)v125 + 10) = v63;
                *((_DWORD *)v125 + 22) = -*((_DWORD *)v125 + 22);
                v60 = v125;
              }
              if ( (v108[0] & 1) != 0 )
              {
                v64 = *((_DWORD *)v60 + 24);
                if ( v64 - 1 > 5 )
                {
LABEL_213:
                  SURFMEM::~SURFMEM((SURFMEM *)&v125);
LABEL_214:
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v111);
                  SURFMEM::~SURFMEM((SURFMEM *)&v121);
                  goto LABEL_215;
                }
                ((void (__fastcall *)(stretch *))funcs_1400753A4[v64 - 1])(v60);
              }
            }
            else
            {
              v128 = (__int64 *)v19;
              v56 = 0LL;
              if ( !v106 )
                v56 = v119;
              v114 = v56;
            }
            v65 = *(_QWORD *)&v108[1];
            v153 = *(_QWORD *)(*(_QWORD *)&v108[1] + 48LL);
            PDEVOBJ::vSync((PDEVOBJ *)&v153, (struct _SURFOBJ *)(*(_QWORD *)&v108[1] + 24LL), 0LL, 0);
            if ( v16->right - v16->left >= 128000000 )
              goto LABEL_213;
            if ( v16->bottom - v16->top >= 128000000 )
              goto LABEL_213;
            v66 = v15->right - v15->left;
            if ( v66 >= 128000000 )
              goto LABEL_213;
            v67 = v15->bottom - v15->top;
            if ( v67 >= 128000000 || v66 <= -128000000 || v67 <= -128000000 )
              goto LABEL_213;
            if ( v103 == 3 && !v131 && (!v114 || (*(_DWORD *)(v114 + 4) & 1) != 0) )
            {
              v68 = *((_DWORD *)v19 + 24);
              if ( *(_DWORD *)(*(_QWORD *)&v108[1] + 96LL) == v68 && ((v68 - 3) & 0xFFFFFFFC) == 0 && v68 != 5 )
              {
                if ( v113 && *(_BYTE *)(v113 + 20) == 3 )
                {
                  v159 = 0LL;
                  *(_QWORD *)&v154.right = 0LL;
                  *(_QWORD *)&v154.left = 0LL;
                  v162 = 0LL;
                  v163 = 0;
                  v69 = v118;
                  XCLIPOBJ::cEnumStart(v118, 0, 0, 4u, 0);
                  do
                  {
                    v70 = XCLIPOBJ::bEnum(v69, 0x14u, (char *)&v162, 0LL);
                    LODWORD(v110) = v70;
                    if ( v162.left )
                    {
                      LODWORD(v102) = *(_DWORD *)(*(_QWORD *)&v108[1] + 96LL);
                      LODWORD(v101) = *((_DWORD *)v19 + 22);
                      stretch::StretchDIBDirect(
                        *(stretch **)(*(_QWORD *)&v108[1] + 80LL),
                        (void *)*(unsigned int *)(*(_QWORD *)&v108[1] + 88LL),
                        *(_DWORD *)(*(_QWORD *)&v108[1] + 56LL),
                        *(_DWORD *)(*(_QWORD *)&v108[1] + 60LL),
                        &v15->left,
                        *((struct _RECTL **)v19 + 10),
                        v101,
                        *((_DWORD *)v19 + 14),
                        *((_DWORD *)v19 + 15),
                        &v16->left,
                        &v159,
                        (struct _RECTL *)&v162.top,
                        v102);
                      ERECTL::operator+=((__int64)&v154, (__int64)&v159);
                      v70 = (int)v110;
                    }
                  }
                  while ( v70 );
                  v22 = v134;
                }
                else
                {
                  v71 = v15;
                  if ( v113 && *(_BYTE *)(v113 + 20) == 1 )
                    v71 = (struct _RECTL *)(v113 + 4);
                  LODWORD(v102) = *(_DWORD *)(*(_QWORD *)&v108[1] + 96LL);
                  LODWORD(v101) = *((_DWORD *)v19 + 22);
                  stretch::StretchDIBDirect(
                    *(stretch **)(*(_QWORD *)&v108[1] + 80LL),
                    (void *)*(unsigned int *)(*(_QWORD *)&v108[1] + 88LL),
                    *(_DWORD *)(*(_QWORD *)&v108[1] + 56LL),
                    *(_DWORD *)(*(_QWORD *)&v108[1] + 60LL),
                    &v15->left,
                    *((struct _RECTL **)v19 + 10),
                    v101,
                    *((_DWORD *)v19 + 14),
                    *((_DWORD *)v19 + 15),
                    &v16->left,
                    &v154,
                    v71,
                    v102);
                }
                v72 = v154.left;
                v156 = v154;
                v73 = v154.right;
                v74 = v154.top;
                v75 = v154.bottom;
                goto LABEL_193;
              }
            }
            v76 = v16->right;
            if ( v76 < v16->left )
              goto LABEL_213;
            v77 = v16->bottom;
            v78 = v16->top;
            if ( v77 < v78 )
              goto LABEL_213;
            v79 = v76 - v16->left;
            v80 = v79 + v77 - v78;
            if ( v80 < v79 )
              goto LABEL_213;
            if ( v80 >= 0x3FFFFFF5 )
              goto LABEL_213;
            v81 = (_DWORD *)PALLOCNOZ(4 * v80 + 40, 1752462151LL);
            v110 = v81;
            if ( !v81 )
              goto LABEL_213;
            *v133 = 1;
            stretch::vInitStrDDA((stretch *)v81, (struct stretch::_STRDDA *)&v154, v16, v15);
            v82 = v110;
            v156 = *(struct _RECTL *)v110;
            v83 = v114;
            if ( v114 )
            {
              if ( (*(_BYTE *)(v114 + 4) & 1) != 0 )
                v83 = 0LL;
              v114 = v83;
            }
            if ( v113 )
            {
              v113 &= -(__int64)(*(_BYTE *)(v113 + 20) != 0);
              v82 = v110;
            }
            v150 = (&stretch::apfnWrite)[*(unsigned int *)(v65 + 96)];
            if ( v105 )
              v82[5] = (v103 != 1) - 1;
            sizl = (SIZEL)*(&stretch::apfnRead + 3 * *((unsigned int *)v19 + 24) + v103 - 1);
            v134 = sizl;
            v84 = v156.right - v156.left;
            if ( v16->right - v16->left <= v15->right - v15->left )
            {
              if ( v84 + 3 < v84 )
                goto LABEL_212;
              v85 = (v84 + 3) >> 1;
              if ( v85 >= 0x15555553 )
                goto LABEL_212;
            }
            else
            {
              if ( v84 >= 0x15555553 )
                goto LABEL_212;
              v85 = v156.right - v156.left;
            }
            v86 = 12 * (v85 + 2);
            if ( v84 <= 0x5F5E100 && (unsigned int)v86 <= 0x2710000 )
            {
              v87 = (HSURF)AllocFreeTmpBuffer(v86);
              hsurf = v87;
              if ( v87 )
              {
                v88 = (struct tagCOLORADJUSTMENT *)(*((_QWORD *)v19 + 10) + *((_DWORD *)v19 + 22) * v154.top);
                v116 = v88;
                v133 = 0LL;
                if ( v131 )
                {
                  LODWORD(v133) = v154.left + *(_DWORD *)v136 - v16->left;
                  v89 = (struct _SURFOBJ *)((char *)v132[10]
                                          + *((_DWORD *)v132 + 22) * (v154.top + *((_DWORD *)v136 + 1) - v16->top));
                }
                else
                {
                  v89 = 0LL;
                }
                v112 = v89;
                v108[0] = 0;
                if ( v105 )
                {
                  v90 = 0xFFFFFFFFLL;
                  if ( v103 != 1 )
                    v90 = 0LL;
                  stretch::vInitBuffer((stretch *)(v87 + 2), (struct stretch::_XRUNLEN *)&v156, (struct _RECTL *)v90);
                  v108[0] = v91;
                  v88 = v116;
                }
                v92 = v110;
                *(_DWORD *)v87 = (struct HSURF__)v110[1];
                v93 = v154.top;
                v94 = 0;
                v95 = v113;
                while ( 1 )
                {
                  v107 = v94;
                  v104 = v93;
                  if ( v93 >= v154.bottom )
                    break;
                  v96 = *(_DWORD *)(*((_QWORD *)v92 + 3) + 4LL * v94);
                  *((_DWORD *)v87 + 1) = v96;
                  if ( v96 )
                  {
                    v97 = (*(__int64 (__fastcall **)(_DWORD *, HSURF, struct tagCOLORADJUSTMENT *, struct _SURFOBJ *, unsigned __int64, LONG, LONG, _DWORD))&sizl)(
                            v92,
                            v87,
                            v88,
                            v89,
                            v114,
                            v154.left,
                            v154.right,
                            (_DWORD)v133);
                    ((void (__fastcall *)(HSURF, __int64, __int64, unsigned __int64))v150)(v87, v97, v65, v95);
                    v93 = v104;
                    if ( v105 )
                    {
                      stretch::vInitBuffer(
                        (stretch *)(v87 + 2),
                        (struct stretch::_XRUNLEN *)&v156,
                        (struct _RECTL *)v108[0]);
                      v93 = v104;
                    }
                    v88 = v116;
                    v89 = v112;
                    v92 = v110;
                  }
                  else if ( v105 )
                  {
                    (*(void (__fastcall **)(_DWORD *, HSURF, struct tagCOLORADJUSTMENT *, _QWORD, unsigned __int64, LONG, LONG, _DWORD))&sizl)(
                      v92,
                      v87,
                      v88,
                      0LL,
                      v114,
                      v154.left,
                      v154.right,
                      0);
                    v92 = v110;
                    v89 = v112;
                    v88 = v116;
                    v93 = v104;
                  }
                  v88 = (struct tagCOLORADJUSTMENT *)((char *)v88 + *((int *)v19 + 22));
                  v116 = v88;
                  *(_DWORD *)v87 += *((_DWORD *)v87 + 1);
                  if ( v89 )
                  {
                    v89 = (struct _SURFOBJ *)((char *)v89 + *((int *)v132 + 22));
                    v112 = v89;
                  }
                  ++v93;
                  v94 = v107 + 1;
                  v65 = *(_QWORD *)&v108[1];
                }
                FreeTmpBuffer(v87);
                Win32FreePool(v110);
                v75 = v156.bottom;
                v73 = v156.right;
                v74 = v156.top;
                v72 = v156.left;
LABEL_193:
                v98 = v124;
                if ( (PVOID *)v65 == v124 )
                {
LABEL_194:
                  SURFMEM::~SURFMEM((SURFMEM *)&v125);
                  goto LABEL_195;
                }
                v156.left = v109 + v72;
                v156.top = HIDWORD(v109) + v74;
                v156.right = v109 + v73;
                v156.bottom = HIDWORD(v109) + v75;
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v117);
                if ( !v117 )
                  goto LABEL_198;
                v100 = v118;
                if ( v118 )
                {
                  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v108[1]);
                  if ( !*(_QWORD *)&v108[1]
                    || (RGNOBJ::vSet((RGNOBJ *)&v108[1], &v156),
                        !RGNOBJ::bMerge((RGNOBJ *)&v117, (struct RGNOBJ *)&v108[1], (XCLIPOBJ *)((char *)v100 + 56), 8u)) )
                  {
                    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v108[1]);
LABEL_198:
                    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v117);
                    goto LABEL_213;
                  }
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v108[1]);
                }
                else
                {
                  RGNOBJ::vSet((RGNOBJ *)&v117, &v156);
                }
                v161 = *(struct _RECTL *)((char *)v117 + 52);
                if ( !v100 || bIntersect(&v161, (const struct _RECTL *)((char *)v100 + 4), &v161) )
                {
                  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v166, v117, (struct ERECTL *)&v161);
                  if ( !ERECTL::bEmpty((ERECTL *)v167) )
                  {
                    v155.left += v109;
                    v155.top += HIDWORD(v109);
                    v155.right += v109;
                    v155.bottom += HIDWORD(v109);
                    v109 = 0LL;
                    if ( ((_DWORD)v98[14] & 0x400) != 0 )
                      v120 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)&v22 + 2832LL);
                    ((void (__fastcall *)(PVOID *, __int64, _BYTE *, unsigned __int64, struct _RECTL *, __int64 *))v120)(
                      v98 + 3,
                      (v121 + 24) & -(__int64)(v121 != 0),
                      v166,
                      v119 & -(__int64)(v135 != 0),
                      &v155,
                      &v109);
                  }
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v117);
                goto LABEL_194;
              }
            }
LABEL_212:
            Win32FreePool(v110);
            goto LABEL_213;
          }
LABEL_195:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v111);
          SURFMEM::~SURFMEM((SURFMEM *)&v121);
          goto LABEL_196;
        }
        *(_QWORD *)&v108[1] = v124;
      }
      else
      {
        *(_QWORD *)&v108[1] = v124;
      }
      v113 = (unsigned __int64)v118;
      v120 = EngCopyBits;
      goto LABEL_104;
    }
LABEL_196:
    SURFMEM::~SURFMEM((SURFMEM *)&v137);
    return v24;
  }
  return 1LL;
}
