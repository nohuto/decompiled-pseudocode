/*
 * XREFs of ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x14000ADB0
 * Callers:
 *     <none>
 * Callees:
 *     OffStretchBlt @ 0x14000A9D8 (OffStretchBlt.c)
 *     ??0ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x14000AB70 (--0ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x14000AB94 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x14000C1BC (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x14000D764 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14000DF38 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x14000E210 (--1MULTISURF@@QEAA@XZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14000E994 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x14000EA6C (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngStretchBlt @ 0x140132EF0 (EngStretchBlt.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1401FEB88 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140323AF4 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x14032CE3C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall MulStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode)
{
  RECTL *v11; // r14
  unsigned int v12; // edi
  struct _SURFOBJ *v13; // r15
  struct _SURFOBJ *v14; // rsi
  struct _RECTL v15; // xmm0
  HDEV hdev; // rbx
  LONG right; // eax
  struct _RECTL *v18; // rdx
  int v19; // r12d
  int v20; // ebx
  int Surface; // eax
  int v22; // esi
  __int64 *v24; // r8
  _DWORD *v25; // r9
  int v26; // r10d
  int v27; // eax
  __m128i v28; // xmm0
  int v29; // edx
  __int32 v30; // ebx
  __int32 v31; // ecx
  int v32; // esi
  XLATEOBJ *v33; // r14
  SURFOBJ *v34; // r8
  int v35; // esi
  PVOID *v36; // r12
  HDEV pulXlate; // rbx
  __int16 v38; // r9
  __int64 v39; // r11
  struct _CLIPOBJ *v40; // r10
  BOOL (__stdcall *v41)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rbx
  SURFOBJ *v42; // r8
  RECTL *v43; // rcx
  int *v44; // rdx
  int v45; // eax
  LONG v46; // eax
  LONG v47; // ecx
  LONG v48; // edx
  LONG left; // r9d
  LONG v50; // r8d
  LONG v51; // r10d
  LONG top; // eax
  Gre::Base *bottom; // rcx
  struct Gre::Base::SESSION_GLOBALS *v54; // rax
  HDEV v55; // rcx
  struct Gre::Base::SESSION_GLOBALS *v56; // r11
  struct PALETTE *v57; // rdx
  struct PALETTE *v58; // rax
  int v59; // r8d
  FLONG flXlate; // r12d
  int v61; // r9d
  ULONG iUniq; // r10d
  __int64 v63; // rax
  ULONG *v64; // r11
  ULONG v65; // r14d
  int inited; // eax
  int v67; // [rsp+70h] [rbp-90h]
  PVOID *p_pvScan0; // [rsp+78h] [rbp-88h]
  int v69[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _RECTL *v70; // [rsp+88h] [rbp-78h]
  struct _SURFOBJ *v71; // [rsp+90h] [rbp-70h]
  __int64 v72; // [rsp+98h] [rbp-68h] BYREF
  char v73; // [rsp+A0h] [rbp-60h]
  int v74; // [rsp+A4h] [rbp-5Ch]
  CLIPOBJ *pco; // [rsp+A8h] [rbp-58h]
  XLATEOBJ *v76; // [rsp+B0h] [rbp-50h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v77; // [rsp+B8h] [rbp-48h]
  POINTL *pptlMask; // [rsp+C0h] [rbp-40h]
  POINTL *pptlHTOrg; // [rsp+C8h] [rbp-38h]
  COLORADJUSTMENT *pca; // [rsp+D0h] [rbp-30h]
  SURFOBJ *psoMask; // [rsp+D8h] [rbp-28h]
  __int64 v82; // [rsp+E0h] [rbp-20h] BYREF
  char v83; // [rsp+E8h] [rbp-18h]
  int v84; // [rsp+ECh] [rbp-14h]
  _DWORD v85[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v86; // [rsp+100h] [rbp+0h]
  int v87; // [rsp+108h] [rbp+8h]
  int v88; // [rsp+10Ch] [rbp+Ch]
  _BYTE v89[40]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v90; // [rsp+138h] [rbp+38h]
  char v91; // [rsp+140h] [rbp+40h]
  int v92; // [rsp+144h] [rbp+44h]
  SURFOBJ *psoSrc; // [rsp+168h] [rbp+68h]
  RECTL *prclSrc; // [rsp+170h] [rbp+70h]
  _BYTE v95[56]; // [rsp+180h] [rbp+80h] BYREF
  struct _DISPSURF *v96; // [rsp+1B8h] [rbp+B8h]
  int v97[2]; // [rsp+1C0h] [rbp+C0h]
  struct _CLIPOBJ *v98; // [rsp+1C8h] [rbp+C8h]
  int v99[2]; // [rsp+1D0h] [rbp+D0h]
  RECTL v100; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _RECTL v101; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v102; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v103[56]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD prclDest[12]; // [rsp+248h] [rbp+148h] BYREF
  int v105; // [rsp+2A8h] [rbp+1A8h]

  v11 = a9;
  v12 = 0;
  v13 = a2;
  v14 = a1;
  pca = a6;
  v15 = *a9;
  pptlHTOrg = a7;
  p_pvScan0 = &a2[-1].pvScan0;
  hdev = a2->hdev;
  v101 = v15;
  pco = a4;
  psoMask = a3;
  v71 = a1;
  v70 = a8;
  pptlMask = a10;
  v82 = 0LL;
  v83 = 0;
  v84 = 0;
  v77 = Gre::Base::Globals((Gre::Base *)a1);
  if ( v13->iType == 1 && hdev && ((_DWORD)hdev[10] & 0x20000) != 0 )
  {
    if ( !(unsigned int)MulCopyDeviceToDIB(v13, (struct SURFMEM *)&v82, &v101) )
      goto LABEL_12;
    if ( !v82 )
    {
LABEL_65:
      v12 = 1;
      goto LABEL_12;
    }
    v11 = &v101;
    v13 = (struct _SURFOBJ *)((v82 + 24) & -(__int64)(v82 != 0));
    p_pvScan0 = &v13[-1].pvScan0;
  }
  right = a8->right;
  v102 = 0LL;
  v72 = 0LL;
  v73 = 0;
  v74 = 0;
  if ( a8->left < right && a8->top < a8->bottom || (unsigned int)IsMetaRedirectionBitmap(v14) )
  {
    v18 = a8;
    goto LABEL_5;
  }
  v27 = v25[14];
  v28 = *(__m128i *)v11;
  v85[3] = 0;
  v88 = 0;
  v100 = (RECTL)v28;
  v29 = v28.m128i_i32[2];
  v30 = v28.m128i_i32[1];
  v31 = v28.m128i_i32[3];
  v32 = _mm_cvtsi128_si32(v28);
  if ( v32 < 0 )
    v32 = 0;
  if ( v28.m128i_i32[2] > v27 )
    v29 = v27;
  if ( v28.m128i_i32[1] < 0 )
    v30 = 0;
  if ( v28.m128i_i32[3] > v25[15] )
    v31 = v25[15];
  if ( v29 <= v32 || v31 <= v30 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v72);
    goto LABEL_65;
  }
  v85[1] = v29 - v32;
  v85[2] = v31 - v30;
  if ( v24 )
    v86 = *v24;
  else
    v86 = 0LL;
  v85[0] = v25[24];
  v87 = v25[28] & 0x40000;
  SURFMEM::bCreateDIB((SURFMEM *)&v72, (struct _DEVBITMAPINFO *)v85, 0LL, 0LL, 0, 0LL, 0LL, 0, v26, 0, 0);
  if ( !v72 )
    goto LABEL_76;
  v46 = v101.left - v32;
  v47 = v101.right - v32;
  v48 = v101.top - v30;
  left = a8->left;
  v50 = v101.bottom - v30;
  v51 = a8->right;
  v101.left -= v32;
  v101.right -= v32;
  v101.top -= v30;
  v101.bottom -= v30;
  if ( left < v51 )
  {
    LODWORD(v102) = left;
    DWORD2(v102) = v51;
    v100.left = v46;
    v100.right = v47;
  }
  else
  {
    LODWORD(v102) = v51;
    DWORD2(v102) = left;
    v100.left = v47;
    v100.right = v46;
  }
  top = a8->top;
  bottom = (Gre::Base *)(unsigned int)a8->bottom;
  if ( top < (int)bottom )
  {
    DWORD1(v102) = a8->top;
    HIDWORD(v102) = (_DWORD)bottom;
    v100.top = v48;
    v100.bottom = v50;
  }
  else
  {
    DWORD1(v102) = a8->bottom;
    HIDWORD(v102) = top;
    v100.top = v50;
    v100.bottom = v48;
  }
  v54 = Gre::Base::Globals(bottom);
  if ( !EngStretchBlt(
          (SURFOBJ *)((v72 + 24) & -(__int64)(v72 != 0)),
          v13,
          0LL,
          0LL,
          (XLATEOBJ *)((char *)v54 + 4552),
          0LL,
          0LL,
          &v100,
          v11,
          0LL,
          3u) )
  {
LABEL_76:
    SURFMEM::~SURFMEM((SURFMEM *)&v72);
    goto LABEL_12;
  }
  v18 = (struct _RECTL *)&v102;
  v14 = v71;
  v11 = &v101;
  v70 = (struct _RECTL *)&v102;
  v13 = (struct _SURFOBJ *)((v72 + 24) & -(__int64)(v72 != 0));
  p_pvScan0 = &v13[-1].pvScan0;
LABEL_5:
  v19 = 1;
  v67 = 1;
  if ( v14->iType != 3 || (v20 = 1, (HIDWORD(v14[1].hsurf) & 9) != 0) )
    v20 = 0;
  Surface = MSURF::bFindSurface((MSURF *)v95, v14, pco, v18);
  v90 = 0LL;
  v91 = 0;
  v92 = 0;
  v22 = Surface;
  MULTISURF::vInit((MULTISURF *)v89, v13, v11);
  if ( v20 )
  {
    MULTISURF::MULTISURF((MULTISURF *)v103, v71, v70);
    v67 = EngStretchBlt(
            (SURFOBJ *)prclDest[4],
            psoSrc,
            psoMask,
            pco,
            pxlo,
            pca,
            pptlHTOrg,
            (RECTL *)prclDest[5],
            prclSrc,
            pptlMask,
            iMode);
    v19 = v67;
    MULTISURF::~MULTISURF((MULTISURF *)v103);
  }
  if ( v22 )
  {
    do
    {
      *(_QWORD *)v69 = *(_QWORD *)v97;
      v76 = 0LL;
      v33 = pxlo;
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v89, v96) )
      {
        v36 = p_pvScan0;
        v35 = 1;
        goto LABEL_33;
      }
      v34 = psoSrc;
      v35 = 0;
      v36 = &psoSrc[-1].pvScan0;
      pulXlate = psoSrc[1].hdev;
      p_pvScan0 = &psoSrc[-1].pvScan0;
      if ( !*((_DWORD *)v96 + 6) )
        goto LABEL_33;
      v55 = (HDEV)*((_QWORD *)v96 + 6);
      v56 = v77;
      v57 = (struct PALETTE *)*((_QWORD *)v77 + 471);
      if ( ((_DWORD)v55[539] & 0x100) != 0 )
      {
        v58 = DrvRealizeHalftonePalette(v55, 0);
        v34 = psoSrc;
        v57 = v58;
        v56 = v77;
      }
      if ( !pulXlate )
      {
        if ( !pxlo )
          goto LABEL_89;
        if ( pxlo[1].pulXlate )
        {
          pulXlate = (HDEV)pxlo[1].pulXlate;
          v59 = 0;
LABEL_92:
          if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
          {
            v59 = 0x2000;
            if ( v57 != *((struct PALETTE **)v56 + 471) )
              v59 = 0x4000;
          }
          goto LABEL_95;
        }
        if ( (pxlo->flXlate & 1) != 0 )
        {
LABEL_89:
          if ( v34 == v13 )
            pulXlate = v71[1].hdev;
        }
        else
        {
          v57 = *(struct PALETTE **)&pxlo[2].iSrcType;
          if ( !v57 )
          {
            v35 = 1;
            goto LABEL_33;
          }
          if ( *((_DWORD *)v36 + 24) == v71->iBitmapFormat )
            pulXlate = v71[1].hdev;
        }
      }
      v59 = 0;
      if ( pulXlate )
        goto LABEL_92;
LABEL_95:
      v35 = 0;
      if ( pxlo )
      {
        flXlate = pxlo[1].flXlate;
        v61 = *(_DWORD *)&pxlo[1].iSrcType;
        iUniq = pxlo[1].iUniq;
      }
      else
      {
        flXlate = 0;
        v61 = 0;
        iUniq = 0;
      }
      v63 = *((_QWORD *)v56 + 471);
      if ( pxlo )
      {
        v64 = pxlo[2].pulXlate;
        v65 = pxlo[3].iUniq;
      }
      else
      {
        v64 = 0LL;
        v65 = 0;
      }
      inited = EXLATEOBJ::bInitXlateObj(
                 &v76,
                 v64,
                 v65,
                 pulXlate,
                 *(_QWORD *)(*(_QWORD *)v69 + 104LL),
                 v63,
                 v57,
                 flXlate,
                 v61,
                 iUniq,
                 v59);
      v36 = p_pvScan0;
      if ( inited )
      {
        v33 = v76;
      }
      else
      {
        v35 = 1;
        v33 = pxlo;
      }
LABEL_33:
      if ( !v35 )
      {
        ECLIPOBJTMPIFNEEDED::ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v103);
        v39 = *(_QWORD *)v97;
        v40 = v98;
        if ( (*(_DWORD *)(*(_QWORD *)v97 + 88LL) & 2) != 0 )
          v41 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*((_QWORD *)v96 + 7) + 2840LL);
        else
          v41 = EngStretchBlt;
        v42 = psoSrc;
        if ( psoSrc->iType == v38 && v36[6] != *(PVOID *)(*(_QWORD *)v69 + 24LL) )
          v41 = EngStretchBlt;
        if ( iMode == 4 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v69 + 24LL) + 1808LL) & 0x10) == 0 )
          v41 = EngStretchBlt;
        v43 = prclSrc;
        if ( prclSrc->left < 0
          || prclSrc->top < 0
          || prclSrc->right > psoSrc->sizlBitmap.cx
          || prclSrc->bottom > psoSrc->sizlBitmap.cy )
        {
          v41 = EngStretchBlt;
        }
        else if ( v41 != EngStretchBlt )
        {
          goto LABEL_43;
        }
        if ( iMode == 4 && pco && pco->iDComplexity )
        {
          v44 = *(int **)v99;
          if ( **(_DWORD **)v99 || *(_DWORD *)(*(_QWORD *)v99 + 4LL) )
          {
            v35 = 1;
            ECLIPOBJTMPIFNEEDED::vSetup(
              (ECLIPOBJTMPIFNEEDED *)v103,
              1,
              *(struct REGION **)&v98[2].rclBounds.top,
              (struct ERECTL *)&v98->rclBounds,
              1);
            if ( prclDest[0] )
            {
              v39 = *(_QWORD *)v97;
              v40 = (struct _CLIPOBJ *)v103;
              v43 = prclSrc;
              v35 = 0;
              v42 = psoSrc;
              goto LABEL_43;
            }
LABEL_45:
            if ( v105 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)prclDest);
            goto LABEL_47;
          }
        }
        else
        {
LABEL_43:
          v44 = *(int **)v99;
        }
        *(_QWORD *)v69 = 0LL;
        v67 &= OffStretchBlt(
                 (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, __int64 *, _DWORD *, _DWORD *, __int64, int))v41,
                 v44,
                 v39,
                 v69,
                 (__int64)v42,
                 (__int64)psoMask,
                 v40,
                 (__int64)v33,
                 (__int64)pca,
                 (__int64 *)pptlHTOrg,
                 &v70->left,
                 v43,
                 (__int64)pptlMask,
                 iMode);
        goto LABEL_45;
      }
LABEL_47:
      v45 = 0;
      if ( !v35 )
        v45 = v67;
      v19 = v45;
      v67 = v45;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v76);
    }
    while ( (unsigned int)MSURF::bNextSurface((MSURF *)v95) );
  }
  MULTISURF::~MULTISURF((MULTISURF *)v89);
  SURFMEM::~SURFMEM((SURFMEM *)&v72);
  v12 = v19;
LABEL_12:
  SURFMEM::~SURFMEM((SURFMEM *)&v82);
  return v12;
}
