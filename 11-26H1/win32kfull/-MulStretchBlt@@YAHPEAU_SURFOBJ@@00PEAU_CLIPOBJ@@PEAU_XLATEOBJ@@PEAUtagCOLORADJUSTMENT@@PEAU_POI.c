/*
 * XREFs of ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400632A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140062E9C (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x140063050 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14006438C (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x140064444 (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x140064AD8 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x140064B84 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140065CCC (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140066484 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x140066C18 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffStretchBlt @ 0x140067B90 (OffStretchBlt.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngStretchBlt @ 0x1400E65F0 (EngStretchBlt.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1403159F4 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140346178 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
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
  unsigned int v11; // edi
  RECTL *v12; // r14
  struct _SURFOBJ *v13; // rsi
  struct _RECTL *v15; // r15
  HDEV hdev; // rbx
  struct _RECTL v17; // xmm0
  LONG right; // eax
  int v19; // r12d
  int v20; // ebx
  struct _SURFOBJ *v21; // rcx
  __int64 *v23; // r8
  int v24; // r9d
  int cx; // eax
  __m128i v26; // xmm0
  int v27; // edx
  __int32 v28; // ebx
  LONG cy; // ecx
  int v30; // r12d
  SURFOBJ *v31; // rdx
  XLATEOBJ *v32; // r14
  struct _DISPSURF *v33; // rcx
  PVOID *p_pvScan0; // r9
  HDEV pulXlate; // rbx
  int v36; // r10d
  struct _CLIPOBJ *v37; // r8
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rbx
  int v39; // r9d
  RECTL *v40; // rcx
  int v41; // eax
  int v42; // ebx
  int v43; // eax
  ULONG *v44; // r11
  ULONG v45; // r14d
  HDEV v46; // rcx
  struct Gre::Base::SESSION_GLOBALS *v47; // r14
  struct PALETTE *v48; // r8
  int v49; // edx
  int v50; // r9d
  ULONG iUniq; // r10d
  __int64 v52; // rax
  LONG v53; // eax
  LONG v54; // ecx
  LONG v55; // edx
  LONG v56; // r9d
  LONG v57; // r8d
  LONG left; // r10d
  LONG bottom; // eax
  Gre::Base *top; // rcx
  struct Gre::Base::SESSION_GLOBALS *v61; // rax
  struct PALETTE *v62; // rax
  int Surface; // [rsp+70h] [rbp-90h]
  FLONG flXlate; // [rsp+70h] [rbp-90h]
  int v65[2]; // [rsp+78h] [rbp-88h] BYREF
  struct _SURFOBJ *v66; // [rsp+80h] [rbp-80h]
  __int64 v67; // [rsp+88h] [rbp-78h] BYREF
  char v68; // [rsp+90h] [rbp-70h]
  int v69; // [rsp+94h] [rbp-6Ch]
  __int64 v70; // [rsp+98h] [rbp-68h]
  CLIPOBJ *pco; // [rsp+A0h] [rbp-60h]
  XLATEOBJ *v72; // [rsp+A8h] [rbp-58h] BYREF
  POINTL *pptlMask; // [rsp+B0h] [rbp-50h]
  POINTL *pptlHTOrg; // [rsp+B8h] [rbp-48h]
  COLORADJUSTMENT *pca; // [rsp+C0h] [rbp-40h]
  SURFOBJ *psoMask; // [rsp+C8h] [rbp-38h]
  __int64 v77; // [rsp+D0h] [rbp-30h] BYREF
  char v78; // [rsp+D8h] [rbp-28h]
  int v79; // [rsp+DCh] [rbp-24h]
  _DWORD v80[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v81; // [rsp+F0h] [rbp-10h]
  int v82; // [rsp+F8h] [rbp-8h]
  int v83; // [rsp+FCh] [rbp-4h]
  struct Gre::Base::SESSION_GLOBALS *v84; // [rsp+100h] [rbp+0h]
  _BYTE v85[40]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v86; // [rsp+138h] [rbp+38h]
  char v87; // [rsp+140h] [rbp+40h]
  int v88; // [rsp+144h] [rbp+44h]
  SURFOBJ *psoSrc; // [rsp+168h] [rbp+68h]
  RECTL *prclSrc; // [rsp+170h] [rbp+70h]
  _BYTE v91[56]; // [rsp+180h] [rbp+80h] BYREF
  struct _DISPSURF *v92; // [rsp+1B8h] [rbp+B8h]
  int v93[2]; // [rsp+1C0h] [rbp+C0h]
  struct _CLIPOBJ *v94; // [rsp+1C8h] [rbp+C8h]
  int v95[4]; // [rsp+1D0h] [rbp+D0h]
  RECTL v96; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _RECTL v97; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v98; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v99[56]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v100[4]; // [rsp+248h] [rbp+148h] BYREF
  SURFOBJ *psoDest; // [rsp+268h] [rbp+168h]
  RECTL *prclDest; // [rsp+270h] [rbp+170h]
  int v103; // [rsp+290h] [rbp+190h]
  __int64 v104; // [rsp+2A0h] [rbp+1A0h]
  int v105; // [rsp+2A8h] [rbp+1A8h]

  v11 = 0;
  v12 = a9;
  v13 = a2;
  v15 = a8;
  hdev = a2->hdev;
  v17 = *a9;
  pca = a6;
  pptlHTOrg = a7;
  v97 = v17;
  pco = a4;
  psoMask = a3;
  v66 = a1;
  pptlMask = a10;
  v77 = 0LL;
  v78 = 0;
  v79 = 0;
  v84 = Gre::Base::Globals((Gre::Base *)a1);
  if ( v13->iType == 1 && hdev && ((_DWORD)hdev[10] & 0x20000) != 0 )
  {
    if ( !(unsigned int)MulCopyDeviceToDIB(v13, (struct SURFMEM *)&v77, &v97) )
      goto LABEL_8;
    if ( !v77 )
    {
LABEL_71:
      v11 = 1;
      goto LABEL_8;
    }
    v12 = &v97;
    v13 = (struct _SURFOBJ *)((v77 + 24) & -(__int64)(v77 != 0));
  }
  right = a8->right;
  v98 = 0LL;
  v67 = 0LL;
  v68 = 0;
  v69 = 0;
  if ( a8->left < right && a8->top < a8->bottom || (unsigned int)IsMetaRedirectionBitmap(a1) )
    goto LABEL_4;
  cx = v13->sizlBitmap.cx;
  v26 = *(__m128i *)v12;
  v80[3] = 0;
  v83 = 0;
  v96 = (RECTL)v26;
  v27 = v26.m128i_i32[2];
  v28 = v26.m128i_i32[1];
  cy = v26.m128i_i32[3];
  v30 = _mm_cvtsi128_si32(v26);
  if ( v30 < 0 )
    v30 = 0;
  if ( v26.m128i_i32[2] > cx )
    v27 = cx;
  if ( v26.m128i_i32[1] < 0 )
    v28 = 0;
  if ( v26.m128i_i32[3] > v13->sizlBitmap.cy )
    cy = v13->sizlBitmap.cy;
  if ( v27 <= v30 || cy <= v28 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v67);
    goto LABEL_71;
  }
  v80[1] = v27 - v30;
  v80[2] = cy - v28;
  if ( v23 )
    v81 = *v23;
  else
    v81 = 0LL;
  v80[0] = v13->iBitmapFormat;
  v82 = (__int64)v13[1].hsurf & 0x40000;
  SURFMEM::bCreateDIB((SURFMEM *)&v67, (struct _DEVBITMAPINFO *)v80, 0LL, 0LL, 0, 0LL, 0LL, 0, v24, 0);
  if ( !v67 )
    goto LABEL_82;
  v53 = v97.left - v30;
  v54 = v97.right - v30;
  v55 = v97.top - v28;
  v56 = a8->right;
  v57 = v97.bottom - v28;
  left = a8->left;
  v97.left -= v30;
  v97.right -= v30;
  v97.top -= v28;
  v97.bottom -= v28;
  if ( left < v56 )
  {
    LODWORD(v98) = left;
    DWORD2(v98) = v56;
    v96.left = v53;
    v96.right = v54;
  }
  else
  {
    LODWORD(v98) = v56;
    DWORD2(v98) = left;
    v96.left = v54;
    v96.right = v53;
  }
  bottom = a8->bottom;
  top = (Gre::Base *)(unsigned int)a8->top;
  if ( (int)top < bottom )
  {
    DWORD1(v98) = a8->top;
    HIDWORD(v98) = bottom;
    v96.top = v55;
    v96.bottom = v57;
  }
  else
  {
    DWORD1(v98) = a8->bottom;
    HIDWORD(v98) = (_DWORD)top;
    v96.top = v57;
    v96.bottom = v55;
  }
  v61 = Gre::Base::Globals(top);
  if ( !EngStretchBlt(
          (SURFOBJ *)((v67 + 24) & -(__int64)(v67 != 0)),
          v13,
          0LL,
          0LL,
          (XLATEOBJ *)((char *)v61 + 4664),
          0LL,
          0LL,
          &v96,
          v12,
          0LL,
          3u) )
  {
LABEL_82:
    SURFMEM::~SURFMEM((SURFMEM *)&v67);
    goto LABEL_8;
  }
  v12 = &v97;
  v15 = (struct _RECTL *)&v98;
  v13 = (struct _SURFOBJ *)((v67 + 24) & -(__int64)(v67 != 0));
LABEL_4:
  v19 = 1;
  v20 = IsMetaDevBitmapForMirroring(v66);
  Surface = MSURF::bFindSurface((MSURF *)v91, v21, pco, v15);
  v86 = 0LL;
  v87 = 0;
  v88 = 0;
  MULTISURF::vInit((MULTISURF *)v85, v13, v12);
  if ( v20 )
  {
    MULTISURF::MULTISURF((MULTISURF *)v99, v66, v15);
    v19 = EngStretchBlt(psoDest, psoSrc, psoMask, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
    MULTISURF::~MULTISURF((MULTISURF *)v99);
  }
  if ( Surface )
  {
    while ( 1 )
    {
      v70 = *(_QWORD *)v93;
      v72 = 0LL;
      if ( (unsigned int)MULTISURF::bLoadSource((MULTISURF *)v85, v92) )
        break;
LABEL_59:
      v42 = 1;
LABEL_42:
      v43 = 0;
      if ( !v42 )
        v43 = v19;
      v19 = v43;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v72);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v91) )
        goto LABEL_7;
    }
    v31 = psoSrc;
    v32 = pxlo;
    v33 = v92;
    p_pvScan0 = &psoSrc[-1].pvScan0;
    pulXlate = psoSrc[1].hdev;
    *(_QWORD *)v65 = (char *)psoSrc - 24;
    if ( !*((_DWORD *)v92 + 6) )
      goto LABEL_29;
    v46 = (HDEV)*((_QWORD *)v92 + 6);
    v47 = v84;
    v48 = (struct PALETTE *)*((_QWORD *)v84 + 484);
    if ( ((_DWORD)v46[539] & 0x100) != 0 )
    {
      v62 = DrvRealizeHalftonePalette(v46, 0);
      v31 = psoSrc;
      v48 = v62;
      p_pvScan0 = *(PVOID **)v65;
    }
    if ( !pulXlate )
    {
      if ( !pxlo )
        goto LABEL_95;
      if ( pxlo[1].pulXlate )
      {
        pulXlate = (HDEV)pxlo[1].pulXlate;
        v49 = 0;
LABEL_86:
        if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
        {
          v49 = 0x4000;
          if ( v48 == *((struct PALETTE **)v47 + 484) )
            v49 = 0x2000;
        }
LABEL_65:
        if ( pxlo )
        {
          v50 = *(_DWORD *)&pxlo[1].iSrcType;
          iUniq = pxlo[1].iUniq;
          flXlate = pxlo[1].flXlate;
        }
        else
        {
          flXlate = 0;
          v50 = 0;
          iUniq = 0;
        }
        v52 = *((_QWORD *)v47 + 484);
        if ( pxlo )
        {
          v44 = pxlo[2].pulXlate;
          v45 = pxlo[3].iUniq;
        }
        else
        {
          v44 = 0LL;
          v45 = 0;
        }
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v72,
                             v44,
                             v45,
                             pulXlate,
                             *(_QWORD *)(v70 + 104),
                             v52,
                             v48,
                             flXlate,
                             v50,
                             iUniq,
                             v49) )
        {
          v32 = v72;
          v33 = v92;
          v31 = psoSrc;
          p_pvScan0 = *(PVOID **)v65;
LABEL_29:
          v36 = v93[0];
          v37 = v94;
          v100[3] = 0LL;
          LODWORD(psoDest) = 0;
          v103 = 1;
          v104 = 0LL;
          v100[0] = 0LL;
          v105 = 0;
          if ( (*(_DWORD *)(*(_QWORD *)v93 + 88LL) & 2) != 0 )
            v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*((_QWORD *)v33 + 7) + 2840LL);
          else
            v38 = EngStretchBlt;
          if ( v31->iType == 1 && p_pvScan0[6] != *(PVOID *)(v70 + 24) )
            v38 = EngStretchBlt;
          v39 = iMode;
          if ( iMode == 4 && (*(_BYTE *)(*(_QWORD *)(v70 + 24) + 1808LL) & 0x10) == 0 )
            v38 = EngStretchBlt;
          v40 = prclSrc;
          if ( prclSrc->left < 0
            || prclSrc->top < 0
            || prclSrc->right > v31->sizlBitmap.cx
            || prclSrc->bottom > v31->sizlBitmap.cy )
          {
            v38 = EngStretchBlt;
          }
          else if ( v38 != EngStretchBlt )
          {
            goto LABEL_38;
          }
          if ( iMode != 4 || !pco || !pco->iDComplexity )
            goto LABEL_38;
          v41 = v95[0];
          if ( **(_DWORD **)v95 || *(_DWORD *)(*(_QWORD *)v95 + 4LL) )
          {
            ECLIPOBJTMPIFNEEDED::vSetup(
              (ECLIPOBJTMPIFNEEDED *)v99,
              1,
              *(struct REGION **)&v94[2].rclBounds.top,
              (struct ERECTL *)&v94->rclBounds,
              1);
            if ( !v100[0] )
            {
              v42 = 1;
LABEL_40:
              if ( v105 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v100);
              goto LABEL_42;
            }
            v36 = v93[0];
            v37 = (struct _CLIPOBJ *)v99;
            v40 = prclSrc;
            v31 = psoSrc;
            v39 = iMode;
LABEL_38:
            v41 = v95[0];
          }
          *(_QWORD *)v65 = 0LL;
          v19 &= OffStretchBlt(
                   (int)v38,
                   v41,
                   v36,
                   (int)v65,
                   (__int64)v31,
                   (__int64)psoMask,
                   v37,
                   (__int64)v32,
                   (__int64)pca,
                   (__int64)pptlHTOrg,
                   (__int64)v15,
                   (__int64)v40,
                   (__int64)pptlMask,
                   v39);
          v42 = 0;
          goto LABEL_40;
        }
        goto LABEL_59;
      }
      if ( (pxlo->flXlate & 1) != 0 )
      {
LABEL_95:
        if ( v31 == v13 )
          pulXlate = v66[1].hdev;
      }
      else
      {
        v48 = *(struct PALETTE **)&pxlo[2].iSrcType;
        if ( !v48 )
        {
          v42 = 1;
          goto LABEL_42;
        }
        if ( *((_DWORD *)p_pvScan0 + 24) == v66->iBitmapFormat )
          pulXlate = v66[1].hdev;
      }
    }
    v49 = 0;
    if ( !pulXlate )
      goto LABEL_65;
    goto LABEL_86;
  }
LABEL_7:
  MULTISURF::~MULTISURF((MULTISURF *)v85);
  SURFMEM::~SURFMEM((SURFMEM *)&v67);
  v11 = v19;
LABEL_8:
  SURFMEM::~SURFMEM((SURFMEM *)&v77);
  return v11;
}
