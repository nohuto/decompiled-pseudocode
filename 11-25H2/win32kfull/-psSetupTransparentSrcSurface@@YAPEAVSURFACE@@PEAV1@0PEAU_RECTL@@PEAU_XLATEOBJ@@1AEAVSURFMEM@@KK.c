/*
 * XREFs of ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x14006DA0C
 * Callers:
 *     EngAlphaBlend @ 0x14006D290 (EngAlphaBlend.c)
 *     EngTransparentBlt @ 0x1400F62F0 (EngTransparentBlt.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x14006CB8C (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x14006D238 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngStretchBlt @ 0x140132EF0 (EngStretchBlt.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

struct SURFACE *__fastcall psSetupTransparentSrcSurface(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct _RECTL *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclSrc,
        struct SURFMEM *a6,
        unsigned int a7,
        unsigned int a8)
{
  struct SURFACE *v10; // rsi
  LONG right; // edx
  LONG left; // r8d
  LONG *p_right; // r13
  LONG v14; // r9d
  int v15; // ecx
  bool v16; // al
  LONG v17; // ecx
  LONG v18; // ecx
  LONG v19; // edx
  LONG v20; // ecx
  LONG v21; // edx
  LONG v22; // ecx
  LONG v23; // r13d
  LONG v24; // ecx
  LONG v25; // edx
  LONG v26; // ecx
  LONG v27; // r8d
  __int64 *v29; // rax
  LONG v30; // r10d
  LONG v31; // edi
  LONG v32; // r13d
  LONG v33; // r8d
  int v34; // r10d
  int v35; // r8d
  int DIB; // r13d
  LONG v37; // edi
  CLIPOBJ *v38; // r13
  int v39; // ecx
  int v40; // edx
  int v41; // edi
  __int64 v42; // rdi
  __int64 *v43; // rax
  int v44; // r13d
  BOOL (__stdcall *v45)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  LONG v46; // edx
  LONG v47; // ecx
  __int64 v48; // rdi
  size_t v49; // r8
  _DWORD *v50; // rdx
  unsigned int j; // ecx
  _BYTE *v52; // r8
  _BYTE *v53; // r9
  _BYTE *v54; // rdx
  __int64 v55; // rcx
  _BYTE *v56; // rdx
  _WORD *v57; // rdx
  unsigned int i; // ecx
  unsigned int v59; // edx
  void *v60; // rcx
  unsigned __int64 v61; // rdx
  struct Gre::Base::SESSION_GLOBALS *v62; // r8
  unsigned __int64 v63; // rdx
  __int64 v64; // rdi
  struct SURFACE *v65; // rcx
  LONG *v66; // r8
  struct _RECTL *v67; // rdx
  LONG *v68; // rax
  LONG v69; // [rsp+60h] [rbp-218h]
  LONG top; // [rsp+64h] [rbp-214h]
  struct REGION *v71; // [rsp+70h] [rbp-208h] BYREF
  int v72; // [rsp+78h] [rbp-200h]
  LONG v73; // [rsp+7Ch] [rbp-1FCh]
  int IsSourceBGRA; // [rsp+80h] [rbp-1F8h]
  struct _RECTL *v75; // [rsp+88h] [rbp-1F0h]
  POINTL pptlHTOrg; // [rsp+90h] [rbp-1E8h] BYREF
  LONG *p_top; // [rsp+98h] [rbp-1E0h] BYREF
  struct SURFACE *v78; // [rsp+A0h] [rbp-1D8h]
  int v79; // [rsp+A8h] [rbp-1D0h] BYREF
  LONG v80; // [rsp+ACh] [rbp-1CCh]
  LONG v81; // [rsp+B0h] [rbp-1C8h]
  int v82; // [rsp+B4h] [rbp-1C4h]
  __int64 v83; // [rsp+B8h] [rbp-1C0h]
  int v84; // [rsp+C0h] [rbp-1B8h]
  int v85; // [rsp+C4h] [rbp-1B4h]
  LONG bottom; // [rsp+C8h] [rbp-1B0h]
  LONG v87; // [rsp+CCh] [rbp-1ACh]
  LONG v88; // [rsp+D0h] [rbp-1A8h]
  LONG v89; // [rsp+D4h] [rbp-1A4h]
  _BYTE *v90; // [rsp+D8h] [rbp-1A0h]
  struct SURFMEM *v91; // [rsp+E0h] [rbp-198h]
  LONG *v92; // [rsp+E8h] [rbp-190h]
  LONG *p_bottom; // [rsp+F0h] [rbp-188h]
  __int64 v94; // [rsp+F8h] [rbp-180h]
  struct Gre::Base::SESSION_GLOBALS *v95; // [rsp+100h] [rbp-178h]
  _DWORD v96[4]; // [rsp+108h] [rbp-170h] BYREF
  __int64 v97; // [rsp+118h] [rbp-160h]
  int v98; // [rsp+120h] [rbp-158h]
  int v99; // [rsp+124h] [rbp-154h]
  struct Gre::Base::SESSION_GLOBALS *v100; // [rsp+128h] [rbp-150h]
  _DWORD *v101; // [rsp+130h] [rbp-148h]
  _BYTE *v102; // [rsp+138h] [rbp-140h]
  _WORD *v103; // [rsp+140h] [rbp-138h]
  XLATEOBJ *pxlo; // [rsp+148h] [rbp-130h]
  RECTL v105; // [rsp+150h] [rbp-128h] BYREF
  RECTL prclDest; // [rsp+160h] [rbp-118h] BYREF
  struct _RECTL v107; // [rsp+170h] [rbp-108h] BYREF
  RECTL v108; // [rsp+180h] [rbp-F8h] BYREF
  _BYTE v109[160]; // [rsp+190h] [rbp-E8h] BYREF

  v10 = a1;
  v78 = a1;
  v75 = a3;
  pxlo = a4;
  pptlHTOrg = (POINTL)prclSrc;
  v91 = a6;
  v95 = Gre::Base::Globals(a1);
  right = a3->right;
  left = a3->left;
  LODWORD(v71) = right - a3->left;
  bottom = a3->bottom;
  top = a3->top;
  p_right = &prclSrc->right;
  v92 = &prclSrc->right;
  v87 = prclSrc->right;
  v14 = prclSrc->left;
  v15 = v87 - prclSrc->left;
  p_bottom = &prclSrc->bottom;
  p_top = &prclSrc->top;
  v89 = prclSrc->bottom;
  v88 = prclSrc->top;
  v16 = (_DWORD)v71 != v15 || bottom - top != v89 - v88;
  IsSourceBGRA = 0;
  v72 = 0;
  if ( v10 && a2 )
  {
    if ( !v16 )
    {
      if ( v14 < 0 )
      {
        a3->left = left - v14;
        prclSrc->left = 0;
        right = a3->right;
      }
      v17 = *((_DWORD *)v10 + 14);
      if ( *p_right > v17 )
      {
        a3->right = v17 + right - *p_right;
        *p_right = *((_DWORD *)v10 + 14);
      }
      if ( *p_top < 0 )
      {
        a3->top -= *p_top;
        prclSrc->top = 0;
      }
      v18 = prclSrc->bottom;
      v19 = *((_DWORD *)v10 + 15);
      if ( v18 > v19 )
      {
        a3->bottom = v19 + a3->bottom - v18;
        prclSrc->bottom = *((_DWORD *)v10 + 15);
      }
      if ( a3->left < 0 )
      {
        prclSrc->left -= a3->left;
        a3->left = 0;
      }
      v20 = a3->right;
      v21 = *((_DWORD *)a2 + 14);
      if ( v20 > v21 )
      {
        prclSrc->right = v21 + prclSrc->right - v20;
        a3->right = *((_DWORD *)a2 + 14);
      }
      v22 = a3->top;
      if ( v22 < 0 )
      {
        prclSrc->top -= v22;
        a3->top = 0;
      }
      v23 = a3->bottom;
      v24 = *((_DWORD *)a2 + 15);
      if ( v23 > v24 )
      {
        prclSrc->bottom = v24 + prclSrc->bottom - v23;
        v23 = *((_DWORD *)a2 + 15);
        a3->bottom = v23;
      }
      v25 = a3->left;
      v26 = a3->right;
      if ( a3->left >= v26 || (v27 = a3->top, v27 >= v23) )
      {
        a3->left = v26;
        return v10;
      }
      if ( !*((_WORD *)v10 + 50) )
        return v10;
      v96[3] = 0;
      v99 = 0;
      v42 = *((_QWORD *)v10 + 6);
      v43 = (__int64 *)*((_QWORD *)v10 + 16);
      LODWORD(v71) = v26 - v25;
      v44 = v23 - v27;
      v96[1] = v26 - v25;
      v96[2] = v44;
      v96[0] = *((_DWORD *)v10 + 24);
      v98 = *((_DWORD *)v10 + 28) & 0x40000;
      v97 = 0LL;
      if ( v43 )
        v97 = *v43;
      if ( SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v96, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        *(_QWORD *)&v105.left = 0LL;
        *(_QWORD *)&v105.right = __PAIR64__(v44, (unsigned int)v71);
        *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)v10 + 6);
        p_top = *(LONG **)&prclSrc->left;
        if ( (*((_DWORD *)v10 + 28) & 0x400) != 0 )
          v45 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v42 + 2832);
        else
          v45 = EngCopyBits;
        ((void (__fastcall *)(__int64, char *, _QWORD, _QWORD, RECTL *, LONG **))v45)(
          (*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL),
          (char *)v10 + 24,
          0LL,
          0LL,
          &v105,
          &p_top);
        *prclSrc = v105;
        return *(struct SURFACE **)a6;
      }
      return 0LL;
    }
    v82 = 0;
    v85 = 0;
    v29 = (__int64 *)*((_QWORD *)v10 + 16);
    v30 = *((_DWORD *)a2 + 14);
    v31 = *((_DWORD *)a2 + 15);
    v32 = 0;
    if ( left > 0 )
      v32 = left;
    v73 = v32;
    v105.left = v32;
    v33 = 0;
    if ( top > 0 )
      v33 = top;
    v69 = v33;
    v105.top = v33;
    if ( v30 > right )
      v30 = right;
    v105.right = v30;
    if ( v31 > bottom )
      v31 = bottom;
    v105.bottom = v31;
    if ( v32 >= v30 || v33 >= v31 )
      return 0LL;
    if ( v14 < 0 || v87 > *((_DWORD *)v10 + 14) || v88 < 0 || v89 > *((_DWORD *)v10 + 15) )
      v72 = 1;
    if ( !a7 )
    {
      IsSourceBGRA = bIsSourceBGRA(v10);
      v80 = v34 - v32;
      v81 = v31 - v35;
      v79 = 6;
      v84 = *((_DWORD *)v10 + 28) & 0x40000;
      v83 = **((_QWORD **)v95 + 472);
      DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)&v79, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !DIB || !v72 || IsSourceBGRA )
      {
        v37 = v69;
        goto LABEL_47;
      }
      v61 = *(unsigned int *)(*(_QWORD *)a6 + 64LL);
      v62 = *(struct Gre::Base::SESSION_GLOBALS **)(*(_QWORD *)a6 + 72LL);
      v95 = v62;
      v100 = v62;
      v63 = v61 >> 2;
      v94 = v63;
      if ( !v63 )
        goto LABEL_108;
      if ( ((unsigned __int8)v62 & 4) != 0 )
      {
        *(_DWORD *)v62 = -16777216;
        v94 = --v63;
        if ( !v63 )
        {
LABEL_108:
          v37 = v69;
LABEL_47:
          if ( DIB )
          {
            pptlHTOrg = 0LL;
            prclDest = *a3;
            ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v109);
            v38 = 0LL;
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v71);
            if ( !v71 )
              goto LABEL_63;
            prclDest.left -= v73;
            v39 = prclDest.right - v73;
            prclDest.right -= v73;
            v40 = prclDest.top - v37;
            prclDest.top -= v37;
            v41 = prclDest.bottom - v69;
            prclDest.bottom -= v69;
            if ( prclDest.left < 0
              || v39 > *(_DWORD *)(*(_QWORD *)a6 + 56LL)
              || v40 < 0
              || v41 > *(_DWORD *)(*(_QWORD *)a6 + 60LL) )
            {
              v46 = *(_DWORD *)(*(_QWORD *)a6 + 60LL);
              v47 = *(_DWORD *)(*(_QWORD *)a6 + 56LL);
              *(_QWORD *)&v107.left = 0LL;
              v107.right = v47;
              v107.bottom = v46;
              RGNOBJ::vSet((RGNOBJ *)&v71, &v107);
              v38 = (CLIPOBJ *)v109;
              v108 = prclDest;
              XCLIPOBJ::vSetup((XCLIPOBJ *)v109, v71, (const struct ERECTL *)&v108, 0);
            }
            *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)v10 + 6);
            if ( EngStretchBlt(
                   (SURFOBJ *)((*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL)),
                   (SURFOBJ *)((char *)v10 + 24),
                   0LL,
                   v38,
                   pxlo,
                   0LL,
                   &pptlHTOrg,
                   &prclDest,
                   prclSrc,
                   0LL,
                   3u) )
            {
              prclSrc->left = 0;
              *v92 = v80;
              *p_top = 0;
              *p_bottom = v81;
              *a3 = v105;
              if ( !IsSourceBGRA && !a7 )
              {
                v64 = *(_QWORD *)a6;
                v65 = *(struct SURFACE **)(*(_QWORD *)a6 + 80LL);
                v66 = (LONG *)((char *)v65 + *(_DWORD *)(*(_QWORD *)a6 + 60LL) * *(_DWORD *)(*(_QWORD *)a6 + 88LL));
                p_bottom = v66;
                while ( 1 )
                {
                  v78 = v65;
                  if ( v65 == (struct SURFACE *)v66 )
                    break;
                  v67 = (struct _RECTL *)v65;
                  v75 = (struct _RECTL *)v65;
                  v68 = (LONG *)((char *)v65 + 4 * *(int *)(v64 + 56));
                  v92 = v68;
                  while ( v67 != (struct _RECTL *)v68 )
                  {
                    v67->left ^= 0xFF000000;
                    v67 = (struct _RECTL *)((char *)v67 + 4);
                    v75 = v67;
                  }
                  v64 = *(_QWORD *)a6;
                  v65 = (struct SURFACE *)((char *)v65 + *(int *)(*(_QWORD *)a6 + 88LL));
                }
              }
              v10 = *(struct SURFACE **)a6;
            }
            else
            {
LABEL_63:
              v10 = 0LL;
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v71);
            return v10;
          }
          return 0LL;
        }
        v62 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v62 + 4);
        v100 = v62;
      }
      memset64(v62, 0xFF000000FF000000uLL, v63 >> 1);
      if ( (v63 & 1) != 0 )
        *((_DWORD *)v62 + v63 - 1) = -16777216;
      goto LABEL_108;
    }
    v80 = (int)v71;
    v81 = bottom - top;
    v79 = *((_DWORD *)v10 + 24);
    v84 = *((_DWORD *)v10 + 28) & 0x40000;
    v83 = 0LL;
    if ( v29 )
      v83 = *v29;
    DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)&v79, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( DIB && v72 )
    {
      v48 = *(_QWORD *)a6;
      v49 = *(unsigned int *)(*(_QWORD *)a6 + 64LL);
      if ( *((_DWORD *)v10 + 24) == 1 )
      {
        v60 = *(void **)(v48 + 72);
        if ( a8 )
          v59 = 255;
        else
          v59 = 0;
      }
      else
      {
        if ( *((_DWORD *)v10 + 24) == 2 )
        {
          v59 = a8 | (16 * a8);
        }
        else
        {
          if ( *((_DWORD *)v10 + 24) != 3 )
          {
            switch ( *((_DWORD *)v10 + 24) )
            {
              case 4:
                v57 = *(_WORD **)(v48 + 72);
                v103 = v57;
                for ( i = 0; i < (unsigned int)v49 >> 1; ++i )
                {
                  *v57++ = a8;
                  v103 = v57;
                }
                break;
              case 5:
                v52 = *(_BYTE **)(v48 + 80);
                v102 = v52;
                v53 = &v52[*(_DWORD *)(v48 + 60) * *(_DWORD *)(v48 + 88)];
                while ( v52 != v53 )
                {
                  v54 = v52;
                  v90 = v52;
                  v55 = 3 * *(_DWORD *)(v48 + 56) - 2LL;
                  while ( v54 < &v52[v55] )
                  {
                    *v54 = a8;
                    v56 = v54 + 1;
                    *v56++ = BYTE1(a8);
                    *v56 = BYTE2(a8);
                    v54 = v56 + 1;
                    v90 = v54;
                  }
                  v48 = *(_QWORD *)a6;
                  v52 += *(int *)(*(_QWORD *)a6 + 88LL);
                  v102 = v52;
                }
                break;
              case 6:
                v50 = *(_DWORD **)(v48 + 72);
                v101 = v50;
                for ( j = 0; j < (unsigned int)v49 >> 2; ++j )
                {
                  *v50++ = a8;
                  v101 = v50;
                }
                break;
            }
            goto LABEL_99;
          }
          v59 = a8;
        }
        v60 = *(void **)(v48 + 72);
      }
      memset_0(v60, v59, v49);
    }
LABEL_99:
    v37 = v69;
    goto LABEL_47;
  }
  return 0LL;
}
