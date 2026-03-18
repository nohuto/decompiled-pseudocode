/*
 * XREFs of ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400A2118
 * Callers:
 *     ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x1400790D8 (-GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z.c)
 *     GrePolyBezierTo @ 0x1400799B0 (GrePolyBezierTo.c)
 *     ?GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z @ 0x1400A1F34 (-GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z.c)
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x1400A7B74 (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 *     NtGdiStrokeAndFillPath @ 0x1400E5050 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1400E5B50 (NtGdiStrokePath.c)
 *     NtGdiFillPath @ 0x1400E5DF0 (NtGdiFillPath.c)
 *     NtGdiRoundRect @ 0x1400E6A70 (NtGdiRoundRect.c)
 *     GreEllipse @ 0x1400E6D70 (GreEllipse.c)
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400E7180 (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     NtGdiArcInternal @ 0x1400E8410 (NtGdiArcInternal.c)
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x140179C90 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 *     ?GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z @ 0x1401C62B4 (-GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z.c)
 *     GrePolylineTo @ 0x1401DFD20 (GrePolylineTo.c)
 *     ?GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z @ 0x140332DB4 (-GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z.c)
 * Callees:
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140013B48 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ?EPATHOBJ_vUpdateCosmeticStyleState@@YAXAEBVEPATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x14006A004 (-EPATHOBJ_vUpdateCosmeticStyleState@@YAXAEBVEPATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x140076238 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x140087BA4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400A1960 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A2A74 (-bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1400A2E78 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@5PEAU_POINTL@@KK@Z @ 0x1400A2EAC (-EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXF.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400A32F0 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400A3624 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall EPATHOBJ_bStrokeAndOrFill(
        int **a1,
        struct _POINTL **this,
        LINEATTRS *a3,
        XFORMOBJ *a4,
        unsigned int a5)
{
  __int64 v6; // r9
  unsigned int v10; // r13d
  struct _POINTL *v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // r12d
  int *v14; // rcx
  int v15; // edi
  int v16; // esi
  int v17; // eax
  struct _POINTL *v18; // r8
  __int64 v19; // rdx
  struct REGION *v20; // rdx
  struct _POINTL *v21; // rdx
  BRUSHOBJ *v22; // r10
  struct SURFACE *v23; // r8
  HDEV v24; // rbx
  struct _POINTL v25; // rsi
  __int64 v26; // rdi
  ULONG iSolidColor; // ecx
  int v28; // r11d
  struct _POINTL *v29; // rcx
  struct _POINTL v30; // r9
  struct _POINTL v31; // rax
  unsigned __int8 v32; // cl
  BRUSHOBJ *v33; // rsi
  struct EPATHOBJ *v34; // rdi
  unsigned int v35; // eax
  unsigned int v36; // r12d
  struct SURFACE *v37; // rsi
  unsigned int v38; // r12d
  struct _RECTFX *v40; // rdx
  unsigned int v41; // r12d
  struct _POINTL v42; // r9
  FLONG fl; // eax
  struct _POINTL v44; // rcx
  BRUSHOBJ *v45; // r11
  int v46; // eax
  struct _POINTL v47; // r9
  BOOL v48; // eax
  struct ECLIPOBJ *v49; // rdx
  __int64 v50; // r9
  unsigned int v51; // ebx
  CLIPOBJ *pco; // [rsp+20h] [rbp-E0h]
  BRUSHOBJ *v53; // [rsp+30h] [rbp-D0h]
  BRUSHOBJ *v54; // [rsp+30h] [rbp-D0h]
  struct SURFACE *v55; // [rsp+60h] [rbp-A0h]
  BRUSHOBJ *v56; // [rsp+68h] [rbp-98h]
  BRUSHOBJ *v57[2]; // [rsp+70h] [rbp-90h] BYREF
  int v58; // [rsp+80h] [rbp-80h]
  FLOAT_LONG v59; // [rsp+84h] [rbp-7Ch]
  char v60[8]; // [rsp+88h] [rbp-78h] BYREF
  BRUSHOBJ *v61; // [rsp+90h] [rbp-70h]
  int v62; // [rsp+98h] [rbp-68h]
  XFORMOBJ *pxo; // [rsp+A0h] [rbp-60h]
  __m128i rclBounds; // [rsp+A8h] [rbp-58h] BYREF
  struct EPATHOBJ *v65; // [rsp+B8h] [rbp-48h]
  __int128 v66; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v67; // [rsp+D0h] [rbp-30h]
  __int64 v68; // [rsp+E0h] [rbp-20h]
  __int128 v69; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v70; // [rsp+100h] [rbp+0h]
  int v71; // [rsp+108h] [rbp+8h]
  _QWORD v72[14]; // [rsp+110h] [rbp+10h] BYREF
  int v73; // [rsp+180h] [rbp+80h] BYREF
  int v74; // [rsp+184h] [rbp+84h]
  BRUSHOBJ *v75; // [rsp+188h] [rbp+88h]
  CLIPOBJ v76; // [rsp+190h] [rbp+90h] BYREF

  pxo = a4;
  v6 = (__int64)this[2];
  rclBounds.m128i_i64[0] = v6;
  v10 = 0;
  v65 = (struct EPATHOBJ *)a1;
  v58 = 0;
  v59.l = 0;
  if ( !*((_DWORD *)a1 + 1) )
    return 1LL;
  v11 = *this;
  v12 = a5 & 0xFFFFFFFE;
  if ( *(_QWORD *)&v11[18] != *(_QWORD *)(v6 + 88) )
    v12 = a5;
  v13 = v12 & 0xFFFFFFFD;
  if ( *(_QWORD *)&v11[17] != *(_QWORD *)(v6 + 72) )
    v13 = v12;
  v62 = v13 & 1;
  if ( (v13 & 1) != 0 && (a3->fl & 1) != 0 )
  {
    v40 = (struct _RECTFX *)(a1[1] + 12);
    *(_OWORD *)v57 = 0LL;
    if ( !pathwide::bComputeWidenedBounds(
            (pathwide *)v57,
            v40,
            (const struct _RECTFX *)a4,
            (const struct EXFORMOBJ *)a3,
            (const struct _LINEATTRS *)pco) )
    {
      EngSetLastError(0x216u);
      return 0LL;
    }
    *((_OWORD *)a1[1] + 3) = *(_OWORD *)v57;
    if ( a3->pstyle )
      a3->elStyleState.l = 0;
  }
  v14 = a1[1];
  v15 = v14[12] >> 4;
  v16 = v14[13] >> 4;
  v17 = ((v14[15] + 15) >> 4) + 1;
  v57[0] = (BRUSHOBJ *)__PAIR64__(v16, v15);
  HIDWORD(v57[1]) = v17;
  LODWORD(v57[1]) = ((v14[14] + 15) >> 4) + 1;
  if ( ((*this)[4].y & 0xE0) != 0 )
    XDCOBJ::vAccumulate((XDCOBJ *)this, (struct ERECTL *)v57);
  if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)this) )
    return 1LL;
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v72);
  v70 = 0LL;
  v69 = 0LL;
  v71 = 0;
  v72[0] = 0LL;
  memset(&v72[10], 0, 24);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v69, (struct XDCOBJ *)this, 0) )
  {
    v51 = XDCOBJ::bFullScreen((XDCOBJ *)this);
LABEL_81:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v69);
    return v51;
  }
  if ( !(unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)&(*this)[62]) )
  {
    EngSetLastError(5u);
    v51 = 0;
    goto LABEL_81;
  }
  v18 = *this;
  v73 = v15;
  v74 = v16;
  v75 = v57[1];
  v19 = v18[5].x & 1;
  v73 = v15 + v18[v19 + 127].x;
  LODWORD(v75) = LODWORD(v57[1]) + v18[v19 + 127].x;
  v74 = v16 + v18[v19 + 127].y;
  HIDWORD(v75) = HIDWORD(v57[1]) + v18[v19 + 127].y;
  EPATHOBJ::vOffset((EPATHOBJ *)a1, (const struct EPOINTL *)&v18[(v18[5].x & 1) + 127]);
  XDCOBJ::prgnEffRao((DC **)this);
  XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)&v76);
  XCLIPOBJ::vSetup((XCLIPOBJ *)&v76, v20, (const struct ERECTL *)&v73, 0);
  v21 = *this;
  if ( (*this)[4].x == 2 || ERECTL::bEmpty((ERECTL *)&v76.rclBounds) )
  {
    if ( (v13 & 1) != 0 && (a3->pstyle && (a3->fl & 1) == 0 || (a3->fl & 2) != 0) )
      EPATHOBJ_vUpdateCosmeticStyleState((const struct EPATHOBJ *)a1, *(struct SURFACE **)&v21[62], a3);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v69);
    return 1LL;
  }
  v22 = (BRUSHOBJ *)&v21[167];
  v23 = (struct SURFACE *)v21[62];
  v24 = (HDEV)v21[6];
  v25 = v21[11];
  v55 = v23;
  v26 = *((_QWORD *)v23 + 16);
  v57[0] = (BRUSHOBJ *)&v21[167];
  v56 = (BRUSHOBJ *)&v21[150];
  v61 = (BRUSHOBJ *)&v21[167];
  if ( !v62 )
    goto LABEL_25;
  iSolidColor = v22->iSolidColor;
  if ( (a3->fl & 1) != 0 )
  {
    v28 = 1;
    if ( iSolidColor == -1 || (v21[182].x & 0x10000) == 0 && ((_DWORD)v24[452] & 0x800000) == 0 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v28 = 0;
  if ( iSolidColor == -1 )
LABEL_18:
    *(_DWORD *)(*(_QWORD *)&v21[122] + 152LL) |= 2u;
LABEL_19:
  v29 = *this;
  v30 = (*this)[122];
  if ( ((LOBYTE((*this)[39].y) | *(_BYTE *)(*(_QWORD *)&v30 + 152LL)) & 2) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)&v30 + 152LL) &= ~2u;
    (*this)[39].y &= ~2u;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
      v22,
      *this,
      *(_QWORD *)&(*this)[18],
      v25,
      v26,
      v23,
      v28);
    v29 = *this;
    v23 = v55;
    v22 = v57[0];
  }
  if ( a3->pstyle )
  {
    if ( (v22[5].iSolidColor & 0x800) != 0 && *(_BYTE *)(*(_QWORD *)&v29[122] + 213LL) == 2 )
    {
      fl = a3->fl;
      if ( (a3->fl & 1) == 0 )
      {
        v58 = 1;
        a3->fl = fl ^ 4;
        LODWORD(v59.e) = a3->elStyleState;
        v44 = (*this)[122];
        v45 = (BRUSHOBJ *)&(*this)[201];
        v61 = v45;
        v46 = *(_DWORD *)(*(_QWORD *)&v44 + 152LL);
        if ( (v46 & 8) == 0 && v45->iSolidColor == -1 )
          *(_DWORD *)(*(_QWORD *)&v44 + 152LL) = v46 | 8;
        v47 = (*this)[122];
        if ( ((LOBYTE((*this)[39].y) | *(_BYTE *)(*(_QWORD *)&v47 + 152LL)) & 8) != 0 )
        {
          if ( ((*this)[9].x & 0x8000) == 0 )
          {
            *(_DWORD *)(*(_QWORD *)&v47 + 152LL) &= ~8u;
            (*this)[39].y &= ~8u;
          }
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
            v45,
            *this,
            *(_QWORD *)(rclBounds.m128i_i64[0] + 80),
            v25,
            v26,
            v23,
            0);
        }
      }
    }
  }
  v21 = *this;
  v31 = (*this)[122];
  v32 = ((*(_BYTE *)(*(_QWORD *)&v31 + 212LL) - 1) & 0xF) + 1;
  if ( *(_BYTE *)(*(_QWORD *)&v31 + 213LL) == 1 && (v57[0][5].iSolidColor & 0x8000) != 0 )
    v10 = v32 | 0xB00;
  else
    v10 = v32 | (v32 << 8);
  v23 = v55;
LABEL_25:
  if ( (v13 & 2) != 0 )
  {
    v42 = v21[122];
    if ( ((LOBYTE(v21[39].y) | *(_BYTE *)(*(_QWORD *)&v42 + 152LL)) & 1) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)&v42 + 152LL) &= ~1u;
      (*this)[39].y &= ~1u;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
        v56,
        *this,
        *(_QWORD *)&(*this)[17],
        v25,
        v26,
        v23,
        1);
    }
    if ( (v13 & 1) == 0 || v10 >> 8 == (unsigned __int8)v10 )
      v10 = EBRUSHOBJ::mixBest(
              (EBRUSHOBJ *)v56,
              *(_BYTE *)(*(_QWORD *)&(*this)[122] + 212LL),
              *(_BYTE *)(*(_QWORD *)&(*this)[122] + 213LL));
  }
  if ( ((*this)[4].y & 0xE0) != 0 )
  {
    v48 = ERECTL::bEmpty((ERECTL *)&v76.rclBounds);
    v33 = v61;
    if ( !v48
      && ((v13 & 1) != 0 && !_bittest((const signed __int32 *)&v61[5], 8u)
       || (v13 & 2) != 0 && !_bittest((const signed __int32 *)(v50 + 120), 8u)) )
    {
      rclBounds = (__m128i)v76.rclBounds;
      XDCOBJ::vAccumulateTight((XDCOBJ *)this, v49, &rclBounds);
    }
  }
  else
  {
    v33 = v61;
  }
  v34 = v65;
  *(_QWORD *)(*((_QWORD *)v65 + 1) + 80LL) = 0LL;
  v35 = 0;
  v68 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  if ( !v13 )
  {
    if ( *((_DWORD *)v24 + 531) == 1
      || (v13 = a5, v10 = 2827, a3 = (LINEATTRS *)&v66, v66 = glaSimpleStroke, v68 = 0LL, v67 = xmmword_140358598, !a5) )
    {
      v37 = v55;
      v38 = 1;
      goto LABEL_32;
    }
  }
  v36 = v13 - 1;
  if ( v36 )
  {
    v41 = v36 - 1;
    if ( !v41 )
    {
      v37 = v55;
      v38 = *(_DWORD *)EPATHOBJ_bSimpleFill(
                         v60,
                         v34,
                         (unsigned int)(*this)[9].x,
                         v24,
                         v55,
                         &v76,
                         v56,
                         &(*this)[149],
                         v10,
                         *(unsigned __int8 *)(*(_QWORD *)&(*this)[122] + 214LL));
      goto LABEL_32;
    }
    if ( v41 == 1 )
    {
      v54 = v33;
      v37 = v55;
      v35 = EPATHOBJ_bSimpleStrokeAndFill(
              v34,
              (*this)[9].x,
              v24,
              v55,
              &v76,
              pxo,
              v54,
              a3,
              v56,
              *this + 149,
              v10,
              *(unsigned __int8 *)(*(_QWORD *)&(*this)[122] + 214LL));
    }
    else
    {
      v37 = v55;
    }
  }
  else
  {
    v53 = v33;
    v37 = v55;
    v35 = EPATHOBJ_bSimpleStroke(v34, (*this)[9].x, v24, v55, &v76, pxo, v53, *this + 149, a3, v10);
  }
  v38 = v35;
LABEL_32:
  if ( v58 )
  {
    a3->fl ^= 4u;
    a3->elStyleState = v59;
    *(_QWORD *)(*((_QWORD *)v34 + 1) + 80LL) = 0LL;
    v38 &= EPATHOBJ_bSimpleStroke(v34, (*this)[9].x, v24, v37, &v76, pxo, v57[0], *this + 149, a3, v10);
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v69);
  return v38;
}
