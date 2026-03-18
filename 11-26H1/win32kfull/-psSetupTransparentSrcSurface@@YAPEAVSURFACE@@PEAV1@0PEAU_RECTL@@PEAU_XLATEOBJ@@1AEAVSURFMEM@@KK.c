/*
 * XREFs of ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1400E5094
 * Callers:
 *     EngTransparentBlt @ 0x1400609D0 (EngTransparentBlt.c)
 *     EngAlphaBlend @ 0x1400E4850 (EngAlphaBlend.c)
 * Callees:
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1400E38E4 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngStretchBlt @ 0x1400E65F0 (EngStretchBlt.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1400E8CA8 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
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
  LONG left; // ecx
  LONG right; // r11d
  LONG v13; // edx
  LONG v14; // r8d
  LONG v15; // r9d
  bool v16; // al
  LONG v17; // eax
  LONG *v18; // rdx
  LONG v19; // ecx
  LONG v20; // edx
  LONG v21; // ecx
  LONG v22; // edx
  LONG v23; // ecx
  LONG v24; // ecx
  LONG v25; // r12d
  LONG v26; // ecx
  LONG v27; // r8d
  LONG v28; // edx
  __int64 *v30; // rax
  LONG v31; // r8d
  LONG v32; // edi
  LONG v33; // r10d
  LONG v34; // r9d
  int v35; // r8d
  int v36; // r10d
  int v37; // r9d
  int DIB; // r12d
  LONG v39; // edi
  CLIPOBJ *v40; // r12
  __int64 v41; // rdi
  __int64 *v42; // rax
  int v43; // r12d
  BOOL (__stdcall *v44)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v45; // ecx
  int v46; // edx
  int v47; // edi
  LONG v48; // edx
  LONG v49; // ecx
  __int64 v50; // rdi
  size_t v51; // r8
  _DWORD *v52; // rdx
  unsigned int j; // ecx
  _BYTE *v54; // r8
  _BYTE *v55; // r9
  _BYTE *v56; // rdx
  __int64 v57; // rcx
  _BYTE *v58; // rdx
  _WORD *v59; // rdx
  unsigned int i; // ecx
  unsigned int v61; // edx
  void *v62; // rcx
  _DWORD *v63; // r8
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rdx
  __int64 v66; // rdi
  XLATEOBJ *v67; // rcx
  LONG *v68; // r8
  XLATEOBJ *v69; // rdx
  XLATEOBJ *v70; // rax
  LONG top; // [rsp+60h] [rbp-1E8h]
  LONG v72; // [rsp+60h] [rbp-1E8h]
  int v73; // [rsp+64h] [rbp-1E4h]
  struct REGION *v74; // [rsp+70h] [rbp-1D8h] BYREF
  int v75; // [rsp+78h] [rbp-1D0h]
  LONG v76; // [rsp+7Ch] [rbp-1CCh]
  int IsSourceBGRA; // [rsp+80h] [rbp-1C8h]
  int v78; // [rsp+88h] [rbp-1C0h] BYREF
  LONG v79; // [rsp+8Ch] [rbp-1BCh]
  LONG v80; // [rsp+90h] [rbp-1B8h]
  int v81; // [rsp+94h] [rbp-1B4h]
  __int64 v82; // [rsp+98h] [rbp-1B0h]
  int v83; // [rsp+A0h] [rbp-1A8h]
  int v84; // [rsp+A4h] [rbp-1A4h]
  POINTL pptlHTOrg; // [rsp+A8h] [rbp-1A0h] BYREF
  LONG *p_top; // [rsp+B0h] [rbp-198h] BYREF
  RECTL *v87; // [rsp+B8h] [rbp-190h]
  LONG bottom; // [rsp+C0h] [rbp-188h]
  LONG v89; // [rsp+C4h] [rbp-184h]
  int v90; // [rsp+C8h] [rbp-180h]
  LONG v91; // [rsp+CCh] [rbp-17Ch]
  _BYTE *v92; // [rsp+D0h] [rbp-178h]
  struct SURFMEM *v93; // [rsp+D8h] [rbp-170h]
  XLATEOBJ *pxlo; // [rsp+E0h] [rbp-168h]
  LONG *p_bottom; // [rsp+E8h] [rbp-160h]
  __int64 v96; // [rsp+F0h] [rbp-158h]
  LONG *p_right; // [rsp+F8h] [rbp-150h]
  _DWORD *v98; // [rsp+100h] [rbp-148h]
  _DWORD *v99; // [rsp+108h] [rbp-140h]
  _BYTE *v100; // [rsp+110h] [rbp-138h]
  _WORD *v101; // [rsp+118h] [rbp-130h]
  RECTL v102; // [rsp+120h] [rbp-128h] BYREF
  RECTL prclDest; // [rsp+130h] [rbp-118h] BYREF
  struct _RECTL v104; // [rsp+140h] [rbp-108h] BYREF
  RECTL v105; // [rsp+150h] [rbp-F8h] BYREF
  _BYTE v106[160]; // [rsp+160h] [rbp-E8h] BYREF

  v10 = a1;
  v93 = a6;
  v87 = prclSrc;
  *(_QWORD *)&v105.left = a1;
  *(_QWORD *)&v104.left = a3;
  pxlo = a4;
  pptlHTOrg = (POINTL)prclSrc;
  *(_QWORD *)&prclDest.left = Gre::Base::Globals(a1);
  left = a3->left;
  right = a3->right;
  v73 = right - a3->left;
  top = a3->top;
  bottom = a3->bottom;
  LODWORD(v74) = bottom - top;
  v13 = prclSrc->left;
  p_right = &prclSrc->right;
  v89 = prclSrc->right;
  p_top = &prclSrc->top;
  v14 = prclSrc->top;
  v90 = v14;
  p_bottom = &prclSrc->bottom;
  v15 = prclSrc->bottom;
  v91 = v15;
  v16 = v73 != v89 - v13 || bottom - top != v15 - v14;
  IsSourceBGRA = 0;
  v75 = 0;
  if ( v10 && a2 )
  {
    if ( !v16 )
    {
      if ( v13 < 0 )
      {
        a3->left = left - v13;
        prclSrc->left = 0;
        right = a3->right;
      }
      v17 = *((_DWORD *)v10 + 14);
      v18 = p_right;
      if ( *p_right > v17 )
      {
        a3->right = right + v17 - *p_right;
        *v18 = *((_DWORD *)v10 + 14);
      }
      if ( *p_top < 0 )
      {
        a3->top -= *p_top;
        prclSrc->top = 0;
      }
      v19 = *((_DWORD *)v10 + 15);
      v20 = prclSrc->bottom;
      if ( v20 > v19 )
      {
        a3->bottom = v19 + a3->bottom - v20;
        prclSrc->bottom = *((_DWORD *)v10 + 15);
      }
      if ( a3->left < 0 )
      {
        prclSrc->left -= a3->left;
        a3->left = 0;
      }
      v21 = *((_DWORD *)a2 + 14);
      v22 = a3->right;
      if ( v22 > v21 )
      {
        prclSrc->right = v21 + prclSrc->right - v22;
        a3->right = *((_DWORD *)a2 + 14);
      }
      v23 = a3->top;
      if ( v23 < 0 )
      {
        prclSrc->top -= v23;
        a3->top = 0;
      }
      v24 = *((_DWORD *)a2 + 15);
      v25 = a3->bottom;
      if ( v25 > v24 )
      {
        prclSrc->bottom = v24 + prclSrc->bottom - v25;
        v25 = *((_DWORD *)a2 + 15);
        a3->bottom = v25;
      }
      v26 = a3->right;
      v27 = a3->left;
      if ( a3->left >= v26 || (v28 = a3->top, v28 >= v25) )
      {
        a3->left = v26;
        return v10;
      }
      if ( !*((_WORD *)v10 + 50) )
        return v10;
      v81 = 0;
      v84 = 0;
      v41 = *((_QWORD *)v10 + 6);
      v42 = (__int64 *)*((_QWORD *)v10 + 16);
      LODWORD(v74) = v26 - v27;
      v43 = v25 - v28;
      v79 = v26 - v27;
      v80 = v43;
      v78 = *((_DWORD *)v10 + 24);
      v83 = *((_DWORD *)v10 + 28) & 0x40000;
      v82 = 0LL;
      if ( v42 )
        v82 = *v42;
      if ( SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)&v78, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
      {
        *(_QWORD *)&v102.left = 0LL;
        *(_QWORD *)&v102.right = __PAIR64__(v43, (unsigned int)v74);
        *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)v10 + 6);
        p_top = *(LONG **)&prclSrc->left;
        if ( (*((_DWORD *)v10 + 28) & 0x400) != 0 )
          v44 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v41 + 2832);
        else
          v44 = EngCopyBits;
        ((void (__fastcall *)(__int64, char *, _QWORD, _QWORD, RECTL *, LONG **))v44)(
          (*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL),
          (char *)v10 + 24,
          0LL,
          0LL,
          &v102,
          &p_top);
        *prclSrc = v102;
        return *(struct SURFACE **)a6;
      }
      return 0LL;
    }
    v81 = 0;
    v84 = 0;
    v30 = (__int64 *)*((_QWORD *)v10 + 16);
    v31 = *((_DWORD *)a2 + 14);
    v32 = *((_DWORD *)a2 + 15);
    v33 = 0;
    if ( left > 0 )
      v33 = left;
    v76 = v33;
    v102.left = v33;
    v34 = 0;
    if ( top > 0 )
      v34 = top;
    v72 = v34;
    v102.top = v34;
    if ( v31 > right )
      v31 = right;
    v102.right = v31;
    if ( v32 > bottom )
      v32 = bottom;
    v102.bottom = v32;
    if ( v33 >= v31 || v34 >= v32 )
      return 0LL;
    if ( v13 < 0 || v90 < 0 || v89 > *((_DWORD *)v10 + 14) || v91 > *((_DWORD *)v10 + 15) )
      v75 = 1;
    if ( !a7 )
    {
      IsSourceBGRA = bIsSourceBGRA(v10);
      v79 = v35 - v36;
      v80 = v32 - v37;
      v78 = 6;
      v83 = *((_DWORD *)v10 + 28) & 0x40000;
      v82 = **(_QWORD **)(*(_QWORD *)&prclDest.left + 3880LL);
      DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)&v78, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
      if ( !DIB || !v75 || IsSourceBGRA )
      {
        v39 = v72;
        goto LABEL_47;
      }
      v63 = *(_DWORD **)(*(_QWORD *)a6 + 72LL);
      v64 = *(unsigned int *)(*(_QWORD *)a6 + 64LL);
      v98 = v63;
      v65 = v64 >> 2;
      v96 = v65;
      if ( !v65 )
        goto LABEL_108;
      if ( ((unsigned __int8)v63 & 4) != 0 )
      {
        *v63 = -16777216;
        v96 = --v65;
        if ( !v65 )
        {
LABEL_108:
          v39 = v72;
LABEL_47:
          if ( DIB )
          {
            pptlHTOrg = 0LL;
            prclDest = *a3;
            ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v106);
            v40 = 0LL;
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v74);
            if ( !v74 )
              goto LABEL_49;
            prclDest.left -= v76;
            v45 = prclDest.right - v76;
            prclDest.right -= v76;
            v46 = prclDest.top - v39;
            prclDest.top -= v39;
            v47 = prclDest.bottom - v72;
            prclDest.bottom -= v72;
            if ( prclDest.left < 0
              || v45 > *(_DWORD *)(*(_QWORD *)a6 + 56LL)
              || v46 < 0
              || v47 > *(_DWORD *)(*(_QWORD *)a6 + 60LL) )
            {
              v48 = *(_DWORD *)(*(_QWORD *)a6 + 60LL);
              v49 = *(_DWORD *)(*(_QWORD *)a6 + 56LL);
              *(_QWORD *)&v104.left = 0LL;
              v104.right = v49;
              v104.bottom = v48;
              RGNOBJ::vSet((RGNOBJ *)&v74, &v104);
              v40 = (CLIPOBJ *)v106;
              v105 = prclDest;
              XCLIPOBJ::vSetup((XCLIPOBJ *)v106, v74, (const struct ERECTL *)&v105, 0);
            }
            *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)v10 + 6);
            if ( EngStretchBlt(
                   (SURFOBJ *)((*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL)),
                   (SURFOBJ *)((char *)v10 + 24),
                   0LL,
                   v40,
                   pxlo,
                   0LL,
                   &pptlHTOrg,
                   &prclDest,
                   prclSrc,
                   0LL,
                   3u) )
            {
              v87->left = 0;
              *p_right = v79;
              *p_top = 0;
              *p_bottom = v80;
              *a3 = v102;
              if ( !IsSourceBGRA && !a7 )
              {
                v66 = *(_QWORD *)a6;
                v67 = *(XLATEOBJ **)(*(_QWORD *)a6 + 80LL);
                v68 = (LONG *)((char *)v67 + *(_DWORD *)(*(_QWORD *)a6 + 60LL) * *(_DWORD *)(*(_QWORD *)a6 + 88LL));
                p_bottom = v68;
                while ( 1 )
                {
                  *(_QWORD *)&v105.left = v67;
                  if ( v67 == (XLATEOBJ *)v68 )
                    break;
                  v69 = v67;
                  *(_QWORD *)&v104.left = v67;
                  v70 = (XLATEOBJ *)((char *)v67 + 4 * *(int *)(v66 + 56));
                  pxlo = v70;
                  while ( v69 != v70 )
                  {
                    v69->iUniq ^= 0xFF000000;
                    v69 = (XLATEOBJ *)((char *)v69 + 4);
                    *(_QWORD *)&v104.left = v69;
                  }
                  v66 = *(_QWORD *)a6;
                  v67 = (XLATEOBJ *)((char *)v67 + *(int *)(*(_QWORD *)a6 + 88LL));
                }
              }
              v10 = *(struct SURFACE **)a6;
            }
            else
            {
LABEL_49:
              v10 = 0LL;
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v74);
            return v10;
          }
          return 0LL;
        }
        v98 = ++v63;
      }
      memset64(v63, 0xFF000000FF000000uLL, v65 >> 1);
      if ( (v65 & 1) != 0 )
        v63[v65 - 1] = -16777216;
      goto LABEL_108;
    }
    v79 = v73;
    v80 = (int)v74;
    v78 = *((_DWORD *)v10 + 24);
    v83 = *((_DWORD *)v10 + 28) & 0x40000;
    v82 = 0LL;
    if ( v30 )
      v82 = *v30;
    DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)&v78, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
    if ( DIB && v75 )
    {
      v50 = *(_QWORD *)a6;
      v51 = *(unsigned int *)(*(_QWORD *)a6 + 64LL);
      if ( *((_DWORD *)v10 + 24) == 1 )
      {
        v62 = *(void **)(v50 + 72);
        if ( a8 )
          v61 = 255;
        else
          v61 = 0;
      }
      else
      {
        if ( *((_DWORD *)v10 + 24) == 2 )
        {
          v61 = a8 | (16 * a8);
        }
        else
        {
          if ( *((_DWORD *)v10 + 24) != 3 )
          {
            switch ( *((_DWORD *)v10 + 24) )
            {
              case 4:
                v59 = *(_WORD **)(v50 + 72);
                v101 = v59;
                for ( i = 0; i < (unsigned int)v51 >> 1; ++i )
                {
                  *v59++ = a8;
                  v101 = v59;
                }
                break;
              case 5:
                v54 = *(_BYTE **)(v50 + 80);
                v100 = v54;
                v55 = &v54[*(_DWORD *)(v50 + 60) * *(_DWORD *)(v50 + 88)];
                while ( v54 != v55 )
                {
                  v56 = v54;
                  v92 = v54;
                  v57 = 3 * *(_DWORD *)(v50 + 56) - 2LL;
                  while ( v56 < &v54[v57] )
                  {
                    *v56 = a8;
                    v58 = v56 + 1;
                    *v58++ = BYTE1(a8);
                    *v58 = BYTE2(a8);
                    v56 = v58 + 1;
                    v92 = v56;
                  }
                  v50 = *(_QWORD *)a6;
                  v54 += *(int *)(*(_QWORD *)a6 + 88LL);
                  v100 = v54;
                }
                break;
              case 6:
                v52 = *(_DWORD **)(v50 + 72);
                v99 = v52;
                for ( j = 0; j < (unsigned int)v51 >> 2; ++j )
                {
                  *v52++ = a8;
                  v99 = v52;
                }
                break;
            }
            goto LABEL_99;
          }
          v61 = a8;
        }
        v62 = *(void **)(v50 + 72);
      }
      memset_0(v62, v61, v51);
    }
LABEL_99:
    v39 = v72;
    goto LABEL_47;
  }
  return 0LL;
}
