/*
 * XREFs of NtGdiFastPolyPolyline @ 0x14000F6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1PATH@@QEAA@XZ @ 0x140010140 (--1PATH@@QEAA@XZ.c)
 *     ??0PATH@@QEAA@XZ @ 0x140010160 (--0PATH@@QEAA@XZ.c)
 *     ?bMakePathRecords@@YAHPEAUPATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x140010194 (-bMakePathRecords@@YAHPEAUPATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x140013B1C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x140078724 (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007A090 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A2CC (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400A1960 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtGdiFastPolyPolyline(Gre::Base *a1, struct _POINTL *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // r15
  int v8; // edi
  unsigned int v9; // r14d
  int v10; // ebx
  DC *v11; // rcx
  char *v12; // r13
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // rax
  _QWORD *v16; // r9
  unsigned int v17; // edx
  int v18; // r10d
  unsigned int *v19; // r8
  int v20; // eax
  __int64 v21; // rax
  struct PATHRECORD *v22; // rsi
  __int64 v23; // r13
  char *v24; // rcx
  int v25; // r8d
  int v26; // r9d
  BOOL v27; // r12d
  const struct _VECTORL *v28; // rdx
  int v29; // r8d
  int v30; // r9d
  struct _POINTL *v31; // r13
  unsigned int *v32; // rdx
  int v33; // r12d
  FIX xRight; // edx
  FIX yBottom; // ecx
  DC *v36; // rdx
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // r9
  char *v40; // r13
  __int64 v41; // r10
  int v42; // r15d
  struct REGION *v43; // rax
  struct ECLIPOBJ *v44; // rdx
  unsigned int v45; // eax
  unsigned int v47; // [rsp+50h] [rbp-488h]
  int v48; // [rsp+54h] [rbp-484h]
  int v49; // [rsp+64h] [rbp-474h]
  int v50; // [rsp+80h] [rbp-458h]
  int v51; // [rsp+84h] [rbp-454h]
  char *v52; // [rsp+90h] [rbp-448h] BYREF
  struct _POINTL *v53; // [rsp+98h] [rbp-440h]
  unsigned int *v54; // [rsp+A0h] [rbp-438h]
  struct _POINTL *v55; // [rsp+A8h] [rbp-430h]
  unsigned int *v56; // [rsp+B0h] [rbp-428h]
  unsigned int *v57; // [rsp+B8h] [rbp-420h]
  char *v58; // [rsp+C0h] [rbp-418h] BYREF
  bool v59; // [rsp+C8h] [rbp-410h]
  __int128 v60; // [rsp+D0h] [rbp-408h] BYREF
  DC *v61[14]; // [rsp+E0h] [rbp-3F8h] BYREF
  _DWORD v62[2]; // [rsp+150h] [rbp-388h] BYREF
  _BYTE *v63; // [rsp+158h] [rbp-380h]
  __int128 v64; // [rsp+160h] [rbp-378h]
  __int128 v65; // [rsp+170h] [rbp-368h]
  __int64 v66; // [rsp+180h] [rbp-358h]
  __int64 v67; // [rsp+188h] [rbp-350h]
  __int64 v68; // [rsp+190h] [rbp-348h]
  __int64 v69; // [rsp+198h] [rbp-340h]
  _BYTE v70[144]; // [rsp+1A0h] [rbp-338h] BYREF
  _BYTE v71[32]; // [rsp+230h] [rbp-2A8h] BYREF
  struct PATHRECORD *v72; // [rsp+250h] [rbp-288h]
  struct PATHRECORD *v73; // [rsp+258h] [rbp-280h] BYREF
  struct _RECTFX v74; // [rsp+260h] [rbp-278h] BYREF
  int v75; // [rsp+278h] [rbp-260h]
  __int64 v76; // [rsp+280h] [rbp-258h]
  struct _RECTFX v77; // [rsp+370h] [rbp-168h] BYREF
  _BYTE v78[112]; // [rsp+380h] [rbp-158h] BYREF
  _BYTE v79[4]; // [rsp+3F0h] [rbp-E8h] BYREF
  __int128 v80[9]; // [rsp+3F4h] [rbp-E4h] BYREF

  v4 = a4;
  v54 = a3;
  v53 = a2;
  v57 = a3;
  v8 = 0;
  v9 = 0;
  v47 = 0;
  *(_QWORD *)&v60 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v61, (HDC)a1, (struct Gre::Base::SESSION_GLOBALS *)v60);
  if ( !v61[0] || (*((_DWORD *)v61[0] + 9) & 0x10000) != 0 )
    goto LABEL_60;
  v10 = *(_DWORD *)(*((_QWORD *)v61[0] + 122) + 208LL);
  DC::QuickInitXform(v61[0], &v52, 516LL);
  v58 = v52;
  v59 = v10 != 2;
  v11 = v61[0];
  v12 = (char *)v61[0] + 208;
  v52 = (char *)v61[0] + 208;
  v13 = *((_QWORD *)v61[0] + 122);
  v14 = *(_DWORD *)(v13 + 152);
  if ( (v14 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v61[0], *(_QWORD *)(v13 + 160));
    v11 = v61[0];
  }
  if ( (v14 & 0x2000) != 0 )
  {
    GreDCSelectPen(v11, *(_QWORD *)(*((_QWORD *)v11 + 122) + 168LL));
    v11 = v61[0];
  }
  if ( !(_DWORD)v4 )
  {
    v47 = 1;
LABEL_60:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v61);
    return v47;
  }
  v56 = 0LL;
  if ( (unsigned int)v4 <= 0x3FFFFFFF )
  {
    v15 = v4;
    v16 = (_QWORD *)MmUserProbeAddress;
    if ( 4 * v4 && ((unsigned __int64)&a3[v15] > MmUserProbeAddress || &a3[v15] < a3) )
    {
      v9 = 0;
      v11 = v61[0];
      v16 = (_QWORD *)MmUserProbeAddress;
    }
    v17 = 0;
    v18 = v4;
    v19 = a3;
    v56 = a3;
    do
    {
      v20 = *v19++;
      v56 = v19;
      v17 += v20;
      --v18;
    }
    while ( v18 );
    if ( v17 <= 0x1FFFFFFF )
    {
      v21 = v17;
      if ( v21 * 8 && ((unsigned __int64)&a2[v21] > *v16 || &a2[v21] < a2) )
        v11 = v61[0];
      v9 = v17;
    }
  }
  if ( !v9
    || (unsigned int)v4 >= 0x8000000
    || v9 >= 0x8000000
    || (*((_DWORD *)v11 + 62) & 1) != 0
    || (*(_DWORD *)v12 & 3) != 0
    || *((_QWORD *)v12 + 3) )
  {
    goto LABEL_60;
  }
  v69 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v66 = 0LL;
  PATH::PATH((PATH *)v71);
  v22 = 0LL;
  memset_0(v78, 0, 0x68uLL);
  v23 = 8 * ((unsigned int)v4 + v9 + 2 * (_DWORD)v4);
  if ( (unsigned int)v23 > 0x64 )
  {
    if ( (unsigned int)v23 <= 0x2710000 )
      v22 = (struct PATHRECORD *)AllocFreeTmpBuffer((unsigned int)v23);
    if ( !v22 )
      goto LABEL_84;
  }
  else
  {
    v22 = (struct PATHRECORD *)v78;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v70);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v70, (struct XDCOBJ *)v61, 0) )
  {
    if ( !*((_QWORD *)v61[0] + 62) || (unsigned int)DC::bInFullScreen(v61[0]) )
      v8 = 1;
    v47 = v8;
    goto LABEL_57;
  }
  v24 = (char *)v61[0] + 1024;
  if ( (*((_DWORD *)v61[0] + 10) & 1) == 0 )
    v24 = (char *)v61[0] + 1016;
  v25 = *(_DWORD *)v24;
  v50 = *(_DWORD *)v24;
  v26 = *((_DWORD *)v61[0] + 2 * (*((_DWORD *)v61[0] + 10) & 1) + 255);
  v51 = v26;
  v27 = 1;
  v49 = 1;
  v48 = 0;
  v28 = (const struct _VECTORL *)v53;
  v55 = v53;
  if ( (*((_DWORD *)v58 + 8) & 2) == 0 )
    goto LABEL_61;
  if ( *(_DWORD *)(*((_QWORD *)v61[0] + 122) + 208LL) != 1
    && (((unsigned __int8)v58[24] | (unsigned __int8)v58[28]) & 0xF) != 0 )
  {
    v28 = (const struct _VECTORL *)v53;
LABEL_61:
    v31 = (struct _POINTL *)((char *)v22 + v23 - 8LL * v9);
    v55 = v31;
    if ( *(_DWORD *)(*((_QWORD *)v61[0] + 122) + 208LL) == 2 )
    {
      v49 = 0;
      v27 = EXFORMOBJ::bXform((EXFORMOBJ *)&v58, v28, (struct _VECTORFX *)v31, v9);
      v29 = *((_DWORD *)v58 + 6) + 16 * v50;
      v30 = *((_DWORD *)v58 + 7) + 16 * v51;
    }
    else
    {
      v49 = 1;
      v27 = EXFORMOBJ::bXform((EXFORMOBJ *)&v58, (const struct _POINTL *)v28, v31, v9);
      v29 = v50;
      v30 = v51;
    }
    v32 = v54;
    goto LABEL_35;
  }
  v29 = (*((int *)v58 + 6) >> 4) + v25;
  v30 = (*((int *)v58 + 7) >> 4) + v26;
  v31 = v55;
  v32 = v54;
LABEL_35:
  v62[0] = v49 != 0 ? 4 : 0;
  v33 = bMakePathRecords(v22, v32, v9, v31, v4, v29, v30, &v74, &v73) & v27;
  if ( v49 )
  {
    v77 = v74;
    xRight = v74.xRight;
    yBottom = v74.yBottom;
    if ( (v74.xLeft & 0xF8000000) != 0 || ((v74.yTop | v74.xRight | v74.yBottom) & 0xF8000000) != 0 )
      v48 = 1;
    v74.xLeft *= 16;
    v74.xRight *= 16;
    v74.yTop *= 16;
    v74.yBottom *= 16;
  }
  else
  {
    v77.xLeft = v74.xLeft >> 4;
    v77.yTop = v74.yTop >> 4;
    xRight = (v74.xRight + 15) >> 4;
    v77.xRight = xRight;
    yBottom = (v74.yBottom + 15) >> 4;
    v77.yBottom = yBottom;
    if ( (xRight ^ v74.xRight) < 0 || (yBottom ^ v74.yBottom) < 0 )
      v48 = 1;
  }
  if ( yBottom == 0x7FFFFFFF || xRight == 0x7FFFFFFF )
  {
    v48 = 1;
  }
  else
  {
    v77.yBottom = yBottom + 1;
    v77.xRight = xRight + 1;
  }
  if ( v33 )
  {
    v72 = v22;
    v75 = 0;
    v76 = 0LL;
    v62[1] = v9 - v4;
    v63 = v71;
    v36 = v61[0];
    if ( (*((_DWORD *)v61[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v61, v61[0], (struct ERECTL *)&v77);
      v36 = v61[0];
    }
    if ( *((_QWORD *)v36 + 18) == *(_QWORD *)(v60 + 88) )
      goto LABEL_87;
    v37 = *((_QWORD *)v36 + 62);
    if ( !v37 )
      goto LABEL_87;
    v38 = *(_QWORD *)(v37 + 128);
    v39 = *((_QWORD *)v36 + 11);
    v40 = (char *)v36 + 1336;
    if ( *((_DWORD *)v36 + 334) == -1 )
    {
      *(_DWORD *)(*((_QWORD *)v36 + 122) + 152LL) |= 2u;
      v36 = v61[0];
    }
    v41 = *((_QWORD *)v36 + 122);
    if ( ((*((_BYTE *)v36 + 316) | *(_BYTE *)(v41 + 152)) & 2) != 0 )
    {
      *(_DWORD *)(v41 + 152) &= ~2u;
      *((_DWORD *)v61[0] + 79) &= ~2u;
      EBRUSHOBJ::vInitBrush(v40, v61[0], *((_QWORD *)v61[0] + 18), v39, v38, v37, 0);
      v36 = v61[0];
    }
    v42 = ((((*(_BYTE *)(*((_QWORD *)v36 + 122) + 212LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*((_QWORD *)v36 + 122)
                                                                                              + 212LL)
                                                                                   - 1) & 0xF)
                                                                                 + 1);
    v43 = XDCOBJ::prgnEffRao((XDCOBJ *)v61);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v79, v43, (struct ERECTL *)&v77, v48);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v80) )
    {
LABEL_87:
      v47 = 1;
    }
    else
    {
      if ( (*((_DWORD *)v61[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v40 + 30) & 0x100) == 0 )
      {
        v60 = v80[0];
        XDCOBJ::vAccumulateTight((XDCOBJ *)v61, v44, (struct ERECTL *)&v60);
      }
      ++*(_DWORD *)(v37 + 92);
      if ( (*(_DWORD *)(v37 + 112) & 0x20) != 0 )
        v45 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _BYTE *, _QWORD, char *, _QWORD, char *, int))(*(_QWORD *)(v37 + 48) + 2792LL))(
                v37 + 24,
                v62,
                v79,
                0LL,
                v40,
                0LL,
                v52,
                v42);
      else
        v45 = ((__int64 (__fastcall *)(__int64, _DWORD *, _BYTE *, _QWORD, char *, _QWORD, char *, int))EngStrokePath)(
                v37 + 24,
                v62,
                v79,
                0LL,
                v40,
                0LL,
                v52,
                v42);
      v47 = v45;
    }
LABEL_57:
    if ( v22 != (struct PATHRECORD *)v78 )
      FreeTmpBuffer(v22);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v70);
    PATH::~PATH((PATH *)v71);
    goto LABEL_60;
  }
  if ( v22 != (struct PATHRECORD *)v78 )
    FreeTmpBuffer(v22);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v70);
LABEL_84:
  PATH::~PATH((PATH *)v71);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v61);
  return 0LL;
}
