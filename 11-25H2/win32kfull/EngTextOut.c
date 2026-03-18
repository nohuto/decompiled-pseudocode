/*
 * XREFs of EngTextOut @ 0x140012BD0
 * Callers:
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x14000EA90 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     OffTextOut @ 0x14000EF0C (OffTextOut.c)
 *     ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400117E0 (-SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ.c)
 *     NtGdiEngTextOut @ 0x140264F30 (NtGdiEngTextOut.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1402FD390 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1402FF8E0 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x14030B7A0 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14001680C (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14006EF0C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1400A9A18 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1400A9BB0 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     STROBJ_bEnum @ 0x1400A9C00 (STROBJ_bEnum.c)
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1400A9CCC (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     vGetPosInfo @ 0x1400A9EC8 (vGetPosInfo.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400F92A8 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1400F9B88 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1400F9BF8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1400F9DE8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1FRINGERECT@@QEAA@XZ @ 0x140185190 (--1FRINGERECT@@QEAA@XZ.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x14022EAF4 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

BOOL __stdcall EngTextOut(
        SURFOBJ *pso,
        STROBJ *pstro,
        FONTOBJ *pfo,
        CLIPOBJ *pco,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        BRUSHOBJ *pboOpaque,
        POINTL *pptlOrg,
        MIX mix)
{
  STROBJ *v10; // r13
  SURFOBJ *v11; // r15
  LONG left; // edi
  int v13; // ecx
  LONG top; // r14d
  LONG right; // esi
  int v16; // r12d
  LONG bottom; // ebx
  struct _GLYPHPOS *pgp; // r12
  unsigned int cGlyphs; // r15d
  unsigned int i; // r8d
  struct _GLYPHPOS *v21; // r9
  GLYPHBITS *pgb; // rax
  LONG v23; // r10d
  LONG v24; // r11d
  LONG v25; // r9d
  LONG v26; // eax
  signed __int16 *p_pvScan0; // r15
  FLONG flFontType; // eax
  int iDComplexity; // ecx
  unsigned int v31; // r12d
  FLONG v32; // eax
  int v33; // edx
  unsigned int v34; // r8d
  LONG v35; // ecx
  unsigned int v36; // edx
  unsigned int v37; // r12d
  unsigned int v38; // edx
  unsigned __int64 v39; // r13
  char v40; // di
  _DWORD *v41; // rax
  _DWORD *v42; // rbx
  STROBJ *v43; // r11
  unsigned int v44; // esi
  unsigned __int64 flAccel; // rdx
  char v46; // al
  int v47; // ecx
  int v48; // eax
  unsigned __int64 v49; // r8
  struct _RECTL *v50; // r12
  struct _FONTOBJ *v51; // r14
  unsigned int v52; // r12d
  struct _RECTL *p_rclBkGround; // rdi
  struct _GLYPHPOS *v54; // rsi
  unsigned int v55; // r14d
  int v56; // r12d
  unsigned int v57; // r9d
  struct _FONTOBJ *v58; // r14
  int pwszOrg; // eax
  int v60; // eax
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  bool v64; // cf
  __int64 v65; // rdx
  __int64 v66; // r8
  struct _SURFOBJ *v67; // r9
  int v68; // edi
  RECTL *v69; // r10
  LONG v70; // edx
  LONG v71; // edi
  int v72; // eax
  int v73; // edi
  int v74; // ecx
  LONG v75; // r9d
  LONG v76; // edi
  int v77; // eax
  __int64 v78; // rax
  unsigned int v79; // r15d
  struct _GLYPHPOS *v80; // r13
  RFONTOBJ *v81; // rcx
  STROBJ *v82; // r9
  __int64 v83; // rdx
  CLIPOBJ *v84; // rdi
  unsigned __int8 *v85; // r13
  struct _RECTL *v86; // rbx
  unsigned int v87; // r12d
  int v88; // edi
  struct _FONTOBJ *v89; // rdx
  LONG v90; // r14d
  unsigned int v91; // esi
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // r8
  bool v95; // zf
  int v96; // edi
  __int64 v97; // rdi
  int v98; // ecx
  LONG v99; // r10d
  LONG v100; // r9d
  RECTL rclBkGround; // xmm0
  int v102; // ecx
  LONG v103; // ecx
  LONG v104; // r10d
  int v105; // eax
  Gre::Base *v106; // rcx
  struct Gre::Base::SESSION_GLOBALS *v107; // r9
  BOOL (__stdcall *v108)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *v109; // r9
  char *v110; // rcx
  __int64 v111; // rdi
  int v112; // eax
  BOOL (__stdcall *v113)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *v114; // rdx
  unsigned __int8 *v115; // [rsp+20h] [rbp-100h]
  struct _XLATEOBJ *v116; // [rsp+30h] [rbp-F0h]
  struct _POINTL *v117; // [rsp+40h] [rbp-E0h]
  struct _RECTL *v118; // [rsp+48h] [rbp-D8h]
  struct _RECTL *v119; // [rsp+50h] [rbp-D0h]
  unsigned int v120; // [rsp+60h] [rbp-C0h]
  unsigned int v121; // [rsp+80h] [rbp-A0h]
  char v122; // [rsp+A0h] [rbp-80h]
  unsigned int v123; // [rsp+A4h] [rbp-7Ch] BYREF
  int v124; // [rsp+A8h] [rbp-78h]
  unsigned int v125; // [rsp+ACh] [rbp-74h]
  struct _GLYPHPOS *v126; // [rsp+B0h] [rbp-70h] BYREF
  STROBJ *pstroa; // [rsp+B8h] [rbp-68h]
  ULONG pc; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v129; // [rsp+C4h] [rbp-5Ch]
  int v130; // [rsp+C8h] [rbp-58h]
  struct _FONTOBJ *v131; // [rsp+D0h] [rbp-50h]
  struct _RECTL *v132; // [rsp+D8h] [rbp-48h]
  CLIPOBJ *v133; // [rsp+E0h] [rbp-40h]
  struct _RECTL v134; // [rsp+E8h] [rbp-38h] BYREF
  PGLYPHPOS ppgpos; // [rsp+F8h] [rbp-28h] BYREF
  struct SURFACE *v136; // [rsp+100h] [rbp-20h]
  struct SURFACE *v137; // [rsp+108h] [rbp-18h] BYREF
  char v138; // [rsp+110h] [rbp-10h]
  int v139; // [rsp+114h] [rbp-Ch]
  RECTL *v140; // [rsp+118h] [rbp-8h]
  SURFOBJ *v141; // [rsp+120h] [rbp+0h]
  struct _POINTL *v142; // [rsp+128h] [rbp+8h]
  struct _BRUSHOBJ *v143; // [rsp+130h] [rbp+10h]
  struct SURFACE *v144; // [rsp+138h] [rbp+18h]
  _DWORD *v145; // [rsp+140h] [rbp+20h]
  struct _RECTL *v146; // [rsp+148h] [rbp+28h]
  unsigned __int8 *v147; // [rsp+150h] [rbp+30h]
  unsigned __int64 v148; // [rsp+158h] [rbp+38h]
  __int128 v149; // [rsp+160h] [rbp+40h] BYREF
  __int128 v150; // [rsp+170h] [rbp+50h]
  int v151; // [rsp+180h] [rbp+60h] BYREF
  struct _RECTL v152[20]; // [rsp+184h] [rbp+64h] BYREF
  __int128 v153; // [rsp+2D0h] [rbp+1B0h] BYREF
  RECTL v154; // [rsp+2E0h] [rbp+1C0h] BYREF
  signed __int16 *v155; // [rsp+2F0h] [rbp+1D0h] BYREF
  __int64 v156; // [rsp+2F8h] [rbp+1D8h]
  CLIPOBJ *v157; // [rsp+300h] [rbp+1E0h]
  struct _RECTL *v158; // [rsp+308h] [rbp+1E8h]
  int v159; // [rsp+310h] [rbp+1F0h]
  _DWORD v160[17]; // [rsp+314h] [rbp+1F4h]
  struct _FONTOBJ *v161; // [rsp+358h] [rbp+238h]
  _BYTE v162[80]; // [rsp+360h] [rbp+240h] BYREF
  struct _RECTL si128; // [rsp+3B0h] [rbp+290h] BYREF
  int v164; // [rsp+3CCh] [rbp+2ACh]

  v10 = pstro;
  v146 = prclExtra;
  v11 = pso;
  v140 = prclOpaque;
  v143 = pboFore;
  v132 = (struct _RECTL *)pboOpaque;
  v131 = pfo;
  pstroa = pstro;
  v141 = pso;
  v142 = pptlOrg;
  v133 = pco;
  memset_0(&v151, 0, 0x144uLL);
  left = v10->rclBkGround.left;
  v13 = 0;
  top = v10->rclBkGround.top;
  right = v10->rclBkGround.right;
  v16 = 0;
  bottom = v10->rclBkGround.bottom;
  ppgpos = 0LL;
  pc = 0;
  v129 = 0;
  v125 = 0;
  v153 = 0LL;
  v136 = 0LL;
  v154 = 0LL;
  v134.left = left;
  v134.top = top;
  v134.right = right;
  v134.bottom = bottom;
  if ( !v10->ulCharInc )
  {
    pgp = v10->pgp;
    cGlyphs = v10->cGlyphs;
    v126 = pgp;
    v123 = cGlyphs;
    v124 = 0;
    if ( !pgp )
    {
      *(_QWORD *)&v10[1].cGlyphs = 0LL;
      v13 = 1;
      v124 = 1;
    }
    if ( v13 )
      goto LABEL_67;
    while ( 1 )
    {
      for ( i = 0; i < cGlyphs; ++i )
      {
        v21 = &pgp[i];
        pgb = v21->pgdf->pgb;
        if ( !pgb )
          goto LABEL_21;
        v23 = pgb->ptlOrigin.x + v21->ptl.x;
        v24 = v23 + pgb->sizlBitmap.cx;
        v25 = pgb->ptlOrigin.y + v21->ptl.y;
        v26 = v25 + pgb->sizlBitmap.cy;
        if ( left == right || top == bottom )
        {
          left = v23;
          v134.left = v23;
          top = v25;
          v134.top = v25;
          right = v24;
          v134.right = v24;
LABEL_19:
          v134.bottom = v26;
          bottom = v26;
          continue;
        }
        if ( v23 < left )
          left = v23;
        v134.left = left;
        if ( v25 < top )
        {
          top = v25;
          v134.top = v25;
        }
        if ( v24 > right )
        {
          right = v24;
          v134.right = v24;
        }
        if ( v26 > bottom )
          goto LABEL_19;
      }
      if ( !v124 )
      {
LABEL_21:
        v16 = v125;
        v11 = v141;
        break;
      }
LABEL_67:
      pwszOrg = (int)v10[4].pwszOrg;
      if ( (pwszOrg & 0x1400) != 0 )
      {
        v60 = STROBJ_bEnumLinked((struct ESTROBJ *)v10, &v123, &v126);
        pgp = v126;
        cGlyphs = v123;
        v124 = v60;
        continue;
      }
      cGlyphs = v10->cGlyphs;
      if ( (pwszOrg & 2) != 0 )
      {
        pgp = *(struct _GLYPHPOS **)&v10[1].rclBkGround.top;
        v126 = pgp;
        v124 = 0;
        goto LABEL_115;
      }
      v78 = v10[1].cGlyphs;
      v79 = cGlyphs - v78;
      if ( v79 )
      {
        v80 = (struct _GLYPHPOS *)(*(_QWORD *)&v10[1].rclBkGround.top + 24 * v78);
        v81 = *(RFONTOBJ **)&pstroa[1].ulCharInc;
        if ( v81 && (cGlyphs = RFONTOBJ::cGetGlyphData(v81, v79, v80)) != 0 )
        {
          v82 = pstroa;
          v83 = pstroa[1].cGlyphs;
          if ( (_DWORD)v83 && pstroa->ulCharInc )
            vGetPosInfo(pstroa, v83, &v80->ptl);
          v82[1].cGlyphs += cGlyphs;
          v64 = v82[1].cGlyphs < v82->cGlyphs;
          pgp = v80;
          v126 = v80;
          v10 = v82;
          v124 = v64;
LABEL_115:
          v123 = cGlyphs;
        }
        else
        {
          v10 = pstroa;
          cGlyphs = 0;
          v123 = 0;
          v124 = 0;
        }
      }
      else
      {
        cGlyphs = 0;
        v123 = 0;
        v124 = 0;
      }
    }
  }
  if ( v11 )
    p_pvScan0 = (signed __int16 *)&v11[-1].pvScan0;
  else
    p_pvScan0 = 0LL;
  v144 = (struct SURFACE *)p_pvScan0;
  if ( (v131->flFontType & 0x10000) != 0 )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged && (v62 = *CurrentThreadNonPaged) != 0 && v62 != -8 )
      v63 = *(_QWORD *)(v62 + 296);
    else
      v63 = *((_QWORD *)p_pvScan0 + 13);
    v136 = v63 ? *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v63 + 48LL) + 2544LL) : (struct SURFACE *)p_pvScan0;
    v16 = p_pvScan0[50] != 0 ? 0x10 : 0;
    v64 = _bittest16(p_pvScan0 + 51, 8u);
    v125 = v16;
    if ( v64 )
    {
      v16 |= 0x80u;
      v125 = v16;
    }
  }
  flFontType = v131->flFontType;
  if ( (flFontType & 2) != 0 )
    return *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v126, 0LL);
  iDComplexity = (int)v133;
  if ( v133 )
    iDComplexity = v133->iDComplexity;
  v124 = iDComplexity;
  v123 = -1;
  LODWORD(v126) = v143->iSolidColor;
  if ( (flFontType & 0x10000) != 0 )
  {
    if ( *((_DWORD *)p_pvScan0 + 24) == 3 && ((unsigned int)bUMPDSecurityGateEx() && !v132 || v132->left == -1) )
      return *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v126, 0LL);
    v31 = v16 | 8;
    v125 = v31;
    v32 = v131->flFontType;
    if ( (v32 & 0x10000000) != 0 )
    {
      v33 = v10->rclBkGround.right;
      v125 = v31 | 0x20;
      v34 = 8;
      if ( v33 > 2147483643 )
        return *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v126, 0LL);
      v35 = v10->rclBkGround.left;
      if ( (unsigned int)(v33 - v35 + 4) >= 0x7FFFFFFF )
        return *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v126, 0LL);
      v36 = ((v33 + 4) & 0xFFFFFFFC) - (v35 & 0xFFFFFFFC);
    }
    else if ( (v32 & 0x20000000) != 0 )
    {
      v36 = v129;
      v34 = v129;
    }
    else
    {
      v34 = 4;
      v36 = (((v10->rclBkGround.right + 8) >> 1) & 0xFFFFFFFC) - ((v10->rclBkGround.left >> 1) & 0xFFFFFFFC);
    }
  }
  else
  {
    v34 = 1;
    v36 = (int)(((v10->rclBkGround.right + 32) & 0xFFFFFFE0) - (v10->rclBkGround.left & 0xFFFFFFE0)) >> 3;
  }
  v37 = ((v34 * (v10->rclBkGround.left - left) + 31) >> 3) & 0x1FFFFFFC;
  v38 = v37 + (((v34 * (right - v10->rclBkGround.right) + 31) >> 3) & 0x1FFFFFFC) + v36;
  v39 = v38 * (unsigned __int64)(unsigned int)(bottom - top);
  v129 = v38;
  v148 = v39;
  if ( v39 > 0xFFFFFFFF )
    return *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v126, 0LL);
  if ( (unsigned int)v39 >= 0x10000 )
  {
    v40 = 0;
    v122 = 0;
    v41 = EngAllocUserMem((unsigned int)v39, 0x6F746547u);
  }
  else
  {
    v40 = 1;
    v122 = 1;
    v41 = (_DWORD *)AllocThreadBufferWithTag((unsigned int)v39, 1869899079LL, 32LL);
  }
  v145 = v41;
  v42 = v41;
  if ( !v41 )
    return *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v126, 0LL);
  v43 = pstroa;
  v44 = v125;
  flAccel = pstroa->flAccel;
  v46 = pstroa->flAccel & 0xA;
  v147 = (unsigned __int8 *)v42 + v129 * (pstroa->rclBkGround.top - top) + v37;
  if ( v46 == 2 )
  {
    v47 = 0;
    if ( (flAccel & 0x51) == 0x51 )
      v47 = 4;
    flAccel &= 0x11u;
    v48 = 0;
    if ( (_BYTE)flAccel != 17 )
      v48 = 2;
    v44 = (pstroa->ulCharInc != 0) | v48 | v47 | v125;
    v125 = v44;
  }
  v95 = p_pvScan0[50] == 0;
  v155 = p_pvScan0;
  if ( v95 )
    v156 = *((_QWORD *)p_pvScan0 + 9);
  else
    v156 = 0LL;
  v49 = (unsigned __int64)v133;
  v50 = v132;
  v51 = v131;
  v157 = v133;
  v158 = v132;
  v161 = v131;
  v159 = 0;
  if ( v140 )
  {
    if ( (unsigned int)bUMPDSecurityGateEx() && !v50 )
    {
      if ( v40 )
        FreeThreadBufferWithTag(v42, v65, v66);
      else
        EngFreeUserMem(v42);
      v68 = *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v126, 0LL);
      FRINGERECT::~FRINGERECT((FRINGERECT *)&v155);
      return v68;
    }
    v52 = v50->left;
    v123 = v52;
    if ( v52 == -1 || (_DWORD)v126 == -1 )
    {
      EngTextOutBitBlt(
        (struct SURFACE *)p_pvScan0,
        v51,
        v44,
        v67,
        (struct _SURFOBJ *)v115,
        v133,
        v116,
        v140,
        v117,
        (struct _POINTL *)v118,
        (struct _BRUSHOBJ *)v132,
        v142,
        v120);
      v43 = pstroa;
    }
    else
    {
      v43 = pstroa;
      v69 = v140;
      v70 = pstroa->rclBkGround.top;
      v71 = v140->top;
      if ( v70 > v71 )
      {
        v160[4 * v159] = v140->left;
        v160[4 * v159 + 1] = v71;
        v160[4 * v159 + 2] = v69->right;
        v160[4 * v159 + 3] = v70;
        v72 = ++v159;
      }
      else
      {
        v72 = v159;
      }
      v73 = v43->rclBkGround.left;
      v49 = (unsigned int)v69->left;
      v74 = v43->rclBkGround.bottom;
      if ( v73 > (int)v49 )
      {
        v160[4 * v72] = v49;
        v160[4 * v159 + 1] = v70;
        v160[4 * v159 + 2] = v73;
        v160[4 * v159 + 3] = v74;
        v72 = ++v159;
      }
      v75 = v43->rclBkGround.right;
      v76 = v69->right;
      if ( v75 < v76 )
      {
        v160[4 * v72] = v75;
        v160[4 * v159 + 1] = v70;
        v160[4 * v159 + 2] = v76;
        v160[4 * v159 + 3] = v74;
        v72 = ++v159;
      }
      flAccel = (unsigned int)v69->bottom;
      if ( v74 < (int)flAccel )
      {
        v160[4 * v72] = v49;
        v160[4 * v159 + 1] = v74;
        v160[4 * v159 + 2] = v76;
        v40 = v122;
        v160[4 * v159++ + 3] = flAccel;
      }
      else
      {
        v40 = v122;
      }
    }
  }
  else
  {
    v52 = v123;
  }
  v137 = 0LL;
  v138 = 0;
  v139 = 0;
  v149 = 0LL;
  v150 = 0LL;
  if ( (v44 & 0x10) == 0 )
    goto LABEL_50;
  v90 = v43->rclBkGround.top;
  LODWORD(v149) = *((_DWORD *)p_pvScan0 + 24);
  v91 = v43->rclBkGround.left & ((v44 >> 3) & 4 | 0xFFFFFFF8);
  DWORD1(v149) = v43->rclBkGround.right - v91;
  v95 = (*((_DWORD *)p_pvScan0 + 28) & 0x40000) == 0;
  DWORD2(v149) = v43->rclBkGround.bottom - v90;
  v92 = 1;
  if ( !v95 )
    v92 = 262145;
  *(_QWORD *)&v150 = 0LL;
  DWORD2(v150) = v92;
  if ( !SURFMEM::bCreateDIB((SURFMEM *)&v137, (struct _DEVBITMAPINFO *)&v149, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
  {
    v95 = v40 == 0;
LABEL_149:
    if ( v95 )
      EngFreeUserMem(v42);
    else
      FreeThreadBufferWithTag(v42, v93, v94);
    v96 = *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v126, 0LL);
    SURFMEM::~SURFMEM((SURFMEM *)&v137);
    FRINGERECT::~FRINGERECT((FRINGERECT *)&v155);
    return v96;
  }
  v97 = *((_QWORD *)p_pvScan0 + 6);
  v144 = v137;
  v98 = 0;
  v99 = 0;
  if ( p_pvScan0 == *(signed __int16 **)(v97 + 2544) && (*(_DWORD *)(v97 + 40) & 0x20000) != 0 )
  {
    v98 = *(_DWORD *)(v97 + 2576);
    v99 = *(_DWORD *)(v97 + 2580);
  }
  v43 = pstroa;
  flAccel = (unsigned int)pstroa->rclBkGround.left;
  v100 = pstroa->rclBkGround.top;
  v49 = (unsigned int)pstroa->rclBkGround.right;
  if ( v98 > (int)flAccel )
    flAccel = (unsigned int)v98;
  rclBkGround = pstroa->rclBkGround;
  LODWORD(v153) = flAccel;
  if ( v99 > v100 )
    v100 = v99;
  v154 = rclBkGround;
  v102 = v141->sizlBitmap.cx + v98;
  DWORD1(v153) = v100;
  if ( v102 < (int)v49 )
    v49 = (unsigned int)v102;
  v103 = v99 + v141->sizlBitmap.cy;
  DWORD2(v153) = v49;
  v104 = pstroa->rclBkGround.bottom;
  if ( v103 < v104 )
    v104 = v103;
  HIDWORD(v153) = v104;
  if ( v124 )
  {
    if ( !(unsigned int)bIntersect(&v153, &v133->rclBounds) )
    {
      v95 = v122 == 0;
      goto LABEL_149;
    }
    v104 = HIDWORD(v153);
    v49 = DWORD2(v153);
    v100 = DWORD1(v153);
    flAccel = (unsigned int)v153;
    v43 = pstroa;
  }
  v154.top = DWORD1(v153) - v90;
  v154.right = DWORD2(v153) - v91;
  v154.bottom = HIDWORD(v153) - v90;
  v154.left = flAccel - v91;
  if ( v52 == -1 && (int)flAccel < (int)v49 && v100 < v104 )
  {
    v105 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v162,
      (struct SURFACE *)p_pvScan0,
      v131,
      v105);
    v107 = Gre::Base::Globals(v106);
    if ( (*((_DWORD *)p_pvScan0 + 28) & 0x400) != 0 )
      v108 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v97 + 2832);
    else
      v108 = EngCopyBits;
    v109 = (char *)v107 + 4552;
    v110 = (char *)v137 + 24;
    if ( !v137 )
      v110 = 0LL;
    ((void (__fastcall *)(char *, signed __int16 *, _QWORD, char *, RECTL *, __int128 *))v108)(
      v110,
      p_pvScan0 + 12,
      0LL,
      v109,
      &v154,
      &v153);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v162);
    v43 = pstroa;
    *(_QWORD *)&pstroa[1].cGlyphs = 0LL;
    goto LABEL_51;
  }
LABEL_50:
  *(_QWORD *)&v43[1].cGlyphs = 0LL;
  if ( v52 != -1 )
  {
    v49 = (unsigned __int64)v42;
    flAccel = (unsigned __int64)(unsigned int)v39 >> 2;
    if ( flAccel )
    {
      if ( ((unsigned __int8)v42 & 4) == 0 )
        goto LABEL_79;
      *v42 = 0;
      if ( --flAccel )
      {
        v49 = (unsigned __int64)(v42 + 1);
LABEL_79:
        memset((void *)v49, 0, 8 * (flAccel >> 1));
        if ( (flAccel & 1) != 0 )
          *(_DWORD *)(v49 + 4 * flAccel - 4) = 0;
      }
    }
  }
LABEL_51:
  p_rclBkGround = &v43->rclBkGround;
  v132 = &v43->rclBkGround;
  do
  {
    if ( v52 == -1 )
    {
      v49 = (unsigned __int64)v42;
      flAccel = (unsigned __int64)(unsigned int)v39 >> 2;
      if ( flAccel )
      {
        if ( ((unsigned __int8)v42 & 4) != 0 )
        {
          *v42 = 0;
          if ( !--flAccel )
            goto LABEL_57;
          v49 = (unsigned __int64)(v42 + 1);
        }
        memset((void *)v49, 0, 8 * (flAccel >> 1));
        p_rclBkGround = v132;
        if ( (flAccel & 1) != 0 )
          *(_DWORD *)(v49 + 4 * flAccel - 4) = 0;
      }
    }
LABEL_57:
    v54 = v43->pgp;
    if ( v54 )
    {
      v55 = v43->cGlyphs;
      v56 = 0;
      pc = v43->cGlyphs;
      ppgpos = v54;
      v130 = 0;
    }
    else
    {
      if ( ((__int64)v43[4].pwszOrg & 2) != 0 )
        v77 = STROBJ_bEnum(v43, &pc, &ppgpos);
      else
        v77 = STROBJ_bEnumCheckBounds(v43, &pc, &ppgpos, &v134);
      v43 = pstroa;
      v55 = pc;
      v56 = v77;
      v54 = ppgpos;
      v130 = v77;
    }
    if ( v55 )
    {
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v164 = 0;
      switch ( v124 )
      {
        case 0:
          goto LABEL_61;
        case 1:
          si128 = v133->rclBounds;
LABEL_61:
          v57 = v55;
          v58 = v131;
          vExpandAndCopyText(
            (struct SURFACE *)p_pvScan0,
            v131,
            v54,
            v57,
            v147,
            v129,
            v43->ulCharInc,
            v144,
            v136,
            p_rclBkGround,
            v119,
            (int)v126,
            v123,
            v125,
            &si128,
            v146,
            v121,
            v143,
            v142);
          goto LABEL_62;
        case 3:
          v84 = v133;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v133, 0, 0, 4u, 0);
          v85 = v147;
          v86 = v132;
          v87 = v123;
          do
          {
            v88 = XCLIPOBJ::bEnum((XCLIPOBJ *)v84, 0x134u, &v151, 0LL);
            v89 = v131;
            v152[v151].bottom = 0;
            vExpandAndCopyText(
              (struct SURFACE *)p_pvScan0,
              v89,
              v54,
              v55,
              v85,
              v129,
              pstroa->ulCharInc,
              v144,
              v136,
              v86,
              v119,
              (int)v126,
              v87,
              v125,
              v152,
              v146,
              v121,
              v143,
              v142);
            v95 = v88 == 0;
            v84 = v133;
          }
          while ( !v95 );
          v42 = v145;
          LODWORD(v39) = v148;
          v56 = v130;
          break;
      }
    }
    v58 = v131;
LABEL_62:
    p_rclBkGround = v132;
    v95 = v56 == 0;
    v52 = v123;
    v43 = pstroa;
  }
  while ( !v95 );
  if ( (v125 & 0x10) != 0 )
  {
    v111 = *((_QWORD *)p_pvScan0 + 6);
    v112 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v162,
      (struct SURFACE *)p_pvScan0,
      v58,
      v112);
    if ( (*((_DWORD *)p_pvScan0 + 28) & 0x400) != 0 )
      v113 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v111 + 2832);
    else
      v113 = EngCopyBits;
    v114 = (char *)v137 + 24;
    if ( !v137 )
      v114 = 0LL;
    ((void (__fastcall *)(signed __int16 *, char *, CLIPOBJ *, _QWORD, __int128 *, RECTL *))v113)(
      p_pvScan0 + 12,
      v114,
      v133,
      0LL,
      &v153,
      &v154);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v162);
  }
  if ( v122 )
    FreeThreadBufferWithTag(v42, flAccel, v49);
  else
    EngFreeUserMem(v42);
  SURFMEM::~SURFMEM((SURFMEM *)&v137);
  FRINGERECT::~FRINGERECT((FRINGERECT *)&v155);
  return 1;
}
