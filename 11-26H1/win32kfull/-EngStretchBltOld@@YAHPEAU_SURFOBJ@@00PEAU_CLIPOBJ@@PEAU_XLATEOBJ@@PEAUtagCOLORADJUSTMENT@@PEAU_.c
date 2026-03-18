/*
 * XREFs of ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x140266E6C
 * Callers:
 *     EngStretchBlt @ 0x1400E65F0 (EngStretchBlt.c)
 * Callees:
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x140063050 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1400E8CA8 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1400E8D14 (-StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ?vInitStrDDA@stretch@@YAXPEAU_STRDDA@1@PEAU_RECTL@@11@Z @ 0x1400E9838 (-vInitStrDDA@stretch@@YAXPEAU_STRDDA@1@PEAU_RECTL@@11@Z.c)
 *     ?vInitBuffer@stretch@@YAXPEAU_XRUNLEN@1@PEAU_RECTL@@K@Z @ 0x1400E9AB0 (-vInitBuffer@stretch@@YAXPEAU_XRUNLEN@1@PEAU_RECTL@@K@Z.c)
 *     ?vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z @ 0x1401589A0 (-vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x140166BB0 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     EngHTBlt @ 0x14018174C (EngHTBlt.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1401AEF4C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z @ 0x1401B7E00 (-vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z @ 0x140337F40 (-vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z @ 0x140338160 (-vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z @ 0x1403381E0 (-vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z @ 0x140338270 (-vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
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
  struct _RECTL *v15; // r12
  struct tagCOLORADJUSTMENT *v16; // r8
  PVOID *p_pvScan0; // rdx
  __int64 v18; // r15
  __int64 p_lDelta; // rax
  int v20; // ecx
  unsigned int v21; // r14d
  int v22; // eax
  BOOL (__stdcall **v23)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  int v28; // eax
  int v29; // r11d
  LONG top; // eax
  LONG bottom; // r8d
  LONG v32; // r10d
  LONG left; // eax
  LONG right; // edx
  LONG v35; // r9d
  int v36; // eax
  int v37; // edx
  struct _SURFOBJ *v38; // rax
  LONG v39; // ecx
  LONG v40; // eax
  PVOID *v41; // r13
  LONG v42; // r9d
  int v43; // ecx
  LONG v44; // r8d
  LONG v45; // edx
  LONG v46; // edx
  SURFOBJ *v47; // rax
  int v48; // eax
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v50; // eax
  Gre::Base *v51; // rcx
  struct Gre::Base::SESSION_GLOBALS *v52; // r9
  BOOL (__stdcall *v53)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r13
  int v54; // eax
  unsigned __int64 v55; // r8
  int v56; // eax
  BOOL (__stdcall *v57)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  unsigned __int64 v58; // r9
  stretch *v59; // r8
  int v60; // eax
  int v61; // ecx
  __int64 v62; // rcx
  __int64 v63; // rcx
  struct _RECTL *v64; // rbx
  int v65; // ecx
  int v66; // edx
  int v67; // ecx
  XCLIPOBJ *v68; // rdi
  int v69; // eax
  struct _RECTL *v70; // rcx
  LONG v71; // eax
  LONG v72; // ecx
  LONG v73; // edx
  LONG v74; // r8d
  LONG v75; // eax
  __int64 v76; // r8
  int v77; // ecx
  unsigned int v78; // eax
  unsigned int v79; // ecx
  struct _RECTL *v80; // rax
  struct _RECTL *v81; // rcx
  struct _RECTL *v82; // rdx
  unsigned int v83; // r8d
  unsigned int v84; // eax
  __int64 v85; // rcx
  HSURF v86; // rbx
  struct _SURFOBJ *v87; // r11
  struct _SURFOBJ *v88; // r12
  int v89; // r10d
  __int64 v90; // r8
  unsigned int v91; // r8d
  struct _RECTL *v92; // r15
  LONG v93; // r8d
  int i; // r9d
  int v95; // edx
  __int64 v96; // rax
  PVOID *v97; // rbx
  XCLIPOBJ *v99; // r15
  void *v100; // [rsp+30h] [rbp-3C8h]
  struct _RECTL *v101; // [rsp+60h] [rbp-398h]
  unsigned int v102; // [rsp+70h] [rbp-388h]
  LONG v103; // [rsp+70h] [rbp-388h]
  int v104; // [rsp+74h] [rbp-384h]
  int v105; // [rsp+74h] [rbp-384h]
  int v106; // [rsp+78h] [rbp-380h]
  int v107; // [rsp+7Ch] [rbp-37Ch]
  unsigned int v108; // [rsp+7Ch] [rbp-37Ch]
  LONG v109; // [rsp+80h] [rbp-378h]
  struct _RECTL *v110; // [rsp+80h] [rbp-378h]
  int v111; // [rsp+80h] [rbp-378h]
  __int64 v112; // [rsp+88h] [rbp-370h] BYREF
  struct REGION *v113; // [rsp+90h] [rbp-368h] BYREF
  BOOL (__stdcall *v114)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+98h] [rbp-360h]
  SIZEL sizl; // [rsp+A0h] [rbp-358h]
  struct _SURFOBJ *v116; // [rsp+A8h] [rbp-350h]
  PVOID *v117; // [rsp+B0h] [rbp-348h] BYREF
  unsigned __int64 v118; // [rsp+B8h] [rbp-340h]
  struct _SURFOBJ *v119; // [rsp+C0h] [rbp-338h]
  struct _RECTL *v120; // [rsp+C8h] [rbp-330h]
  unsigned __int64 v121; // [rsp+D0h] [rbp-328h]
  struct REGION *v122; // [rsp+D8h] [rbp-320h] BYREF
  XCLIPOBJ *v123; // [rsp+E0h] [rbp-318h]
  struct _SURFOBJ *v124; // [rsp+E8h] [rbp-310h]
  PVOID *v125; // [rsp+F0h] [rbp-308h] BYREF
  char v126; // [rsp+F8h] [rbp-300h]
  int v127; // [rsp+FCh] [rbp-2FCh]
  stretch *v128; // [rsp+100h] [rbp-2F8h] BYREF
  char v129; // [rsp+108h] [rbp-2F0h]
  int v130; // [rsp+10Ch] [rbp-2ECh]
  PVOID *v131; // [rsp+110h] [rbp-2E8h]
  HSURF hsurf; // [rsp+118h] [rbp-2E0h] BYREF
  int v133; // [rsp+120h] [rbp-2D8h]
  struct tagCOLORADJUSTMENT *v134; // [rsp+128h] [rbp-2D0h]
  char *v135; // [rsp+130h] [rbp-2C8h] BYREF
  int v136; // [rsp+138h] [rbp-2C0h]
  Gre::Base *v137; // [rsp+140h] [rbp-2B8h]
  void (**v138)(struct stretch::_STRRUN *, struct stretch::_XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+148h] [rbp-2B0h]
  __int64 v139; // [rsp+150h] [rbp-2A8h] BYREF
  char v140; // [rsp+158h] [rbp-2A0h]
  int v141; // [rsp+15Ch] [rbp-29Ch]
  BOOL (__stdcall **v142)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+160h] [rbp-298h]
  __int64 v143; // [rsp+168h] [rbp-290h]
  _DWORD *v144; // [rsp+170h] [rbp-288h]
  struct _CLIPOBJ *v145; // [rsp+178h] [rbp-280h]
  _DWORD v146[4]; // [rsp+180h] [rbp-278h] BYREF
  __int64 v147; // [rsp+190h] [rbp-268h]
  int v148; // [rsp+198h] [rbp-260h]
  int v149; // [rsp+19Ch] [rbp-25Ch]
  _DWORD v150[4]; // [rsp+1A0h] [rbp-258h] BYREF
  __int64 v151; // [rsp+1B0h] [rbp-248h]
  int v152; // [rsp+1B8h] [rbp-240h]
  int v153; // [rsp+1BCh] [rbp-23Ch]
  BOOL (__stdcall **v154)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+1C0h] [rbp-238h]
  struct _RECTL v155; // [rsp+1C8h] [rbp-230h] BYREF
  struct _RECTL v156; // [rsp+1D8h] [rbp-220h] BYREF
  struct _RECTL v157; // [rsp+1E8h] [rbp-210h] BYREF
  struct _RECTL v158; // [rsp+1F8h] [rbp-200h] BYREF
  int v159; // [rsp+208h] [rbp-1F0h]
  __m128i v160; // [rsp+210h] [rbp-1E8h] BYREF
  struct _RECTL v161; // [rsp+220h] [rbp-1D8h] BYREF
  struct _RECTL v162; // [rsp+230h] [rbp-1C8h] BYREF
  __int128 v163; // [rsp+240h] [rbp-1B8h] BYREF
  struct _RECTL v164; // [rsp+250h] [rbp-1A8h] BYREF
  struct _RECTL v165; // [rsp+260h] [rbp-198h] BYREF
  _BYTE v166[160]; // [rsp+270h] [rbp-188h] BYREF
  _BYTE v167[4]; // [rsp+310h] [rbp-E8h] BYREF
  char v168[156]; // [rsp+314h] [rbp-E4h] BYREF

  v123 = (XCLIPOBJ *)a4;
  v119 = a3;
  v13 = a2;
  v116 = a2;
  v14 = a1;
  v124 = a1;
  v121 = (unsigned __int64)a5;
  v137 = (Gre::Base *)a10;
  v120 = a8;
  v15 = a9;
  v145 = a4;
  v16 = a6;
  v134 = a6;
  v102 = a11;
  v138 = (void (**)(struct stretch::_STRRUN *, struct stretch::_XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *))a12;
  if ( a11 - 1 <= 3 )
  {
    p_pvScan0 = &a1[-1].pvScan0;
    if ( !a1 )
      p_pvScan0 = 0LL;
    v117 = p_pvScan0;
    v18 = (__int64)&v13[-1].pvScan0;
    if ( !v13 )
      v18 = 0LL;
    if ( a3 )
    {
      v131 = &a3[-1].pvScan0;
      p_lDelta = (__int64)&a3->lDelta;
      v143 = (__int64)&a3->pvScan0;
    }
    else
    {
      v131 = 0LL;
      p_lDelta = 88LL;
      v143 = 80LL;
    }
    v144 = (_DWORD *)p_lDelta;
    *(_QWORD *)&v162.left = p_lDelta;
    if ( p_pvScan0 )
    {
      if ( v18 )
      {
        v135 = (char *)(p_pvScan0 + 3);
        v20 = *((_DWORD *)p_pvScan0 + 24);
        if ( v20 != 7 )
        {
          v21 = 1;
          if ( (unsigned int)(v20 - 8) > 1 )
          {
            v22 = *(_DWORD *)(v18 + 96);
            if ( v22 != 9 && v20 != 10 && v22 != 10 )
            {
              if ( a9->left == a9->right || a9->top == a9->bottom || a8->left == a8->right || a8->top == a8->bottom )
                return v21;
              v23 = (BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))p_pvScan0[6];
              v154 = v23;
              v142 = v23;
              v24 = *(_QWORD *)(v18 + 48);
              v139 = 0LL;
              v140 = 0;
              v141 = 0;
              v165 = *a9;
              if ( v13->iType == 1 && v24 && (*(_DWORD *)(v24 + 40) & 0x20000) != 0 )
              {
                if ( !(unsigned int)MulCopyDeviceToDIB(v13, (struct SURFMEM *)&v139, &v165) )
                {
LABEL_223:
                  v21 = 0;
                  goto LABEL_203;
                }
                if ( !v139 )
                  goto LABEL_203;
                v15 = &v165;
                v13 = (struct _SURFOBJ *)((v139 + 24) & -(__int64)(v139 != 0));
                v116 = v13;
                v18 = (unsigned __int64)&v13[-1].pvScan0 & -(__int64)(v13 != 0LL);
                v24 = *(_QWORD *)(v18 + 0x30);
                v14 = v124;
                a4 = (struct _CLIPOBJ *)v123;
                v16 = v134;
              }
              if ( !v121 || (v25 = 1, (*(_DWORD *)(v121 + 4) & 8) == 0) )
                v25 = 0;
              v104 = v25;
              v136 = v25;
              if ( v25 )
              {
                if ( v13->iType )
                  goto LABEL_223;
                if ( v14->iType != 1 )
                  goto LABEL_223;
                v26 = (__int64)v119;
                if ( v119 )
                  goto LABEL_223;
              }
              else
              {
                v26 = (__int64)v119;
              }
              v27 = a11;
              if ( a11 == 4 )
              {
                if ( v25 )
                  goto LABEL_223;
                v28 = EngHTBlt(
                        v14,
                        v13,
                        v26,
                        a4,
                        (struct XLATE *)v121,
                        v16,
                        (Gre::Base *)a7,
                        (Gre::Base *)a8,
                        (POINTL)v15,
                        v137,
                        0,
                        0LL);
                if ( v28 == -1 )
                  goto LABEL_223;
                if ( v28 )
                {
                  if ( v28 != 1 )
                  {
                    v27 = 4;
                    goto LABEL_41;
                  }
LABEL_203:
                  SURFMEM::~SURFMEM((SURFMEM *)&v139);
                  return v21;
                }
                v27 = 3;
                v102 = 3;
              }
LABEL_41:
              v29 = 0;
              v107 = 0;
              top = a8->top;
              bottom = a8->bottom;
              v32 = top;
              if ( bottom < top )
              {
                a8->top = bottom;
                a8->bottom = top;
                v29 = 2;
                v107 = 2;
                v32 = bottom;
                bottom = top;
              }
              left = a8->left;
              right = a8->right;
              v35 = a8->left;
              if ( right < a8->left )
              {
                a8->left = right;
                a8->right = left;
                v29 |= 1u;
                v107 = v29;
                v35 = right;
                right = left;
              }
              if ( v27 >= 3 || v131 )
                goto LABEL_49;
              v106 = 1;
              if ( right - v35 < v15->right - v15->left )
              {
                v27 = v102;
              }
              else
              {
                v27 = v102;
                if ( bottom - v32 >= v15->bottom - v15->top )
                {
LABEL_49:
                  v36 = 0;
                  v106 = 0;
                  goto LABEL_53;
                }
              }
              v36 = 1;
LABEL_53:
              v133 = v36;
              if ( !v36 )
              {
                if ( v27 < 3 )
                  v27 = 3;
                v102 = v27;
              }
              v37 = *((_DWORD *)v117 + 28);
              if ( (v37 & 0x40000) == 0 )
              {
                if ( v121 && (*(_DWORD *)(v121 + 4) & 1) == 0 )
                {
                  v38 = v116;
                }
                else
                {
                  v38 = v116;
                  if ( !v116->iType )
                    goto LABEL_61;
                }
                if ( *((_WORD *)v117 + 50) )
                {
                  if ( (v37 & 2) != 0 && !v29 && !v119 )
                  {
                    v42 = v15->left;
                    if ( v15->left >= 0 )
                    {
                      v43 = v15->top;
                      if ( v43 >= 0 )
                      {
                        v44 = v15->right;
                        if ( v44 <= v38->sizlBitmap.cx )
                        {
                          v45 = v15->bottom;
                          if ( v45 <= v38->sizlBitmap.cy )
                          {
                            v163 = 0LL;
                            LODWORD(v118) = v44 - v42;
                            sizl.cx = v44 - v42;
                            v46 = v45 - v43;
                            LODWORD(v114) = v46;
                            sizl.cy = v46;
                            if ( v44 - v42 <= a8->right - a8->left && v46 <= a8->bottom - a8->top )
                            {
                              hsurf = (HSURF)EngCreateBitmap(sizl, 0, v124->iBitmapFormat, 0, 0LL);
                              v47 = EngLockSurface(hsurf);
                              sizl = (SIZEL)v47;
                              if ( v47 )
                              {
                                v47->iUniq = 0;
                                *((_QWORD *)&v163 + 1) = __PAIR64__((unsigned int)v114, v118);
                                if ( (*(_DWORD *)(v18 + 112) & 0x400) != 0 )
                                  v48 = (*(__int64 (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))(v24 + 2832))(
                                          v47,
                                          v116,
                                          0LL,
                                          v121,
                                          &v163,
                                          v15);
                                else
                                  v48 = ((__int64 (__fastcall *)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))EngCopyBits)(
                                          v47,
                                          v116,
                                          0LL,
                                          v121,
                                          &v163,
                                          v15);
                                if ( !v48
                                  || (v49 = v23[355]) == 0LL
                                  || !((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v49)(
                                        v124,
                                        sizl,
                                        0LL,
                                        v123,
                                        0LL,
                                        v134,
                                        a7,
                                        a8,
                                        &v163,
                                        v137,
                                        v102) )
                                {
                                  v21 = 0;
                                }
                                EngUnlockSurface(*(SURFOBJ **)&sizl);
                                EngDeleteSurface(hsurf);
                                goto LABEL_203;
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
              v125 = 0LL;
              v126 = 0;
              v127 = 0;
              v160 = 0LL;
              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v166);
              v156 = 0LL;
              v112 = 0LL;
              v39 = *(_DWORD *)(v18 + 60);
              v40 = *(_DWORD *)(v18 + 56);
              *(_QWORD *)&v155.left = 0LL;
              v155.right = v40;
              v155.bottom = v39;
              v157 = 0LL;
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v113);
              LOWORD(v118) = *((_WORD *)v117 + 50);
              if ( (_WORD)v118 || v117[4] == *(PVOID *)(v18 + 32) )
              {
                v160 = *(__m128i *)a8;
                LODWORD(v114) = _mm_cvtsi128_si32(v160);
                v156.left = (_DWORD)v114 - 1;
                v156.top = v160.m128i_i32[1] - 1;
                v109 = a8->right;
                v156.right = v109 + 1;
                v156.bottom = HIDWORD(*(_QWORD *)&a8->right) + 1;
                *(_QWORD *)&v158.left = 0LL;
                v41 = v117;
                v158.right = *((_DWORD *)v117 + 14);
                v158.bottom = *((_DWORD *)v117 + 15);
                ERECTL::operator*=(&v156.left, &v158.left);
                if ( ERECTL::bEmpty((ERECTL *)&v156) )
                {
LABEL_202:
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v113);
                  SURFMEM::~SURFMEM((SURFMEM *)&v125);
                  goto LABEL_203;
                }
                if ( (_WORD)v118
                  || v156.left <= v15->right
                  && v156.right >= v15->left
                  && v156.top <= v15->bottom
                  && v156.bottom >= v15->top )
                {
                  v160.m128i_i32[0] = (_DWORD)v114 - v156.left;
                  v160.m128i_i32[1] -= v156.top;
                  v160.m128i_i32[2] = v109 - v156.left;
                  v160.m128i_i32[3] -= v156.top;
                  v146[3] = 0;
                  v149 = 0;
                  v146[1] = v156.right - v156.left + 1;
                  v146[2] = v156.bottom - v156.top + 1;
                  v147 = 0LL;
                  if ( v104 )
                    v50 = *(_DWORD *)(v18 + 96);
                  else
                    v50 = *((_DWORD *)v41 + 24);
                  v146[0] = v50;
                  v148 = (_DWORD)v41[14] & 0x40000;
                  SURFMEM::bCreateDIB((SURFMEM *)&v125, (struct _DEVBITMAPINFO *)v146, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
                  if ( !v125 )
                    goto LABEL_222;
                  v112 = *(_QWORD *)&v156.left;
                  if ( !v113 )
                    goto LABEL_222;
                  *(_QWORD *)&v156.left = 0LL;
                  v156.right -= v112;
                  v156.bottom -= HIDWORD(v112);
                  RGNOBJ::vSet((RGNOBJ *)&v113, &v156);
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v166, v113, (const struct ERECTL *)&v156, 1);
                  hsurf = (HSURF)v41[6];
                  if ( hsurf )
                    PDEVOBJ::vSync((PDEVOBJ *)&hsurf, (struct _SURFOBJ *)(v41 + 3), 0LL, 0);
                  if ( v131 )
                  {
                    v52 = Gre::Base::Globals(v51);
                    if ( ((_DWORD)v41[14] & 0x400) != 0 )
                      v53 = v23[354];
                    else
                      v53 = EngCopyBits;
                    v114 = EngCopyBits;
                    ((void (__fastcall *)(unsigned __int64, char *, _QWORD, char *, struct _RECTL *, __int64 *))v53)(
                      (unsigned __int64)(v125 + 3) & -(__int64)(v125 != 0LL),
                      v135,
                      0LL,
                      (char *)v52 + 4664,
                      &v156,
                      &v112);
                  }
                  else
                  {
                    v114 = EngCopyBits;
                  }
                  v41 = v125;
                  v120 = (struct _RECTL *)&v160;
                  v118 = (unsigned __int64)v166;
                }
                else
                {
                  v118 = (unsigned __int64)v123;
                  v114 = EngCopyBits;
                }
                v124 = (struct _SURFOBJ *)v41;
              }
              else
              {
                v41 = v117;
                v124 = (struct _SURFOBJ *)v117;
                v118 = (unsigned __int64)v123;
                v114 = EngCopyBits;
              }
              v135 = *(char **)(v18 + 48);
              if ( v135 )
                PDEVOBJ::vSync((PDEVOBJ *)&v135, v116, 0LL, 0);
              ERECTL::operator*=(&v155.left, &v15->left);
              if ( ERECTL::bEmpty((ERECTL *)&v155) )
                goto LABEL_202;
              v128 = 0LL;
              v129 = 0;
              v130 = 0;
              v161 = 0LL;
              if ( v107 || *(_WORD *)(v18 + 100) || (v54 = *(_DWORD *)(v18 + 96), v54 == 7) || v54 == 8 )
              {
                v150[3] = 0;
                v153 = 0;
                v150[1] = v155.right - v155.left;
                v150[2] = v155.bottom - v155.top;
                v151 = 0LL;
                if ( v104 )
                  v56 = *(_DWORD *)(v18 + 96);
                else
                  v56 = *((_DWORD *)v41 + 24);
                v150[0] = v56;
                v152 = *(_DWORD *)(v18 + 112) & 0x40000;
                SURFMEM::bCreateDIB((SURFMEM *)&v128, (struct _DEVBITMAPINFO *)v150, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
                if ( !v128 )
                  goto LABEL_221;
                v161.right = v155.right - v155.left;
                v161.bottom = v155.bottom - v155.top;
                if ( (*(_DWORD *)(v18 + 112) & 0x400) != 0 )
                  v57 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v24 + 2832);
                else
                  v57 = EngCopyBits;
                v58 = 0LL;
                if ( !v104 )
                  v58 = v121;
                ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, unsigned __int64, struct _RECTL *, struct _RECTL *))v57)(
                  ((unsigned __int64)v128 + 24) & -(__int64)(v128 != 0LL),
                  v18 + 24,
                  0LL,
                  v58,
                  &v161,
                  &v155);
                v161.left = v15->left - v155.left;
                v161.top = v15->top - v155.top;
                v161.right = v15->right - v155.left;
                v161.bottom = v15->bottom - v155.top;
                v59 = v128;
                v18 = (__int64)v128;
                v15 = &v161;
                v110 = 0LL;
                v155.right -= v155.left;
                v60 = v155.bottom - v155.top;
                v155.bottom -= v155.top;
                *(_QWORD *)&v155.left = 0LL;
                if ( (v107 & 2) != 0 )
                {
                  v61 = *((_DWORD *)v128 + 22);
                  if ( v61 <= 0 )
                    v62 = *((_QWORD *)v128 + 9);
                  else
                    v62 = *((_QWORD *)v128 + 9) + v61 * (v60 - 1);
                  *((_QWORD *)v128 + 10) = v62;
                  *((_DWORD *)v128 + 22) = -*((_DWORD *)v128 + 22);
                  v59 = v128;
                }
                if ( (v107 & 1) != 0 )
                {
                  v63 = *((unsigned int *)v59 + 24);
                  if ( (unsigned int)(v63 - 1) > 5 )
                  {
LABEL_221:
                    SURFMEM::~SURFMEM((SURFMEM *)&v128);
LABEL_222:
                    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v113);
                    SURFMEM::~SURFMEM((SURFMEM *)&v125);
                    goto LABEL_223;
                  }
                  ((void (__fastcall *)(stretch *))funcs_1400B3464[v63 - 1])(v59);
                }
              }
              else
              {
                v55 = 0LL;
                if ( !v104 )
                  v55 = v121;
                v110 = (struct _RECTL *)v55;
              }
              *(_QWORD *)&v158.left = v18;
              v135 = (char *)v41[6];
              if ( v135 )
                PDEVOBJ::vSync(
                  (PDEVOBJ *)&v135,
                  (struct _SURFOBJ *)((unsigned __int64)(v41 + 3) & ((unsigned __int128)-(__int128)(unsigned __int64)v41 >> 64)),
                  0LL,
                  0);
              if ( v15->right - v15->left >= 128000000 )
                goto LABEL_221;
              if ( v15->bottom - v15->top >= 128000000 )
                goto LABEL_221;
              v64 = v120;
              v65 = v120->right - v120->left;
              if ( v65 >= 128000000 )
                goto LABEL_221;
              v66 = v120->bottom - v120->top;
              if ( v66 >= 128000000 || v65 <= -128000000 || v66 <= -128000000 )
                goto LABEL_221;
              if ( v102 == 3 && !v119 && (!v110 || (v110->top & 1) != 0) )
              {
                v67 = *(_DWORD *)(v18 + 96);
                if ( *((_DWORD *)v41 + 24) == v67 && ((v67 - 3) & 0xFFFFFFFC) == 0 && v67 != 5 )
                {
                  if ( v118 && *(_BYTE *)(v118 + 20) == 3 )
                  {
                    v162 = 0LL;
                    *(_QWORD *)&v155.right = 0LL;
                    *(_QWORD *)&v155.left = 0LL;
                    v158 = 0LL;
                    v159 = 0;
                    v68 = v123;
                    XCLIPOBJ::cEnumStart(v123, 0, 0, 4u, 0);
                    do
                    {
                      v69 = XCLIPOBJ::bEnum(v68, 0x14u, (char *)&v158, 0LL);
                      v111 = v69;
                      if ( v158.left )
                      {
                        LODWORD(v101) = *((_DWORD *)v41 + 24);
                        LODWORD(v100) = *(_DWORD *)(v18 + 88);
                        stretch::StretchDIBDirect(
                          (stretch *)v41[10],
                          (void *)*((unsigned int *)v41 + 22),
                          *((_DWORD *)v41 + 14),
                          *((_DWORD *)v41 + 15),
                          &v64->left,
                          *(struct _RECTL **)(v18 + 80),
                          v100,
                          *(_DWORD *)(v18 + 56),
                          *(_DWORD *)(v18 + 60),
                          &v15->left,
                          &v162,
                          (struct _RECTL *)&v158.top,
                          v101);
                        ERECTL::operator+=((__int64)&v155, (__int64)&v162);
                        v69 = v111;
                      }
                    }
                    while ( v69 );
                    v23 = v154;
                  }
                  else
                  {
                    v70 = v120;
                    if ( v118 && *(_BYTE *)(v118 + 20) == 1 )
                      v70 = (struct _RECTL *)(v118 + 4);
                    LODWORD(v101) = *((_DWORD *)v41 + 24);
                    LODWORD(v100) = *(_DWORD *)(v18 + 88);
                    stretch::StretchDIBDirect(
                      (stretch *)v41[10],
                      (void *)*((unsigned int *)v41 + 22),
                      *((_DWORD *)v41 + 14),
                      *((_DWORD *)v41 + 15),
                      &v120->left,
                      *(struct _RECTL **)(v18 + 80),
                      v100,
                      *(_DWORD *)(v18 + 56),
                      *(_DWORD *)(v18 + 60),
                      &v15->left,
                      &v155,
                      v70,
                      v101);
                  }
                  v71 = v155.left;
                  v157 = v155;
                  v72 = v155.right;
                  v73 = v155.top;
                  v74 = v155.bottom;
                  goto LABEL_200;
                }
              }
              v75 = v15->right;
              if ( v75 < v15->left )
                goto LABEL_221;
              v76 = (unsigned int)v15->top;
              v77 = v15->bottom;
              if ( v77 < (int)v76 )
                goto LABEL_221;
              v78 = v75 - v15->left;
              v79 = v78 + v77 - v76;
              if ( v79 < v78 )
                goto LABEL_221;
              if ( v79 >= 0x3FFFFFF5 )
                goto LABEL_221;
              v80 = (struct _RECTL *)PALLOCNOZ(4 * v79 + 40, 1752462151LL, v76);
              v120 = v80;
              if ( !v80 )
                goto LABEL_221;
              *(_DWORD *)v138 = 1;
              stretch::vInitStrDDA((stretch *)v80, (struct stretch::_STRDDA *)&v155, v15, v64);
              v81 = v120;
              v157 = *v120;
              v82 = v110;
              if ( v110 )
              {
                if ( (v110->top & 1) != 0 )
                  v82 = 0LL;
                v110 = v82;
              }
              if ( v118 )
              {
                v118 &= -(__int64)(*(_BYTE *)(v118 + 20) != 0);
                v81 = v120;
              }
              v138 = (void (**)(struct stretch::_STRRUN *, struct stretch::_XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *))(&stretch::apfnWrite)[*((unsigned int *)v41 + 24)];
              if ( v106 )
                v81[1].top = (v102 != 1) - 1;
              sizl = (SIZEL)*(&stretch::apfnRead + 3 * *(unsigned int *)(v18 + 96) + v102 - 1);
              v131 = (PVOID *)sizl;
              v83 = v157.right - v157.left;
              if ( v15->right - v15->left <= v64->right - v64->left )
              {
                if ( v83 + 3 < v83 )
                  goto LABEL_220;
                v84 = (v83 + 3) >> 1;
                if ( v84 >= 0x15555553 )
                  goto LABEL_220;
              }
              else
              {
                if ( v83 >= 0x15555553 )
                  goto LABEL_220;
                v84 = v157.right - v157.left;
              }
              v85 = 12 * (v84 + 2);
              if ( v83 <= 0x5F5E100 && (unsigned int)v85 <= 0x2710000 )
              {
                v86 = (HSURF)AllocFreeTmpBuffer(v85);
                hsurf = v86;
                if ( v86 )
                {
                  v87 = (struct _SURFOBJ *)(*(_QWORD *)(v18 + 80) + *(_DWORD *)(v18 + 88) * v155.top);
                  v116 = v87;
                  v134 = 0LL;
                  if ( v119 )
                  {
                    LODWORD(v134) = *(_DWORD *)v137 + v155.left - v15->left;
                    v88 = (struct _SURFOBJ *)(*(_QWORD *)v143 + *v144 * (v155.top + *((_DWORD *)v137 + 1) - v15->top));
                  }
                  else
                  {
                    v88 = 0LL;
                  }
                  v119 = v88;
                  v108 = 0;
                  v89 = v106;
                  if ( v106 )
                  {
                    v90 = 0xFFFFFFFFLL;
                    if ( v102 != 1 )
                      v90 = 0LL;
                    stretch::vInitBuffer((stretch *)(v86 + 2), (struct stretch::_XRUNLEN *)&v157, (struct _RECTL *)v90);
                    v108 = v91;
                    v89 = v106;
                  }
                  v92 = v120;
                  *(_DWORD *)v86 = v120->top;
                  v93 = v155.top;
                  for ( i = 0; ; ++i )
                  {
                    v105 = i;
                    v103 = v93;
                    if ( v93 >= v155.bottom )
                      break;
                    v95 = *(_DWORD *)(*(_QWORD *)&v92[1].right + 4LL * i);
                    *((_DWORD *)v86 + 1) = v95;
                    if ( v95 )
                    {
                      v96 = (*(__int64 (__fastcall **)(struct _RECTL *, HSURF, struct _SURFOBJ *, struct _SURFOBJ *, struct _RECTL *, LONG, LONG, _DWORD))&sizl)(
                              v92,
                              v86,
                              v87,
                              v88,
                              v110,
                              v155.left,
                              v155.right,
                              (_DWORD)v134);
                      ((void (__fastcall *)(HSURF, __int64, PVOID *, unsigned __int64))v138)(v86, v96, v41, v118);
                      v87 = v116;
                      v93 = v103;
                      v89 = v106;
                      if ( v106 )
                      {
                        stretch::vInitBuffer(
                          (stretch *)(v86 + 2),
                          (struct stretch::_XRUNLEN *)&v157,
                          (struct _RECTL *)v108);
                        v93 = v103;
                        v89 = v106;
                      }
                      i = v105;
                    }
                    else if ( v89 )
                    {
                      (*(void (__fastcall **)(struct _RECTL *, HSURF, struct _SURFOBJ *, _QWORD, struct _RECTL *, LONG, LONG, _DWORD))&sizl)(
                        v92,
                        v86,
                        v87,
                        0LL,
                        v110,
                        v155.left,
                        v155.right,
                        0);
                      v87 = v116;
                      v93 = v103;
                      i = v105;
                      v89 = v106;
                    }
                    v87 = (struct _SURFOBJ *)((char *)v87 + *(int *)(*(_QWORD *)&v158.left + 88LL));
                    v116 = v87;
                    *(_DWORD *)v86 += *((_DWORD *)v86 + 1);
                    if ( v88 )
                    {
                      v88 = (struct _SURFOBJ *)((char *)v88 + **(int **)&v162.left);
                      v119 = v88;
                    }
                    ++v93;
                    v92 = v120;
                  }
                  FreeTmpBuffer(v86);
                  Win32FreePool(v92);
                  v74 = v157.bottom;
                  v72 = v157.right;
                  v73 = v157.top;
                  v71 = v157.left;
LABEL_200:
                  v97 = v117;
                  if ( v41 == v117 )
                  {
LABEL_201:
                    SURFMEM::~SURFMEM((SURFMEM *)&v128);
                    goto LABEL_202;
                  }
                  v157.left = v112 + v71;
                  v157.top = HIDWORD(v112) + v73;
                  v157.right = v112 + v72;
                  v157.bottom = HIDWORD(v112) + v74;
                  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v122);
                  if ( !v122 )
                    goto LABEL_206;
                  v99 = v123;
                  if ( v123 )
                  {
                    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v117);
                    if ( !v117
                      || (RGNOBJ::vSet((RGNOBJ *)&v117, &v157),
                          !RGNOBJ::bMerge((RGNOBJ *)&v122, (struct RGNOBJ *)&v117, (XCLIPOBJ *)((char *)v99 + 56), 8u)) )
                    {
                      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v117);
LABEL_206:
                      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v122);
                      goto LABEL_221;
                    }
                    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v117);
                  }
                  else
                  {
                    RGNOBJ::vSet((RGNOBJ *)&v122, &v157);
                  }
                  v164 = *(struct _RECTL *)((char *)v122 + 52);
                  if ( !v99 || bIntersect(&v164, (const struct _RECTL *)((char *)v99 + 4), &v164) )
                  {
                    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v167, v122, (struct ERECTL *)&v164, 1);
                    if ( !ERECTL::bEmpty((ERECTL *)v168) )
                    {
                      v156.left += v112;
                      v156.top += HIDWORD(v112);
                      v156.right += v112;
                      v156.bottom += HIDWORD(v112);
                      v112 = 0LL;
                      if ( ((_DWORD)v97[14] & 0x400) != 0 )
                        v114 = v23[354];
                      ((void (__fastcall *)(PVOID *, unsigned __int64, _BYTE *, unsigned __int64, struct _RECTL *, __int64 *))v114)(
                        v97 + 3,
                        (unsigned __int64)(v125 + 3) & -(__int64)(v125 != 0LL),
                        v167,
                        v121 & -(__int64)(v136 != 0),
                        &v156,
                        &v112);
                    }
                  }
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v122);
                  goto LABEL_201;
                }
              }
LABEL_220:
              Win32FreePool(v120);
              goto LABEL_221;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
