/*
 * XREFs of RtlCompressBufferLz4 @ 0x1403D8440
 * Callers:
 *     <none>
 * Callees:
 *     LZ4_compress_HC_extStateHC @ 0x1403D98B0 (LZ4_compress_HC_extStateHC.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall RtlCompressBufferLz4(
        __int16 a1,
        _QWORD *a2,
        int a3,
        _BYTE *a4,
        int a5,
        __int64 a6,
        int *a7,
        char *a8)
{
  __int64 v8; // rbx
  _BYTE *v9; // r12
  int v11; // r11d
  unsigned int *v12; // r10
  int v13; // eax
  __int64 v14; // r8
  char *v15; // rbp
  char *v16; // r15
  unsigned __int64 v17; // r13
  char *v18; // rsi
  _BYTE *v19; // r14
  int v20; // r9d
  char *v21; // rdx
  int v22; // ebx
  int v23; // edi
  __int64 v24; // r8
  __int64 v25; // rax
  _WORD *v26; // r10
  char *v27; // rcx
  char *v28; // r12
  __int16 v29; // r9
  char *v30; // rbp
  unsigned int v31; // r8d
  _QWORD *v32; // rbx
  __int64 v33; // r15
  _WORD *v34; // rcx
  signed __int64 v35; // rsi
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // rbx
  _QWORD *v38; // r8
  char *v39; // r9
  _QWORD *v40; // rbp
  int v41; // r10d
  _DWORD *v42; // rax
  int v43; // edx
  _DWORD *v44; // r11
  unsigned __int64 v45; // rcx
  unsigned int v48; // r8d
  char v49; // al
  unsigned __int64 v50; // rcx
  __int64 v51; // rbp
  unsigned int v54; // r8d
  _BYTE *v55; // rax
  unsigned int v56; // r13d
  __int64 v57; // rax
  unsigned int v58; // edx
  size_t v59; // rdi
  size_t v60; // rbp
  size_t v61; // rdi
  unsigned __int128 v62; // rax
  __int64 result; // rax
  __int64 v64; // rdx
  char *v65; // r15
  char *v66; // rbp
  _BYTE *v67; // rsi
  _BYTE *v68; // r14
  int v69; // r13d
  _DWORD *v70; // rdx
  int v71; // r9d
  int v72; // r10d
  unsigned int v73; // ecx
  _DWORD *v74; // r12
  __int16 v75; // r11
  char *v76; // rbx
  __int64 v77; // rax
  char *v78; // rbp
  unsigned int v79; // ecx
  _QWORD *v80; // rdi
  int v81; // eax
  _WORD *v82; // rcx
  signed __int64 v83; // rsi
  unsigned __int64 v84; // rbx
  char *v85; // r8
  _QWORD *v86; // rbp
  _QWORD *v87; // rcx
  int v88; // r11d
  _DWORD *v89; // rax
  int v90; // r9d
  _DWORD *v91; // r10
  unsigned __int64 v92; // rdx
  unsigned int v95; // ecx
  char v96; // al
  unsigned __int64 v97; // rcx
  __int64 v98; // rbp
  unsigned int v101; // r8d
  __int64 v102; // rdx
  unsigned int v103; // r13d
  __int64 v104; // rax
  unsigned int v105; // edx
  size_t v106; // rbx
  size_t v107; // r15
  size_t v108; // rdi
  unsigned __int128 v109; // rax
  int v110; // ebx
  int v111; // r15d
  __int64 v112; // rcx
  unsigned __int64 v113; // rbp
  _QWORD *v114; // rdx
  int v115; // r11d
  _BYTE *v116; // r14
  int v117; // r12d
  _QWORD *v118; // rsi
  int v119; // r9d
  int v120; // r10d
  unsigned __int64 v121; // rcx
  int v122; // ebx
  unsigned int v123; // r8d
  unsigned int *v124; // r11
  _DWORD *v125; // r13
  unsigned __int64 v126; // rcx
  char *v127; // r15
  _QWORD *v128; // rdi
  int v129; // eax
  _WORD *v130; // rcx
  signed __int64 v131; // rsi
  unsigned __int64 v132; // rdi
  char *v133; // r9
  _QWORD *v134; // rdx
  _QWORD *v135; // rcx
  int v136; // ebx
  char *v137; // rax
  int v138; // r10d
  char *v139; // r11
  unsigned __int64 v140; // r8
  unsigned int v143; // ecx
  char v144; // al
  unsigned __int64 v145; // rax
  __int64 v146; // rcx
  unsigned int v149; // r8d
  _BYTE *v150; // rax
  unsigned int v151; // r12d
  __int64 v152; // rax
  unsigned int v153; // edx
  size_t v154; // rbx
  size_t v155; // r12
  size_t v156; // rdi
  unsigned __int128 v157; // rax
  __int64 v158; // rcx
  char *v159; // r15
  char *v160; // rdx
  int v161; // r8d
  _BYTE *v162; // rsi
  char *v163; // r14
  int v164; // r12d
  int v165; // r10d
  int v166; // r11d
  unsigned __int64 v167; // rcx
  int v168; // edi
  unsigned int *v169; // rbx
  __int64 v170; // rax
  unsigned int v171; // r9d
  char *v172; // r8
  unsigned __int64 v173; // rcx
  char *v174; // rbp
  _QWORD *v175; // rdi
  __int64 v176; // r13
  _WORD *v177; // rcx
  signed __int64 v178; // r14
  unsigned __int64 v179; // rdi
  char *v180; // r9
  _QWORD *v181; // rdx
  char *v182; // rcx
  int v183; // ebx
  char *v184; // rax
  int v185; // r10d
  char *v186; // r11
  unsigned __int64 v187; // r8
  unsigned int v190; // r8d
  char v191; // al
  unsigned __int64 v192; // rax
  __int64 v193; // rcx
  unsigned int v196; // r8d
  _BYTE *v197; // rax
  unsigned int v198; // r12d
  __int64 v199; // rax
  unsigned int v200; // edx
  size_t v201; // rbx
  size_t v202; // r15
  size_t v203; // rdi
  unsigned __int128 v204; // rax
  char *v205; // [rsp+30h] [rbp-58h]
  char *v206; // [rsp+30h] [rbp-58h]
  char *v207; // [rsp+30h] [rbp-58h]
  char *v208; // [rsp+30h] [rbp-58h]
  unsigned __int64 v209; // [rsp+38h] [rbp-50h]
  unsigned __int64 v210; // [rsp+38h] [rbp-50h]
  unsigned __int64 v211; // [rsp+38h] [rbp-50h]
  unsigned __int64 v212; // [rsp+38h] [rbp-50h]
  __int64 v213; // [rsp+40h] [rbp-48h]
  unsigned __int64 v214; // [rsp+40h] [rbp-48h]
  char *v215; // [rsp+40h] [rbp-48h]
  char *v216; // [rsp+40h] [rbp-48h]
  char *v217; // [rsp+48h] [rbp-40h]
  char *v218; // [rsp+48h] [rbp-40h]
  unsigned __int64 v219; // [rsp+48h] [rbp-40h]
  char *v220; // [rsp+48h] [rbp-40h]
  int v221; // [rsp+90h] [rbp+8h]
  int v222; // [rsp+90h] [rbp+8h]
  int v223; // [rsp+90h] [rbp+8h]
  int v224; // [rsp+90h] [rbp+8h]
  int v226; // [rsp+A8h] [rbp+20h]

  v226 = (int)a4;
  v8 = a3;
  v9 = a4;
  if ( (a1 & 0xFEFF) != 0 )
    return 3221225659LL;
  if ( ((unsigned __int8)a8 & 7) != 0 )
    return 3221226612LL;
  if ( a1 )
  {
    v11 = LZ4_compress_HC_extStateHC((_DWORD)a8, (_DWORD)a2, (_DWORD)a4, a3, a5);
    goto LABEL_65;
  }
  v11 = 0;
  if ( a8 )
  {
    memset_0(a8, 0, 0x4020uLL);
    v12 = (unsigned int *)a8;
    v11 = 0;
  }
  else
  {
    v12 = 0LL;
    a8 = 0LL;
  }
  if ( (unsigned int)v8 > 0x7E000000 )
    v13 = 0;
  else
    v13 = v8
        + ((int)((unsigned __int64)(2155905153LL * (int)v8) >> 32) >> 7)
        + ((unsigned int)((unsigned __int64)(2155905153LL * (int)v8) >> 32) >> 31)
        + 16;
  if ( a5 >= v13 )
  {
    if ( (int)v8 >= 65547 )
    {
      if ( (unsigned int)v8 <= 0x7E000000 )
      {
        v112 = v12[4100];
        v12[4102] += v8;
        v113 = (unsigned __int64)a2 + v8 - 11;
        v12[4101] = 2;
        v215 = (char *)a2 + v8;
        v211 = v113;
        v219 = (unsigned __int64)a2 + v8 - 5;
        v12[4100] = v112 + v8;
        v114 = (_QWORD *)((char *)a2 + 1);
        v115 = (_DWORD)a2 - v112;
        v116 = v9;
        v207 = (char *)a2 - v112;
        v117 = 0;
        v118 = a2;
        v12[(0xCF1BBCDCBB000000uLL * *a2) >> 52] = v112;
LABEL_129:
        v119 = 1;
        v223 = v117;
        v120 = 64;
        v121 = (0xCF1BBCDCBB000000uLL * *v114) >> 52;
        while ( 1 )
        {
          v122 = *(_DWORD *)&a8[4 * v121];
          v123 = (_DWORD)v114 - v115;
          v124 = (unsigned int *)&a8[4 * v121];
          v125 = v114;
          v114 = (_QWORD *)((char *)v114 + v119);
          v119 = v120++ >> 6;
          if ( (unsigned __int64)v114 > v113 )
            break;
          v126 = 0xCF1BBCDCBB000000uLL * *v114;
          *v124 = v123;
          v127 = &v207[v122];
          v121 = v126 >> 52;
          if ( v122 + 0xFFFF >= v123 && *(_DWORD *)v127 == *v125 )
          {
            if ( v127 > (char *)a2 && *((_BYTE *)v125 - 1) == *(v127 - 1) )
            {
              do
              {
                v125 = (_DWORD *)((char *)v125 - 1);
                --v127;
              }
              while ( v127 > (char *)a2 && v125 > (_DWORD *)v118 && *((_BYTE *)v125 - 1) == *(v127 - 1) );
            }
            v128 = v116 + 1;
            v129 = (_DWORD)v125 - (_DWORD)v118;
            if ( (unsigned int)((_DWORD)v125 - (_DWORD)v118) >= 0xF )
            {
              v151 = v129 - 15;
              *v116 = -16;
              if ( v129 - 15 >= 255 )
              {
                v153 = v151 / 0xFF;
                v154 = v151 / 0xFF;
                LOBYTE(v153) = -1;
                memset_0(v116 + 1, v153, v154);
                v128 = (_QWORD *)((char *)v128 + v154);
                LOBYTE(v151) = v154 + v151;
              }
              *(_BYTE *)v128 = v151;
              v128 = (_QWORD *)((char *)v128 + 1);
              v117 = v223;
            }
            else
            {
              *v116 = 16 * ((_BYTE)v125 - (_BYTE)v118);
            }
            v130 = (_WORD *)((char *)v128 + (unsigned int)((_DWORD)v125 - (_DWORD)v118));
            v131 = (char *)v118 - (char *)v128;
            do
            {
              *v128 = *(_QWORD *)((char *)v128 + v131);
              ++v128;
            }
            while ( v128 < (_QWORD *)v130 );
            v132 = v219 - 7;
            v118 = v125;
            while ( 1 )
            {
              v133 = v116;
              v116 = v130 + 1;
              *v130 = (_WORD)v118 - (_WORD)v127;
              v134 = v127 + 4;
              v135 = (_QWORD *)((char *)v118 + 4);
              v136 = (_DWORD)v118 + 4;
              v137 = (char *)v118 + 4;
              v138 = (_DWORD)v118 + 4;
              v139 = (char *)v118 + 4;
              v140 = (unsigned __int64)v118 + 4;
              if ( (unsigned __int64)v118 + 4 >= v132 )
                goto LABEL_149;
              if ( *v134 != *v135 )
              {
                __asm { tzcnt   rcx, r8 }
                v143 = (unsigned int)_RCX >> 3;
              }
              else
              {
                v137 = (char *)v118 + 12;
                v134 = v127 + 12;
                v135 = (_QWORD *)((char *)v118 + 12);
                v138 = (_DWORD)v118 + 12;
                v139 = (char *)v118 + 12;
                v140 = (unsigned __int64)v118 + 12;
LABEL_149:
                while ( (unsigned __int64)v137 < v132 )
                {
                  if ( *v134 != *v135 )
                  {
                    __asm { tzcnt   rcx, r8 }
                    v143 = v138 + ((unsigned int)_RCX >> 3) - v136;
                    goto LABEL_143;
                  }
                  v135 = v139 + 8;
                  ++v134;
                  v137 = (char *)v135;
                  v138 = (_DWORD)v139 + 8;
                  v139 += 8;
                  v140 = (unsigned __int64)v135;
                }
                if ( v140 < v219 - 3 && *(_DWORD *)v134 == *(_DWORD *)v135 )
                {
                  v135 = (_QWORD *)((char *)v135 + 4);
                  v134 = (_QWORD *)((char *)v134 + 4);
                }
                if ( (unsigned __int64)v135 < v219 - 1 && *(_WORD *)v134 == *(_WORD *)v135 )
                {
                  v135 = (_QWORD *)((char *)v135 + 2);
                  v134 = (_QWORD *)((char *)v134 + 2);
                }
                if ( (unsigned __int64)v135 < v219 && *(_BYTE *)v134 == *(_BYTE *)v135 )
                  LODWORD(v135) = (_DWORD)v135 + 1;
                v143 = (_DWORD)v135 - v136;
              }
LABEL_143:
              v118 = (_QWORD *)((char *)v118 + v143 + 4);
              v144 = *v133;
              if ( v143 >= 0xF )
              {
                v149 = v143 - 15;
                *v133 = v144 + 15;
                *(_DWORD *)v116 = -1;
                if ( v143 - 15 >= 0x3FC )
                {
                  v152 = v149 / 0x3FC;
                  do
                  {
                    v116 += 4;
                    v149 -= 1020;
                    *(_DWORD *)v116 = -1;
                    --v152;
                  }
                  while ( v152 );
                }
                v150 = &v116[v149 / 0xFF];
                v116 = v150 + 1;
                *v150 = v149 + v149 / 0xFF;
              }
              else
              {
                *v133 = v144 + v143;
              }
              if ( (unsigned __int64)v118 >= v211 )
                goto LABEL_173;
              v115 = (int)v207;
              *(_DWORD *)&a8[4 * ((0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)v118 - 2)) >> 52)] = (_DWORD)v118 - (_DWORD)v207 - 2;
              v145 = (0xCF1BBCDCBB000000uLL * *v118) >> 52;
              v146 = *(unsigned int *)&a8[4 * v145];
              *(_DWORD *)&a8[4 * v145] = (_DWORD)v118 - (_DWORD)v207;
              v127 = &v207[v146];
              if ( (int)v146 + 0xFFFF < (unsigned int)((_DWORD)v118 - (_DWORD)v207)
                || *(_DWORD *)v127 != *(_DWORD *)v118 )
              {
                v114 = (_QWORD *)((char *)v118 + 1);
                v113 = v211;
                goto LABEL_129;
              }
              v130 = v116 + 1;
              *v116 = 0;
            }
          }
          v115 = (int)v207;
        }
LABEL_173:
        v155 = v215 - (char *)v118;
        if ( (unsigned __int64)(v215 - (char *)v118) < 0xF )
        {
          *v116 = 16 * v155;
        }
        else
        {
          *v116 = -16;
          v156 = v155 - 15;
          ++v116;
          if ( v155 - 15 >= 0xFF )
          {
            v157 = v156 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v157) = -1;
            memset_0(v116, SDWORD2(v157), v156 / 0xFF);
            v116 += v156 / 0xFF;
            v156 %= 0xFFuLL;
          }
          *v116 = v156;
        }
        memmove(v116 + 1, v118, v155);
        v11 = v155 - v226 + (_DWORD)v116 + 1;
      }
      goto LABEL_65;
    }
    if ( (unsigned int)v8 <= 0x7E000000 )
    {
      if ( (_DWORD)v8 )
      {
        v64 = v12[4100];
        v65 = (char *)a2 + v8;
        v12[4102] += v8;
        v210 = (unsigned __int64)a2 + v8 - 11;
        v218 = (char *)a2 + v8;
        v66 = (char *)a2 - v64;
        v214 = (unsigned __int64)a2 + v8 - 5;
        v206 = (char *)a2 - v64;
        v12[4100] = v64 + v8;
        v67 = a2;
        v12[4101] = 3;
        v68 = v9;
        v69 = 0;
        if ( (int)v8 >= 13 )
        {
          *((_WORD *)v12 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)a2) >> 19)) = v64;
          v70 = (_DWORD *)((char *)a2 + 1);
LABEL_76:
          v71 = 1;
          v72 = 64;
          v222 = v69;
          v73 = (unsigned int)(-1640531535 * *v70) >> 19;
          while ( 1 )
          {
            v74 = v70;
            v75 = (_WORD)v70 - (_WORD)v66;
            v76 = &a8[2 * v73];
            v77 = v71;
            v71 = v72 >> 6;
            v70 = (_DWORD *)((char *)v70 + v77);
            ++v72;
            if ( (unsigned __int64)v70 > v210 )
              break;
            v78 = &v66[*(unsigned __int16 *)v76];
            v79 = -1640531535 * *v70;
            *(_WORD *)v76 = v75;
            v73 = v79 >> 19;
            if ( *(_DWORD *)v78 == *v74 )
            {
              if ( v78 > (char *)a2 && *((_BYTE *)v74 - 1) == *(v78 - 1) )
              {
                do
                {
                  v74 = (_DWORD *)((char *)v74 - 1);
                  --v78;
                }
                while ( v78 > (char *)a2 && v74 > (_DWORD *)v67 && *((_BYTE *)v74 - 1) == *(v78 - 1) );
              }
              v80 = v68 + 1;
              v81 = (_DWORD)v74 - (_DWORD)v67;
              if ( (unsigned int)((_DWORD)v74 - (_DWORD)v67) >= 0xF )
              {
                v103 = v81 - 15;
                *v68 = -16;
                if ( v81 - 15 >= 255 )
                {
                  v105 = v103 / 0xFF;
                  v106 = v103 / 0xFF;
                  LOBYTE(v105) = -1;
                  memset_0(v68 + 1, v105, v106);
                  v80 = (_QWORD *)((char *)v80 + v106);
                  LOBYTE(v103) = v106 + v103;
                }
                *(_BYTE *)v80 = v103;
                v80 = (_QWORD *)((char *)v80 + 1);
                v69 = v222;
              }
              else
              {
                *v68 = 16 * ((_BYTE)v74 - (_BYTE)v67);
              }
              v82 = (_WORD *)((char *)v80 + (unsigned int)((_DWORD)v74 - (_DWORD)v67));
              v83 = v67 - (_BYTE *)v80;
              do
              {
                *v80 = *(_QWORD *)((char *)v80 + v83);
                ++v80;
              }
              while ( v80 < (_QWORD *)v82 );
              v84 = v214 - 7;
              while ( 1 )
              {
                v85 = v68;
                v68 = v82 + 1;
                *v82 = (_WORD)v74 - (_WORD)v78;
                v86 = v78 + 4;
                v87 = v74 + 1;
                v88 = (_DWORD)v74 + 4;
                v89 = v74 + 1;
                v90 = (_DWORD)v74 + 4;
                v91 = v74 + 1;
                v92 = (unsigned __int64)(v74 + 1);
                if ( (unsigned __int64)(v74 + 1) >= v84 )
                  goto LABEL_94;
                if ( *v87 != *v86 )
                {
                  __asm { tzcnt   rcx, rdx }
                  v95 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  v89 = v74 + 3;
                  ++v86;
                  v87 = v74 + 3;
                  v90 = (_DWORD)v74 + 12;
                  v91 = v74 + 3;
                  v92 = (unsigned __int64)(v74 + 3);
LABEL_94:
                  while ( (unsigned __int64)v89 < v84 )
                  {
                    if ( *v86 != *v87 )
                    {
                      __asm { tzcnt   rcx, rdx }
                      v95 = v90 + ((unsigned int)_RCX >> 3) - v88;
                      goto LABEL_89;
                    }
                    v87 = v91 + 2;
                    ++v86;
                    v89 = v87;
                    v90 = (_DWORD)v91 + 8;
                    v91 += 2;
                    v92 = (unsigned __int64)v87;
                  }
                  if ( v92 < v214 - 3 && *(_DWORD *)v86 == *(_DWORD *)v87 )
                  {
                    v87 = (_QWORD *)((char *)v87 + 4);
                    v86 = (_QWORD *)((char *)v86 + 4);
                  }
                  if ( (unsigned __int64)v87 < v214 - 1 && *(_WORD *)v86 == *(_WORD *)v87 )
                  {
                    v87 = (_QWORD *)((char *)v87 + 2);
                    v86 = (_QWORD *)((char *)v86 + 2);
                  }
                  if ( (unsigned __int64)v87 < v214 && *(_BYTE *)v86 == *(_BYTE *)v87 )
                    LODWORD(v87) = (_DWORD)v87 + 1;
                  v95 = (_DWORD)v87 - v88;
                }
LABEL_89:
                v74 = (_DWORD *)((char *)v74 + v95 + 4);
                v96 = *v85;
                if ( v95 >= 0xF )
                {
                  *v85 = v96 + 15;
                  v101 = v95 - 15;
                  *(_DWORD *)v68 = -1;
                  if ( v95 - 15 >= 0x3FC )
                  {
                    v104 = v101 / 0x3FC;
                    do
                    {
                      v68 += 4;
                      v101 -= 1020;
                      *(_DWORD *)v68 = -1;
                      --v104;
                    }
                    while ( v104 );
                  }
                  v102 = v101 / 0xFF;
                  v68[v102] = v102 + v101;
                  v68 += v102 + 1;
                }
                else
                {
                  *v85 = v96 + v95;
                }
                v67 = v74;
                if ( (unsigned __int64)v74 >= v210 )
                  goto LABEL_120;
                *(_WORD *)&a8[2 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v74 - 2)) >> 19)] = (_WORD)v74 - (_WORD)v206 - 2;
                v97 = (unsigned __int64)(unsigned int)(-1640531535 * *v74) >> 19;
                v98 = *(unsigned __int16 *)&a8[2 * v97];
                *(_WORD *)&a8[2 * v97] = (_WORD)v74 - (_WORD)v206;
                v78 = &v206[v98];
                if ( *(_DWORD *)v78 != *v74 )
                {
                  v66 = v206;
                  v70 = (_DWORD *)((char *)v74 + 1);
                  goto LABEL_76;
                }
                v82 = v68 + 1;
                *v68 = 0;
              }
            }
            v66 = v206;
          }
LABEL_120:
          v65 = v218;
          LODWORD(v9) = v226;
        }
        v107 = v65 - v67;
        if ( v107 < 0xF )
        {
          *v68 = 16 * v107;
        }
        else
        {
          *v68 = -16;
          v108 = v107 - 15;
          ++v68;
          if ( v107 - 15 >= 0xFF )
          {
            v109 = v108 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v109) = -1;
            memset_0(v68, SDWORD2(v109), v108 / 0xFF);
            v68 += v108 / 0xFF;
            v108 %= 0xFFuLL;
          }
          *v68 = v108;
        }
        v110 = (_DWORD)v68 + 1;
        memmove(v68 + 1, v67, v107);
        v111 = v107 - (_DWORD)v9;
        goto LABEL_126;
      }
      *v9 = 0;
      v11 = 1;
    }
  }
  else
  {
    if ( (int)v8 < 65547 )
    {
      if ( (unsigned int)v8 <= 0x7E000000 )
      {
        if ( (_DWORD)v8 )
        {
          v14 = v12[4100];
          v15 = (char *)a2 + v8;
          v12[4102] += v8;
          v213 = (__int64)a2 + v8 - 5;
          v16 = (char *)a2 - v14;
          v205 = (char *)a2 + v8;
          v217 = (char *)a2 - v14;
          v12[4100] = v14 + v8;
          v17 = (unsigned __int64)&v9[a5];
          v209 = v17;
          v18 = (char *)a2;
          v12[4101] = 3;
          v19 = v9;
          v20 = 0;
          if ( (int)v8 < 13 )
          {
LABEL_59:
            v60 = v15 - v18;
            if ( (unsigned __int64)&v19[v60 + 1 + (v60 + 240) / 0xFF] <= v17 )
            {
              if ( v60 < 0xF )
              {
                *v19 = 16 * v60;
              }
              else
              {
                *v19 = -16;
                v61 = v60 - 15;
                ++v19;
                if ( v60 - 15 >= 0xFF )
                {
                  v62 = v61 * (unsigned __int128)0x8080808080808081uLL;
                  BYTE8(v62) = -1;
                  memset_0(v19, SDWORD2(v62), v61 / 0xFF);
                  v19 += v61 / 0xFF;
                  v61 %= 0xFFuLL;
                }
                *v19 = v61;
              }
              memmove(v19 + 1, v18, v60);
              v11 = (_DWORD)v19 + 1 + v60 - (_DWORD)v9;
            }
          }
          else
          {
            v21 = (char *)a2 + 1;
            *((_WORD *)v12 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)a2) >> 19)) = v14;
LABEL_14:
            v22 = 1;
            v221 = v20;
            v23 = 64;
            v24 = (unsigned int)(-1640531535 * *(_DWORD *)v21) >> 19;
            while ( 1 )
            {
              v25 = v22;
              v26 = (_WORD *)v12 + v24;
              v22 = v23 >> 6;
              v27 = v21;
              v28 = v21;
              v29 = (_WORD)v21 - (_WORD)v16;
              v21 += v25;
              ++v23;
              if ( v21 > v15 - 11 )
              {
LABEL_58:
                LODWORD(v9) = v226;
                v11 = 0;
                goto LABEL_59;
              }
              v30 = &v16[(unsigned __int16)*v26];
              v31 = -1640531535 * *(_DWORD *)v21;
              *v26 = v29;
              v12 = (unsigned int *)a8;
              v24 = v31 >> 19;
              if ( *(_DWORD *)v30 == *(_DWORD *)v28 )
                break;
              v15 = v205;
            }
            if ( v30 > (char *)a2 && *(v27 - 1) == *(v30 - 1) )
            {
              do
              {
                --v28;
                --v30;
              }
              while ( v30 > (char *)a2 && v28 > v18 && *(v28 - 1) == *(v30 - 1) );
              v17 = v209;
            }
            v32 = v19 + 1;
            v33 = (unsigned int)((_DWORD)v28 - (_DWORD)v18);
            if ( (unsigned __int64)&v19[(unsigned int)v33 / 0xFF + 9 + v33] <= v17 )
            {
              if ( (unsigned int)v33 >= 0xF )
              {
                v56 = v33 - 15;
                *v19 = -16;
                if ( (int)v33 - 15 >= 255 )
                {
                  v58 = v56 / 0xFF;
                  v59 = v56 / 0xFF;
                  LOBYTE(v58) = -1;
                  memset_0(v19 + 1, v58, v59);
                  v32 = (_QWORD *)((char *)v32 + v59);
                  LOBYTE(v56) = v59 + v56;
                }
                *(_BYTE *)v32 = v56;
                v32 = (_QWORD *)((char *)v32 + 1);
              }
              else
              {
                *v19 = 16 * ((_BYTE)v28 - (_BYTE)v18);
              }
              v34 = (_WORD *)((char *)v32 + v33);
              v35 = v18 - (char *)v32;
              do
              {
                *v32 = *(_QWORD *)((char *)v32 + v35);
                ++v32;
              }
              while ( v32 < (_QWORD *)v34 );
              v36 = v213;
              v37 = v213 - 7;
              v17 = v209;
              while ( 1 )
              {
                v38 = v28 + 4;
                v39 = v19;
                *v34 = (_WORD)v28 - (_WORD)v30;
                v19 = v34 + 1;
                v40 = v30 + 4;
                v41 = (_DWORD)v28 + 4;
                v42 = v28 + 4;
                v43 = (_DWORD)v28 + 4;
                v44 = v28 + 4;
                v45 = (unsigned __int64)(v28 + 4);
                if ( (unsigned __int64)(v28 + 4) >= v37 )
                  goto LABEL_34;
                if ( *v38 != *v40 )
                {
                  __asm { tzcnt   r8, rcx }
                  v48 = (unsigned int)_R8 >> 3;
                }
                else
                {
                  v42 = v28 + 12;
                  ++v40;
                  v38 = v28 + 12;
                  v43 = (_DWORD)v28 + 12;
                  v44 = v28 + 12;
                  v45 = (unsigned __int64)(v28 + 12);
LABEL_34:
                  while ( (unsigned __int64)v42 < v37 )
                  {
                    if ( *v40 != *v38 )
                    {
                      __asm { tzcnt   r8, rcx }
                      v48 = v43 + ((unsigned int)_R8 >> 3) - v41;
                      goto LABEL_28;
                    }
                    v38 = v44 + 2;
                    ++v40;
                    v42 = v38;
                    v43 = (_DWORD)v44 + 8;
                    v44 += 2;
                    v45 = (unsigned __int64)v38;
                  }
                  if ( v45 < v36 - 3 && *(_DWORD *)v40 == *(_DWORD *)v38 )
                  {
                    v38 = (_QWORD *)((char *)v38 + 4);
                    v40 = (_QWORD *)((char *)v40 + 4);
                  }
                  if ( (unsigned __int64)v38 < v36 - 1 && *(_WORD *)v40 == *(_WORD *)v38 )
                  {
                    v38 = (_QWORD *)((char *)v38 + 2);
                    v40 = (_QWORD *)((char *)v40 + 2);
                  }
                  if ( (unsigned __int64)v38 < v36 && *(_BYTE *)v40 == *(_BYTE *)v38 )
                    LODWORD(v38) = (_DWORD)v38 + 1;
                  v48 = (_DWORD)v38 - v41;
                }
LABEL_28:
                v28 += v48 + 4;
                if ( (unsigned __int64)&v19[(v48 + 240) / 0xFF + 6] > v209 )
                  break;
                v49 = *v39;
                if ( v48 >= 0xF )
                {
                  v54 = v48 - 15;
                  *v39 = v49 + 15;
                  *(_DWORD *)v19 = -1;
                  if ( v54 >= 0x3FC )
                  {
                    v57 = v54 / 0x3FC;
                    do
                    {
                      v19 += 4;
                      v54 -= 1020;
                      *(_DWORD *)v19 = -1;
                      --v57;
                    }
                    while ( v57 );
                  }
                  v55 = &v19[v54 / 0xFF];
                  v19 = v55 + 1;
                  *v55 = v54 + v54 / 0xFF;
                }
                else
                {
                  *v39 = v48 + v49;
                }
                v15 = v205;
                v18 = v28;
                if ( v28 >= v205 - 11 )
                  goto LABEL_58;
                v16 = v217;
                v12 = (unsigned int *)a8;
                *(_WORD *)&a8[2 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v28 - 2)) >> 19)] = (_WORD)v28 - (_WORD)v217 - 2;
                v50 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v28) >> 19;
                v51 = *(unsigned __int16 *)&a8[2 * v50];
                *(_WORD *)&a8[2 * v50] = (_WORD)v28 - (_WORD)v217;
                v30 = &v217[v51];
                if ( *(_DWORD *)v30 != *(_DWORD *)v28 )
                {
                  v20 = v221;
                  v21 = v28 + 1;
                  v15 = v205;
                  goto LABEL_14;
                }
                v34 = v19 + 1;
                v36 = v213;
                *v19 = 0;
              }
            }
LABEL_229:
            v11 = 0;
          }
        }
        else if ( a5 > 0 )
        {
          *v9 = 0;
          v11 = 1;
        }
      }
      goto LABEL_65;
    }
    if ( (unsigned int)v8 <= 0x7E000000 )
    {
      v158 = v12[4100];
      v12[4102] += v8;
      v159 = (char *)a2 + v8;
      v212 = (unsigned __int64)&v9[a5];
      v160 = (char *)a2 + 1;
      v12[4101] = 2;
      v220 = (char *)a2 + v8;
      v12[4100] = v158 + v8;
      v161 = (_DWORD)a2 - v158;
      v162 = v9;
      v208 = (char *)a2 - v158;
      v163 = (char *)a2;
      v164 = 0;
      v12[(0xCF1BBCDCBB000000uLL * *a2) >> 52] = v158;
LABEL_182:
      v165 = 1;
      v224 = v164;
      v166 = 64;
      v167 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v160) >> 52;
      while ( 1 )
      {
        v168 = *(_DWORD *)&a8[4 * v167];
        v169 = (unsigned int *)&a8[4 * v167];
        v170 = v165;
        v216 = v160;
        v171 = (_DWORD)v160 - v161;
        v165 = v166 >> 6;
        v172 = v160;
        v160 += v170;
        ++v166;
        if ( v160 > v159 - 11 )
          break;
        v173 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)v160;
        *v169 = v171;
        v174 = &v208[v168];
        v167 = v173 >> 52;
        if ( v168 + 0xFFFF >= v171 && *(_DWORD *)v174 == *(_DWORD *)v172 )
        {
          if ( v174 > (char *)a2 && *(v172 - 1) == *(v174 - 1) )
          {
            do
            {
              --v172;
              --v174;
            }
            while ( v174 > (char *)a2 && v172 > v163 && *(v172 - 1) == *(v174 - 1) );
            v159 = v220;
            v216 = v172;
          }
          v175 = v162 + 1;
          v176 = (unsigned int)((_DWORD)v172 - (_DWORD)v163);
          if ( (unsigned __int64)&v162[(unsigned int)v176 / 0xFF + 9 + v176] <= v212 )
          {
            if ( (unsigned int)v176 >= 0xF )
            {
              v198 = v176 - 15;
              *v162 = -16;
              if ( (int)v176 - 15 >= 255 )
              {
                v200 = v198 / 0xFF;
                v201 = v198 / 0xFF;
                LOBYTE(v200) = -1;
                memset_0(v162 + 1, v200, v201);
                v172 = v216;
                v175 = (_QWORD *)((char *)v175 + v201);
                LOBYTE(v198) = v201 + v198;
              }
              *(_BYTE *)v175 = v198;
              v175 = (_QWORD *)((char *)v175 + 1);
            }
            else
            {
              *v162 = 16 * ((_BYTE)v172 - (_BYTE)v163);
            }
            v177 = (_WORD *)((char *)v175 + v176);
            v178 = v163 - (char *)v175;
            do
            {
              *v175 = *(_QWORD *)((char *)v175 + v178);
              ++v175;
            }
            while ( v175 < (_QWORD *)v177 );
            v179 = (unsigned __int64)(v159 - 12);
            v164 = v224;
            v163 = v172;
            while ( 1 )
            {
              v180 = v162;
              v162 = v177 + 1;
              *v177 = (_WORD)v163 - (_WORD)v174;
              v181 = v174 + 4;
              v182 = v163 + 4;
              v183 = (_DWORD)v163 + 4;
              v184 = v163 + 4;
              v185 = (_DWORD)v163 + 4;
              v186 = v163 + 4;
              v187 = (unsigned __int64)(v163 + 4);
              if ( (unsigned __int64)(v163 + 4) >= v179 )
                goto LABEL_204;
              if ( *v181 != *(_QWORD *)v182 )
              {
                __asm { tzcnt   r8, r8 }
                v190 = (unsigned int)_R8 >> 3;
              }
              else
              {
                v184 = v163 + 12;
                v181 = v174 + 12;
                v182 = v163 + 12;
                v185 = (_DWORD)v163 + 12;
                v186 = v163 + 12;
                v187 = (unsigned __int64)(v163 + 12);
LABEL_204:
                while ( (unsigned __int64)v184 < v179 )
                {
                  if ( *(_QWORD *)v182 != *v181 )
                  {
                    __asm { tzcnt   r8, rcx }
                    v190 = v185 + ((unsigned int)_R8 >> 3) - v183;
                    goto LABEL_197;
                  }
                  v182 = v186 + 8;
                  ++v181;
                  v184 = v182;
                  v185 = (_DWORD)v186 + 8;
                  v186 += 8;
                  v187 = (unsigned __int64)v182;
                }
                if ( v187 < (unsigned __int64)(v159 - 8) && *(_DWORD *)v181 == *(_DWORD *)v182 )
                {
                  v182 += 4;
                  v181 = (_QWORD *)((char *)v181 + 4);
                }
                if ( v182 < v159 - 6 && *(_WORD *)v181 == *(_WORD *)v182 )
                {
                  v182 += 2;
                  v181 = (_QWORD *)((char *)v181 + 2);
                }
                if ( v182 < v159 - 5 && *(_BYTE *)v181 == *v182 )
                  LODWORD(v182) = (_DWORD)v182 + 1;
                v190 = (_DWORD)v182 - v183;
              }
LABEL_197:
              v163 += v190 + 4;
              if ( (unsigned __int64)&v162[(v190 + 240) / 0xFF + 6] > v212 )
                break;
              v191 = *v180;
              if ( v190 >= 0xF )
              {
                v196 = v190 - 15;
                *v180 = v191 + 15;
                *(_DWORD *)v162 = -1;
                if ( v196 >= 0x3FC )
                {
                  v199 = v196 / 0x3FC;
                  do
                  {
                    v162 += 4;
                    v196 -= 1020;
                    *(_DWORD *)v162 = -1;
                    --v199;
                  }
                  while ( v199 );
                }
                v197 = &v162[v196 / 0xFF];
                v162 = v197 + 1;
                *v197 = v196 + v196 / 0xFF;
              }
              else
              {
                *v180 = v190 + v191;
              }
              if ( v163 >= v159 - 11 )
                goto LABEL_228;
              v161 = (int)v208;
              *(_DWORD *)&a8[4 * ((0xCF1BBCDCBB000000uLL * *(_QWORD *)(v163 - 2)) >> 52)] = (_DWORD)v163
                                                                                          - (_DWORD)v208
                                                                                          - 2;
              v192 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v163) >> 52;
              v193 = *(unsigned int *)&a8[4 * v192];
              *(_DWORD *)&a8[4 * v192] = (_DWORD)v163 - (_DWORD)v208;
              v174 = &v208[v193];
              if ( (int)v193 + 0xFFFF < (unsigned int)((_DWORD)v163 - (_DWORD)v208)
                || *(_DWORD *)v174 != *(_DWORD *)v163 )
              {
                v160 = v163 + 1;
                goto LABEL_182;
              }
              v177 = v162 + 1;
              *v162 = 0;
            }
          }
          goto LABEL_229;
        }
        v161 = (int)v208;
      }
LABEL_228:
      v202 = v159 - v163;
      if ( (unsigned __int64)&v162[(v202 + 240) / 0xFF + 1 + v202] > v212 )
        goto LABEL_229;
      if ( v202 < 0xF )
      {
        *v162 = 16 * v202;
      }
      else
      {
        *v162 = -16;
        v203 = v202 - 15;
        ++v162;
        if ( v202 - 15 >= 0xFF )
        {
          v204 = v203 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v204) = -1;
          memset_0(v162, SDWORD2(v204), v203 / 0xFF);
          v162 += v203 / 0xFF;
          v203 %= 0xFFuLL;
        }
        *v162 = v203;
      }
      v110 = (_DWORD)v162 + 1;
      memmove(v162 + 1, v163, v202);
      v111 = v202 - v226;
LABEL_126:
      v11 = v111 + v110;
    }
  }
LABEL_65:
  if ( v11 <= 0 )
    return 3221225507LL;
  result = 0LL;
  *a7 = v11;
  return result;
}
