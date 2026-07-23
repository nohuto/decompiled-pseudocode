/*
 * XREFs of sub_140553E5C @ 0x140553E5C
 * Callers:
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C68010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_140553D6C @ 0x140553D6C (sub_140553D6C.c)
 *     sub_140553DDC @ 0x140553DDC (sub_140553DDC.c)
 *     sub_140C7F03C @ 0x140C7F03C (sub_140C7F03C.c)
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140553E5C(__int64 a1, int *a2)
{
  __int64 v2; // r9
  int *v3; // rdi
  __int64 v4; // rbx
  int *v5; // r15
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r10
  __int64 v9; // rdx
  int *v10; // r13
  __int64 v11; // r11
  unsigned int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r14
  int *v17; // rsi
  __int64 v18; // r9
  _QWORD *v19; // r8
  const char *v20; // rax
  int v21; // r10d
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  unsigned __int64 i; // rax
  _DWORD *v27; // rsi
  unsigned int v28; // edi
  int v29; // r15d
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rbp
  int v34; // eax
  char *v35; // r9
  char *v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rax
  char v39; // cl
  char v40; // al
  bool v41; // zf
  __int64 v42; // rcx
  unsigned __int8 v43; // bp
  unsigned int *v44; // rcx
  unsigned int *v45; // rdi
  char v46; // r14
  unsigned __int64 v47; // rsi
  __int64 v48; // rdx
  char *v49; // r8
  unsigned int *v50; // r9
  __int64 v51; // rcx
  __int64 v52; // rax
  char v53; // cl
  char v54; // al
  __int64 v55; // rax
  int v56; // ecx
  __int64 v57; // rcx
  __int64 v58; // r10
  __int64 v59; // r8
  _QWORD *v60; // rdx
  unsigned __int64 v61; // r9
  int v62; // ecx
  __int64 v63; // rax
  int v64; // r15d
  unsigned __int8 v65; // bp
  unsigned __int64 v66; // rdi
  unsigned __int64 v67; // r12
  unsigned __int64 v68; // rsi
  int v69; // eax
  int v70; // ecx
  __int64 v71; // rcx
  __int64 v72; // r10
  __int64 v73; // r8
  unsigned __int64 v74; // r9
  int v75; // ecx
  __int64 v76; // rax
  __int64 v77; // r12
  int *v78; // rax
  char **v79; // rbp
  unsigned int v80; // ecx
  __int64 v81; // r13
  unsigned int v82; // r11d
  __int64 v83; // r12
  _DWORD *v84; // r14
  char **v85; // rdi
  char *v86; // r9
  char *v87; // r10
  const char *v88; // rax
  int v89; // esi
  __int64 j; // r15
  unsigned __int64 v91; // r8
  int v92; // ebp
  __int64 v93; // rax
  __int64 v94; // r8
  __int64 v95; // rax
  unsigned __int64 v96; // rax
  __int64 v97; // rsi
  int *v98; // r14
  unsigned int v99; // edi
  unsigned int *v100; // rax
  _DWORD *v101; // r12
  __int64 v102; // r15
  __int64 v103; // rcx
  unsigned __int8 v104; // si
  unsigned __int64 v105; // rdi
  __int64 v106; // r14
  unsigned __int64 v107; // rbp
  int v108; // eax
  __int64 v109; // rcx
  int *v110; // r15
  __int64 v111; // rax
  int v112; // ecx
  __int64 v113; // rcx
  __int64 v114; // r10
  __int64 v115; // r8
  _QWORD *v116; // rdx
  unsigned __int64 v117; // r9
  int v118; // ecx
  __int64 v119; // rax
  unsigned int v120; // edx
  char *v121; // r8
  char *v122; // r9
  __int64 v123; // rcx
  __int64 v124; // rax
  char v125; // cl
  char v126; // al
  __int64 v127; // rcx
  unsigned __int64 v128; // rdi
  __int64 v129; // r14
  unsigned __int64 v130; // rbp
  int v131; // eax
  __int64 v132; // rax
  int v133; // ecx
  __int64 v134; // rcx
  __int64 v135; // r10
  __int64 v136; // r8
  _QWORD *v137; // rdx
  unsigned __int64 v138; // r9
  int v139; // ecx
  __int64 v140; // rax
  int *v141; // rax
  __int64 v142; // rdx
  int v143; // ecx
  int v144; // eax
  __int64 v145; // rcx
  __int64 v146; // r11
  __int64 v147; // r8
  _QWORD *v148; // r9
  unsigned __int64 v149; // r10
  int v150; // ecx
  __int64 v151; // rax
  int v152; // ecx
  __int64 v153; // rcx
  __int64 v154; // r11
  __int64 v155; // r8
  _QWORD *v156; // r9
  unsigned __int64 v157; // r10
  int v158; // ecx
  __int64 v159; // rax
  __int64 result; // rax
  __int64 v161; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v162; // [rsp+28h] [rbp-C0h]
  int *v163; // [rsp+28h] [rbp-C0h]
  __int64 v164; // [rsp+30h] [rbp-B8h]
  __int64 v165; // [rsp+30h] [rbp-B8h]
  int v166; // [rsp+38h] [rbp-B0h]
  __int64 v167; // [rsp+40h] [rbp-A8h]
  int v168; // [rsp+48h] [rbp-A0h]
  _BYTE *v169; // [rsp+48h] [rbp-A0h]
  int *v170; // [rsp+50h] [rbp-98h]
  int *v171; // [rsp+50h] [rbp-98h]
  __int64 v172; // [rsp+58h] [rbp-90h]
  int *v173; // [rsp+60h] [rbp-88h]
  _BYTE v174[16]; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v175[112]; // [rsp+78h] [rbp-70h] BYREF
  unsigned int v177; // [rsp+F0h] [rbp+8h]
  _DWORD *v179; // [rsp+100h] [rbp+18h]
  unsigned int v180; // [rsp+100h] [rbp+18h]
  int v181; // [rsp+108h] [rbp+20h]

  v2 = *((_QWORD *)a2 + 4);
  v3 = a2 + 12;
  v4 = a1;
  v164 = v2;
  v173 = v3;
  v5 = a2;
  v6 = *(unsigned int *)(a1 + 2116);
  v7 = ((v2 & 0xFFF) + (unsigned __int64)(unsigned int)a2[10] + 4095) >> 12;
  v8 = (unsigned int)v7;
  v168 = v7;
  v162 = (unsigned int)v7;
  v9 = (__int64)&a2[5 * (unsigned int)v7 + 12];
  v172 = v9;
  v10 = &v3[5 * v6];
  v11 = v2 + (unsigned int)((_DWORD)v6 << 12);
  v170 = v10;
  v167 = v11;
  if ( (*(_DWORD *)(v4 + 2520) & 0x20000000) != 0 && (*(_DWORD *)(v4 + 2524) & 0x1000) == 0 || !*(_QWORD *)(v4 + 2768) )
  {
    v12 = 0;
    v177 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v7 <= 0x10 )
      {
        v9 = v12;
        if ( v12 >= (unsigned int)v7 )
          goto LABEL_40;
      }
      else
      {
        v13 = __rdtsc();
        v14 = __ROR8__(v13, 3);
        v9 = ((((v14 ^ v13) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v14 ^ v13)))
           % v8;
      }
      v15 = (unsigned int)v9;
      v9 = (unsigned int)((_DWORD)v9 << 12);
      v16 = v2 + (unsigned int)v9;
      v17 = &v3[5 * v15];
      v171 = v17;
      if ( *((char *)v17 + 15) >= 0 )
      {
        *(_DWORD *)(v4 + 2120) += 4096;
        LODWORD(v18) = *(_DWORD *)(v4 + 2100);
        v19 = (_QWORD *)v16;
        v20 = (const char *)v16;
        if ( v16 < (unsigned __int64)(v16 + 4096) )
        {
          do
          {
            _mm_prefetch(v20, 0);
            v20 += 64;
          }
          while ( (unsigned __int64)v20 < v16 + 4096 );
        }
        v21 = 32;
        v22 = *(_QWORD *)(v4 + 2104);
        do
        {
          v23 = 8LL;
          do
          {
            v24 = v19[1] ^ __ROL8__(*v19 ^ v22, v18);
            v19 += 2;
            v22 = __ROL8__(v24, v18);
            --v23;
          }
          while ( v23 );
          v25 = __ROL8__(*(_QWORD *)(v4 + 2104) ^ ((unsigned __int64)v19 - v16), 17) ^ *(_QWORD *)(v4 + 2104) ^ ((unsigned __int64)v19 - v16);
          v18 = ((unsigned __int8)(((v25 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v25) ^ (unsigned __int8)v18) & 0x3F;
          if ( !(_DWORD)v18 )
            v18 = 1LL;
          --v21;
        }
        while ( v21 );
        for ( i = v22; ; LODWORD(v22) = i ^ v22 )
        {
          i >>= 31;
          if ( !i )
            break;
        }
        v27 = v17 + 4;
        v28 = v22 & 0x7FFFFFFF;
        v179 = v27;
        if ( v28 != (*v27 & 0x7FFFFFFF) )
        {
          v29 = *v27 >> 31;
          if ( (*(_DWORD *)(v4 + 2524) & 0x40) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            v31 = v16 & 0xFFFFFFFFFFFFF000uLL;
            v32 = (v16 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 2 )
            {
              v33 = CurrentIrql;
              while ( 1 )
              {
                v34 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(v4 + 1128))(
                        v31,
                        0LL,
                        v19,
                        v18);
                if ( v34 != -1073741267 )
                  break;
                if ( !v29 )
                  goto LABEL_48;
                if ( CurrentIrql > 1u )
                  goto LABEL_29;
                v33 = CurrentIrql;
                __writecr8(CurrentIrql);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v34 < 0 )
              {
LABEL_48:
                __writecr8(v33);
                v27 = v179;
                goto LABEL_49;
              }
LABEL_29:
              v18 = 4096LL;
              v31 += 4096LL;
              v32 += 4096LL;
              if ( v32 != ((v16 + 4095) | 0xFFF) )
                continue;
              break;
            }
            __writecr8(v33);
            v27 = v179;
          }
          else
          {
LABEL_49:
            v55 = (unsigned int)*v27;
            LODWORD(v55) = v55 & 0x7FFFFFFF;
            if ( !*(_DWORD *)(v4 + 2328) )
            {
              *(_QWORD *)(*(_QWORD *)(v4 + 1416) + 24LL) = v55 ^ v28;
              if ( !*(_DWORD *)(v4 + 2328) )
              {
                *(_QWORD *)(v4 + 2336) = v4 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v4 + 2344) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                v56 = *(_DWORD *)(v4 + 2520);
                *(_QWORD *)(v4 + 2352) = *a2;
                *(_QWORD *)(v4 + 2360) = v16;
                *(_DWORD *)(v4 + 2328) = 1;
                if ( (v56 & 0x20000000) == 0 && (*(_DWORD *)(v4 + 2524) & 0x200000) != 0 && (v56 & 1) != 0 )
                {
                  v57 = *(unsigned int *)(v4 + 2676);
                  v58 = *(_QWORD *)(v4 + 2104);
                  v59 = *(_QWORD *)(v4 + 2680);
                  v60 = (_QWORD *)(v57 + v4);
                  v61 = v57 + v4 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v4 + 2052) - v57) >> 3);
                  while ( v60 != (_QWORD *)v61 )
                  {
                    *v60 ^= v59;
                    v59 = ((v58 ^ *v60++) + __ROR8__(v59, v59 & 0x3F)) ^ 0xF05;
                  }
                  *(_DWORD *)(v4 + 2524) &= ~0x200000u;
                  if ( v59 != *(_QWORD *)(v4 + 2688) )
                  {
                    v62 = *(_DWORD *)(v4 + 2052);
                    v63 = *(_QWORD *)(v4 + 1416);
                    *(_QWORD *)v63 = v4;
                    *(_DWORD *)(v63 + 16) = v62;
                    if ( !*(_DWORD *)(v4 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v4 + 1416) + 24LL) = v59 ^ *(_QWORD *)(v4 + 2688);
                    sub_140C7F03C(v4, 0LL, v59, 256LL);
                  }
                }
              }
            }
          }
        }
        sub_140553D6C(v4, v16, 0x1000u, (__int64)v174);
        v35 = (char *)v171;
        v36 = v174;
        v9 = 16LL;
        do
        {
          v37 = *(_QWORD *)v36;
          v36 += 8;
          v38 = *(_QWORD *)v35;
          v35 += 8;
          if ( v37 != v38 )
            goto LABEL_61;
          v9 = (unsigned int)(v9 - 8);
        }
        while ( (unsigned int)v9 >= 8 );
        if ( !(_DWORD)v9 )
          goto LABEL_37;
        while ( 1 )
        {
          v39 = *v36++;
          v40 = *v35++;
          if ( v39 != v40 )
            break;
          v41 = (_DWORD)v9 == 1;
          v9 = (unsigned int)(v9 - 1);
          if ( v41 )
            goto LABEL_37;
        }
LABEL_61:
        v64 = *v27 >> 31;
        if ( (*(_DWORD *)(v4 + 2524) & 0x40) != 0 )
        {
          v65 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v66 = v16 & 0xFFFFFFFFFFFFF000uLL;
          v67 = (v16 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v68 = v65;
            while ( 1 )
            {
              v69 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, char *, char *))(v4 + 1128))(
                      v66,
                      0LL,
                      v36,
                      v35);
              if ( v69 != -1073741267 )
                break;
              if ( !v64 )
                goto LABEL_71;
              if ( v65 > 1u )
                goto LABEL_69;
              v68 = v65;
              __writecr8(v65);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v69 < 0 )
            {
LABEL_71:
              __writecr8(v68);
              goto LABEL_72;
            }
LABEL_69:
            v66 += 4096LL;
            v67 += 4096LL;
            if ( v67 != ((v16 + 4095) | 0xFFF) )
              continue;
            break;
          }
          __writecr8(v68);
LABEL_37:
          v5 = a2;
          goto LABEL_38;
        }
LABEL_72:
        if ( *(_DWORD *)(v4 + 2328) )
          goto LABEL_37;
        v5 = a2;
        v70 = *(_DWORD *)(v4 + 2520);
        *(_QWORD *)(v4 + 2336) = v4 - 0x5C5FC0A76E374B18LL;
        v9 = 1LL;
        *(_QWORD *)(v4 + 2344) = (char *)a2 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v4 + 2352) = *a2;
        *(_QWORD *)(v4 + 2360) = v16;
        *(_DWORD *)(v4 + 2328) = 1;
        if ( (v70 & 0x20000000) == 0 && (*(_DWORD *)(v4 + 2524) & 0x200000) != 0 && (v70 & 1) != 0 )
        {
          v71 = *(unsigned int *)(v4 + 2676);
          v72 = *(_QWORD *)(v4 + 2104);
          v73 = *(_QWORD *)(v4 + 2680);
          v9 = v71 + v4;
          v74 = v71 + v4 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v4 + 2052) - v71) >> 3);
          while ( v9 != v74 )
          {
            *(_QWORD *)v9 ^= v73;
            v73 = ((v72 ^ *(_QWORD *)v9) + __ROR8__(v73, v73 & 0x3F)) ^ 0xF05;
            v9 += 8LL;
          }
          *(_DWORD *)(v4 + 2524) &= ~0x200000u;
          if ( v73 != *(_QWORD *)(v4 + 2688) )
          {
            v75 = *(_DWORD *)(v4 + 2052);
            v76 = *(_QWORD *)(v4 + 1416);
            *(_QWORD *)v76 = v4;
            *(_DWORD *)(v76 + 16) = v75;
            if ( !*(_DWORD *)(v4 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v4 + 1416) + 24LL) = v73 ^ *(_QWORD *)(v4 + 2688);
            sub_140C7F03C(v4, 0LL, v73, 256LL);
          }
        }
LABEL_38:
        *(_DWORD *)(v4 + 2120) += 0x10000;
        v3 = v5 + 12;
        LODWORD(v7) = v168;
        v2 = v164;
        v8 = v162;
      }
      v12 = v177 + 1;
      v177 = v12;
      if ( v12 >= 0x10 )
        goto LABEL_40;
    }
  }
  if ( v10 == (int *)v9 )
  {
LABEL_40:
    v42 = *(_QWORD *)(v4 + 1336);
    v43 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    (*(void (__fastcall **)(__int64, __int64))(v4 + 352))(v42, v9);
    v44 = **(unsigned int ***)(v4 + 1568);
    v45 = v44 + 4;
    v46 = *((_BYTE *)v44 + 12);
    v47 = (unsigned __int64)&v44[6 * *v44 + 4];
    do
    {
      v48 = 24LL;
      v49 = (char *)(v5 + 6);
      v50 = v45;
      while ( 1 )
      {
        v51 = *(_QWORD *)v50;
        v50 += 2;
        v52 = *(_QWORD *)v49;
        v49 += 8;
        if ( v51 != v52 )
          break;
        v48 = (unsigned int)(v48 - 8);
        if ( (unsigned int)v48 < 8 )
        {
          if ( !(_DWORD)v48 )
            goto LABEL_171;
          while ( 1 )
          {
            v53 = *(_BYTE *)v50;
            v50 = (unsigned int *)((char *)v50 + 1);
            v54 = *v49++;
            if ( v53 != v54 )
              goto LABEL_170;
            v41 = (_DWORD)v48 == 1;
            v48 = (unsigned int)(v48 - 1);
            if ( v41 )
              goto LABEL_171;
          }
        }
      }
LABEL_170:
      v45 += 6;
    }
    while ( (unsigned __int64)v45 < v47 );
LABEL_171:
    (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v4 + 416))(*(_QWORD *)(v4 + 1336), v48, v49, v50);
    __writecr8(v43);
    if ( !v46 )
      goto LABEL_201;
    v143 = *(_DWORD *)(v4 + 2524);
    if ( (v143 & 0x10) != 0 && !*(_DWORD *)(v4 + 2328) )
    {
      *(_QWORD *)(v4 + 2336) = v4 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v4 + 2344) = (char *)v5 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(v4 + 2352) = *v5;
      v144 = *(_DWORD *)(v4 + 2520);
      *(_QWORD *)(v4 + 2360) = 1LL;
      *(_DWORD *)(v4 + 2328) = 1;
      if ( (v144 & 0x20000000) == 0 && (v143 & 0x200000) != 0 && (v144 & 1) != 0 )
      {
        v145 = *(unsigned int *)(v4 + 2676);
        v146 = *(_QWORD *)(v4 + 2104);
        v147 = *(_QWORD *)(v4 + 2680);
        v148 = (_QWORD *)(v145 + v4);
        v149 = v145 + v4 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v4 + 2052) - v145) >> 3);
        while ( v148 != (_QWORD *)v149 )
        {
          *v148 ^= v147;
          v147 = ((*v148++ ^ v146) + __ROR8__(v147, v147 & 0x3F)) ^ 0xF05;
        }
        *(_DWORD *)(v4 + 2524) &= ~0x200000u;
        if ( v147 != *(_QWORD *)(v4 + 2688) )
        {
          v150 = *(_DWORD *)(v4 + 2052);
          v151 = *(_QWORD *)(v4 + 1416);
          *(_QWORD *)v151 = v4;
          *(_DWORD *)(v151 + 16) = v150;
          if ( !*(_DWORD *)(v4 + 2328) )
            *(_QWORD *)(*(_QWORD *)(v4 + 1416) + 24LL) = v147 ^ *(_QWORD *)(v4 + 2688);
          sub_140C7F03C(v4, 0LL, v147, 256LL);
        }
      }
    }
    if ( *((_QWORD *)v5 + 3) != 1LL )
    {
LABEL_201:
      if ( v45 == (unsigned int *)v47 && !*(_DWORD *)(v4 + 2328) )
      {
        v152 = *(_DWORD *)(v4 + 2520);
        *(_QWORD *)(v4 + 2336) = v4 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v4 + 2344) = (char *)v5 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v4 + 2352) = *v5;
        *(_QWORD *)(v4 + 2360) = v45;
        *(_DWORD *)(v4 + 2328) = 1;
        if ( (v152 & 0x20000000) == 0 && (*(_DWORD *)(v4 + 2524) & 0x200000) != 0 && (v152 & 1) != 0 )
        {
          v153 = *(unsigned int *)(v4 + 2676);
          v154 = *(_QWORD *)(v4 + 2104);
          v155 = *(_QWORD *)(v4 + 2680);
          v156 = (_QWORD *)(v153 + v4);
          v157 = v153 + v4 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v4 + 2052) - v153) >> 3);
          while ( v156 != (_QWORD *)v157 )
          {
            *v156 ^= v155;
            v155 = ((*v156++ ^ v154) + __ROR8__(v155, v155 & 0x3F)) ^ 0xF05;
          }
          *(_DWORD *)(v4 + 2524) &= ~0x200000u;
          if ( v155 != *(_QWORD *)(v4 + 2688) )
          {
            v158 = *(_DWORD *)(v4 + 2052);
            v159 = *(_QWORD *)(v4 + 1416);
            *(_QWORD *)v159 = v4;
            *(_DWORD *)(v159 + 16) = v158;
            if ( !*(_DWORD *)(v4 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v4 + 1416) + 24LL) = v155 ^ *(_QWORD *)(v4 + 2688);
            sub_140C7F03C(v4, 0LL, v155, 256LL);
          }
        }
      }
    }
    LODWORD(v142) = 0;
  }
  else
  {
    while ( *(_DWORD *)(v4 + 2120) < *(_DWORD *)(v4 + 2124) )
    {
      v77 = 0LL;
      if ( v10 != (int *)v9 )
      {
        v78 = v10;
        do
        {
          if ( *((char *)v78 + 15) < 0 )
            break;
          v77 = (unsigned int)(v77 + 1);
          v78 = &v10[5 * v77];
        }
        while ( v78 != (int *)v9 );
        v11 = v167;
        if ( (_DWORD)v77 )
        {
          v79 = *(char ***)(v4 + 2768);
          v80 = v77;
          v166 = v77;
          v181 = 0;
          v163 = v10;
          v161 = v167;
          v165 = (__int64)v79;
          while ( 1 )
          {
            v81 = 8LL;
            if ( v80 < 8 )
              v81 = v80;
            v82 = 0;
            v83 = v161;
            v84 = v175;
            v85 = v79;
            do
            {
              v85[1] = (char *)4096;
              v86 = (char *)(v83 + (v82 << 12));
              *v85 = v86;
              v87 = v86;
              *(_DWORD *)(v4 + 2120) += 4096;
              v88 = v86;
              v89 = *(_DWORD *)(v4 + 2100);
              for ( j = *(_QWORD *)(v4 + 2104); v88 < v86 + 4096; v88 += 64 )
                _mm_prefetch(v88, 0);
              v91 = *(_QWORD *)(v4 + 2104);
              v92 = 32;
              do
              {
                v93 = 8LL;
                do
                {
                  v94 = *((_QWORD *)v87 + 1) ^ __ROL8__(*(_QWORD *)v87 ^ v91, v89);
                  v87 += 16;
                  v91 = __ROL8__(v94, v89);
                  --v93;
                }
                while ( v93 );
                v95 = __ROL8__(j ^ (v87 - v86), 17);
                v89 = ((unsigned __int8)(v95 ^ j ^ ((_BYTE)v87 - v83) ^ (((v95 ^ j ^ (unsigned __int64)&v87[-v83 + -4096 * v82])
                                                                        * (unsigned __int128)0x7010008004002001uLL) >> 64)) ^ (unsigned __int8)v89) & 0x3F;
                if ( !v89 )
                  LOBYTE(v89) = 1;
                --v92;
              }
              while ( v92 );
              v4 = a1;
              v96 = v91;
              v83 = v161;
              while ( 1 )
              {
                v96 >>= 31;
                if ( !v96 )
                  break;
                LODWORD(v91) = v96 ^ v91;
              }
              ++v82;
              *v84 = v91 & 0x7FFFFFFF;
              v85 += 6;
              ++v84;
            }
            while ( v82 < (unsigned int)v81 );
            v97 = v161;
            v98 = v163;
            v79 = (char **)v165;
            sub_140553DDC(a1, v165, v81);
            v99 = 0;
            v180 = 0;
            v100 = (unsigned int *)v175;
            v169 = v175;
            v101 = v163 + 4;
            do
            {
              v102 = *v100;
              if ( (_DWORD)v102 == (*v101 & 0x7FFFFFFF) )
                goto LABEL_130;
              v103 = v97 + (v99 << 12);
              if ( (*(_DWORD *)(a1 + 2524) & 0x40) != 0 )
              {
                v104 = KeGetCurrentIrql();
                v105 = v103 & 0xFFFFFFFFFFFFF000uLL;
                v106 = (v103 + 4095) | 0xFFF;
                v107 = (v103 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  __writecr8(2uLL);
                  while ( 1 )
                  {
                    v108 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 1128))(v105, 0LL);
                    if ( v108 == -1073741267 )
                      break;
                    if ( v108 < 0 )
                    {
                      __writecr8(v104);
                      v99 = v180;
                      v97 = v161;
                      v98 = v163;
                      v79 = (char **)v165;
                      goto LABEL_118;
                    }
LABEL_115:
                    v105 += 4096LL;
                    v107 += 4096LL;
                    if ( v107 == v106 )
                    {
LABEL_116:
                      __writecr8(v104);
                      v99 = v180;
                      goto LABEL_159;
                    }
                  }
                  if ( v104 > 1u )
                    goto LABEL_115;
                  __writecr8(v104);
                  KeGetCurrentIrql();
                }
              }
LABEL_118:
              v109 = (unsigned int)*v101;
              LODWORD(v109) = v109 & 0x7FFFFFFF;
              if ( *(_DWORD *)(a1 + 2328)
                || (*(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v102 ^ v109, *(_DWORD *)(a1 + 2328)) )
              {
LABEL_130:
                v110 = a2;
              }
              else
              {
                v110 = a2;
                *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(a1 + 2344) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                v111 = *a2;
                *(_QWORD *)(a1 + 2360) = v97 + (v99 << 12);
                v112 = *(_DWORD *)(a1 + 2520);
                *(_QWORD *)(a1 + 2352) = v111;
                *(_DWORD *)(a1 + 2328) = 1;
                if ( (v112 & 0x20000000) == 0 && (*(_DWORD *)(a1 + 2524) & 0x200000) != 0 && (v112 & 1) != 0 )
                {
                  v113 = *(unsigned int *)(a1 + 2676);
                  v114 = *(_QWORD *)(a1 + 2104);
                  v115 = *(_QWORD *)(a1 + 2680);
                  v116 = (_QWORD *)(v113 + a1);
                  v117 = v113 + a1 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 2052) - v113) >> 3);
                  while ( v116 != (_QWORD *)v117 )
                  {
                    *v116 ^= v115;
                    v115 = ((v114 ^ *v116++) + __ROR8__(v115, v115 & 0x3F)) ^ 0xF05;
                  }
                  *(_DWORD *)(a1 + 2524) &= ~0x200000u;
                  if ( v115 != *(_QWORD *)(a1 + 2688) )
                  {
                    v118 = *(_DWORD *)(a1 + 2052);
                    v119 = *(_QWORD *)(a1 + 1416);
                    *(_QWORD *)v119 = a1;
                    *(_DWORD *)(v119 + 16) = v118;
                    if ( !*(_DWORD *)(a1 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v115 ^ *(_QWORD *)(a1 + 2688);
                    sub_140C7F03C(a1, 0LL, v115, 256LL);
                  }
                }
              }
              v120 = 16;
              v121 = (char *)&v98[5 * v99];
              v122 = (char *)&v79[6 * v99 + 2];
              do
              {
                v123 = *(_QWORD *)v122;
                v122 += 8;
                v124 = *(_QWORD *)v121;
                v121 += 8;
                if ( v123 != v124 )
                  goto LABEL_138;
                v120 -= 8;
              }
              while ( v120 >= 8 );
              if ( !v120 )
                goto LABEL_159;
              while ( 1 )
              {
                v125 = *v122++;
                v126 = *v121++;
                if ( v125 != v126 )
                  break;
                if ( !--v120 )
                  goto LABEL_159;
              }
LABEL_138:
              v127 = v97 + (v99 << 12);
              if ( (*(_DWORD *)(a1 + 2524) & 0x40) == 0 )
                goto LABEL_148;
              v104 = KeGetCurrentIrql();
              v128 = v127 & 0xFFFFFFFFFFFFF000uLL;
              v129 = (v127 + 4095) | 0xFFF;
              v130 = (v127 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_140:
              __writecr8(2uLL);
              while ( 1 )
              {
                v131 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, char *, char *))(a1 + 1128))(
                         v128,
                         0LL,
                         v121,
                         v122);
                if ( v131 != -1073741267 )
                  break;
                if ( v104 <= 1u )
                {
                  __writecr8(v104);
                  KeGetCurrentIrql();
                  goto LABEL_140;
                }
LABEL_145:
                v128 += 4096LL;
                v130 += 4096LL;
                if ( v130 == v129 )
                  goto LABEL_116;
              }
              if ( v131 >= 0 )
                goto LABEL_145;
              __writecr8(v104);
              v99 = v180;
              v97 = v161;
LABEL_148:
              if ( !*(_DWORD *)(a1 + 2328) )
              {
                *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(a1 + 2344) = (char *)v110 - 0x4C48B4211BBACBEBLL;
                v132 = *v110;
                *(_QWORD *)(a1 + 2360) = v97 + (v99 << 12);
                v133 = *(_DWORD *)(a1 + 2520);
                *(_QWORD *)(a1 + 2352) = v132;
                *(_DWORD *)(a1 + 2328) = 1;
                if ( (v133 & 0x20000000) == 0 && (*(_DWORD *)(a1 + 2524) & 0x200000) != 0 && (v133 & 1) != 0 )
                {
                  v134 = *(unsigned int *)(a1 + 2676);
                  v135 = *(_QWORD *)(a1 + 2104);
                  v136 = *(_QWORD *)(a1 + 2680);
                  v137 = (_QWORD *)(v134 + a1);
                  v138 = v134 + a1 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 2052) - v134) >> 3);
                  while ( v137 != (_QWORD *)v138 )
                  {
                    *v137 ^= v136;
                    v136 = ((v135 ^ *v137++) + __ROR8__(v136, v136 & 0x3F)) ^ 0xF05;
                  }
                  *(_DWORD *)(a1 + 2524) &= ~0x200000u;
                  if ( v136 != *(_QWORD *)(a1 + 2688) )
                  {
                    v139 = *(_DWORD *)(a1 + 2052);
                    v140 = *(_QWORD *)(a1 + 1416);
                    *(_QWORD *)v140 = a1;
                    *(_DWORD *)(v140 + 16) = v139;
                    if ( !*(_DWORD *)(a1 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v136 ^ *(_QWORD *)(a1 + 2688);
                    sub_140C7F03C(a1, 0LL, v136, 256LL);
                  }
                }
              }
LABEL_159:
              ++v99;
              v97 = v161;
              v100 = (unsigned int *)(v169 + 4);
              v98 = v163;
              v101 += 5;
              v79 = (char **)v165;
              v180 = v99;
              v169 += 4;
            }
            while ( v99 < (unsigned int)v81 );
            v77 = (unsigned int)(v81 + v181);
            v161 += (unsigned int)((_DWORD)v81 << 12);
            *(_DWORD *)(a1 + 2120) += (_DWORD)v81 << 15;
            v80 = v166 - v81;
            v163 += 5 * v81;
            v166 -= v81;
            v181 += v81;
            if ( *(_DWORD *)(a1 + 2120) >= *(_DWORD *)(a1 + 2124) || !v80 )
            {
              v10 = v170;
              v9 = v172;
              v11 = v167;
              break;
            }
          }
        }
      }
      v141 = &v10[5 * v77];
      if ( v141 != (int *)v9 )
      {
        do
        {
          if ( *((char *)v141 + 15) >= 0 )
            break;
          v77 = (unsigned int)(v77 + 1);
          v141 = &v10[5 * v77];
        }
        while ( v141 != (int *)v9 );
        v11 = v167;
      }
      v10 += 5 * v77;
      v11 += (unsigned int)((_DWORD)v77 << 12);
      v170 = v10;
      v167 = v11;
      if ( v10 == (int *)v9 )
      {
        v5 = a2;
        goto LABEL_40;
      }
    }
    v142 = ((char *)v10 - (char *)v173) / 20;
  }
  result = 2116LL;
  *(_DWORD *)(v4 + 2116) = v142;
  return result;
}
