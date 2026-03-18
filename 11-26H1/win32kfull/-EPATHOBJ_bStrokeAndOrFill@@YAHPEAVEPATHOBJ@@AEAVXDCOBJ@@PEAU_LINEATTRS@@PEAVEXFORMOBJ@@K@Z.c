/*
 * XREFs of ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414
 * Callers:
 *     ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x14006E5A0 (-GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z.c)
 *     NtGdiArcInternal @ 0x140110940 (NtGdiArcInternal.c)
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x140111F1C (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 *     NtGdiStrokePath @ 0x1401129F0 (NtGdiStrokePath.c)
 *     NtGdiRoundRect @ 0x140112B50 (NtGdiRoundRect.c)
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x140113090 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 *     GreEllipse @ 0x140113870 (GreEllipse.c)
 *     NtGdiFillPath @ 0x140114130 (NtGdiFillPath.c)
 *     ?GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z @ 0x140114810 (-GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z.c)
 *     ?GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z @ 0x1401149D4 (-GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z.c)
 *     GrePolyBezierTo @ 0x140114C50 (GrePolyBezierTo.c)
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14011683C (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GrePolylineTo @ 0x140213620 (GrePolylineTo.c)
 *     NtGdiStrokeAndFillPath @ 0x1402280F0 (NtGdiStrokeAndFillPath.c)
 *     ?GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z @ 0x140246C10 (-GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z.c)
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@5PEAU_POINTL@@KK@Z @ 0x1400845B8 (-EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXF.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?EPATHOBJ_vUpdateCosmeticStyleState@@YAXAEBVEPATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1400E16E8 (-EPATHOBJ_vUpdateCosmeticStyleState@@YAXAEBVEPATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1401170D8 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140117E38 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     ?bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1401183C8 (-bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall EPATHOBJ_bStrokeAndOrFill(
        struct _PATHOBJ *a1,
        POINTL **this,
        LINEATTRS *a3,
        XFORMOBJ *a4,
        unsigned int a5)
{
  __int64 v6; // r9
  MIX v10; // r14d
  POINTL *v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // r13d
  struct _RECTFX *v14; // rdx
  _DWORD *v15; // rax
  int v16; // r8d
  int v17; // ebx
  int v18; // edx
  int v19; // r9d
  POINTL *v20; // rax
  int v21; // r8d
  int v22; // edx
  int v23; // ebx
  LONG y; // ecx
  int v25; // r9d
  POINTL *v26; // rcx
  LONG v27; // ecx
  __int64 v28; // rdx
  POINTL v29; // rcx
  int v30; // eax
  int v31; // eax
  POINTL *v32; // r8
  __int64 v33; // rdx
  struct REGION *v34; // rax
  POINTL *v35; // rdx
  SURFACE *v36; // r10
  HDEV v37; // rbx
  POINTL v38; // rsi
  CLIPOBJ *v39; // rdi
  LONG x; // ecx
  int v41; // r9d
  POINTL *v42; // rcx
  POINTL v43; // r8
  struct _BRUSHOBJ *v44; // r8
  POINTL v45; // rax
  unsigned __int8 v46; // cl
  BRUSHOBJ *v47; // rsi
  BRUSHOBJ *v48; // r9
  struct _PATHOBJ *v49; // rdi
  unsigned int v50; // eax
  unsigned int v51; // r13d
  struct SURFACE *v52; // rsi
  unsigned int v53; // r13d
  unsigned int v55; // r13d
  POINTL v56; // r9
  POINTL *v57; // r8
  BRUSHOBJ *v58; // rdi
  POINTL v59; // rax
  unsigned __int8 v60; // cl
  FLONG fl; // eax
  POINTL v62; // rcx
  BRUSHOBJ *v63; // r11
  int v64; // eax
  POINTL v65; // r8
  BOOL v66; // eax
  struct ECLIPOBJ *v67; // rdx
  unsigned int v68; // ebx
  CLIPOBJ *pco; // [rsp+20h] [rbp-E0h]
  CLIPOBJ *pcoa; // [rsp+20h] [rbp-E0h]
  BRUSHOBJ *v71; // [rsp+30h] [rbp-D0h]
  BRUSHOBJ *v72; // [rsp+30h] [rbp-D0h]
  BRUSHOBJ *v73; // [rsp+60h] [rbp-A0h]
  SURFACE *v74; // [rsp+68h] [rbp-98h]
  struct _BRUSHOBJ *v75; // [rsp+70h] [rbp-90h]
  BRUSHOBJ *v76[2]; // [rsp+80h] [rbp-80h] BYREF
  int v77; // [rsp+90h] [rbp-70h]
  FLOAT_LONG v78; // [rsp+94h] [rbp-6Ch]
  int v79; // [rsp+98h] [rbp-68h] BYREF
  int v80; // [rsp+9Ch] [rbp-64h]
  XFORMOBJ *pxo; // [rsp+A0h] [rbp-60h]
  __m128i rclBounds; // [rsp+A8h] [rbp-58h] BYREF
  struct _PATHOBJ *v83; // [rsp+B8h] [rbp-48h]
  __int128 v84; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v85; // [rsp+D0h] [rbp-30h]
  __int64 v86; // [rsp+E0h] [rbp-20h]
  _BYTE v87[160]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v88; // [rsp+190h] [rbp+90h] BYREF
  CLIPOBJ v89; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v90; // [rsp+1D8h] [rbp+D8h]
  __int64 v91; // [rsp+1F0h] [rbp+F0h]
  int v92; // [rsp+1F8h] [rbp+F8h]
  int v93; // [rsp+220h] [rbp+120h]
  __int64 v94; // [rsp+230h] [rbp+130h]

  pxo = a4;
  v6 = (__int64)this[2];
  rclBounds.m128i_i64[0] = v6;
  v10 = 0;
  v83 = a1;
  v77 = 0;
  v78.l = 0;
  if ( !a1->cCurves )
    return 1LL;
  v11 = *this;
  v12 = a5 & 0xFFFFFFFE;
  if ( *(_QWORD *)&v11[18] != *(_QWORD *)(v6 + 176) )
    v12 = a5;
  v13 = v12 & 0xFFFFFFFD;
  if ( *(_QWORD *)&v11[17] != *(_QWORD *)(v6 + 160) )
    v13 = v12;
  v80 = v13 & 1;
  if ( (v13 & 1) != 0 && (a3->fl & 1) != 0 )
  {
    v14 = (struct _RECTFX *)(*(_QWORD *)&a1[1] + 48LL);
    *(_OWORD *)v76 = 0LL;
    if ( !pathwide::bComputeWidenedBounds(
            (pathwide *)v76,
            v14,
            (const struct _RECTFX *)a4,
            (const struct EXFORMOBJ *)a3,
            (const struct _LINEATTRS *)pco) )
    {
      EngSetLastError(0x216u);
      return 0LL;
    }
    *(_OWORD *)(*(_QWORD *)&a1[1] + 48LL) = *(_OWORD *)v76;
    if ( a3->pstyle )
      a3->elStyleState.l = 0;
  }
  v15 = (_DWORD *)a1[1];
  v16 = v15[15] + 15;
  v17 = v15[12];
  v18 = v15[14] + 15;
  v19 = v15[13];
  v20 = *this;
  v21 = (v16 >> 4) + 1;
  v22 = (v18 >> 4) + 1;
  v23 = v17 >> 4;
  y = (*this)[4].y;
  v25 = v19 >> 4;
  v76[0] = (BRUSHOBJ *)__PAIR64__(v25, v23);
  v76[1] = (BRUSHOBJ *)__PAIR64__(v21, v22);
  if ( (y & 0xE0) != 0 )
  {
    if ( (y & 0x20) != 0 )
    {
      if ( v23 < v20[133].x )
        v20[133].x = v23;
      if ( v25 < v20[133].y )
        v20[133].y = v25;
      if ( v22 > v20[134].x )
        v20[134].x = v22;
      if ( v21 > v20[134].y )
        v20[134].y = v21;
    }
    v26 = *this;
    if ( ((*this)[4].y & 0x80u) != 0 )
    {
      if ( v23 < v26[137].x )
        v26[137].x = v23;
      if ( v25 < v26[137].y )
        v26[137].y = v25;
      if ( v22 > v26[138].x )
        v26[138].x = v22;
      if ( v21 > v26[138].y )
        v26[138].y = v21;
    }
  }
  if ( !*(_QWORD *)&(*this)[62] )
    return 1LL;
  v27 = (*this)[4].y;
  if ( (v27 & 0x1000) != 0 && (v27 & 0x4000) == 0 )
    return 1LL;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v87);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v87, (struct XDCOBJ *)this, 0) )
  {
    v68 = XDCOBJ::bFullScreen((XDCOBJ *)this);
    goto LABEL_103;
  }
  v29 = (*this)[62];
  if ( ((*(_DWORD *)(*(_QWORD *)&v29 + 116LL) & 8) != 0 || *(_QWORD *)(*(_QWORD *)&v29 + 224LL))
    && _bittest16((const signed __int16 *)(*(_QWORD *)&v29 + 102LL), 9u) )
  {
LABEL_102:
    EngSetLastError(5u);
    v68 = 0;
LABEL_103:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v87);
    return v68;
  }
  v30 = *(_DWORD *)(*(_QWORD *)&v29 + 112LL);
  if ( (v30 & 0x800) != 0 )
  {
    v31 = UserSurfaceAccessCheck(*(_QWORD *)(*(_QWORD *)&v29 + 648LL));
  }
  else
  {
    if ( (v30 & 0x10000000) == 0 )
      goto LABEL_39;
    v31 = ((__int64 (__fastcall *)(_QWORD, _QWORD))UserScreenAccessCheck)(v29, v28);
  }
  if ( !v31 )
    goto LABEL_102;
LABEL_39:
  v32 = *this;
  v88 = *(_OWORD *)v76;
  v33 = v32[5].x & 1;
  LODWORD(v88) = v23 + v32[v33 + 127].x;
  DWORD2(v88) = v32[v33 + 127].x + LODWORD(v76[1]);
  DWORD1(v88) = v32[v33 + 127].y + HIDWORD(v76[0]);
  HIDWORD(v88) = v32[v33 + 127].y + HIDWORD(v76[1]);
  EPATHOBJ::vOffset((EPATHOBJ *)a1, (const struct EPOINTL *)&v32[(v32[5].x & 1) + 127]);
  v34 = XDCOBJ::prgnEffRao((DC **)this);
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0;
  v93 = 1;
  v94 = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)&v89, v34, (const struct ERECTL *)&v88, 0);
  v35 = *this;
  if ( (*this)[4].x == 2 || v89.rclBounds.left == v89.rclBounds.right || v89.rclBounds.top == v89.rclBounds.bottom )
  {
    if ( (v13 & 1) != 0 && (a3->pstyle && (a3->fl & 1) == 0 || (a3->fl & 2) != 0) )
      EPATHOBJ_vUpdateCosmeticStyleState((const struct EPATHOBJ *)a1, *(struct SURFACE **)&v35[62], a3);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v87);
    return 1LL;
  }
  v36 = (SURFACE *)v35[62];
  v37 = (HDEV)v35[6];
  v38 = v35[11];
  v74 = v36;
  v39 = (CLIPOBJ *)*((_QWORD *)v36 + 16);
  v75 = (struct _BRUSHOBJ *)&v35[167];
  v73 = (BRUSHOBJ *)&v35[150];
  v76[0] = (BRUSHOBJ *)&v35[167];
  if ( !v80 )
    goto LABEL_54;
  x = v35[167].x;
  if ( (a3->fl & 1) != 0 )
  {
    v41 = 1;
    if ( x == -1 || (v35[182].x & 0x10000) == 0 && ((_DWORD)v37[452] & 0x800000) == 0 )
      goto LABEL_47;
    goto LABEL_72;
  }
  v41 = 0;
  if ( x == -1 )
LABEL_72:
    *(_DWORD *)(*(_QWORD *)&v35[122] + 152LL) |= 2u;
LABEL_47:
  v42 = *this;
  v43 = (*this)[122];
  if ( ((LOBYTE((*this)[39].y) | *(_BYTE *)(*(_QWORD *)&v43 + 152LL)) & 2) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)&v43 + 152LL) &= ~2u;
    (*this)[39].y &= ~2u;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
      v75,
      *this,
      *(_QWORD *)&(*this)[18],
      v38,
      v39,
      v36,
      v41);
    v42 = *this;
    v36 = v74;
  }
  v44 = v75;
  if ( a3->pstyle )
  {
    if ( (v75[5].iSolidColor & 0x800) != 0 && *(_BYTE *)(*(_QWORD *)&v42[122] + 213LL) == 2 )
    {
      fl = a3->fl;
      if ( (a3->fl & 1) == 0 )
      {
        v77 = 1;
        a3->fl = fl ^ 4;
        LODWORD(v78.e) = a3->elStyleState;
        v62 = (*this)[122];
        v63 = (BRUSHOBJ *)&(*this)[201];
        v76[0] = v63;
        v64 = *(_DWORD *)(*(_QWORD *)&v62 + 152LL);
        if ( (v64 & 8) == 0 && v63->iSolidColor == -1 )
          *(_DWORD *)(*(_QWORD *)&v62 + 152LL) = v64 | 8;
        v65 = (*this)[122];
        if ( ((LOBYTE((*this)[39].y) | *(_BYTE *)(*(_QWORD *)&v65 + 152LL)) & 8) != 0 )
        {
          if ( ((*this)[9].x & 0x8000) == 0 )
          {
            *(_DWORD *)(*(_QWORD *)&v65 + 152LL) &= ~8u;
            (*this)[39].y &= ~8u;
          }
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
            v63,
            *this,
            *(_QWORD *)(rclBounds.m128i_i64[0] + 168),
            v38,
            v39,
            v36,
            0);
        }
        v44 = v75;
      }
    }
  }
  v35 = *this;
  v45 = (*this)[122];
  v46 = ((*(_BYTE *)(*(_QWORD *)&v45 + 212LL) - 1) & 0xF) + 1;
  if ( *(_BYTE *)(*(_QWORD *)&v45 + 213LL) == 1 && (v44[5].iSolidColor & 0x8000) != 0 )
    v10 = v46 | 0xB00;
  else
    v10 = v46 | (v46 << 8);
  v36 = v74;
LABEL_54:
  if ( (v13 & 2) != 0 )
  {
    v56 = v35[122];
    v57 = v35;
    if ( ((LOBYTE(v35[39].y) | *(_BYTE *)(*(_QWORD *)&v56 + 152LL)) & 1) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)&v56 + 152LL) &= ~1u;
      pcoa = v39;
      v58 = v73;
      (*this)[39].y &= ~1u;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
        v73,
        *this,
        *(_QWORD *)&(*this)[17],
        v38,
        pcoa,
        v36,
        1);
      v57 = *this;
    }
    else
    {
      v58 = v73;
    }
    v35 = v57;
    if ( (v13 & 1) == 0 || v10 >> 8 == (unsigned __int8)v10 )
    {
      v59 = v57[122];
      v60 = ((*(_BYTE *)(*(_QWORD *)&v59 + 212LL) - 1) & 0xF) + 1;
      if ( *(_BYTE *)(*(_QWORD *)&v59 + 213LL) == 1 && (v58[5].iSolidColor & 0x8000) != 0 )
        v10 = v60 | 0xB00;
      else
        v10 = v60 | (v60 << 8);
    }
  }
  if ( (v35[4].y & 0xE0) == 0 )
  {
    v47 = v76[0];
LABEL_57:
    v48 = v73;
    goto LABEL_58;
  }
  v66 = ERECTL::bEmpty((ERECTL *)&v89.rclBounds);
  v47 = v76[0];
  if ( v66 )
    goto LABEL_57;
  if ( (v13 & 1) != 0 && !_bittest((const signed __int32 *)&v76[0][5], 8u)
    || (v48 = v73, (v13 & 2) != 0) && !_bittest((const signed __int32 *)&v73[5], 8u) )
  {
    rclBounds = (__m128i)v89.rclBounds;
    XDCOBJ::vAccumulateTight((XDCOBJ *)this, v67, &rclBounds);
    goto LABEL_57;
  }
LABEL_58:
  v49 = v83;
  *(_QWORD *)(*(_QWORD *)&v83[1] + 80LL) = 0LL;
  v50 = 0;
  v86 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  if ( !v13 )
  {
    if ( *((_DWORD *)v37 + 531) == 1
      || (v13 = a5, v10 = 2827, a3 = (LINEATTRS *)&v84, v84 = glaSimpleStroke, v86 = 0LL, v85 = xmmword_140366158, !a5) )
    {
      v52 = v74;
      v53 = 1;
      goto LABEL_62;
    }
  }
  v51 = v13 - 1;
  if ( v51 )
  {
    v55 = v51 - 1;
    if ( !v55 )
    {
      v52 = v74;
      v53 = *EPATHOBJ_bSimpleFill(
               &v79,
               (__int64)v49,
               (*this)[9].x,
               (__int64)v37,
               v74,
               &v89,
               v48,
               *this + 149,
               v10,
               *(unsigned __int8 *)(*(_QWORD *)&(*this)[122] + 214LL));
      goto LABEL_62;
    }
    if ( v55 == 1 )
    {
      v72 = v47;
      v52 = v74;
      v50 = EPATHOBJ_bSimpleStrokeAndFill(
              v49,
              (*this)[9].x,
              v37,
              v74,
              &v89,
              pxo,
              v72,
              a3,
              v48,
              *this + 149,
              v10,
              *(unsigned __int8 *)(*(_QWORD *)&(*this)[122] + 214LL));
    }
    else
    {
      v52 = v74;
    }
  }
  else
  {
    v71 = v47;
    v52 = v74;
    v50 = EPATHOBJ_bSimpleStroke(v49, (*this)[9].x, v37, v74, &v89, (struct EXFORMOBJ *)pxo, v71, *this + 149, a3, v10);
  }
  v53 = v50;
LABEL_62:
  if ( v77 )
  {
    a3->fl ^= 4u;
    a3->elStyleState = v78;
    *(_QWORD *)(*(_QWORD *)&v49[1] + 80LL) = 0LL;
    v53 &= EPATHOBJ_bSimpleStroke(v49, (*this)[9].x, v37, v52, &v89, (struct EXFORMOBJ *)pxo, v75, *this + 149, a3, v10);
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v87);
  return v53;
}
