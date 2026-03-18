/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x140093B68
 * Callers:
 *     GreSetPointer @ 0x140092DBC (GreSetPointer.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?CursorTypeUsage@GreCursor@InputTraceLogging@@SAXW4_TRACING_CURSOR_USAGE_TYPE@@@Z @ 0x14009451C (-CursorTypeUsage@GreCursor@InputTraceLogging@@SAXW4_TRACING_CURSOR_USAGE_TYPE@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140094608 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x140094F18 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x14009A8F4 (--0SURFREF@@QEAA@XZ.c)
 *     EngSetPointerShape @ 0x140173990 (EngSetPointerShape.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall vSetPointer(__int64 *a1, struct _CURSINFO *a2, char a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // r13
  struct Gre::Base::SESSION_GLOBALS *v9; // rbx
  int v10; // r15d
  int v11; // r12d
  int v12; // eax
  int v13; // r14d
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  struct PALETTE *v20; // rdx
  int v21; // r8d
  int v22; // r12d
  int v23; // ebx
  int v24; // r15d
  __int64 v25; // rax
  unsigned int v26; // r13d
  __int64 v27; // rax
  _DWORD *v28; // r11
  int v29; // edx
  int v30; // eax
  LONG v31; // ebx
  LONG v32; // r10d
  __int64 v33; // rcx
  LONG v34; // r9d
  LONG v35; // r8d
  LONG v36; // edx
  LONG v37; // eax
  LONG v38; // ecx
  int v39; // r8d
  bool v40; // zf
  int v41; // ebx
  int v42; // ecx
  unsigned int v43; // edx
  LONG v44; // r9d
  int v45; // r15d
  int v46; // eax
  __int64 (__fastcall *v47)(SURFOBJ *, unsigned __int64, __int64, XLATEOBJ *, int, int, LONG, LONG, RECTL *, unsigned int); // r10
  int v48; // edx
  int v49; // ecx
  unsigned int v50; // eax
  char v51; // cl
  BOOL v52; // eax
  SURFOBJ *v53; // rsi
  signed __int32 v54; // eax
  signed __int32 v55; // edx
  signed __int32 v56; // eax
  signed __int32 v57; // edx
  __int64 v58; // r8
  signed __int32 v59; // eax
  signed __int32 v60; // edx
  signed __int32 v61; // eax
  signed __int32 v62; // edx
  struct _SURFOBJ *v63; // r8
  int v64; // eax
  unsigned int v65; // eax
  int v66; // eax
  int v67; // r9d
  __int64 v68; // r8
  int v69; // eax
  void (__fastcall *v70)(__int64, __int64, __int64, _QWORD); // rax
  signed __int32 v71; // ett
  signed __int32 v72; // ett
  signed __int32 v73; // ett
  void (__fastcall *v74)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  unsigned __int8 v75; // al
  int v76; // ecx
  char v77; // al
  int v78; // ecx
  int v79; // ecx
  int v80; // r15d
  SURFOBJ *v81; // r8
  XLATEOBJ *v82; // r9
  SURFOBJ *v83; // rdx
  HDEV v84; // rax
  void (__fastcall *v85)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  LONG xHot; // [rsp+20h] [rbp-E0h]
  LONG yHot; // [rsp+28h] [rbp-D8h]
  LONG x; // [rsp+30h] [rbp-D0h]
  LONG y; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  int fl; // [rsp+48h] [rbp-B8h]
  LONG v92; // [rsp+60h] [rbp-A0h]
  LONG v93; // [rsp+60h] [rbp-A0h]
  int v94; // [rsp+64h] [rbp-9Ch]
  LONG v95; // [rsp+70h] [rbp-90h]
  LONG v96; // [rsp+70h] [rbp-90h]
  SURFOBJ *pso; // [rsp+80h] [rbp-80h]
  struct PALETTE *v99; // [rsp+90h] [rbp-70h] BYREF
  RECTL v100; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v101; // [rsp+B0h] [rbp-50h]
  XLATEOBJ *v102; // [rsp+B8h] [rbp-48h] BYREF
  RECTL v103; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v104; // [rsp+D0h] [rbp-30h]
  int v105; // [rsp+D4h] [rbp-2Ch]
  int v106; // [rsp+D8h] [rbp-28h]
  __int64 v107; // [rsp+E0h] [rbp-20h]
  XLATEOBJ *v108; // [rsp+E8h] [rbp-18h]
  __int64 v109; // [rsp+F0h] [rbp-10h]
  _BYTE v110[32]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v111; // [rsp+118h] [rbp+18h]
  _BYTE v112[32]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD *v113; // [rsp+140h] [rbp+40h]
  _BYTE v114[32]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v115; // [rsp+168h] [rbp+68h]
  RECTL v116; // [rsp+170h] [rbp+70h] BYREF

  v104 = a4;
  v8 = 0LL;
  v9 = Gre::Base::Globals((Gre::Base *)a1);
  v10 = a3 & 0x10;
  v92 = v10;
  v11 = 0;
  v105 = a3 & 0x20;
  v12 = *((_DWORD *)a1 + 10);
  if ( (v12 & 0x400) == 0 )
  {
    if ( a2 )
    {
      SURFREF::SURFREF((SURFREF *)v112, *((HSURF *)a2 + 1), v9);
      if ( !v113 )
        goto LABEL_89;
      v13 = 1;
      if ( v113[24] != 1 || (v113[15] & 1) != 0 )
        goto LABEL_89;
      v14 = *((_QWORD *)v9 + 471);
      v107 = 0LL;
      v101 = 0LL;
      v108 = 0LL;
      v102 = 0LL;
      SURFREF::SURFREF((SURFREF *)v110);
      SURFREF::SURFREF((SURFREF *)v114);
      v16 = a1[318];
      v99 = 0LL;
      v103 = 0LL;
      pso = (SURFOBJ *)((v16 + 24) & -(__int64)(v16 != 0));
      if ( *((_QWORD *)a2 + 2) || *((_QWORD *)a2 + 6) )
      {
        v17 = *((_QWORD *)a2 + 6);
        LOBYTE(v15) = 5;
        if ( v17 )
        {
          v18 = HmgShareLockCheck(v17, v15);
          v11 = 1;
        }
        else
        {
          v18 = HmgShareLockCheck(*((_QWORD *)a2 + 2), v15);
        }
        v111 = v18;
        v19 = v18;
        if ( !v18 )
        {
LABEL_16:
          if ( *((_DWORD *)a2 + 11) )
          {
            if ( (*(_DWORD *)a2 & 0x400) != 0 )
            {
              if ( v10 )
                goto LABEL_19;
            }
            else if ( !v10 )
            {
              goto LABEL_19;
            }
          }
          v63 = (struct _SURFOBJ *)(v8 + 24);
          if ( !v8 )
            v63 = 0LL;
          vProcessCursorShape(
            (HDEV)v113 + 6,
            v10,
            v11,
            (struct _SURFOBJ *)((unsigned __int64)(v113 + 6) & -(__int64)(v113 != 0LL)),
            v63,
            v99,
            (struct _RECTL *)a2 + 2,
            (HBITMAP *)a2 + 3);
          v64 = *(_DWORD *)a2;
          v19 = v111;
          if ( v10 )
            v65 = v64 | 0x400;
          else
            v65 = v64 & 0xFFFFFBFF;
          *(_DWORD *)a2 = v65;
LABEL_19:
          v21 = *((_DWORD *)a2 + 8);
          v22 = *((_DWORD *)a2 + 10);
          v95 = v21;
          if ( v21 > v22 )
            goto LABEL_88;
          v23 = *((_DWORD *)a2 + 9);
          v24 = *((_DWORD *)a2 + 11);
          if ( v23 > v24 )
            goto LABEL_88;
          v25 = *((_QWORD *)a2 + 3);
          v26 = 3;
          v100.left = *((_DWORD *)a2 + 8);
          *(_QWORD *)&v100.top = __PAIR64__(v22, v23);
          v100.bottom = v24;
          if ( v25 && *((_DWORD *)a1 + 523) > 3u )
          {
            LOBYTE(v15) = 5;
            v27 = HmgShareLockCheck(v25, v15);
            v19 = v111;
            v21 = v95;
            v115 = v27;
          }
          else
          {
            v27 = v115;
          }
          v28 = v113;
          if ( v27 )
          {
            v31 = v92;
            v32 = *((_DWORD *)a2 + 8);
            v33 = v27;
            v34 = *((_DWORD *)a2 + 9);
            v35 = *((_DWORD *)a2 + 10);
            v36 = *((_DWORD *)a2 + 11);
            v101 = v27;
            if ( v92 )
            {
              ++v32;
              v35 += 8;
              ++v34;
              v36 += 6;
            }
            v37 = *(_DWORD *)(v27 + 56);
            v38 = *(_DWORD *)(v33 + 60);
            if ( v32 < 0 )
              v32 = 0;
            v103.left = v32;
            if ( v34 < 0 )
              v34 = 0;
            v103.top = v34;
            if ( v37 < v35 )
              v35 = v37;
            v103.right = v35;
            if ( v38 < v36 )
              v36 = v38;
            v103.bottom = v36;
            if ( v35 < v32 )
            {
              v103.left = v35;
            }
            else if ( v36 < v34 )
            {
              v103.top = v36;
            }
          }
          else
          {
            v29 = v113[14];
            if ( v19 && v29 >= *(_DWORD *)(v19 + 56) )
              v29 = *(_DWORD *)(v19 + 56);
            v30 = (int)v113[15] >> 1;
            if ( v21 < 0 )
              v21 = 0;
            v100.left = v21;
            if ( v23 < 0 )
              v23 = 0;
            v100.top = v23;
            if ( v29 < v22 )
              v22 = v29;
            v100.right = v22;
            if ( v30 < v24 )
              v24 = v30;
            v100.bottom = v24;
            if ( v22 < v21 )
            {
              v100.left = v22;
            }
            else
            {
              if ( v24 < v23 )
                v23 = v24;
              v100.top = v23;
            }
            v31 = v92;
          }
          v116 = 0LL;
          v39 = v31 != 0 ? 3 : 0;
          v40 = (a1[5] & 0x400) == 0;
          v106 = v39;
          if ( !v40 )
            goto LABEL_88;
          v41 = 0;
          v42 = *((__int16 *)a2 + 3);
          v43 = v104;
          v44 = *((_DWORD *)a1 + 16);
          v45 = a3 & 0xC | 1;
          *((_DWORD *)a1 + 18) = *((__int16 *)a2 + 2);
          v93 = *((_DWORD *)a1 + 17);
          v46 = 0;
          *((_DWORD *)a1 + 19) = v42;
          v96 = v44;
          v94 = 0;
          v109 = 0LL;
          if ( v43 )
          {
            v109 = 0LL;
            if ( a5 )
            {
              v75 = -1;
              v109 = 1LL;
              if ( a5 < 0xFF )
                v75 = a5;
              v76 = v75;
              v77 = 16;
              v78 = 16 * v76;
              if ( v43 < 0x10 )
                v77 = v43;
              v79 = v77 & 0xF | v78;
              v46 = 1;
              v45 |= v79 << 8;
            }
          }
          if ( v105 )
          {
            v26 = 1;
            goto LABEL_67;
          }
          v47 = (__int64 (__fastcall *)(SURFOBJ *, unsigned __int64, __int64, XLATEOBJ *, int, int, LONG, LONG, RECTL *, unsigned int))a1[364];
          if ( !v47 )
          {
            v26 = 2;
            goto LABEL_67;
          }
          if ( v46 && (a1[264] & 0x200) == 0 )
            goto LABEL_67;
          if ( v101 )
          {
            if ( (a1[264] & 0x20) == 0 )
              goto LABEL_126;
            v48 = v39 + *((__int16 *)a2 + 3);
            v49 = v39 + *((__int16 *)a2 + 2);
            v116 = v103;
            v50 = v47(pso, 0LL, v101 + 24, 0LL, v49, v48, v44, v93, &v116, v45 | 0x10u);
            v51 = v50;
            if ( v50 == 3 )
            {
              v41 = 0;
              v52 = 1;
              goto LABEL_63;
            }
            v41 = (v50 >> 1) & 1;
            v52 = (v50 & 2) == 0;
            if ( (v51 & 4) == 0 )
            {
LABEL_63:
              v13 = v52;
LABEL_64:
              v94 = 0;
              goto LABEL_65;
            }
            v94 = 1;
            v13 = v52;
LABEL_65:
            if ( !v13 )
            {
              v26 = 0;
LABEL_67:
              InputTraceLogging::GreCursor::CursorTypeUsage(v26);
              if ( v13 )
              {
                v80 = a3 & 0x40 | v45;
                if ( v101 )
                {
                  v81 = (SURFOBJ *)(v101 + 24);
                  fl = v80 | 0x10;
                  prcl = &v103;
                  y = v93;
                  v82 = 0LL;
                  x = v96;
                  v83 = 0LL;
                  yHot = *((__int16 *)a2 + 3) + v106;
                  xHot = *((__int16 *)a2 + 2) + v106;
                }
                else
                {
                  v81 = (SURFOBJ *)(v107 + 24);
                  if ( !v107 )
                    v81 = 0LL;
                  fl = v80;
                  prcl = &v100;
                  v83 = (SURFOBJ *)((unsigned __int64)(v113 + 6) & -(__int64)(v113 != 0LL));
                  y = v93;
                  x = v96;
                  yHot = *((__int16 *)a2 + 3);
                  v82 = v108;
                  xHot = *((__int16 *)a2 + 2);
                }
                v53 = pso;
                EngSetPointerShape(pso, v83, v81, v82, xHot, yHot, x, y, prcl, fl);
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
                v53 = pso;
              }
              if ( !v41 && (a1[5] & 2) != 0 )
              {
                v74 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))a1[365];
                if ( v74 )
                  v74(v53, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
              }
              _m_prefetchw(a1 + 5);
              do
              {
                v55 = *((_DWORD *)a1 + 10) | 4;
                if ( !v13 )
                  v55 = a1[5] & 0xFFFFFFFB;
                v54 = *((_DWORD *)a1 + 10);
              }
              while ( v54 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v55, v54) );
              _m_prefetchw(a1 + 5);
              do
              {
                v57 = *((_DWORD *)a1 + 10) | 2;
                if ( !v41 )
                  v57 = a1[5] & 0xFFFFFFFD;
                v56 = *((_DWORD *)a1 + 10);
              }
              while ( v56 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v57, v56) );
              _m_prefetchw(a1 + 5);
              v58 = v109;
              do
              {
                v60 = *((_DWORD *)a1 + 10) | 0x100000;
                if ( !v58 )
                  v60 = a1[5] & 0xFFEFFFFF;
                v59 = *((_DWORD *)a1 + 10);
              }
              while ( v59 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v60, v59) );
              _m_prefetchw(a1 + 5);
              do
              {
                v62 = *((_DWORD *)a1 + 10) | 0x200000;
                if ( !v94 )
                  v62 = a1[5] & 0xFFDFFFFF;
                v61 = *((_DWORD *)a1 + 10);
              }
              while ( v61 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v62, v61) );
LABEL_88:
              SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v114);
              SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v110);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v102);
LABEL_89:
              SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v112);
              return;
            }
LABEL_126:
            v26 = 4;
            goto LABEL_67;
          }
          v66 = *((__int16 *)a2 + 3);
          v67 = *((__int16 *)a2 + 2);
          v116 = v100;
          if ( v107 )
            v68 = v107 + 24;
          else
            v68 = 0LL;
          v69 = v47(
                  pso,
                  (unsigned __int64)(v28 + 6) & -(__int64)(v28 != 0LL),
                  v68,
                  v108,
                  v67,
                  v66,
                  v96,
                  v93,
                  &v116,
                  v45);
          if ( v69 == 3 )
          {
            v85 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))a1[365];
            if ( v85 )
              v85(pso, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
            LOBYTE(v69) = 1;
          }
          else if ( (v69 & 2) != 0 )
          {
            v41 = 1;
LABEL_103:
            if ( (v69 & 4) == 0 )
            {
              v13 = v41 ^ 1;
              goto LABEL_64;
            }
            v94 = 1;
            v13 = v41 ^ 1;
            goto LABEL_65;
          }
          v41 = 0;
          goto LABEL_103;
        }
        if ( *(_DWORD *)(v18 + 60) != (int)v113[15] >> 1 || *(_DWORD *)(v18 + 56) < v113[14] )
          goto LABEL_88;
        v20 = *(struct PALETTE **)(v18 + 128);
        v99 = v20;
        if ( !v20 )
        {
          v84 = (HDEV)a1[3];
          if ( v84 != (HDEV)a1 )
          {
            v20 = (struct PALETTE *)*((_QWORD *)v84 + 224);
            v99 = v20;
          }
        }
        if ( !(unsigned int)bIsCompatible(&v99, v20, v19, a1) )
          goto LABEL_88;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (Gre::Base *)&v102,
                             0LL,
                             0,
                             (__int64)v99,
                             a1[224],
                             v14,
                             v14,
                             0,
                             0xFFFFFF,
                             0,
                             0) )
        {
          v19 = v111;
          v8 = v111;
          v108 = v102;
          v107 = v111;
          goto LABEL_16;
        }
      }
      v19 = v111;
      goto LABEL_16;
    }
    if ( (v12 & 4) != 0 )
      EngSetPointerShape((SURFOBJ *)((a1[318] + 24) & -(__int64)(a1[318] != 0)), 0LL, 0LL, 0LL, 0, 0, 0, 0, 0LL, 0);
    if ( (a1[5] & 2) != 0 )
    {
      v70 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))a1[365];
      if ( v70 )
        v70((a1[318] + 24) & -(__int64)(a1[318] != 0), 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
    }
    _m_prefetchw(a1 + 5);
    do
      v71 = *((_DWORD *)a1 + 10);
    while ( v71 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v71 & 0xFFFFFFFD, v71) );
    _m_prefetchw(a1 + 5);
    do
      v72 = *((_DWORD *)a1 + 10);
    while ( v72 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v72 & 0xFFFFFFFB, v72) );
    _m_prefetchw(a1 + 5);
    do
      v73 = *((_DWORD *)a1 + 10);
    while ( v73 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v73 & 0xFFEFFFFF, v73) );
  }
}
