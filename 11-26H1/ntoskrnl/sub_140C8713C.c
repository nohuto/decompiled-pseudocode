/*
 * XREFs of sub_140C8713C @ 0x140C8713C
 * Callers:
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C68010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140C7A754 @ 0x140C7A754 (sub_140C7A754.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1404D0428 (KeInitializeGate.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     sub_140553D6C @ 0x140553D6C (sub_140553D6C.c)
 *     sub_140553DDC @ 0x140553DDC (sub_140553DDC.c)
 *     MmImageSectionPagable @ 0x140ACBB2C (MmImageSectionPagable.c)
 *     sub_140C7E7A8 @ 0x140C7E7A8 (sub_140C7E7A8.c)
 *     sub_140C7F03C @ 0x140C7F03C (sub_140C7F03C.c)
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140C8713C(__int64 a1, ULONG_PTR a2, char a3)
{
  _BYTE *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  int v7; // esi
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // di
  int v10; // r15d
  unsigned int *v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // xmm1_8
  int v14; // ecx
  __int128 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r8d
  unsigned int v19; // r14d
  unsigned int v20; // eax
  _BYTE *v21; // rsi
  int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // r8
  int v25; // ecx
  unsigned __int64 v26; // rdx
  int v27; // ebx
  _QWORD *v28; // rax
  int v29; // ecx
  __int128 *v30; // r8
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 i; // rax
  _QWORD *v34; // rdx
  char *v35; // rcx
  __int64 v36; // r8
  char v37; // al
  unsigned __int64 v38; // rbx
  _QWORD *v39; // rax
  unsigned __int64 v40; // rcx
  int v41; // edx
  _DWORD *v42; // r14
  bool v43; // zf
  int v44; // ecx
  _DWORD *v45; // rax
  char *v46; // r8
  char *v47; // r10
  __int64 v48; // r9
  char *v49; // r11
  int v50; // r13d
  char *v51; // r15
  char v52; // cl
  char v53; // al
  __int16 v54; // cx
  unsigned int v55; // r8d
  char *v56; // r9
  __int64 v57; // rcx
  __int64 v58; // rax
  char v59; // cl
  char v60; // al
  int v61; // r9d
  __int64 v62; // r8
  char v63; // cl
  char v64; // al
  int v65; // r9d
  __int64 v66; // r8
  char v67; // cl
  char v68; // al
  unsigned int v69; // ecx
  BOOL v70; // r13d
  unsigned int v71; // r15d
  BOOL v72; // r11d
  int v73; // ecx
  _QWORD *v74; // rax
  __int64 v75; // rdx
  ULONG_PTR v76; // rdx
  unsigned int v77; // ecx
  char *v78; // r8
  ULONG_PTR v79; // rax
  char *v80; // rbx
  char *v81; // r14
  int v82; // edx
  int v83; // ecx
  __int16 v84; // ax
  char *v85; // r8
  char *v86; // r10
  __int64 v87; // r9
  char *v88; // r11
  int v89; // r13d
  char *v90; // r15
  char v91; // cl
  char v92; // al
  unsigned int v93; // r8d
  char *v94; // r9
  __int64 v95; // rcx
  __int64 v96; // rax
  char v97; // cl
  char v98; // al
  int v99; // r9d
  __int64 v100; // r8
  char v101; // cl
  char v102; // al
  int v103; // r9d
  __int64 v104; // r8
  char v105; // cl
  char v106; // al
  unsigned int v107; // ecx
  int v108; // eax
  int v109; // edx
  __int64 *v110; // rax
  unsigned int *v111; // rcx
  unsigned __int64 v112; // r9
  char *v113; // r13
  __int64 v114; // r15
  char *v115; // rax
  unsigned int v116; // ecx
  unsigned int v117; // eax
  __int64 v118; // r15
  __int64 v119; // r14
  unsigned int v120; // ebx
  _QWORD *v121; // r13
  ULONG_PTR v122; // r15
  _QWORD *v123; // r10
  _QWORD *v124; // r9
  unsigned __int64 v125; // rax
  int v126; // r11d
  const char *v127; // rax
  unsigned __int64 v128; // rsi
  unsigned __int64 v129; // r8
  __int64 v130; // rax
  __int64 v131; // r8
  _QWORD *v132; // r9
  __int64 v133; // r8
  unsigned __int64 v134; // rcx
  unsigned __int64 v135; // rax
  __int128 *v136; // rdx
  __int128 *v137; // r13
  _QWORD *v138; // r10
  char *v139; // r11
  _DWORD *v140; // r9
  int v141; // r8d
  char *v142; // rcx
  _QWORD *v143; // rdx
  __int64 v144; // rbx
  char v145; // al
  int v146; // ecx
  unsigned int v147; // ebx
  __int64 v148; // r8
  __int64 v149; // rdx
  unsigned int v150; // eax
  unsigned __int64 v151; // rax
  __int64 v152; // rcx
  unsigned int v153; // ecx
  unsigned int v154; // ecx
  unsigned int v155; // ecx
  unsigned int v156; // r9d
  unsigned int v157; // ecx
  unsigned int v158; // ecx
  unsigned int v159; // ecx
  unsigned __int64 v160; // rax
  __int64 v161; // rcx
  unsigned int v162; // r8d
  __int64 v163; // rax
  _BYTE *v164; // r14
  __int64 j; // rcx
  char *v166; // rax
  __int64 v167; // r15
  __int64 v168; // r13
  unsigned int v169; // eax
  __int64 v170; // r14
  int v171; // ecx
  unsigned int v172; // eax
  __int64 v173; // r8
  int v174; // ecx
  unsigned __int64 v175; // rdx
  int v176; // esi
  _QWORD *v177; // rax
  int v178; // ecx
  __int64 v179; // rsi
  __int64 v180; // rdx
  _QWORD *v181; // r9
  int v182; // r10d
  const char *v183; // rax
  unsigned __int64 v184; // r8
  unsigned int v185; // r11d
  __int64 v186; // rax
  __int64 v187; // r8
  _QWORD *v188; // r9
  __int64 v189; // r8
  unsigned __int64 v190; // rcx
  unsigned int v191; // edx
  unsigned __int64 v192; // rax
  __int64 v193; // rax
  unsigned __int64 k; // rax
  int v196; // ecx
  __int64 v197; // rcx
  __int64 v198; // r11
  __int64 v199; // r8
  _QWORD *v200; // r9
  unsigned __int64 v201; // r10
  __int64 v202; // rax
  __int64 v203; // rax
  int v204; // edx
  ULONG_PTR v205; // [rsp+38h] [rbp-D0h]
  ULONG_PTR v206; // [rsp+38h] [rbp-D0h]
  unsigned int v207; // [rsp+40h] [rbp-C8h]
  unsigned int v208; // [rsp+40h] [rbp-C8h]
  int v209; // [rsp+44h] [rbp-C4h]
  int v210; // [rsp+44h] [rbp-C4h]
  int v211; // [rsp+48h] [rbp-C0h]
  unsigned int v212; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned __int64 v213; // [rsp+50h] [rbp-B8h]
  __int128 *v214; // [rsp+58h] [rbp-B0h]
  char *v215; // [rsp+60h] [rbp-A8h]
  char *v216; // [rsp+68h] [rbp-A0h]
  __int64 v217; // [rsp+70h] [rbp-98h]
  __int64 v218; // [rsp+78h] [rbp-90h] BYREF
  char *v219; // [rsp+80h] [rbp-88h]
  __int128 v220; // [rsp+88h] [rbp-80h] BYREF
  __int64 v221; // [rsp+98h] [rbp-70h]
  _BYTE *v222; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v223[24]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v224; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v225[152]; // [rsp+D0h] [rbp-38h] BYREF
  ULONG_PTR v227; // [rsp+180h] [rbp+78h]
  unsigned __int16 v229; // [rsp+190h] [rbp+88h]
  BOOL v230; // [rsp+190h] [rbp+88h]
  unsigned int v231; // [rsp+190h] [rbp+88h]
  unsigned __int64 v232; // [rsp+190h] [rbp+88h]
  int v233; // [rsp+190h] [rbp+88h]
  __int64 v234; // [rsp+190h] [rbp+88h]

  v227 = a2;
  v3 = *(_BYTE **)a1;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)a1 + 520LL))(a2);
  v6 = v5;
  if ( v5 )
  {
    v229 = *(_WORD *)(v5 + 6);
    if ( v229 && *(_DWORD *)(v5 + 56) >= 0x1000u && (a2 & 0xFFF) == 0 )
    {
      v7 = -1073741275;
      v8 = *((_QWORD *)v3 + 167);
      LODWORD(v215) = *(_DWORD *)(v5 + 84);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      (*((void (__fastcall **)(__int64))v3 + 44))(v8);
      v10 = 24;
      v11 = (unsigned int *)**((_QWORD **)v3 + 196);
      v12 = (unsigned __int64)(v11 + 4);
      while ( *(_QWORD *)(v12 + 8) != a2 )
      {
        v12 += 24LL;
        if ( v12 >= (unsigned __int64)&v11[6 * *v11 + 4] )
          goto LABEL_10;
      }
      v7 = 0;
      v13 = *(_QWORD *)(v12 + 16);
      v220 = *(_OWORD *)v12;
      v221 = v13;
LABEL_10:
      (*((void (__fastcall **)(_QWORD))v3 + 52))(*((_QWORD *)v3 + 167));
      __writecr8(CurrentIrql);
      if ( v7 >= 0 )
      {
        v17 = (unsigned int)v221;
      }
      else
      {
        v14 = 24;
        v15 = &v220;
        v16 = 3LL;
        do
        {
          *(_QWORD *)v15 = 0LL;
          v14 -= 8;
          v15 = (__int128 *)((char *)v15 + 8);
          --v16;
        }
        while ( v16 );
        for ( ; v14; --v14 )
        {
          *(_BYTE *)v15 = 0;
          v15 = (__int128 *)((char *)v15 + 1);
        }
        v17 = *(unsigned int *)(v6 + 80);
        LODWORD(v221) = *(_DWORD *)(v6 + 80);
        *((_QWORD *)&v220 + 1) = a2;
        *(_QWORD *)&v220 = 1LL;
      }
      v18 = *((_DWORD *)v3 + 593);
      v213 = ((a2 & 0xFFF) + 4095 + v17) >> 12;
      v209 = *((_DWORD *)v3 + 513);
      v19 = 20 * v213;
      v20 = 20 * v213 + v209 + 48;
      if ( v20 <= *((_DWORD *)v3 + 665) )
      {
        v21 = v3;
        v217 = (__int64)v3;
        *((_DWORD *)v3 + 513) = v20;
      }
      else
      {
        v217 = sub_140C7E7A8(v3, v20, v18);
        v21 = (_BYTE *)v217;
        if ( !v217 )
          return 3221225626LL;
        v22 = *((_DWORD *)v3 + 630);
        if ( (v22 & 2) == 0 )
        {
          v23 = *((_DWORD *)v3 + 513);
          v24 = *((_QWORD *)v3 + 253);
          v25 = (v22 & 0x10000000) != 0 ? *((_DWORD *)v3 + 593) : 0;
          if ( v23 >= 8 )
          {
            v26 = (unsigned __int64)v23 >> 3;
            do
            {
              *(_QWORD *)v3 = 0LL;
              v23 -= 8;
              v3 += 8;
              --v26;
            }
            while ( v26 );
          }
          for ( ; v23; --v23 )
            *v3++ = 0;
          v27 = *((_DWORD *)v21 + 593);
          *((_DWORD *)v21 + 593) = v25;
          if ( v25 == 3 )
          {
            (*((void (__fastcall **)(__int64))v21 + 110))(v24);
          }
          else if ( (*((_DWORD *)v21 + 630) & 0x8000000) != 0 || !v25 )
          {
            (*((void (__fastcall **)(__int64))v21 + 33))(v24);
          }
          else
          {
            (*((void (__fastcall **)(__int64, _QWORD))v21 + 71))(v24 - 8, *(_QWORD *)(v24 - 8));
          }
          *((_DWORD *)v21 + 593) = v27;
        }
        *((_DWORD *)v21 + 630) &= ~2u;
      }
      ++*((_DWORD *)v21 + 523);
      v28 = &v21[v209];
      if ( v21 )
      {
        v29 = 48;
        v214 = (__int128 *)&v21[v209];
        v30 = v214;
        v31 = 6LL;
        do
        {
          *v28 = 0LL;
          v29 -= 8;
          ++v28;
          --v31;
        }
        while ( v31 );
        for ( ; v29; --v29 )
        {
          *(_BYTE *)v28 = 0;
          v28 = (_QWORD *)((char *)v28 + 1);
        }
        *(_DWORD *)v30 = 33;
        *((_QWORD *)v30 + 1) = 0LL;
        *((_DWORD *)v30 + 4) = 0;
        v32 = *((_QWORD *)v21 + 263);
        for ( i = v32; ; LODWORD(v32) = i ^ v32 )
        {
          i >>= 31;
          if ( !i )
            break;
        }
        v34 = (_QWORD *)v30 + 3;
        *((_DWORD *)v30 + 5) = v32 & 0x7FFFFFFF;
        v35 = (char *)&v220;
        v36 = 3LL;
        *(_QWORD *)a1 = v21;
        do
        {
          v10 -= 8;
          *v34 = *(_QWORD *)v35;
          v35 += 8;
          ++v34;
          --v36;
        }
        while ( v36 );
        for ( ; v10; --v10 )
        {
          v37 = *v35++;
          *(_BYTE *)v34 = v37;
          v34 = (_QWORD *)((char *)v34 + 1);
        }
        LOBYTE(v34) = 1;
        v218 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD *, __int64, unsigned int *))v21 + 64))(
                 v227,
                 v34,
                 12LL,
                 &v212);
        v38 = v218;
        if ( !v218 )
          v212 = 0;
        if ( (a3 & 1) == 0 )
        {
          v38 = 0LL;
          v212 = 0;
          v218 = 0LL;
        }
        v216 = (char *)(v214 + 3);
        v213 = (unsigned __int64)v214 + 20 * (unsigned int)v213 + 48;
        v39 = v214 + 3;
        if ( v19 >= 8 )
        {
          v40 = (unsigned __int64)v19 >> 3;
          do
          {
            *v39 = -1LL;
            v19 -= 8;
            ++v39;
            --v40;
          }
          while ( v40 );
        }
        for ( ; v19; --v19 )
        {
          *(_BYTE *)v39 = -1;
          v39 = (_QWORD *)((char *)v39 + 1);
        }
        v41 = 0;
        v42 = (_DWORD *)(v6 + *(unsigned __int16 *)(v6 + 20) + 24LL);
        v43 = (v42[9] & 0x2000000) == 0;
        v219 = (char *)&v42[10 * v229];
        if ( !v43 )
          goto LABEL_68;
        v44 = *v42;
        v45 = v42 + 1;
        if ( *v42 == 1414090313 )
        {
          if ( *v45 == 1195525195 )
            goto LABEL_68;
        }
        else if ( v44 == 1162297680 )
        {
          v54 = *(_WORD *)v45;
          if ( *(_WORD *)v45 != 30839 && v54 != 29303 && v54 != 30583 )
          {
LABEL_60:
            v46 = (char *)*((_QWORD *)v21 + 298);
            v47 = (char *)*((_QWORD *)v21 + 299);
            v48 = (char *)v42 - v46;
            v49 = (char *)*((_QWORD *)v21 + 300);
            v50 = 7;
            v51 = (char *)*((_QWORD *)v21 + 301);
            while ( 1 )
            {
              v52 = v46[v48];
              v53 = *v46++;
              if ( v52 != v53 )
                break;
              if ( !--v50 )
              {
LABEL_83:
                v41 = 1;
                goto LABEL_84;
              }
            }
            v55 = 8;
            v56 = (char *)v42;
            while ( 1 )
            {
              v57 = *(_QWORD *)v56;
              v56 += 8;
              v58 = *(_QWORD *)v47;
              v47 += 8;
              if ( v57 != v58 )
                break;
              v55 -= 8;
              if ( v55 < 8 )
              {
                if ( !v55 )
                  goto LABEL_83;
                while ( 1 )
                {
                  v59 = *v56++;
                  v60 = *v47++;
                  if ( v59 != v60 )
                    goto LABEL_76;
                  if ( !--v55 )
                    goto LABEL_83;
                }
              }
            }
LABEL_76:
            v61 = 4;
            v62 = (char *)v42 - v49;
            while ( 1 )
            {
              v63 = v49[v62];
              v64 = *v49++;
              if ( v63 != v64 )
                break;
              if ( !--v61 )
                goto LABEL_83;
            }
            v65 = 6;
            v66 = (char *)v42 - v51;
            while ( 1 )
            {
              v67 = v51[v66];
              v68 = *v51++;
              if ( v67 != v68 )
                break;
              if ( !--v65 )
                goto LABEL_83;
            }
LABEL_84:
            if ( (int)v42[9] >= 0 )
            {
              if ( !v41 )
              {
LABEL_91:
                v69 = v42[4];
                v70 = v41 == 0;
                v207 = v42[3];
                if ( v69 <= v42[2] )
                  v69 = v42[2];
                v71 = (v69 + v42[3] + 4095) & 0xFFFFF000;
                v72 = MmImageSectionPagable((__int64)v42) != 0;
                v230 = v72;
                if ( (*((_DWORD *)v21 + 630) & 0x100000) != 0 )
                {
                  v73 = 120;
                  v211 = 0;
                  v74 = &v222;
                  v75 = 15LL;
                  do
                  {
                    *v74 = 0LL;
                    v73 -= 8;
                    ++v74;
                    --v75;
                  }
                  while ( v75 );
                  for ( ; v73; --v73 )
                  {
                    *(_BYTE *)v74 = 0;
                    v74 = (_QWORD *)((char *)v74 + 1);
                  }
                }
                else
                {
                  v211 = 128;
                  v222 = v21;
                  v224 = 0LL;
                  KeInitializeGate((__int64)v223, 0);
                  v72 = v230;
                }
                v76 = v227;
                v77 = 0;
                v78 = (char *)v213;
                v79 = v227;
                v205 = v227;
                v231 = 0;
                if ( v216 != (char *)v213 )
                {
                  v80 = v216;
                  v81 = (char *)(v42 + 1);
                  while ( v77 < v207 )
                  {
                    if ( v77 < (unsigned int)v215 )
                    {
LABEL_147:
                      v109 = 0;
                      v110 = &v218;
                      v111 = &v212;
                      do
                      {
                        v112 = *v110;
                        if ( *v111 && v205 >= v112 && v205 <= v112 + *v111 - 1LL )
                        {
                          v77 = v231;
                          v79 = v205;
                          v78 = (char *)v213;
                          goto LABEL_157;
                        }
                        ++v109;
                        ++v111;
                        ++v110;
                      }
                      while ( !v109 );
                      v77 = v231;
                      if ( v231 < v207 || !v72 )
                        *((_DWORD *)v80 + 4) &= ~0x80000000;
                      v80[15] &= ~0x80u;
                      v78 = (char *)v213;
LABEL_156:
                      v79 = v205;
                    }
LABEL_157:
                    v77 += 4096;
                    v79 += 4096LL;
                    v80 += 20;
                    v231 = v77;
                    v205 = v79;
                    if ( v80 == v78 )
                    {
                      v38 = v218;
                      v76 = v227;
                      goto LABEL_159;
                    }
                  }
                  if ( v77 < v71 )
                  {
LABEL_144:
                    if ( v70 )
                      goto LABEL_147;
                    goto LABEL_157;
                  }
                  if ( v81 + 36 == v219 || v77 < *((_DWORD *)v81 + 12) )
                    goto LABEL_156;
                  v81 += 40;
                  v82 = 0;
                  if ( (*((_DWORD *)v81 + 8) & 0x2000000) != 0
                    || (v83 = *((_DWORD *)v81 - 1), v83 == 1414090313) && *(_DWORD *)v81 == 1195525195
                    || v83 == 1162297680
                    && ((v84 = *(_WORD *)v81, *(_WORD *)v81 == 30839) || v84 == 29303 || v84 == 30583)
                    || v83 == 1095914053 && *(_WORD *)v81 == 16724 )
                  {
                    v82 = 1;
                  }
                  else
                  {
                    v85 = (char *)*((_QWORD *)v21 + 298);
                    v86 = (char *)*((_QWORD *)v21 + 299);
                    v87 = v81 - v85;
                    v88 = (char *)*((_QWORD *)v21 + 300);
                    v89 = 7;
                    v90 = (char *)*((_QWORD *)v21 + 301);
                    while ( 1 )
                    {
                      v91 = v85[v87 - 4];
                      v92 = *v85++;
                      if ( v91 != v92 )
                        break;
                      if ( !--v89 )
                      {
LABEL_132:
                        v82 = 1;
                        goto LABEL_133;
                      }
                    }
                    v93 = 8;
                    v94 = v81 - 4;
                    while ( 1 )
                    {
                      v95 = *(_QWORD *)v94;
                      v94 += 8;
                      v96 = *(_QWORD *)v86;
                      v86 += 8;
                      if ( v95 != v96 )
                        break;
                      v93 -= 8;
                      if ( v93 < 8 )
                      {
                        if ( !v93 )
                          goto LABEL_132;
                        while ( 1 )
                        {
                          v97 = *v94++;
                          v98 = *v86++;
                          if ( v97 != v98 )
                            goto LABEL_125;
                          if ( !--v93 )
                            goto LABEL_132;
                        }
                      }
                    }
LABEL_125:
                    v99 = 4;
                    v100 = v81 - v88;
                    while ( 1 )
                    {
                      v101 = v88[v100 - 4];
                      v102 = *v88++;
                      if ( v101 != v102 )
                        break;
                      if ( !--v99 )
                        goto LABEL_132;
                    }
                    v103 = 6;
                    v104 = v81 - v90;
                    while ( 1 )
                    {
                      v105 = v90[v104 - 4];
                      v106 = *v90++;
                      if ( v105 != v106 )
                        break;
                      if ( !--v103 )
                        goto LABEL_132;
                    }
                  }
LABEL_133:
                  if ( *((int *)v81 + 8) >= 0 )
                  {
                    if ( !v82 )
                    {
LABEL_141:
                      v107 = *((_DWORD *)v81 + 3);
                      v70 = v82 == 0;
                      if ( v107 <= *((_DWORD *)v81 + 1) )
                        v107 = *((_DWORD *)v81 + 1);
                      v71 = (v107 + 4095 + *((_DWORD *)v81 + 2)) & 0xFFFFF000;
                      v108 = MmImageSectionPagable((__int64)(v81 - 4));
                      v77 = v231;
                      v78 = (char *)v213;
                      v43 = v108 == 0;
                      v79 = v205;
                      v72 = !v43;
                      goto LABEL_144;
                    }
                  }
                  else
                  {
                    v82 = 1;
                  }
                  if ( *((_DWORD *)v81 - 1) == 1414090313
                    && *(_DWORD *)v81 == 1195525195
                    && (*((_DWORD *)v21 + 631) & 0x2000) != 0 )
                  {
                    v82 = 0;
                  }
                  goto LABEL_141;
                }
LABEL_159:
                v113 = (char *)(v214 + 3);
                v216 = (char *)(v214 + 3);
                if ( v214 + 3 != (__int128 *)v78 )
                {
                  do
                  {
                    LODWORD(v114) = 0;
                    v115 = v113;
                    do
                    {
                      if ( v115[15] < 0 )
                        break;
                      v114 = (unsigned int)(v114 + 1);
                      v115 = &v113[20 * v114];
                    }
                    while ( v115 != v78 );
                    v210 = v114;
                    if ( (_DWORD)v114 )
                    {
                      v116 = v211;
                      if ( v211 )
                      {
                        v147 = 0;
                        do
                        {
                          v148 = *((unsigned int *)v21 + 524);
                          v149 = *((_QWORD *)v21 + 347);
                          v150 = v114 - v147;
                          if ( (unsigned int)v114 - v147 > v116 )
                            v150 = v116;
                          LODWORD(v215) = v150;
                          v214 = (__int128 *)(*((__int64 (__fastcall **)(__int64, __int64, __int64))v21 + 32))(
                                               64LL,
                                               v149,
                                               v148);
                          v151 = __rdtsc();
                          v152 = __ROR8__(v151, 3);
                          v153 = ((0x7010008004002001LL * (v152 ^ v151)) ^ (((v152 ^ v151)
                                                                           * (unsigned __int128)0x7010008004002001uLL) >> 64))
                               % 0xB;
                          if ( v153 > 5 )
                          {
                            v157 = v153 - 6;
                            if ( v157 )
                            {
                              v158 = v157 - 1;
                              if ( v158 )
                              {
                                v159 = v158 - 1;
                                if ( v159 )
                                {
                                  if ( v159 == 1 )
                                  {
                                    v156 = __ROR4__(-1333354868, 33);
                                  }
                                  else
                                  {
                                    v160 = __rdtsc();
                                    v161 = __ROR8__(v160, 3);
                                    v162 = (((v161 ^ v160) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v161 ^ v160));
                                    v156 = ((((((v162 % 0x1A + 97) << 8) | ((v162 >> 5) % 0x1A + 65)) << 8) | ((v162 >> 10) % 0x1A + 97)) << 8) | ((v162 >> 15) % 0x1A + 65);
                                  }
                                }
                                else
                                {
                                  v156 = __ROR4__(1684422978, 8);
                                }
                              }
                              else
                              {
                                v156 = __ROL4__(-2100910376, 7);
                              }
                            }
                            else
                            {
                              v156 = __ROR4__(1314342516, 24);
                            }
                          }
                          else if ( v153 == 5 )
                          {
                            v156 = __ROR4__(680282605, 5);
                          }
                          else if ( v153 )
                          {
                            v154 = v153 - 1;
                            if ( v154 )
                            {
                              v155 = v154 - 1;
                              if ( v155 )
                              {
                                if ( v155 == 1 )
                                  v156 = __ROR4__(-1474152133, 15);
                                else
                                  v156 = __ROL4__(1728537748, 4);
                              }
                              else
                              {
                                v156 = __ROR4__(-2051698419, 2);
                              }
                            }
                            else
                            {
                              v156 = __ROL4__(-1297272415, 1);
                            }
                          }
                          else
                          {
                            v156 = __ROR4__(-795291432, 6);
                          }
                          v163 = (*((__int64 (__fastcall **)(__int64, __int64, _QWORD))v21 + 32))(64LL, 80LL, v156);
                          v164 = v225;
                          if ( v163 )
                            v164 = (_BYTE *)v163;
                          *(_QWORD *)v164 = &v222;
                          *((_QWORD *)v164 + 1) = v214;
                          *((_QWORD *)v164 + 2) = v227 + (v147 << 12);
                          *((_DWORD *)v164 + 10) = 1;
                          *((_QWORD *)v164 + 9) = v164;
                          *((_QWORD *)v164 + 6) = 0LL;
                          *((_QWORD *)v164 + 3) = &v113[20 * v147];
                          *((_DWORD *)v164 + 8) = (_DWORD)v215;
                          *((_QWORD *)v164 + 8) = sub_140C88510;
                          if ( _InterlockedIncrement((volatile signed __int32 *)&v224) == 1 && HIDWORD(v224) )
                            KeWaitForGate((__int64)v223, 0LL);
                          HIDWORD(v224) = 1;
                          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v164 + 48), CriticalWorkQueue);
                          if ( v164 == v225 && HIDWORD(v224) )
                          {
                            KeWaitForGate((__int64)v223, 0LL);
                            if ( (_DWORD)v224 )
                            {
                              do
                                KeWaitForGate((__int64)v223, 0LL);
                              while ( (_DWORD)v224 );
                              v21 = (_BYTE *)v217;
                            }
                            HIDWORD(v224) = 0;
                          }
                          if ( !v214 && HIDWORD(v224) )
                          {
                            KeWaitForGate((__int64)v223, 0LL);
                            if ( (_DWORD)v224 )
                            {
                              do
                                KeWaitForGate((__int64)v223, 0LL);
                              while ( (_DWORD)v224 );
                              v21 = (_BYTE *)v217;
                            }
                            HIDWORD(v224) = 0;
                          }
                          v116 = v211;
                          v113 = v216;
                          v147 += v211;
                        }
                        while ( v147 < (unsigned int)v114 );
                      }
                      else
                      {
                        v117 = v114;
                        v215 = v113;
                        v118 = *((_QWORD *)v21 + 346);
                        v219 = (char *)v118;
                        v208 = v117;
                        v206 = v76;
                        do
                        {
                          v119 = 8LL;
                          v120 = 0;
                          if ( v117 < 8 )
                            v119 = v117;
                          v121 = (_QWORD *)v118;
                          v122 = v206;
                          v214 = &v220;
                          do
                          {
                            v121[1] = 4096LL;
                            v123 = (_QWORD *)(v122 + (v120 << 12));
                            *v121 = v123;
                            v124 = v123;
                            v125 = *((_QWORD *)v21 + 263);
                            *((_DWORD *)v21 + 530) += 4096;
                            v126 = *((_DWORD *)v21 + 525);
                            v232 = v125;
                            v127 = (const char *)v123;
                            if ( v123 < v123 + 512 )
                            {
                              do
                              {
                                _mm_prefetch(v127, 0);
                                v127 += 64;
                              }
                              while ( v127 < (const char *)v123 + 4096 );
                            }
                            v128 = v232;
                            v129 = v232;
                            v233 = 32;
                            do
                            {
                              v130 = 8LL;
                              do
                              {
                                v131 = *v124 ^ v129;
                                v132 = v124 + 1;
                                v133 = *v132 ^ __ROL8__(v131, v126);
                                v124 = v132 + 1;
                                v129 = __ROL8__(v133, v126);
                                --v130;
                              }
                              while ( v130 );
                              v134 = __ROL8__(v128 ^ ((char *)v124 - (char *)v123), 17) ^ v128 ^ ((char *)v124
                                                                                                - (char *)v123);
                              v126 = ((unsigned __int8)(((v134 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v134) ^ (unsigned __int8)v126) & 0x3F;
                              if ( !v126 )
                                LOBYTE(v126) = 1;
                              --v233;
                            }
                            while ( v233 );
                            v21 = (_BYTE *)v217;
                            v135 = v129;
                            v122 = v206;
                            while ( 1 )
                            {
                              v135 >>= 31;
                              if ( !v135 )
                                break;
                              LODWORD(v129) = v135 ^ v129;
                            }
                            v136 = v214;
                            ++v120;
                            v121 += 6;
                            *(_DWORD *)v214 = v129 & 0x7FFFFFFF;
                            v214 = (__int128 *)((char *)v136 + 4);
                          }
                          while ( v120 < (unsigned int)v119 );
                          v118 = (__int64)v219;
                          sub_140553DDC((__int64)v21, (__int64)v219, v119);
                          v137 = &v220;
                          v138 = v215;
                          v139 = (char *)(v118 + 16);
                          v140 = v215 + 16;
                          v234 = (unsigned int)v119;
                          do
                          {
                            v141 = 16;
                            v142 = v139;
                            v143 = v138;
                            v144 = 2LL;
                            do
                            {
                              v141 -= 8;
                              *v143 = *(_QWORD *)v142;
                              v142 += 8;
                              ++v143;
                              --v144;
                            }
                            while ( v144 );
                            for ( ; v141; --v141 )
                            {
                              v145 = *v142++;
                              *(_BYTE *)v143 = v145;
                              v143 = (_QWORD *)((char *)v143 + 1);
                            }
                            v139 += 48;
                            v138 = (_QWORD *)((char *)v138 + 20);
                            v146 = *(_DWORD *)v137 ^ *v140;
                            v137 = (__int128 *)((char *)v137 + 4);
                            *v140 ^= v146 & 0x7FFFFFFF;
                            v140 += 5;
                            --v234;
                          }
                          while ( v234 );
                          v21 = (_BYTE *)v217;
                          v206 += (unsigned int)((_DWORD)v119 << 12);
                          v117 = v208 - v119;
                          v215 += 20 * v119;
                          *(_DWORD *)(v217 + 2120) += (_DWORD)v119 << 15;
                          v208 = v117;
                        }
                        while ( v117 );
                        LODWORD(v114) = v210;
                        v113 = v216;
                      }
                      v78 = (char *)v213;
                    }
                    for ( j = 5LL * (unsigned int)v114; ; j = 5 * v114 )
                    {
                      v166 = &v113[4 * j];
                      if ( v166 == v78 || v166[15] >= 0 )
                        break;
                      v114 = (unsigned int)(v114 + 1);
                    }
                    v76 = (unsigned int)((_DWORD)v114 << 12) + v227;
                    v227 = v76;
                    v113 += 20 * (unsigned int)v114;
                    v216 = v113;
                  }
                  while ( v113 != v78 );
                  v38 = v218;
                }
                if ( v211 && HIDWORD(v224) )
                {
                  do
                    KeWaitForGate((__int64)v223, 0LL);
                  while ( (_DWORD)v224 );
                  v224 = 0LL;
                }
                if ( (a3 & 1) == 0 )
                  return 0LL;
                v167 = v212;
                if ( !v212 )
                  return 0LL;
                v168 = *((unsigned int *)v21 + 513);
                v169 = v168 + 48;
                if ( (unsigned int)(v168 + 48) <= *((_DWORD *)v21 + 665) )
                {
                  v170 = (__int64)v21;
                  *((_DWORD *)v21 + 513) = v169;
LABEL_262:
                  ++*(_DWORD *)(v170 + 2092);
                  v177 = (_QWORD *)(v170 + v168);
                  v178 = 48;
                  v179 = v170 + v168;
                  v180 = 6LL;
                  do
                  {
                    *v177 = 0LL;
                    v178 -= 8;
                    ++v177;
                    --v180;
                  }
                  while ( v180 );
                  for ( ; v178; --v178 )
                  {
                    *(_BYTE *)v177 = 0;
                    v177 = (_QWORD *)((char *)v177 + 1);
                  }
                  *(_DWORD *)v179 = 13;
                  *(_QWORD *)(v179 + 8) = v38;
                  v181 = (_QWORD *)v38;
                  *(_DWORD *)(v179 + 16) = v167;
                  *(_DWORD *)(v170 + 2120) += v167;
                  v182 = *(_DWORD *)(v170 + 2100);
                  if ( v38 < v38 + v167 )
                  {
                    v183 = (const char *)v38;
                    do
                    {
                      _mm_prefetch(v183, 0);
                      v183 += 64;
                    }
                    while ( (unsigned __int64)v183 < v38 + v167 );
                  }
                  v184 = *(_QWORD *)(v170 + 2104);
                  v185 = (unsigned int)v167 >> 7;
                  if ( (unsigned int)v167 >> 7 )
                  {
                    do
                    {
                      v186 = 8LL;
                      do
                      {
                        v187 = *v181 ^ v184;
                        v188 = v181 + 1;
                        v189 = *v188 ^ __ROL8__(v187, v182);
                        v181 = v188 + 1;
                        v184 = __ROL8__(v189, v182);
                        --v186;
                      }
                      while ( v186 );
                      v190 = __ROL8__(*(_QWORD *)(v170 + 2104) ^ ((unsigned __int64)v181 - v38), 17) ^ *(_QWORD *)(v170 + 2104) ^ ((unsigned __int64)v181 - v38);
                      v182 = ((unsigned __int8)(((v190 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v190) ^ (unsigned __int8)v182) & 0x3F;
                      if ( !v182 )
                        LOBYTE(v182) = 1;
                      --v185;
                    }
                    while ( v185 );
                    v179 = v170 + v168;
                  }
                  v191 = v167 & 0x7F;
                  if ( v191 >= 8 )
                  {
                    v192 = (unsigned __int64)(v167 & 0x7F) >> 3;
                    do
                    {
                      v184 = __ROL8__(*v181++ ^ v184, v182);
                      v191 -= 8;
                      --v192;
                    }
                    while ( v192 );
                  }
                  for ( ; v191; --v191 )
                  {
                    v193 = *(unsigned __int8 *)v181;
                    v181 = (_QWORD *)((char *)v181 + 1);
                    v184 = __ROL8__(v193 ^ v184, v182);
                  }
                  for ( k = v184; ; LODWORD(v184) = k ^ v184 )
                  {
                    k >>= 31;
                    if ( !k )
                      break;
                  }
                  *(_DWORD *)(v179 + 20) = v184 & 0x7FFFFFFF;
                  *(_DWORD *)(v170 + 2120) += v167;
                  if ( (*(_DWORD *)(v170 + 2520) & 0x20000000) != 0 )
                  {
                    if ( (_DWORD)v167 )
                      sub_140553D6C(v170, v38, v167, v179 + 28);
                  }
                  *(_DWORD *)(v179 + 24) = 1;
                  *(_QWORD *)a1 = v170;
                  return 0LL;
                }
                v170 = sub_140C7E7A8(v21, v169, *((_DWORD *)v21 + 593));
                if ( v170 )
                {
                  v171 = *((_DWORD *)v21 + 630);
                  if ( (v171 & 2) == 0 )
                  {
                    v172 = *((_DWORD *)v21 + 513);
                    v173 = *((_QWORD *)v21 + 253);
                    v174 = (v171 & 0x10000000) != 0 ? *((_DWORD *)v21 + 593) : 0;
                    if ( v172 >= 8 )
                    {
                      v175 = (unsigned __int64)v172 >> 3;
                      do
                      {
                        *(_QWORD *)v21 = 0LL;
                        v172 -= 8;
                        v21 += 8;
                        --v175;
                      }
                      while ( v175 );
                    }
                    for ( ; v172; --v172 )
                      *v21++ = 0;
                    v176 = *(_DWORD *)(v170 + 2372);
                    *(_DWORD *)(v170 + 2372) = v174;
                    if ( v174 == 3 )
                    {
                      (*(void (__fastcall **)(__int64))(v170 + 880))(v173);
                    }
                    else if ( (*(_DWORD *)(v170 + 2520) & 0x8000000) != 0 || !v174 )
                    {
                      (*(void (__fastcall **)(__int64))(v170 + 264))(v173);
                    }
                    else
                    {
                      (*(void (__fastcall **)(__int64, _QWORD))(v170 + 568))(v173 - 8, *(_QWORD *)(v173 - 8));
                    }
                    *(_DWORD *)(v170 + 2372) = v176;
                  }
                  *(_DWORD *)(v170 + 2520) &= ~2u;
                  goto LABEL_262;
                }
                return 3221225626LL;
              }
            }
            else
            {
              v41 = 1;
            }
            if ( *v42 == 1414090313 && v42[1] == 1195525195 && (*((_DWORD *)v21 + 631) & 0x2000) != 0 )
              v41 = 0;
            goto LABEL_91;
          }
LABEL_68:
          v41 = 1;
          goto LABEL_84;
        }
        if ( v44 != 1095914053 || *(_WORD *)v45 != 16724 )
          goto LABEL_60;
        goto LABEL_68;
      }
      return 3221225626LL;
    }
    v196 = *((_DWORD *)v3 + 630);
    if ( (v196 & 0x100000) == 0 )
      KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, a2, 4uLL, 0LL);
    if ( !*((_DWORD *)v3 + 582) )
    {
      *((_QWORD *)v3 + 293) = 0LL;
      *((_QWORD *)v3 + 294) = 271LL;
      *((_QWORD *)v3 + 292) = v3 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v3 + 295) = a2;
      *((_DWORD *)v3 + 582) = 1;
      if ( (v196 & 0x20000000) == 0 && (*((_DWORD *)v3 + 631) & 0x200000) != 0 && (v196 & 1) != 0 )
      {
        v197 = *((unsigned int *)v3 + 669);
        v198 = *((_QWORD *)v3 + 263);
        v199 = *((_QWORD *)v3 + 335);
        v200 = &v3[v197];
        v201 = (unsigned __int64)&v3[8 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v3 + 513) - v197) >> 3) + v197];
        if ( &v3[v197] != (_BYTE *)v201 )
        {
          do
          {
            *v200 ^= v199;
            v202 = *v200++ ^ v198;
            v199 = (v202 + __ROR8__(v199, v199 & 0x3F)) ^ 0xF05;
          }
          while ( v200 != (_QWORD *)v201 );
        }
        *((_DWORD *)v3 + 631) &= ~0x200000u;
        if ( v199 != *((_QWORD *)v3 + 336) )
        {
          v203 = *((_QWORD *)v3 + 177);
          v204 = *((_DWORD *)v3 + 513);
          *(_QWORD *)v203 = v3;
          *(_DWORD *)(v203 + 16) = v204;
          if ( !*((_DWORD *)v3 + 582) )
            *(_QWORD *)(*((_QWORD *)v3 + 177) + 24LL) = *((_QWORD *)v3 + 336) ^ v199;
          sub_140C7F03C((__int64)v3, 0LL, v199, 256LL);
        }
      }
    }
  }
  return 3221225595LL;
}
