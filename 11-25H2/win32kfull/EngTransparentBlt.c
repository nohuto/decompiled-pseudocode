/*
 * XREFs of EngTransparentBlt @ 0x1400F62F0
 * Callers:
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x14000A130 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     EngBitBlt @ 0x1400815E0 (EngBitBlt.c)
 *     ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1400F5F10 (-SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1402FFAC0 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x14030B910 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiEngTransparentBlt @ 0x14033C780 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x14006DA0C (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14006EF0C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1400F7ADC (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x140308588 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

BOOL __stdcall EngTransparentBlt(
        SURFOBJ *psoDst,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG ulReserved)
{
  CLIPOBJ *v8; // r15
  SURFOBJ *v10; // rsi
  int v11; // edi
  struct SURFACE *p_pvScan0; // r13
  struct SURFACE *v13; // rbx
  struct SURFACE *v14; // rax
  char *v15; // r12
  unsigned __int64 iDComplexity; // rcx
  struct _RECTL rclBounds; // xmm0
  int v18; // ebx
  struct Gre::Base::SESSION_GLOBALS *v19; // rcx
  XLATEOBJ *v20; // rax
  unsigned int iBitmapFormat; // r10d
  unsigned int v22; // r9d
  LONG top; // r11d
  Gre::Base *left; // rcx
  unsigned int i; // r12d
  LONG right; // edx
  LONG v27; // edx
  LONG bottom; // r8d
  HDEV hdev; // rax
  __int64 (__fastcall *v31)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, _QWORD, _DWORD *, _QWORD, int); // rax
  __int64 v32; // rbx
  struct Gre::Base::SESSION_GLOBALS *v33; // r9
  LONG v34; // [rsp+64h] [rbp-324h]
  int v35; // [rsp+68h] [rbp-320h]
  LONG v36; // [rsp+6Ch] [rbp-31Ch]
  LONG v37; // [rsp+70h] [rbp-318h]
  CLIPOBJ *v39; // [rsp+80h] [rbp-308h] BYREF
  __int64 v40; // [rsp+88h] [rbp-300h] BYREF
  char v41; // [rsp+90h] [rbp-2F8h]
  int v42; // [rsp+94h] [rbp-2F4h]
  __int64 v43; // [rsp+98h] [rbp-2F0h] BYREF
  char v44; // [rsp+A0h] [rbp-2E8h]
  int v45; // [rsp+A4h] [rbp-2E4h]
  char *v46; // [rsp+A8h] [rbp-2E0h]
  SURFOBJ *v47; // [rsp+B0h] [rbp-2D8h]
  SURFOBJ *v48; // [rsp+B8h] [rbp-2D0h]
  HDEV v49; // [rsp+C0h] [rbp-2C8h] BYREF
  HDEV v50; // [rsp+C8h] [rbp-2C0h] BYREF
  _DWORD *v51; // [rsp+D0h] [rbp-2B8h]
  LONG *p_lDelta; // [rsp+D8h] [rbp-2B0h]
  struct SURFACE *v53; // [rsp+E0h] [rbp-2A8h]
  SURFOBJ *v54; // [rsp+E8h] [rbp-2A0h]
  char *v55; // [rsp+F0h] [rbp-298h]
  CLIPOBJ *v56; // [rsp+F8h] [rbp-290h]
  _DWORD v57[2]; // [rsp+100h] [rbp-288h] BYREF
  __int64 v58; // [rsp+108h] [rbp-280h]
  int v59; // [rsp+110h] [rbp-278h]
  int v60; // [rsp+114h] [rbp-274h]
  _QWORD v61[3]; // [rsp+120h] [rbp-268h] BYREF
  int v62; // [rsp+138h] [rbp-250h]
  int v63; // [rsp+13Ch] [rbp-24Ch]
  int v64; // [rsp+140h] [rbp-248h]
  int v65; // [rsp+144h] [rbp-244h]
  int v66; // [rsp+148h] [rbp-240h]
  LONG lDelta; // [rsp+14Ch] [rbp-23Ch]
  int v68; // [rsp+150h] [rbp-238h]
  int v69; // [rsp+154h] [rbp-234h]
  int v70; // [rsp+158h] [rbp-230h]
  LONG v71; // [rsp+15Ch] [rbp-22Ch]
  int v72; // [rsp+160h] [rbp-228h]
  struct SURFACE *v73; // [rsp+168h] [rbp-220h]
  unsigned int v74; // [rsp+1ACh] [rbp-1DCh]
  unsigned int v75; // [rsp+1B0h] [rbp-1D8h]
  ULONG v76; // [rsp+1B4h] [rbp-1D4h]
  struct _RECTL v77; // [rsp+1C0h] [rbp-1C8h] BYREF
  RECTL v78; // [rsp+1D0h] [rbp-1B8h] BYREF
  struct _RECTL v79; // [rsp+1E0h] [rbp-1A8h] BYREF
  unsigned int v80; // [rsp+1F0h] [rbp-198h] BYREF
  _OWORD v81[20]; // [rsp+1F4h] [rbp-194h]

  v8 = pco;
  v48 = psoDst;
  v54 = psoDst;
  v10 = psoDst;
  v47 = psoDst;
  v39 = pco;
  v11 = 0;
  if ( (psoDst->iType || psoSrc->iType)
    && !ulReserved
    && prclDst->right - prclDst->left == prclSrc->right - prclSrc->left
    && prclDst->bottom - prclDst->top == prclSrc->bottom - prclSrc->top )
  {
    v57[1] = 0;
    v60 = 0;
    hdev = psoDst->hdev;
    if ( !hdev )
      hdev = psoSrc->hdev;
    v57[0] = iTransColor;
    v59 = 0;
    v58 = 0LL;
    v31 = (__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, _QWORD, _DWORD *, _QWORD, int))*((_QWORD *)hdev + 353);
    if ( v31 )
      return v31(psoDst, psoSrc, 0LL, pco, pxlo, prclDst, prclSrc, 0LL, v57, 0LL, 52394);
    return 0;
  }
  p_pvScan0 = (struct SURFACE *)&psoDst[-1].pvScan0;
  v77 = *prclDst;
  v78 = *prclSrc;
  v49 = psoDst->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&v49, psoDst, 0LL, 0);
  v50 = psoSrc->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&v50, psoSrc, 0LL, 0);
  v56 = v8;
  v43 = 0LL;
  v44 = 0;
  v45 = 0;
  v13 = psSetupTransparentSrcSurface(
          (struct SURFACE *)((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL)),
          p_pvScan0,
          &v77,
          0LL,
          &v78,
          (struct SURFMEM *)&v43,
          1u,
          iTransColor);
  if ( v13 )
  {
    if ( v77.left != v77.right )
    {
      v46 = (char *)v13 + 24;
      v40 = 0LL;
      v41 = 0;
      v42 = 0;
      v53 = p_pvScan0;
      v79 = v77;
      if ( *((_WORD *)p_pvScan0 + 50) && (*((_DWORD *)v10->hdev + 10) & 0x80u) != 0 )
      {
        v11 = GreTransparentBltPS(v10, (struct _SURFOBJ *)((char *)v13 + 24), v8, pxlo, &v77, &v78, iTransColor);
        SURFMEM::~SURFMEM((SURFMEM *)&v40);
        goto LABEL_55;
      }
      v14 = psSetupDstSurface(p_pvScan0, &v77, (struct SURFMEM *)&v40, 0, 1);
      v55 = (char *)v14;
      if ( !v14 )
      {
LABEL_45:
        SURFMEM::~SURFMEM((SURFMEM *)&v40);
        SURFMEM::~SURFMEM((SURFMEM *)&v43);
        return 0;
      }
      if ( v14 != p_pvScan0 )
      {
        v10 = (SURFOBJ *)((char *)v14 + 24);
        v47 = (SURFOBJ *)((char *)v14 + 24);
        v8 = 0LL;
        v39 = 0LL;
      }
      v72 = 0;
      v76 = iTransColor;
      v15 = v46;
      v51 = v46 + 64;
      v66 = *((_DWORD *)v46 + 16);
      p_lDelta = &v10->lDelta;
      lDelta = v10->lDelta;
      v73 = v13;
      memset_0(&v80, 0, 0x144uLL);
      if ( v8 && (iDComplexity = v8->iDComplexity) != 0 )
      {
        iDComplexity = (unsigned int)(iDComplexity - 1);
        if ( (_DWORD)iDComplexity )
        {
          if ( (_DWORD)iDComplexity == 2 )
          {
            v18 = 1;
            XCLIPOBJ::cEnumStart((XCLIPOBJ *)v8, 0, 0, 4u, 0x14u);
            goto LABEL_13;
          }
LABEL_12:
          v18 = 0;
LABEL_13:
          v19 = Gre::Base::Globals((Gre::Base *)iDComplexity);
          v20 = pxlo;
          if ( !pxlo )
            v20 = (XLATEOBJ *)((char *)v19 + 4552);
          v61[0] = v20;
          v62 = 1;
          v65 = 1;
          iBitmapFormat = v10->iBitmapFormat;
          v75 = iBitmapFormat;
          v22 = *((_DWORD *)v15 + 18);
          v74 = v22;
          top = v77.top;
          left = (Gre::Base *)(unsigned int)v77.left;
          if ( v18 )
            goto LABEL_39;
          while ( v22 <= 6 && iBitmapFormat <= 6 || !v80 )
          {
            for ( i = 0; i < v80; ++i )
            {
              v35 = v81[i];
              if ( v35 < (int)left )
              {
                LODWORD(v81[i]) = (_DWORD)left;
                v35 = (int)left;
              }
              v34 = DWORD2(v81[i]);
              right = v77.right;
              if ( v34 > v77.right )
              {
                DWORD2(v81[i]) = v77.right;
                v34 = right;
              }
              v27 = DWORD1(v81[i]);
              v36 = v27;
              if ( v27 < top )
              {
                DWORD1(v81[i]) = top;
                v27 = top;
                v36 = top;
              }
              bottom = HIDWORD(v81[i]);
              v37 = bottom;
              if ( bottom > v77.bottom )
              {
                bottom = v77.bottom;
                HIDWORD(v81[i]) = v77.bottom;
                v37 = bottom;
              }
              if ( v27 < bottom && v35 < v34 )
              {
                v63 = v34 - v35;
                v64 = v37 - v36;
                v68 = v78.left - (_DWORD)left + v35;
                v69 = v78.left - (_DWORD)left + v34;
                v70 = v35;
                v71 = v36;
                v61[1] = *((_QWORD *)v46 + 7) + *v51 * (v36 + v78.top - top);
                v61[2] = (char *)v10->pvScan0 + *p_lDelta * v36;
                if ( (*(_DWORD *)(v61[0] + 4LL) & 1) != 0 && v22 == iBitmapFormat )
                  off_14034BB40[7 * v22 - 7]((struct BLTINFO *)v61);
                else
                  (*(&off_14034BB40[7 * v22 - 7] + iBitmapFormat))((struct BLTINFO *)v61);
                top = v77.top;
                left = (Gre::Base *)(unsigned int)v77.left;
                iBitmapFormat = v75;
                v22 = v74;
              }
            }
            if ( !v18 )
            {
              if ( p_pvScan0 != (struct SURFACE *)v55 )
              {
                v32 = *((_QWORD *)p_pvScan0 + 6);
                v39 = 0LL;
                v33 = Gre::Base::Globals(left);
                if ( (*((_DWORD *)p_pvScan0 + 28) & 0x400) != 0 )
                  (*(void (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, __int64, struct _RECTL *, CLIPOBJ **))(v32 + 2832))(
                    v48,
                    v10,
                    v56,
                    (__int64)v33 + 4552,
                    &v79,
                    &v39);
                else
                  ((void (__fastcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, char *, struct _RECTL *, CLIPOBJ **))EngCopyBits)(
                    v48,
                    v10,
                    v56,
                    (char *)v33 + 4552,
                    &v79,
                    &v39);
              }
              SURFMEM::~SURFMEM((SURFMEM *)&v40);
              SURFMEM::~SURFMEM((SURFMEM *)&v43);
              return 1;
            }
LABEL_39:
            v18 = XCLIPOBJ::bEnum((XCLIPOBJ *)v8, 0x144u, (char *)&v80, 0LL);
            top = v77.top;
            left = (Gre::Base *)(unsigned int)v77.left;
            iBitmapFormat = v75;
            v22 = v74;
          }
          goto LABEL_45;
        }
        rclBounds = v8->rclBounds;
      }
      else
      {
        rclBounds = v77;
      }
      v80 = 1;
      v81[0] = rclBounds;
      goto LABEL_12;
    }
    v11 = 1;
  }
LABEL_55:
  SURFMEM::~SURFMEM((SURFMEM *)&v43);
  return v11;
}
