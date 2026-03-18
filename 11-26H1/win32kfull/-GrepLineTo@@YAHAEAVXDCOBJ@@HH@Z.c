/*
 * XREFs of ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x14006E5A0
 * Callers:
 *     NtGdiLineTo @ 0x14006DF40 (NtGdiLineTo.c)
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x14006DB98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepLineTo(struct XDCOBJ *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // r12d
  unsigned int v6; // r14d
  unsigned int v7; // esi
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdx
  LINEATTRS *v11; // r15
  int v12; // edi
  int v13; // edi
  Gre::Base *v14; // rcx
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r13
  int v19; // ecx
  int v20; // r8d
  char v21; // r8
  __int64 v22; // r12
  int v23; // r12d
  int v24; // r14d
  unsigned int v25; // r15d
  unsigned int v26; // r11d
  int v27; // eax
  __int64 v29; // rdx
  __int64 *v30; // r9
  __int64 v31; // r9
  int v32; // r8d
  int v33; // r9d
  int *v34; // r14
  __int64 v35; // rdx
  unsigned int v36; // ecx
  _DWORD *v37; // r8
  __int64 v38; // rax
  Gre::Base *v39; // rcx
  int v40; // r12d
  int v41; // r15d
  int v42; // r11d
  int v43; // r14d
  int v44; // r10d
  int v45; // edx
  int v46; // r9d
  int v47; // r15d
  _DWORD *v48; // rcx
  int v49; // eax
  int v50; // r10d
  int v51; // edx
  int v52; // eax
  int v53; // r11d
  int v54; // r9d
  struct Gre::Base::SESSION_GLOBALS *v55; // rax
  _DWORD *v56; // rcx
  int v57; // eax
  _DWORD *v58; // r15
  __int64 v59; // r8
  struct ECLIPOBJ *v60; // rdx
  __int64 v61; // rcx
  int v62; // edx
  struct REGION *v63; // rax
  XCLIPOBJ *v64; // r11
  __int64 v65; // rcx
  int v66; // edx
  __int64 v67; // rcx
  unsigned __int64 v68; // [rsp+50h] [rbp-B0h] BYREF
  int v69; // [rsp+58h] [rbp-A8h]
  int v70; // [rsp+5Ch] [rbp-A4h]
  unsigned int v71; // [rsp+60h] [rbp-A0h]
  unsigned int v72; // [rsp+64h] [rbp-9Ch]
  unsigned int v73; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v74; // [rsp+6Ch] [rbp-94h]
  BOOL (__stdcall *v75)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // [rsp+70h] [rbp-90h] BYREF
  int v76; // [rsp+78h] [rbp-88h]
  int v77; // [rsp+7Ch] [rbp-84h]
  int v78; // [rsp+80h] [rbp-80h]
  int v79; // [rsp+84h] [rbp-7Ch]
  int v80; // [rsp+88h] [rbp-78h]
  struct _RECTFX v81; // [rsp+90h] [rbp-70h] BYREF
  LINEATTRS *v82; // [rsp+A0h] [rbp-60h]
  __int128 v83; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v84; // [rsp+C0h] [rbp-40h]
  __int16 v85; // [rsp+C8h] [rbp-38h]
  __int128 v86; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v87; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v88; // [rsp+F0h] [rbp-10h]
  int v89; // [rsp+F8h] [rbp-8h]
  __int64 v90; // [rsp+100h] [rbp+0h] BYREF
  int v91; // [rsp+108h] [rbp+8h]
  struct Gre::Base::SESSION_GLOBALS *v92; // [rsp+110h] [rbp+10h]
  __int64 v93; // [rsp+118h] [rbp+18h]
  __int128 v94; // [rsp+120h] [rbp+20h] BYREF
  __int128 v95; // [rsp+130h] [rbp+30h] BYREF
  __int128 v96; // [rsp+140h] [rbp+40h] BYREF
  __int128 v97; // [rsp+150h] [rbp+50h]
  __int16 v98; // [rsp+160h] [rbp+60h]
  __int64 v99; // [rsp+168h] [rbp+68h]
  _QWORD v100[70]; // [rsp+170h] [rbp+70h] BYREF

  v72 = a3;
  v4 = *(_QWORD *)a1;
  v5 = a3;
  v6 = a2;
  v71 = a2;
  v7 = 1;
  if ( (*(_DWORD *)(v4 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0;
  }
  v8 = *(_DWORD *)(*(_QWORD *)(v4 + 976) + 208LL);
  DC::QuickInitXform(v4, &v75, 516LL);
  v9 = *(_QWORD *)a1;
  LOBYTE(v81.xRight) = v8 != 2;
  *(_QWORD *)&v81.xLeft = v75;
  v10 = *(_QWORD *)(v9 + 976);
  v11 = (LINEATTRS *)(v9 + 208);
  v82 = (LINEATTRS *)(v9 + 208);
  v12 = *(_DWORD *)(v10 + 152);
  if ( (v12 & 0x1000) != 0 )
    GreDCSelectBrush(v9, *(_QWORD *)(v10 + 160));
  if ( (v12 & 0x2000) != 0 )
    GreDCSelectPen(*(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 168LL));
  v13 = 0;
  if ( (v11->fl & 0xB) != 0 )
    goto LABEL_27;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) != 0 )
    goto LABEL_27;
  v14 = (Gre::Base *)*(unsigned int *)(*(_QWORD *)&v81.xLeft + 32LL);
  if ( ((unsigned __int8)v14 & 2) == 0 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 208LL) == 2 )
    goto LABEL_27;
  v15 = Gre::Base::Globals(v14);
  v93 = 0LL;
  v92 = v15;
  v90 = 0LL;
  v91 = 0;
  v94 = 0LL;
  v95 = 0LL;
  PushThreadGuardedObject(
    &v94,
    &v90,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  v96 = 0LL;
  v97 = 0LL;
  PushThreadGuardedObject(&v96, &v90, UnexpectedThreadTerminationHandler<DLODCOBJ>::OnUnexpectedThreadTerminationStatic);
  v98 = 256;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0;
  v90 = 0LL;
  v100[1] = 0LL;
  v100[0] = 0LL;
  v99 = 0LL;
  v16 = DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v87, a1, 0);
  v17 = *(_QWORD *)a1;
  if ( !v16 )
  {
    if ( !*(_QWORD *)(v17 + 496) || (v27 = *(_DWORD *)(v17 + 36), (v27 & 0x1000) != 0) && (v27 & 0x4000) == 0 )
      v13 = 1;
    v7 = v13;
LABEL_24:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v87);
    return v7;
  }
  v18 = *(_QWORD *)(v17 + 496);
  if ( !v18 )
    goto LABEL_26;
  v19 = *(_DWORD *)(v18 + 112);
  if ( (v19 & 0x100) == 0 )
  {
    if ( !*(_WORD *)(v18 + 100) && (v19 & 0x20) == 0 )
    {
      v75 = EngLineTo;
      goto LABEL_16;
    }
LABEL_26:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v87);
LABEL_27:
    v73 = v6;
    v74 = v5;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v87, (DC **)a1, 1);
    if ( *((_QWORD *)&v87 + 1) )
    {
      *((_QWORD *)&v83 + 1) = 1LL;
      *(_QWORD *)&v83 = &v73;
      v84 = 0LL;
      v85 = 0;
      if ( (unsigned __int8)EPATHOBJ::bPolyLineTo(&v87, &v81, &v83, 1LL) )
      {
        v29 = *(_QWORD *)a1;
        if ( (*(_DWORD *)(*((_QWORD *)&v87 + 1) + 72LL) & 1) != 0 )
          v30 = (__int64 *)(*((_QWORD *)&v87 + 1) + 64LL);
        else
          v30 = (__int64 *)(*(_QWORD *)(*((_QWORD *)&v87 + 1) + 40LL)
                          + 8
                          * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)&v87 + 1) + 40LL) + 20LL) - 1) + 3LL));
        v31 = *v30;
        *(_DWORD *)(*(_QWORD *)(v29 + 976) + 152LL) &= 0xFFFFFCFF;
        *(_DWORD *)(*(_QWORD *)(v29 + 976) + 216LL) = v73;
        *(_DWORD *)(*(_QWORD *)(v29 + 976) + 220LL) = v74;
        *(_QWORD *)(*(_QWORD *)(v29 + 976) + 8LL) = v31;
        if ( (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) == 0
          && !(unsigned int)EPATHOBJ_bStrokeAndOrFill((struct EPATHOBJ *)&v87, a1, v11, &v81, 1u) )
        {
          v7 = 0;
        }
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)&v87);
    PATH_CORE::~PATH_CORE((PATH_CORE *)v100);
    if ( (_DWORD)v97 )
      PopThreadGuardedObject(&v95);
    return v7;
  }
  v75 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(v17 + 48) + 2928LL);
  if ( !v75 )
    goto LABEL_26;
LABEL_16:
  v20 = *(_DWORD *)(*(_QWORD *)&v81.xLeft + 32LL);
  if ( (v20 & 2) != 0 )
  {
    v32 = *(int *)(*(_QWORD *)&v81.xLeft + 24LL) >> 4;
    v33 = *(int *)(*(_QWORD *)&v81.xLeft + 28LL) >> 4;
    v25 = v6 + v32;
    v34 = *(int **)(v17 + 976);
    v26 = v5 + v33;
    if ( (v34[38] & 0x100) != 0 )
    {
      v23 = v34[2] >> 4;
      v24 = v34[3] >> 4;
    }
    else
    {
      v23 = v32 + v34[54];
      v24 = v33 + v34[55];
    }
  }
  else
  {
    v68 = __PAIR64__(v5, v6);
    v21 = v20 & 0x43;
    v22 = *(_QWORD *)(v17 + 976);
    if ( (*(_DWORD *)(v22 + 152) & 0x200) != 0 )
    {
      v23 = *(_DWORD *)(v22 + 216);
      v69 = v23;
      v24 = *(_DWORD *)(*(_QWORD *)(v17 + 976) + 220LL);
      v70 = v24;
      if ( v21 != 67 )
      {
        bCvtPts1(*(_QWORD *)&v81.xLeft, &v68);
        v24 = v70;
        v23 = v69;
      }
    }
    else
    {
      if ( v21 != 67 )
        bCvtPts1(*(_QWORD *)&v81.xLeft, &v68);
      v67 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
      v23 = *(int *)(v67 + 8) >> 4;
      v24 = *(int *)(v67 + 12) >> 4;
    }
    v25 = v68;
    v26 = HIDWORD(v68);
  }
  LODWORD(v68) = v24;
  v80 = v23;
  v79 = v24;
  v78 = v23;
  if ( v25 + 134217726 > 0xFFFFFFC || v26 + 134217726 > 0xFFFFFFC )
  {
    EngSetLastError(0x57u);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v87);
    return 0LL;
  }
  else
  {
    v35 = *(_QWORD *)a1;
    v36 = v71;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= 0xFFFFFCFF;
    *(_DWORD *)(*(_QWORD *)(v35 + 976) + 216LL) = v36;
    *(_DWORD *)(*(_QWORD *)(v35 + 976) + 220LL) = v72;
    *(_DWORD *)(*(_QWORD *)(v35 + 976) + 8LL) = 16 * v25;
    *(_DWORD *)(*(_QWORD *)(v35 + 976) + 12LL) = 16 * v26;
    v37 = *(_DWORD **)a1;
    v38 = *(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1;
    v39 = (Gre::Base *)*(unsigned int *)(*(_QWORD *)a1 + 8 * v38 + 1016);
    v40 = (_DWORD)v39 + v23;
    LODWORD(v35) = *(_DWORD *)(*(_QWORD *)a1 + 8 * v38 + 1020);
    v41 = (_DWORD)v39 + v25;
    v42 = v35 + v26;
    v77 = v41;
    v43 = v35 + v24;
    v76 = v42;
    if ( (unsigned int)(v40 + 134217726) <= 0xFFFFFFC
      && (unsigned int)(v43 + 134217726) <= 0xFFFFFFC
      && (unsigned int)(v41 + 134217726) <= 0xFFFFFFC
      && (unsigned int)(v42 + 134217726) <= 0xFFFFFFC )
    {
      if ( v40 > v41 )
      {
        v44 = v41;
        LODWORD(v86) = v41;
        v45 = v40 + 1;
      }
      else
      {
        v44 = v40;
        LODWORD(v86) = v40;
        v45 = v41 + 1;
      }
      DWORD2(v86) = v45;
      if ( v43 > v42 )
      {
        DWORD1(v86) = v42;
        v46 = v43 + 1;
      }
      else
      {
        v46 = v42 + 1;
        DWORD1(v86) = v43;
        v42 = v43;
      }
      HIDWORD(v86) = v46;
      v47 = v37[9];
      if ( (v47 & 0xE0) != 0 )
      {
        v48 = &v37[2 * (v37[10] & 1)];
        v49 = v48[254];
        v50 = v44 - v49;
        v51 = v45 - v49;
        v52 = v48[255];
        v53 = v42 - v52;
        v54 = v46 - v52;
        if ( (v47 & 0x20) != 0 )
        {
          if ( v50 < v37[266] )
            v37[266] = v50;
          if ( v53 < v37[267] )
            v37[267] = v53;
          if ( v51 > v37[268] )
            v37[268] = v51;
          if ( v54 > v37[269] )
            v37[269] = v54;
        }
        v39 = *(Gre::Base **)a1;
        if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x80u) != 0 )
        {
          if ( v50 < *((_DWORD *)v39 + 274) )
            *((_DWORD *)v39 + 274) = v50;
          if ( v53 < *((_DWORD *)v39 + 275) )
            *((_DWORD *)v39 + 275) = v53;
          if ( v51 > *((_DWORD *)v39 + 276) )
            *((_DWORD *)v39 + 276) = v51;
          if ( v54 > *((_DWORD *)v39 + 277) )
            *((_DWORD *)v39 + 277) = v54;
        }
      }
      v55 = Gre::Base::Globals(v39);
      v56 = *(_DWORD **)a1;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 144LL) != *((_QWORD *)v55 + 22) )
      {
        if ( (v57 = v56[250], v68 = 0LL, (int)v86 >= v57)
          && SDWORD2(v86) <= v56[252]
          && SDWORD1(v86) >= v56[251]
          && SHIDWORD(v86) <= v56[253]
          || (v68 = (unsigned __int64)(v56 + 442),
              v63 = XDCOBJ::prgnEffRao((DC **)a1),
              XCLIPOBJ::vSetup(v64, v63, (const struct ERECTL *)&v86, 0),
              *(_DWORD *)(v68 + 4) != *(_DWORD *)(v68 + 12))
          && *(_DWORD *)(v68 + 8) != *(_DWORD *)(v68 + 16) )
        {
          v58 = (_DWORD *)(*(_QWORD *)a1 + 1336LL);
          if ( *v58 == -1 )
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 2u;
          v59 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
          v60 = (struct ECLIPOBJ *)*(unsigned int *)(v59 + 152);
          if ( ((*(_BYTE *)(*(_QWORD *)a1 + 316LL) | *(_BYTE *)(v59 + 152)) & 2) != 0 )
          {
            *(_DWORD *)(v59 + 152) = (unsigned int)v60 & 0xFFFFFFFD;
            *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= ~2u;
            EBRUSHOBJ::vInitBrush(
              v58,
              *(_QWORD *)a1,
              *(_QWORD *)(*(_QWORD *)a1 + 144LL),
              *(_QWORD *)(*(_QWORD *)a1 + 88LL),
              *(_QWORD *)(v18 + 128),
              v18,
              0);
          }
          if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 && (v58[30] & 0x100) == 0 )
          {
            v83 = v86;
            XDCOBJ::vAccumulateTight(a1, v60, (struct ERECTL *)&v83);
          }
          ++*(_DWORD *)(v18 + 92);
          if ( !((unsigned int (__fastcall *)(__int64, unsigned __int64, _DWORD *, _QWORD, int, int, int, __int128 *, int))v75)(
                  v18 + 24,
                  v68,
                  v58,
                  (unsigned int)v40,
                  v43,
                  v77,
                  v76,
                  &v86,
                  (((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 212LL) - 1) & 0xF) + 1) | ((((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 212LL)
                                                                                                 - 1) & 0xF)
                                                                                               + 1) << 8)) )
          {
            v61 = *(_QWORD *)a1;
            v62 = 16 * v78;
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x200u;
            *(_DWORD *)(*(_QWORD *)(v61 + 976) + 152LL) |= 0x100u;
            *(_DWORD *)(*(_QWORD *)(v61 + 976) + 8LL) = v62;
            *(_DWORD *)(*(_QWORD *)(v61 + 976) + 12LL) = 16 * v79;
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v87);
            v6 = v71;
            v5 = v72;
            v11 = v82;
            goto LABEL_27;
          }
        }
      }
      goto LABEL_24;
    }
    EngSetLastError(0x57u);
    v65 = *(_QWORD *)a1;
    v66 = 16 * v80;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x200u;
    *(_DWORD *)(*(_QWORD *)(v65 + 976) + 152LL) |= 0x100u;
    *(_DWORD *)(*(_QWORD *)(v65 + 976) + 8LL) = v66;
    *(_DWORD *)(*(_QWORD *)(v65 + 976) + 12LL) = 16 * v68;
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v87);
    return 0LL;
  }
}
