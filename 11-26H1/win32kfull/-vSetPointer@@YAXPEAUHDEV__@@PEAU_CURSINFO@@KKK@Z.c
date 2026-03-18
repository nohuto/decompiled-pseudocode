/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x14009FFA4
 * Callers:
 *     GreSetPointer @ 0x14001AE9C (GreSetPointer.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?CursorTypeUsage@GreCursor@InputTraceLogging@@SAXW4_TRACING_CURSOR_USAGE_TYPE@@@Z @ 0x1400A0AB8 (-CursorTypeUsage@GreCursor@InputTraceLogging@@SAXW4_TRACING_CURSOR_USAGE_TYPE@@@Z.c)
 *     EngSetPointerShape @ 0x1400A0BB0 (EngSetPointerShape.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1400A0D50 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vSetPointer(__int64 *a1, struct _CURSINFO *a2, char a3, unsigned int a4, unsigned int a5)
{
  struct Gre::Base::SESSION_GLOBALS *v8; // r15
  int v9; // r13d
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // r14d
  Gre::Base *v15; // rbx
  Gre::Base *v16; // r15
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r15
  struct Gre::Base::SESSION_GLOBALS *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  Gre::Base *v23; // rcx
  struct PALETTE *v24; // rdx
  int inited; // eax
  int v26; // edx
  int v27; // r12d
  int v28; // r15d
  int v29; // ebx
  __int64 v30; // rax
  unsigned int v31; // r13d
  struct Gre::Base::SESSION_GLOBALS *v32; // rax
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // r11
  LONG v36; // ebx
  LONG v37; // r10d
  LONG v38; // r9d
  LONG v39; // r8d
  LONG v40; // edx
  LONG v41; // eax
  unsigned __int64 v42; // rcx
  int v43; // r9d
  bool v44; // zf
  int v45; // ebx
  int v46; // ecx
  unsigned int v47; // edx
  int v48; // r15d
  int v49; // eax
  __int64 (__fastcall *v50)(SURFOBJ *, __int64, __int64, Gre::Base *, int, int, LONG, LONG, RECTL *, unsigned int); // r10
  int v51; // edx
  int v52; // ecx
  unsigned int v53; // eax
  char v54; // cl
  BOOL v55; // eax
  SURFOBJ *v56; // rsi
  signed __int32 v57; // eax
  signed __int32 v58; // edx
  signed __int32 v59; // eax
  signed __int32 v60; // edx
  signed __int32 v61; // eax
  signed __int32 v62; // edx
  signed __int32 v63; // eax
  signed __int32 v64; // edx
  struct Gre::Base::SESSION_GLOBALS *v65; // rax
  Gre::Base *v66; // rcx
  struct Gre::Base::SESSION_GLOBALS *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r8
  Gre::Base *v70; // rcx
  struct Gre::Base::SESSION_GLOBALS *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // r8
  int v74; // eax
  struct _SURFOBJ *v75; // r8
  int v76; // eax
  unsigned int v77; // eax
  int v78; // eax
  int v79; // r9d
  __int64 v80; // r8
  int v81; // eax
  void (__fastcall *v82)(__int64, __int64, __int64, _QWORD); // rax
  signed __int32 v83; // ett
  signed __int32 v84; // ett
  signed __int32 v85; // ett
  void (__fastcall *v86)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  int v87; // eax
  unsigned __int8 v88; // al
  int v89; // ecx
  char v90; // al
  int v91; // ecx
  int v92; // ecx
  int v93; // r15d
  SURFOBJ *v94; // r8
  XLATEOBJ *v95; // r9
  SURFOBJ *v96; // rdx
  HDEV v97; // rax
  void (__fastcall *v98)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  LONG xHot; // [rsp+20h] [rbp-E0h]
  LONG yHot; // [rsp+28h] [rbp-D8h]
  LONG x; // [rsp+30h] [rbp-D0h]
  LONG y; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  int fl; // [rsp+48h] [rbp-B8h]
  LONG v105; // [rsp+60h] [rbp-A0h]
  LONG v106; // [rsp+60h] [rbp-A0h]
  LONG v107; // [rsp+64h] [rbp-9Ch]
  LONG v108; // [rsp+64h] [rbp-9Ch]
  int v109; // [rsp+68h] [rbp-98h]
  int v110; // [rsp+70h] [rbp-90h]
  int v111; // [rsp+70h] [rbp-90h]
  SURFOBJ *pso; // [rsp+80h] [rbp-80h]
  struct PALETTE *v114; // [rsp+90h] [rbp-70h] BYREF
  Gre::Base *v115; // [rsp+98h] [rbp-68h]
  RECTL v116; // [rsp+A0h] [rbp-60h] BYREF
  Gre::Base *v117[2]; // [rsp+B0h] [rbp-50h] BYREF
  RECTL v118; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v119; // [rsp+D0h] [rbp-30h]
  int v120; // [rsp+D4h] [rbp-2Ch]
  __int64 v121; // [rsp+D8h] [rbp-28h]
  __int64 v122; // [rsp+E0h] [rbp-20h]
  Gre::Base *v123; // [rsp+E8h] [rbp-18h]
  _OWORD v124[2]; // [rsp+F0h] [rbp-10h] BYREF
  Gre::Base *v125; // [rsp+110h] [rbp+10h]
  _OWORD v126[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v127; // [rsp+138h] [rbp+38h]
  _OWORD v128[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v129; // [rsp+160h] [rbp+60h]
  RECTL v130; // [rsp+170h] [rbp+70h] BYREF

  v119 = a4;
  v8 = Gre::Base::Globals((Gre::Base *)a1);
  v107 = 0;
  v9 = a3 & 0x10;
  v105 = v9;
  v120 = a3 & 0x20;
  v10 = *((_DWORD *)a1 + 10);
  if ( (v10 & 0x400) != 0 )
    return;
  if ( a2 )
  {
    v11 = *((_QWORD *)a2 + 1);
    memset(v126, 0, sizeof(v126));
    PushThreadGuardedObject(
      v126,
      v126,
      UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
    LOBYTE(v12) = 5;
    v13 = HmgShareLock(v8, v11, v12, 0LL);
    v127 = v13;
    if ( !v13 )
      goto LABEL_81;
    v14 = 1;
    if ( *(_DWORD *)(v13 + 96) != 1 || (*(_DWORD *)(v13 + 60) & 1) != 0 )
      goto LABEL_81;
    v15 = (Gre::Base *)*((_QWORD *)v8 + 484);
    v115 = 0LL;
    v122 = 0LL;
    v123 = 0LL;
    memset(v124, 0, sizeof(v124));
    v16 = 0LL;
    v117[0] = 0LL;
    PushThreadGuardedObject(
      v124,
      v124,
      UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
    v125 = 0LL;
    memset(v128, 0, sizeof(v128));
    PushThreadGuardedObject(
      v128,
      v128,
      UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
    v17 = a1[318];
    v18 = *((_QWORD *)a2 + 2);
    v129 = 0LL;
    v114 = 0LL;
    v118 = 0LL;
    pso = (SURFOBJ *)((v17 + 24) & -(__int64)(v17 != 0));
    if ( v18 || *((_QWORD *)a2 + 6) )
    {
      v19 = *((_QWORD *)a2 + 6);
      v20 = Gre::Base::Globals((Gre::Base *)(v17 + 24));
      LOBYTE(v21) = 5;
      if ( v19 )
      {
        v22 = HmgShareLock(v20, v19, v21, 0LL);
        v107 = 1;
      }
      else
      {
        v22 = HmgShareLock(v20, v18, v21, 0LL);
      }
      v125 = (Gre::Base *)v22;
      v23 = (Gre::Base *)v22;
      if ( !v22 )
        goto LABEL_97;
      if ( *(_DWORD *)(v22 + 60) != *(int *)(v127 + 60) >> 1 || *(_DWORD *)(v22 + 56) < *(_DWORD *)(v127 + 56) )
        goto LABEL_80;
      v24 = *(struct PALETTE **)(v22 + 128);
      v114 = v24;
      if ( !v24 )
      {
        v97 = (HDEV)a1[3];
        v24 = 0LL;
        if ( v97 != (HDEV)a1 )
        {
          v24 = (struct PALETTE *)*((_QWORD *)v97 + 224);
          v114 = v24;
        }
      }
      if ( !(unsigned int)bIsCompatible(&v114, v24, v23, a1) )
      {
LABEL_80:
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v128);
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v124);
        EXLATEOBJ::vAltUnlock(v117, v72, v73);
LABEL_81:
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v126);
        return;
      }
      inited = EXLATEOBJ::bInitXlateObj(
                 (Gre::Base *)v117,
                 0LL,
                 0,
                 (__int64)v114,
                 a1[224],
                 (__int64)v15,
                 v15,
                 0,
                 0xFFFFFF,
                 0,
                 0);
      v23 = v125;
      if ( inited )
      {
        v16 = v125;
        v123 = v117[0];
        v115 = v125;
      }
      else
      {
LABEL_97:
        v16 = 0LL;
      }
    }
    else
    {
      v23 = v125;
    }
    if ( *((_DWORD *)a2 + 11) )
    {
      if ( (*(_DWORD *)a2 & 0x400) != 0 )
      {
        if ( v9 )
          goto LABEL_19;
      }
      else if ( !v9 )
      {
        goto LABEL_19;
      }
    }
    v75 = (struct _SURFOBJ *)((char *)v16 + 24);
    if ( !v16 )
      v75 = 0LL;
    vProcessCursorShape(
      (HDEV)(v127 + 24),
      v9,
      v107,
      (struct _SURFOBJ *)((v127 + 24) & -(__int64)(v127 != 0)),
      v75,
      v114,
      (struct _RECTL *)a2 + 2,
      (HBITMAP *)a2 + 3);
    v76 = *(_DWORD *)a2;
    v23 = v125;
    if ( v9 )
      v77 = v76 | 0x400;
    else
      v77 = v76 & 0xFFFFFBFF;
    *(_DWORD *)a2 = v77;
LABEL_19:
    v26 = *((_DWORD *)a2 + 8);
    v27 = *((_DWORD *)a2 + 10);
    v110 = v26;
    if ( v26 <= v27 )
    {
      v28 = *((_DWORD *)a2 + 11);
      v29 = *((_DWORD *)a2 + 9);
      if ( v29 <= v28 )
      {
        v30 = *((_QWORD *)a2 + 3);
        v31 = 3;
        v116.left = *((_DWORD *)a2 + 8);
        *(_QWORD *)&v116.top = __PAIR64__(v27, v29);
        v116.bottom = v28;
        v121 = v30;
        if ( v30 && *((_DWORD *)a1 + 523) > 3u )
        {
          v32 = Gre::Base::Globals(v23);
          LOBYTE(v33) = 5;
          v34 = HmgShareLock(v32, v121, v33, 0LL);
          v23 = v125;
          v26 = v110;
          v129 = v34;
        }
        v35 = v127;
        if ( v129 )
        {
          v36 = v105;
          v37 = *((_DWORD *)a2 + 8);
          v38 = *((_DWORD *)a2 + 9);
          v39 = *((_DWORD *)a2 + 10);
          v40 = *((_DWORD *)a2 + 11);
          v122 = v129;
          if ( v105 )
          {
            ++v37;
            v39 += 8;
            ++v38;
            v40 += 6;
          }
          v41 = *(_DWORD *)(v129 + 56);
          v42 = *(unsigned int *)(v129 + 60);
          if ( v37 < 0 )
            v37 = 0;
          v118.left = v37;
          if ( v38 < 0 )
            v38 = 0;
          v118.top = v38;
          if ( v41 < v39 )
            v39 = v41;
          v118.right = v39;
          if ( (int)v42 < v40 )
            v40 = v42;
          v118.bottom = v40;
          if ( v39 < v37 )
          {
            v118.left = v39;
          }
          else if ( v40 < v38 )
          {
            v118.top = v40;
          }
        }
        else
        {
          if ( v23 )
          {
            v87 = *((_DWORD *)v23 + 14);
            v42 = *(unsigned int *)(v127 + 56);
            if ( (int)v42 >= v87 )
              v42 = (unsigned int)v87;
          }
          else
          {
            v42 = *(unsigned int *)(v127 + 56);
          }
          v74 = *(int *)(v127 + 60) >> 1;
          if ( v26 < 0 )
            v26 = 0;
          v116.left = v26;
          if ( v29 < 0 )
            v29 = 0;
          v116.top = v29;
          if ( (int)v42 < v27 )
            v27 = v42;
          v116.right = v27;
          if ( v74 < v28 )
            v28 = v74;
          v116.bottom = v28;
          if ( v27 < v26 )
          {
            v116.left = v27;
          }
          else
          {
            if ( v28 < v29 )
              v29 = v28;
            v116.top = v29;
          }
          v36 = v105;
        }
        v130 = 0LL;
        v43 = v36 != 0 ? 3 : 0;
        v44 = (a1[5] & 0x400) == 0;
        LODWORD(v121) = v43;
        if ( !v44 )
          goto LABEL_72;
        v45 = 0;
        v46 = *((__int16 *)a2 + 3);
        v47 = v119;
        *((_DWORD *)a1 + 18) = *((__int16 *)a2 + 2);
        v48 = a3 & 0xC | 1;
        *((_DWORD *)a1 + 19) = v46;
        v106 = *((_DWORD *)a1 + 16);
        v108 = *((_DWORD *)a1 + 17);
        v49 = 0;
        v111 = 0;
        v109 = 0;
        if ( v47 && a5 )
        {
          v88 = -1;
          if ( a5 < 0xFF )
            v88 = a5;
          v89 = v88;
          v90 = 16;
          v91 = 16 * v89;
          if ( v47 < 0x10 )
            v90 = v47;
          v92 = v90 & 0xF | v91;
          v49 = 1;
          v48 |= v92 << 8;
          v111 = 1;
        }
        if ( v120 )
        {
          v31 = 1;
          goto LABEL_51;
        }
        v50 = (__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, Gre::Base *, int, int, LONG, LONG, RECTL *, unsigned int))a1[364];
        if ( !v50 )
        {
          v31 = 2;
          goto LABEL_51;
        }
        if ( v49 && (a1[264] & 0x200) == 0 )
          goto LABEL_51;
        if ( v122 )
        {
          if ( (a1[264] & 0x20) == 0 )
            goto LABEL_132;
          v51 = v43 + *((__int16 *)a2 + 3);
          v52 = v43 + *((__int16 *)a2 + 2);
          v130 = v118;
          v53 = v50(pso, 0LL, v122 + 24, 0LL, v52, v51, v106, v108, &v130, v48 | 0x10u);
          v54 = v53;
          if ( v53 == 3 )
          {
            v45 = 0;
            v55 = 1;
            goto LABEL_47;
          }
          v45 = (v53 >> 1) & 1;
          v55 = (v53 & 2) == 0;
          if ( (v54 & 4) == 0 )
          {
LABEL_47:
            v14 = v55;
LABEL_48:
            v109 = 0;
            goto LABEL_49;
          }
          v109 = 1;
          v14 = v55;
LABEL_49:
          if ( !v14 )
          {
            v31 = 0;
LABEL_51:
            InputTraceLogging::GreCursor::CursorTypeUsage(v31);
            if ( v14 )
            {
              v93 = a3 & 0x40 | v48;
              if ( v122 )
              {
                v94 = (SURFOBJ *)(v122 + 24);
                fl = v93 | 0x10;
                prcl = &v118;
                y = v108;
                v95 = 0LL;
                x = v106;
                v96 = 0LL;
                yHot = v121 + *((__int16 *)a2 + 3);
                xHot = *((__int16 *)a2 + 2) + (_DWORD)v121;
              }
              else
              {
                if ( v115 )
                  v94 = (SURFOBJ *)((char *)v115 + 24);
                else
                  v94 = 0LL;
                fl = v93;
                prcl = &v116;
                v96 = (SURFOBJ *)((v127 + 24) & -(__int64)(v127 != 0));
                y = v108;
                x = v106;
                yHot = *((__int16 *)a2 + 3);
                v95 = (XLATEOBJ *)v123;
                xHot = *((__int16 *)a2 + 2);
              }
              v56 = pso;
              EngSetPointerShape(pso, v96, v94, v95, xHot, yHot, x, y, prcl, fl);
            }
            else
            {
              if ( (a1[5] & 4) != 0 )
                EngSetPointerShape(
                  (SURFOBJ *)((a1[318] + 24) & -(__int64)(a1[318] != 0)),
                  0LL,
                  0LL,
                  0LL,
                  0,
                  0,
                  0,
                  0,
                  0LL,
                  0);
              v56 = pso;
            }
            if ( !v45 && (a1[5] & 2) != 0 )
            {
              v86 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))a1[365];
              if ( v86 )
                v86(v56, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
            }
            _m_prefetchw(a1 + 5);
            do
            {
              v58 = *((_DWORD *)a1 + 10) | 4;
              if ( !v14 )
                v58 = a1[5] & 0xFFFFFFFB;
              v57 = *((_DWORD *)a1 + 10);
            }
            while ( v57 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v58, v57) );
            _m_prefetchw(a1 + 5);
            do
            {
              v60 = *((_DWORD *)a1 + 10) | 2;
              if ( !v45 )
                v60 = a1[5] & 0xFFFFFFFD;
              v59 = *((_DWORD *)a1 + 10);
            }
            while ( v59 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v60, v59) );
            _m_prefetchw(a1 + 5);
            do
            {
              v62 = *((_DWORD *)a1 + 10) | 0x100000;
              if ( !v111 )
                v62 = a1[5] & 0xFFEFFFFF;
              v61 = *((_DWORD *)a1 + 10);
            }
            while ( v61 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v62, v61) );
            _m_prefetchw(a1 + 5);
            do
            {
              v42 = *((unsigned int *)a1 + 10);
              LODWORD(v42) = v42 & 0xFFDFFFFF;
              v64 = *((_DWORD *)a1 + 10) | 0x200000;
              if ( !v109 )
                v64 = v42;
              v63 = *((_DWORD *)a1 + 10);
            }
            while ( v63 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v64, v63) );
LABEL_72:
            if ( v129 )
            {
              v65 = Gre::Base::Globals((Gre::Base *)v42);
              DEC_SHARE_REF_CNT(v65, v129);
            }
            PopThreadGuardedObject(v128);
            if ( v125 )
            {
              v67 = Gre::Base::Globals(v66);
              DEC_SHARE_REF_CNT(v67, v125);
            }
            PopThreadGuardedObject(v124);
            EXLATEOBJ::vAltUnlock(v117, v68, v69);
            if ( v127 )
            {
              v71 = Gre::Base::Globals(v70);
              DEC_SHARE_REF_CNT(v71, v127);
            }
            PopThreadGuardedObject(v126);
            return;
          }
LABEL_132:
          v31 = 4;
          goto LABEL_51;
        }
        v78 = *((__int16 *)a2 + 3);
        v79 = *((__int16 *)a2 + 2);
        v130 = v116;
        if ( v115 )
          v80 = (__int64)v115 + 24;
        else
          v80 = 0LL;
        v81 = v50(pso, (v35 + 24) & -(__int64)(v35 != 0), v80, v123, v79, v78, v106, v108, &v130, v48);
        if ( v81 == 3 )
        {
          v98 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))a1[365];
          if ( v98 )
            v98(pso, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
          LOBYTE(v81) = 1;
        }
        else if ( (v81 & 2) != 0 )
        {
          v45 = 1;
LABEL_112:
          if ( (v81 & 4) == 0 )
          {
            v14 = v45 ^ 1;
            goto LABEL_48;
          }
          v109 = 1;
          v14 = v45 ^ 1;
          goto LABEL_49;
        }
        v45 = 0;
        goto LABEL_112;
      }
    }
    goto LABEL_80;
  }
  if ( (v10 & 4) != 0 )
    EngSetPointerShape((SURFOBJ *)((a1[318] + 24) & -(__int64)(a1[318] != 0)), 0LL, 0LL, 0LL, 0, 0, 0, 0, 0LL, 0);
  if ( (a1[5] & 2) != 0 )
  {
    v82 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))a1[365];
    if ( v82 )
      v82((a1[318] + 24) & -(__int64)(a1[318] != 0), 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
  }
  _m_prefetchw(a1 + 5);
  do
    v83 = *((_DWORD *)a1 + 10);
  while ( v83 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v83 & 0xFFFFFFFD, v83) );
  _m_prefetchw(a1 + 5);
  do
    v84 = *((_DWORD *)a1 + 10);
  while ( v84 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v84 & 0xFFFFFFFB, v84) );
  _m_prefetchw(a1 + 5);
  do
    v85 = *((_DWORD *)a1 + 10);
  while ( v85 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v85 & 0xFFEFFFFF, v85) );
}
