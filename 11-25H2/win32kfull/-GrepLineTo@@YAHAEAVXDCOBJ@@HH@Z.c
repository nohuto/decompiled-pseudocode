/*
 * XREFs of ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x1400790D8
 * Callers:
 *     NtGdiLineTo @ 0x140083430 (NtGdiLineTo.c)
 * Callees:
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140079978 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x140079C98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007A090 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x140087BA4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400A1960 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400A2118 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepLineTo(struct XDCOBJ *this, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // r15d
  unsigned int v6; // r14d
  unsigned int v7; // esi
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  LINEATTRS *v11; // r13
  int v12; // ebx
  unsigned int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 *v19; // rax
  __int64 v20; // rax
  int v21; // ecx
  BOOL (__stdcall *v22)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // r12
  int v23; // edx
  int v24; // edx
  int v25; // r10d
  unsigned int v26; // r13d
  __int64 v27; // r14
  unsigned int v28; // r9d
  int v29; // r15d
  int v30; // r14d
  __int64 v31; // rdx
  unsigned int v32; // ecx
  struct ECLIPOBJ *v33; // rdx
  int v34; // eax
  unsigned int v35; // r15d
  Gre::Base *v36; // rcx
  int v37; // r13d
  int v38; // r9d
  int v39; // r14d
  unsigned int v40; // eax
  int v41; // eax
  struct Gre::Base::SESSION_GLOBALS *v42; // rax
  _DWORD *v43; // rcx
  int v44; // eax
  __int64 v45; // rax
  _DWORD *v46; // r10
  bool v47; // zf
  __int64 v48; // r8
  struct ECLIPOBJ *v49; // rdx
  __int64 v50; // rdx
  _DWORD *v51; // r8
  char v53; // dl
  _DWORD *v54; // r14
  __int64 v55; // rcx
  struct REGION *v56; // rax
  XCLIPOBJ *v57; // r10
  __int64 v58; // rcx
  int v59; // r15d
  int v60; // r14d
  __int64 v61; // rcx
  int v62; // edx
  __int128 v63; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v64; // [rsp+60h] [rbp-A0h]
  unsigned int v65; // [rsp+64h] [rbp-9Ch]
  _DWORD *v66; // [rsp+68h] [rbp-98h]
  unsigned int v67; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v68; // [rsp+74h] [rbp-8Ch]
  __int64 v69; // [rsp+78h] [rbp-88h] BYREF
  int v70; // [rsp+80h] [rbp-80h]
  int v71; // [rsp+84h] [rbp-7Ch]
  int v72; // [rsp+88h] [rbp-78h]
  struct _RECTFX v73; // [rsp+90h] [rbp-70h] BYREF
  LINEATTRS *v74; // [rsp+A0h] [rbp-60h]
  __int128 v75; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v76; // [rsp+C0h] [rbp-40h]
  __int16 v77; // [rsp+C8h] [rbp-38h]
  __int128 v78; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v79; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v80; // [rsp+F0h] [rbp-10h]
  int v81; // [rsp+F8h] [rbp-8h]
  __int64 v82[6]; // [rsp+100h] [rbp+0h] BYREF
  char v83[32]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v84; // [rsp+150h] [rbp+50h]
  __int64 v85; // [rsp+158h] [rbp+58h]
  __int64 v86; // [rsp+160h] [rbp+60h]
  char v87[560]; // [rsp+170h] [rbp+70h] BYREF

  v65 = a3;
  v4 = *(_QWORD *)this;
  v5 = a3;
  v6 = a2;
  v64 = a2;
  v7 = 1;
  if ( (*(_DWORD *)(v4 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0;
  }
  v8 = *(_DWORD *)(*(_QWORD *)(v4 + 976) + 208LL);
  DC::QuickInitXform(v4, &v69, 516LL);
  v9 = *(_QWORD *)this;
  LOBYTE(v73.xRight) = v8 != 2;
  *(_QWORD *)&v73.xLeft = v69;
  v10 = *(_QWORD *)(v9 + 976);
  v11 = (LINEATTRS *)(v9 + 208);
  v74 = (LINEATTRS *)(v9 + 208);
  v12 = *(_DWORD *)(v10 + 152);
  if ( (v12 & 0x1000) != 0 )
    GreDCSelectBrush(v9, *(_QWORD *)(v10 + 160));
  if ( (v12 & 0x2000) != 0 )
    GreDCSelectPen(*(_QWORD *)this, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 168LL));
  v13 = 0;
  if ( (v11->fl & 0xB) != 0
    || (*(_DWORD *)(*(_QWORD *)this + 248LL) & 1) != 0
    || (*(_DWORD *)(*(_QWORD *)&v73.xLeft + 32LL) & 2) == 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 208LL) == 2 )
  {
LABEL_13:
    v67 = v6;
    v68 = v5;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v79, this, 1);
    if ( *((_QWORD *)&v79 + 1) )
    {
      *((_QWORD *)&v75 + 1) = 1LL;
      v77 = 0;
      *(_QWORD *)&v75 = &v67;
      v76 = 0LL;
      if ( (unsigned __int8)EPATHOBJ::bPolyLineTo(&v79, &v73, &v75, 1LL) )
      {
        v18 = *(_QWORD *)this;
        if ( (*(_DWORD *)(*((_QWORD *)&v79 + 1) + 72LL) & 1) != 0 )
          v19 = (__int64 *)(*((_QWORD *)&v79 + 1) + 64LL);
        else
          v19 = (__int64 *)(*(_QWORD *)(*((_QWORD *)&v79 + 1) + 40LL)
                          + 8
                          * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)&v79 + 1) + 40LL) + 20LL) - 1) + 3LL));
        v20 = *v19;
        *(_DWORD *)(*(_QWORD *)(v18 + 976) + 152LL) &= 0xFFFFFCFF;
        *(_DWORD *)(*(_QWORD *)(v18 + 976) + 216LL) = v67;
        *(_DWORD *)(*(_QWORD *)(v18 + 976) + 220LL) = v68;
        *(_QWORD *)(*(_QWORD *)(v18 + 976) + 8LL) = v20;
        if ( (*(_DWORD *)(*(_QWORD *)this + 248LL) & 1) == 0
          && !(unsigned int)EPATHOBJ_bStrokeAndOrFill((struct EPATHOBJ *)&v79, this, v11, &v73, 1u) )
        {
          v7 = 0;
        }
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)&v79);
    PATH_CORE::~PATH_CORE((PATH_CORE *)v87);
    CAutoTGO::vUnguard((CAutoTGO *)v83);
    return v7;
  }
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v82);
  v80 = 0LL;
  v79 = 0LL;
  v81 = 0;
  v82[0] = 0LL;
  v86 = 0LL;
  v85 = 0LL;
  v84 = 0LL;
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v79, this, 0) )
  {
    v7 = XDCOBJ::bFullScreen(this);
    goto LABEL_51;
  }
  v15 = *(_QWORD *)this;
  v16 = *(_QWORD *)(*(_QWORD *)this + 496LL);
  v17 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  v69 = v16;
  if ( !v16 )
  {
LABEL_12:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v79);
    goto LABEL_13;
  }
  v21 = *(_DWORD *)(v16 + 112);
  if ( (v21 & 0x100) != 0 )
  {
    v22 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(v17 + 2928);
    if ( !v22 )
      goto LABEL_12;
  }
  else
  {
    if ( *(_WORD *)(v16 + 100) || (v21 & 0x20) != 0 )
      goto LABEL_12;
    v22 = EngLineTo;
  }
  v23 = *(_DWORD *)(*(_QWORD *)&v73.xLeft + 32LL);
  if ( (v23 & 2) != 0 )
  {
    v24 = *(int *)(*(_QWORD *)&v73.xLeft + 24LL) >> 4;
    v25 = *(int *)(*(_QWORD *)&v73.xLeft + 28LL) >> 4;
    v26 = v6 + v24;
    v27 = *(_QWORD *)(v15 + 976);
    v28 = v5 + v25;
    if ( _bittest((const signed __int32 *)(v27 + 152), 8u) )
    {
      v29 = *(int *)(v27 + 8) >> 4;
      v30 = *(int *)(v27 + 12) >> 4;
    }
    else
    {
      v29 = v24 + *(_DWORD *)(v27 + 216);
      v30 = v25 + *(_DWORD *)(v27 + 220);
    }
  }
  else
  {
    *(_QWORD *)&v63 = __PAIR64__(v5, v6);
    v53 = v23 & 0x43;
    v54 = *(_DWORD **)(v15 + 976);
    if ( (v54[38] & 0x200) != 0 )
    {
      v29 = v54[54];
      v30 = v54[55];
      *((_QWORD *)&v63 + 1) = __PAIR64__(v30, v29);
      if ( v53 != 67 )
      {
        bCvtPts1(*(_QWORD *)&v73.xLeft, &v63, 2LL, v14);
        v30 = HIDWORD(v63);
        v29 = DWORD2(v63);
      }
    }
    else
    {
      if ( v53 != 67 )
        bCvtPts1(*(_QWORD *)&v73.xLeft, &v63, 1LL, v14);
      v55 = *(_QWORD *)(*(_QWORD *)this + 976LL);
      v29 = *(int *)(v55 + 8) >> 4;
      v30 = *(int *)(v55 + 12) >> 4;
    }
    v26 = v63;
    v28 = DWORD1(v63);
  }
  LODWORD(v63) = v30;
  LODWORD(v66) = v29;
  if ( v26 + 134217726 <= 0xFFFFFFC && v28 + 134217726 <= 0xFFFFFFC )
  {
    v31 = *(_QWORD *)this;
    v32 = v64;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) &= 0xFFFFFCFF;
    *(_DWORD *)(*(_QWORD *)(v31 + 976) + 216LL) = v32;
    *(_DWORD *)(*(_QWORD *)(v31 + 976) + 220LL) = v65;
    *(_DWORD *)(*(_QWORD *)(v31 + 976) + 8LL) = 16 * v26;
    *(_DWORD *)(*(_QWORD *)(v31 + 976) + 12LL) = 16 * v28;
    v33 = *(struct ECLIPOBJ **)this;
    v34 = *(_DWORD *)(*(_QWORD *)this + 8LL * (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) + 1016);
    v35 = v34 + v29;
    v36 = (Gre::Base *)*(unsigned int *)(*(_QWORD *)this + 8LL * (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) + 1020);
    v37 = v34 + v26;
    v38 = (_DWORD)v36 + v28;
    v71 = v34;
    v39 = (_DWORD)v36 + v30;
    v72 = (int)v36;
    v70 = v38;
    if ( v35 + 134217726 > 0xFFFFFFC
      || (unsigned int)(v39 + 134217726) > 0xFFFFFFC
      || (unsigned int)(v37 + 134217726) > 0xFFFFFFC
      || (unsigned int)(v38 + 134217726) > 0xFFFFFFC )
    {
      EngSetLastError(0x57u);
      v61 = *(_QWORD *)this;
      v62 = 16 * (_DWORD)v66;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) &= ~0x200u;
      *(_DWORD *)(*(_QWORD *)(v61 + 976) + 152LL) |= 0x100u;
      *(_DWORD *)(*(_QWORD *)(v61 + 976) + 8LL) = v62;
      *(_DWORD *)(*(_QWORD *)(v61 + 976) + 12LL) = 16 * v63;
      goto LABEL_52;
    }
    if ( (int)v35 > v37 )
    {
      LODWORD(v78) = v37;
      v40 = v35 + 1;
    }
    else
    {
      LODWORD(v78) = v35;
      v40 = v37 + 1;
    }
    DWORD2(v78) = v40;
    if ( v39 > v38 )
    {
      DWORD1(v78) = v38;
      v41 = v39 + 1;
    }
    else
    {
      DWORD1(v78) = v39;
      v41 = v38 + 1;
    }
    HIDWORD(v78) = v41;
    if ( (*((_DWORD *)v33 + 9) & 0xE0) != 0 )
    {
      v63 = v78;
      XDCOBJ::vAccumulate(this, v33, (struct ERECTL *)&v63);
    }
    v42 = Gre::Base::Globals(v36);
    v43 = *(_DWORD **)this;
    if ( *(_QWORD *)(*(_QWORD *)this + 144LL) != *((_QWORD *)v42 + 11) )
    {
      if ( (v44 = v43[250], *(_QWORD *)&v63 = 0LL, (int)v78 >= v44)
        && SDWORD2(v78) <= v43[252]
        && SDWORD1(v78) >= v43[251]
        && SHIDWORD(v78) <= v43[253]
        || (*(_QWORD *)&v63 = v43 + 442,
            v56 = XDCOBJ::prgnEffRao(this),
            XCLIPOBJ::vSetup(v57, v56, (const struct ERECTL *)&v78, 0),
            !(unsigned int)ERECTL::bEmpty((ERECTL *)(v63 + 4))) )
      {
        v45 = *(_QWORD *)this;
        v46 = (_DWORD *)(*(_QWORD *)this + 1336LL);
        v47 = *v46 == -1;
        v66 = v46;
        if ( v47 )
          *(_DWORD *)(*(_QWORD *)(v45 + 976) + 152LL) |= 2u;
        v48 = *(_QWORD *)(*(_QWORD *)this + 976LL);
        v49 = (struct ECLIPOBJ *)*(unsigned int *)(v48 + 152);
        if ( ((*(_BYTE *)(*(_QWORD *)this + 316LL) | *(_BYTE *)(v48 + 152)) & 2) != 0 )
        {
          *(_DWORD *)(v48 + 152) = (unsigned int)v49 & 0xFFFFFFFD;
          *(_DWORD *)(*(_QWORD *)this + 316LL) &= ~2u;
          EBRUSHOBJ::vInitBrush(
            v46,
            *(_QWORD *)this,
            *(_QWORD *)(*(_QWORD *)this + 144LL),
            *(_QWORD *)(*(_QWORD *)this + 88LL),
            *(_QWORD *)(v69 + 128),
            v69,
            0);
          v46 = v66;
        }
        if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0xE0) != 0 && (v46[30] & 0x100) == 0 )
        {
          v75 = v78;
          XDCOBJ::vAccumulateTight(this, v49, (struct ERECTL *)&v75);
        }
        v50 = v69;
        v51 = v66;
        ++*(_DWORD *)(v69 + 92);
        if ( !((unsigned int (__fastcall *)(__int64, _QWORD, _DWORD *, _QWORD, int, int, int, __int128 *, int))v22)(
                v50 + 24,
                v63,
                v51,
                v35,
                v39,
                v37,
                v70,
                &v78,
                ((((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 212LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 212LL) - 1) & 0xF) + 1)) )
        {
          v58 = *(_QWORD *)this;
          v59 = 16 * (v35 - v71);
          v60 = 16 * (v39 - v72);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) &= ~0x200u;
          *(_DWORD *)(*(_QWORD *)(v58 + 976) + 152LL) |= 0x100u;
          *(_DWORD *)(*(_QWORD *)(v58 + 976) + 8LL) = v59;
          *(_DWORD *)(*(_QWORD *)(v58 + 976) + 12LL) = v60;
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v79);
          v6 = v64;
          v5 = v65;
          v11 = v74;
          goto LABEL_13;
        }
      }
    }
LABEL_51:
    v13 = v7;
LABEL_52:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v79);
    return v13;
  }
  EngSetLastError(0x57u);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v79);
  return 0LL;
}
