/*
 * XREFs of ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D4898
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x1400C5FFC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400D42A0 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1400D4410 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1400D5100 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?bSupportsClearTypeAlways@PDEVOBJ@@SA_NP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z@Z @ 0x1400D5148 (-bSupportsClearTypeAlways@PDEVOBJ@@SA_NP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ.c)
 *     bOutOfBounds @ 0x1400D517C (bOutOfBounds.c)
 *     ?GrepUpdatePfnTextOutAndSurfaceDcoIfNeeded@@YAXAEAVXDCOBJ@@PEAVRFONTOBJ@@PEAVSURFACE@@AEAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@7PEAU_BRUSHOBJ@@8PEAU_POINTL@@K@Z@Z @ 0x1400D5264 (-GrepUpdatePfnTextOutAndSurfaceDcoIfNeeded@@YAXAEAVXDCOBJ@@PEAVRFONTOBJ@@PEAVSURFACE@@AEAP6AHPEA.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D52F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400D55E8 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D58A0 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1401170D8 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140117E38 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bProxyDrvTextOut(
        _DWORD *a1,
        struct XDCOBJ *a2,
        SURFACE *a3,
        int *a4,
        struct _CLIPOBJ *a5,
        __int64 a6,
        struct _RECTL *a7,
        struct _BRUSHOBJ *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        struct RFONTOBJ *a11,
        HDEV a12,
        unsigned int a13,
        LONG *a14)
{
  struct RFONTOBJ *v15; // r14
  struct _CLIPOBJ *v17; // rsi
  _DWORD *v18; // r10
  struct _RECTL *v19; // r12
  _WORD *v21; // rax
  BOOL v22; // r11d
  struct _SURFOBJ *v23; // rdx
  int v24; // r13d
  int v25; // r15d
  struct _SURFOBJ *v26; // r8
  struct _SURFOBJ *v27; // r9
  struct _SURFOBJ *v28; // r10
  int v29; // r13d
  _DWORD *hsurf; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r10
  unsigned int v35; // r10d
  int v36; // ecx
  unsigned int *v37; // rdx
  struct _POINTL *v38; // rax
  LONG v39; // eax
  struct RFONTOBJ *v40; // rsi
  _DWORD *v41; // r8
  _WORD *v42; // r11
  _WORD *v43; // r9
  _WORD *v44; // rdx
  _DWORD *v45; // r10
  __int64 v46; // rdx
  __int64 v47; // r9
  __int128 v48; // xmm0
  int v49; // ecx
  int (*v50)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r14
  int *v51; // rbx
  unsigned int v52; // r15d
  unsigned int v53; // r12d
  int v54; // eax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rbx
  int *v58; // r14
  unsigned int v59; // r15d
  unsigned int v60; // r12d
  int v61; // eax
  int v62; // eax
  LONG left; // eax
  LONG right; // eax
  LONG top; // eax
  LONG bottom; // eax
  __int64 v67; // rax
  LONG v68; // edx
  LONG v69; // eax
  struct _XLATEOBJ *v70; // [rsp+28h] [rbp-D8h]
  struct _POINTL *v71; // [rsp+38h] [rbp-C8h]
  struct _POINTL *v72; // [rsp+40h] [rbp-C0h]
  unsigned int v73; // [rsp+58h] [rbp-A8h]
  int v74; // [rsp+60h] [rbp-A0h]
  int v75; // [rsp+64h] [rbp-9Ch]
  unsigned int v76; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v77; // [rsp+6Ch] [rbp-94h] BYREF
  _DWORD *v78; // [rsp+70h] [rbp-90h] BYREF
  struct RFONTOBJ *v79; // [rsp+78h] [rbp-88h]
  unsigned int v80; // [rsp+80h] [rbp-80h]
  struct _RECTL *v81; // [rsp+88h] [rbp-78h]
  int (*v82)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // [rsp+90h] [rbp-70h] BYREF
  int v83; // [rsp+98h] [rbp-68h]
  int v84; // [rsp+9Ch] [rbp-64h]
  SURFACE *v85; // [rsp+A0h] [rbp-60h]
  BOOL v86; // [rsp+A8h] [rbp-58h]
  struct _POINTL *v87; // [rsp+B0h] [rbp-50h]
  struct _CLIPOBJ *v88; // [rsp+B8h] [rbp-48h]
  struct _POINTL v89; // [rsp+C0h] [rbp-40h] BYREF
  struct _BRUSHOBJ *v90; // [rsp+C8h] [rbp-38h]
  HDEV v91; // [rsp+D0h] [rbp-30h]
  struct XDCOBJ *v92; // [rsp+D8h] [rbp-28h]
  struct _BRUSHOBJ *v93; // [rsp+E0h] [rbp-20h]
  _WORD *v94; // [rsp+E8h] [rbp-18h]
  char v95[8]; // [rsp+F0h] [rbp-10h] BYREF
  _WORD *v96; // [rsp+F8h] [rbp-8h]
  __int64 v97; // [rsp+100h] [rbp+0h]
  _DWORD *v98; // [rsp+108h] [rbp+8h]
  __int64 v99; // [rsp+110h] [rbp+10h]
  struct _LINEATTRS v100; // [rsp+118h] [rbp+18h] BYREF
  struct _PATHOBJ v101; // [rsp+140h] [rbp+40h] BYREF
  __int64 v102; // [rsp+148h] [rbp+48h]
  int v103[10]; // [rsp+1C0h] [rbp+C0h] BYREF
  int v104[10]; // [rsp+1E8h] [rbp+E8h] BYREF

  v15 = a11;
  v17 = a5;
  v18 = a1;
  v19 = a7;
  v97 = a6;
  v90 = a8;
  v93 = a9;
  v87 = a10;
  v91 = a12;
  v84 = *a4;
  v99 = *((_QWORD *)a4 + 7);
  v96 = (_WORD *)*((_QWORD *)a4 + 25);
  v21 = (_WORD *)*((_QWORD *)a4 + 5);
  v98 = a1;
  *((_QWORD *)a4 + 4) = 0LL;
  v22 = 0;
  v92 = a2;
  v23 = *(struct _SURFOBJ **)a11;
  v94 = v21;
  v85 = a3;
  v24 = 1;
  v79 = a11;
  LODWORD(v21) = HIDWORD(v23[9].dhsurf);
  v88 = a5;
  v81 = a7;
  v80 = 0;
  v83 = 0;
  v89 = 0LL;
  v86 = 0;
  v75 = 1;
  if ( ((unsigned __int8)v21 & 4) != 0 && LODWORD(v23[2].pvBits) == 1 )
  {
    v22 = *(_DWORD *)(*(_QWORD *)a2 + 1756LL) != v23[4].iUniq;
    v86 = v22;
  }
  *(_QWORD *)(a4 + 1) = 0LL;
  v25 = 0;
  v26 = *(struct _SURFOBJ **)a11;
  v74 = 0;
  v27 = (struct _SURFOBJ *)*(unsigned int *)(*(_QWORD *)a11 + 848LL);
  if ( (int)v27 + 4 > 0 )
  {
    v28 = *(struct _SURFOBJ **)a11;
    v29 = 0;
    while ( 1 )
    {
      hsurf = 0LL;
      v78 = 0LL;
      if ( v25 )
      {
        switch ( v25 )
        {
          case 1:
            if ( v22 || !a4[62] )
              goto LABEL_11;
            hsurf = v26[9].hsurf;
            break;
          case 2:
            if ( v22 || !a4[63] )
              goto LABEL_11;
            hsurf = v26[9].dhpdev;
            break;
          case 3:
            if ( v22 || !a4[64] )
              goto LABEL_11;
            hsurf = v26[9].hdev;
            break;
          default:
            if ( v22 )
              goto LABEL_11;
            v31 = *((_QWORD *)a4 + 33);
            if ( !v31 )
              goto LABEL_11;
            v32 = (unsigned int)(v25 - 4);
            if ( !*(_DWORD *)(v31 + 4 * v32) )
              goto LABEL_11;
            hsurf = *(_DWORD **)(*(_QWORD *)&v28[9].sizlBitmap + 8 * v32);
            break;
        }
        v78 = hsurf;
        v40 = (struct RFONTOBJ *)&v78;
      }
      else
      {
        v35 = 0;
        v36 = a4[62] + a4[63] + a4[64];
        if ( (_DWORD)v27 )
        {
          v37 = (unsigned int *)*((_QWORD *)a4 + 33);
          do
          {
            if ( *((_QWORD *)a4 + 33) )
              v26 = (struct _SURFOBJ *)*v37;
            else
              v26 = 0LL;
            v36 += (int)v26;
            ++v35;
            ++v37;
          }
          while ( v35 < (unsigned int)v27 );
        }
        if ( v36 == v84 )
        {
          if ( v19 )
          {
            left = *a14;
            if ( *a14 <= v19->left )
              left = v19->left;
            v17->rclBounds.left = left;
            right = a14[2];
            if ( right >= v19->right )
              right = v19->right;
            v17->rclBounds.right = right;
            top = a14[1];
            if ( top <= v19->top )
              top = v19->top;
            v17->rclBounds.top = top;
            bottom = a14[3];
            if ( bottom >= v19->bottom )
              bottom = v19->bottom;
            v17->rclBounds.bottom = bottom;
          }
          if ( v17->rclBounds.left < v17->rclBounds.right && v17->rclBounds.top < v17->rclBounds.bottom && v19 )
          {
            v38 = v87;
            ++*((_DWORD *)a3 + 23);
            TextOutBitBlt(a3, v15, v26, v27, v17, v70, v19, v71, v72, v93, v38, v73);
          }
          v17->rclBounds.left = *a14;
          v17->rclBounds.top = a14[1];
          v17->rclBounds.right = a14[2];
          v39 = a14[3];
          v29 = 0;
          v19 = 0LL;
          v81 = 0LL;
          v17->rclBounds.bottom = v39;
          goto LABEL_62;
        }
        v40 = v15;
      }
      v41 = (_DWORD *)*((_QWORD *)a4 + 26);
      v42 = v96;
      v43 = v94;
      v44 = v96;
      v45 = &v41[v84];
      while ( v41 < v45 )
      {
        if ( *v41 == v25 )
          *v44++ = *v43;
        ++v43;
        ++v41;
      }
      *((_QWORD *)a4 + 5) = v42;
      v46 = v44 - v42;
      v83 += v46;
      *a4 = v46;
      a4[59] = v25;
      a4[12] = 0;
      if ( v25 )
      {
        v47 = *(_QWORD *)v15;
        if ( *(_DWORD *)(*(_QWORD *)v15 + 308LL) - *(_DWORD *)(*(_QWORD *)v15 + 312LL) == hsurf[77] - hsurf[78] )
        {
          v68 = (*(_DWORD *)(v47 + 320) - hsurf[80]) >> 4;
          v69 = (*(_DWORD *)(v47 + 324) - hsurf[81]) >> 4;
          v89.x = v68;
          v89.y = v69;
          if ( v69 || v68 )
            ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)a4, &v89);
        }
      }
      v48 = *(_OWORD *)(a4 + 3);
      *((_QWORD *)a4 + 7) = v40;
      *(_OWORD *)(a4 + 45) = v48;
      if ( (*(_DWORD *)(*(_QWORD *)v40 + 88LL) & 2) == 0 )
      {
        if ( !(unsigned int)bOutOfBounds((STROBJ *)a4) )
        {
          v49 = v80;
          if ( (*((_DWORD *)a3 + 28) & 8) != 0 )
          {
            v67 = *((_QWORD *)a3 + 6);
            v49 = v80 | 1;
            v80 |= 1u;
            v50 = *(int (**)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))(v67 + 2864);
          }
          else
          {
            v50 = EngTextOut;
          }
          if ( (v49 & 1) != 0 )
            v80 = v49 & 0xFFFFFFFE;
          v82 = v50;
          if ( PDEVOBJ::bSupportsClearTypeAlways((int (*)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v50) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)v40 + 12LL) & 0x10010000) != 0 )
              SURFACE::pdcoAA(a3, v92);
          }
          else
          {
            GrepUpdatePfnTextOutAndSurfaceDcoIfNeeded(v92, v40, a3, &v82);
            v50 = v82;
          }
          v51 = v104;
          v77 = 0;
          v52 = 0;
          v76 = 0;
          v53 = 0;
          v82 = (int (*)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v104;
          if ( v40 != v79 && (*(_DWORD *)(*((_QWORD *)v85 + 6) + 40LL) & 0x8000) != 0 )
          {
            v54 = UMPDReleaseRFONTSem(v79, 0LL, &v77, &v76, (int **)&v82);
            v52 = v77;
            v29 = v54;
            v53 = v76;
            v51 = (int *)v82;
          }
          v55 = v97;
          if ( v83 != v84 )
            v55 = 0LL;
          v72 = v87;
          v71 = (struct _POINTL *)v93;
          v70 = (struct _XLATEOBJ *)v81;
          v56 = ((__int64 (__fastcall *)(char *, int *, _QWORD, struct _CLIPOBJ *, __int64))v50)(
                  (char *)v85 + 24,
                  a4,
                  *(_QWORD *)v40,
                  v88,
                  v55);
          v15 = v79;
          v75 = v56 != 0 ? v75 : 0;
          if ( v29 )
          {
            UMPDAcquireRFONTSem(v79, 0LL, v52, v53, v51);
            v29 = 0;
            if ( v51 && v51 != v104 )
              Win32FreePool(v51);
          }
          else
          {
            v29 = 0;
          }
          a3 = v85;
          SURFACE::pdcoAA(v85, 0LL);
          v25 = v74;
        }
        v19 = 0LL;
        v81 = 0LL;
        goto LABEL_61;
      }
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v101);
      if ( !v102 )
      {
        EngSetLastError(8u);
        v75 = 0;
        goto LABEL_73;
      }
      v57 = *((_QWORD *)a3 + 6);
      v58 = v103;
      v82 = (int (*)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v103;
      v76 = 0;
      v59 = 0;
      v77 = 0;
      v60 = 0;
      v75 = ESTROBJ::bTextToPathWorkhorse((STROBJ *)a4, (struct EPATHOBJ *)&v101);
      if ( !v75 )
      {
        a3 = v85;
        goto LABEL_71;
      }
      if ( _bittest((const signed __int32 *)(v57 + 40), 0xFu) )
      {
        v61 = UMPDReleaseRFONTSem(v79, 0LL, &v76, &v77, (int **)&v82);
        v59 = v76;
        v29 = v61;
        v60 = v77;
        v58 = (int *)v82;
      }
      a3 = v85;
      if ( !_bittest((const signed __int32 *)(*(_QWORD *)v40 + 724LL), 0xFu) )
        break;
      if ( v101.cCurves > 1 )
      {
        v62 = *(_DWORD *)EPATHOBJ_bSimpleFill(v95, &v101, a13, v91, v85, v88, v90, v87, 3341, 2);
        goto LABEL_69;
      }
LABEL_70:
      if ( v29 )
      {
        UMPDAcquireRFONTSem(v79, 0LL, v59, v60, v58);
        v29 = 0;
        if ( v58 && v58 != v103 )
          Win32FreePool(v58);
        goto LABEL_72;
      }
LABEL_71:
      v29 = 0;
LABEL_72:
      v15 = v79;
      v25 = v74;
      v19 = v81;
LABEL_73:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v101);
LABEL_61:
      v17 = v88;
      *(_OWORD *)(a4 + 3) = *(_OWORD *)(a4 + 45);
LABEL_62:
      v78 = 0LL;
LABEL_11:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v78);
      v26 = *(struct _SURFOBJ **)v15;
      ++v25;
      v22 = v86;
      v28 = *(struct _SURFOBJ **)v15;
      v74 = v25;
      v27 = (struct _SURFOBJ *)*(unsigned int *)(*(_QWORD *)v15 + 848LL);
      if ( v25 >= (int)v27 + 4 )
      {
        v24 = v75;
        v18 = v98;
        goto LABEL_13;
      }
    }
    *(_OWORD *)&v100.fl = glaSimpleStroke;
    memset(&v100.eMiterLimit, 0, 24);
    v62 = EPATHOBJ_bSimpleStroke(&v101, a13, v91, v85, v88, 0LL, v90, v87, &v100, 0xD0Du);
LABEL_69:
    v75 = v62;
    goto LABEL_70;
  }
LABEL_13:
  *((_QWORD *)a4 + 5) = v94;
  *((_QWORD *)a4 + 7) = v99;
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(v18, v24);
  return v33;
}
