/*
 * XREFs of RtlCompressBufferLz4 @ 0x1403DB670
 * Callers:
 *     <none>
 * Callees:
 *     LZ4_compress_HC_extStateHC @ 0x1403DCA9C (LZ4_compress_HC_extStateHC.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlCompressBufferLz4(__int16 a1, char *a2, int a3, _BYTE *a4, int a5, int a6, int *a7, char *a8)
{
  __int64 v8; // rbx
  _BYTE *v9; // r15
  _QWORD *v10; // r9
  int v11; // r11d
  unsigned int *v12; // r10
  int v13; // eax
  __int64 v14; // r8
  char *v15; // rbp
  char *v16; // r12
  unsigned __int64 v17; // r13
  char *v18; // rsi
  _BYTE *v19; // r14
  char *v20; // r15
  char *v21; // rdx
  int v22; // ebx
  int v23; // r11d
  __int64 v24; // r9
  __int64 v25; // rax
  _WORD *v26; // r10
  __int16 v27; // r8
  char *v28; // rcx
  char *v29; // r15
  __int16 v30; // r8
  char *v31; // rbp
  unsigned int v32; // r9d
  _QWORD *v33; // rbx
  __int64 v34; // r12
  _WORD *v35; // rcx
  signed __int64 v36; // rsi
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rbx
  _QWORD *v39; // r8
  char *v40; // r9
  _QWORD *v41; // rbp
  int v42; // r10d
  _DWORD *v43; // rax
  int v44; // edx
  _DWORD *v45; // r11
  unsigned __int64 v46; // rcx
  unsigned int v49; // r8d
  char v50; // al
  unsigned __int64 v51; // rcx
  __int64 v52; // rbp
  unsigned int v55; // r8d
  __int64 v56; // rdx
  unsigned int v57; // r13d
  __int64 v58; // rax
  unsigned int v59; // edx
  size_t v60; // rbp
  size_t v61; // rdi
  unsigned __int128 v62; // rax
  __int64 result; // rax
  __int64 v64; // rdx
  char *v65; // r13
  char *v66; // rdi
  unsigned __int64 v67; // r12
  _BYTE *v68; // r14
  _BYTE *v69; // rsi
  _DWORD *v70; // r15
  int v71; // r13d
  _DWORD *v72; // rdx
  int v73; // r9d
  int v74; // r10d
  unsigned int v75; // ecx
  _DWORD *v76; // r15
  __int16 v77; // r11
  char *v78; // rbx
  __int64 v79; // rax
  char *v80; // rbp
  unsigned int v81; // ecx
  _QWORD *v82; // rdi
  int v83; // eax
  _WORD *v84; // rcx
  signed __int64 v85; // r14
  unsigned __int64 v86; // rbx
  char *v87; // r8
  _QWORD *v88; // rbp
  _QWORD *v89; // rcx
  int v90; // r11d
  _DWORD *v91; // rax
  int v92; // r9d
  _DWORD *v93; // r10
  unsigned __int64 v94; // rdx
  unsigned int v97; // ecx
  char v98; // al
  unsigned __int64 v99; // rcx
  __int64 v100; // rbp
  unsigned int v103; // r8d
  _BYTE *v104; // rax
  unsigned int v105; // r13d
  __int64 v106; // rax
  unsigned int v107; // edx
  size_t v108; // rbx
  size_t v109; // r13
  size_t v110; // rdi
  unsigned __int128 v111; // rax
  __int64 v112; // rcx
  unsigned __int64 v113; // rdi
  _QWORD *v114; // rdx
  int v115; // r11d
  int v116; // r13d
  _QWORD *v117; // rsi
  _BYTE *v118; // r14
  int v119; // r9d
  unsigned __int64 v120; // rcx
  int v121; // r10d
  int v122; // r8d
  int v123; // ebx
  _DWORD *v124; // r12
  __int64 v125; // rdx
  unsigned int v126; // r8d
  unsigned int *v127; // r11
  unsigned __int64 v128; // rcx
  char *v129; // r15
  _QWORD *v130; // rdi
  int v131; // eax
  _WORD *v132; // rcx
  signed __int64 v133; // rsi
  unsigned __int64 v134; // rdi
  char *v135; // r9
  _QWORD *v136; // rdx
  _QWORD *v137; // rcx
  int v138; // ebx
  char *v139; // rax
  int v140; // r10d
  char *v141; // r11
  unsigned __int64 v142; // r8
  unsigned int v145; // ecx
  char v146; // al
  unsigned __int64 v147; // rax
  __int64 v148; // rcx
  unsigned int v151; // r8d
  _BYTE *v152; // rax
  unsigned int v153; // r13d
  __int64 v154; // rax
  unsigned int v155; // edx
  size_t v156; // rbx
  size_t v157; // r13
  size_t v158; // rdi
  unsigned __int128 v159; // rax
  __int64 v160; // rcx
  char *v161; // r15
  _BYTE *v162; // rsi
  char *v163; // rdx
  char *v164; // rbp
  int v165; // r13d
  char *v166; // r14
  int v167; // r9d
  unsigned __int64 v168; // rcx
  int v169; // r10d
  __int64 v170; // rbx
  unsigned int *v171; // r11
  char *v172; // r12
  unsigned int v173; // r8d
  __int64 v174; // rdx
  unsigned __int64 v175; // rcx
  char *v176; // rbp
  _QWORD *v177; // rdi
  __int64 v178; // rcx
  _WORD *v179; // rcx
  signed __int64 v180; // r14
  unsigned __int64 v181; // rdi
  char *v182; // r9
  _QWORD *v183; // rdx
  char *v184; // rcx
  int v185; // ebx
  char *v186; // rax
  int v187; // r10d
  char *v188; // r11
  unsigned __int64 v189; // r8
  unsigned int v192; // r8d
  char v193; // al
  unsigned __int64 v194; // rax
  __int64 v195; // rcx
  unsigned int v198; // r8d
  _BYTE *v199; // rax
  unsigned int v200; // r13d
  __int64 v201; // rax
  unsigned int v202; // edx
  size_t v203; // rbx
  size_t v204; // r15
  size_t v205; // rdi
  unsigned __int128 v206; // rax
  char *v207; // [rsp+30h] [rbp-58h]
  char *v208; // [rsp+30h] [rbp-58h]
  char *v209; // [rsp+30h] [rbp-58h]
  char *v210; // [rsp+30h] [rbp-58h]
  unsigned __int64 v211; // [rsp+38h] [rbp-50h]
  unsigned __int64 v212; // [rsp+38h] [rbp-50h]
  unsigned __int64 v213; // [rsp+38h] [rbp-50h]
  unsigned __int64 v214; // [rsp+38h] [rbp-50h]
  __int64 v215; // [rsp+40h] [rbp-48h]
  unsigned __int64 v216; // [rsp+40h] [rbp-48h]
  char *v217; // [rsp+40h] [rbp-48h]
  char *v218; // [rsp+48h] [rbp-40h]
  char *v219; // [rsp+48h] [rbp-40h]
  unsigned __int64 v220; // [rsp+48h] [rbp-40h]
  char *v221; // [rsp+48h] [rbp-40h]
  int v222; // [rsp+90h] [rbp+8h]
  int v223; // [rsp+90h] [rbp+8h]
  int v224; // [rsp+90h] [rbp+8h]

  v8 = a3;
  v9 = a4;
  v10 = a2;
  if ( (a1 & 0xFEFF) != 0 )
    return 3221225659LL;
  if ( ((unsigned __int8)a8 & 7) != 0 )
    return 3221226612LL;
  if ( a1 )
  {
    v11 = LZ4_compress_HC_extStateHC((_DWORD)a8, (_DWORD)a2, (_DWORD)v9, a3, a5);
  }
  else
  {
    v11 = 0;
    if ( a8 )
    {
      memset_0(a8, 0, 0x4020uLL);
      v12 = (unsigned int *)a8;
      v11 = 0;
      v10 = a2;
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
          v113 = (unsigned __int64)v10 + v8 - 11;
          v12[4101] = 2;
          v217 = (char *)v10 + v8;
          v213 = v113;
          v220 = (unsigned __int64)v10 + v8 - 5;
          v12[4100] = v112 + v8;
          v114 = (_QWORD *)((char *)v10 + 1);
          v115 = (_DWORD)v10 - v112;
          v116 = 0;
          v209 = (char *)v10 - v112;
          v117 = v10;
          v118 = v9;
          v12[(0xCF1BBCDCBB000000uLL * *v10) >> 52] = v112;
LABEL_128:
          v223 = v116;
          v119 = 1;
          v120 = (0xCF1BBCDCBB000000uLL * *v114) >> 52;
          v121 = 64;
          while ( 1 )
          {
            v122 = (int)v114;
            v123 = *(_DWORD *)&a8[4 * v120];
            v124 = v114;
            v125 = v119;
            v126 = v122 - v115;
            v127 = (unsigned int *)&a8[4 * v120];
            v119 = v121 >> 6;
            v114 = (_QWORD *)((char *)v124 + v125);
            ++v121;
            if ( (unsigned __int64)v114 > v113 )
              break;
            v128 = 0xCF1BBCDCBB000000uLL * *v114;
            *v127 = v126;
            v129 = &v209[v123];
            v120 = v128 >> 52;
            if ( v123 + 0xFFFF >= v126 && *(_DWORD *)v129 == *v124 )
            {
              if ( v129 > a2 && *((_BYTE *)v124 - 1) == *(v129 - 1) )
              {
                do
                {
                  v124 = (_DWORD *)((char *)v124 - 1);
                  --v129;
                }
                while ( v129 > a2 && v124 > (_DWORD *)v117 && *((_BYTE *)v124 - 1) == *(v129 - 1) );
              }
              v130 = v118 + 1;
              v131 = (_DWORD)v124 - (_DWORD)v117;
              if ( (unsigned int)((_DWORD)v124 - (_DWORD)v117) >= 0xF )
              {
                v153 = v131 - 15;
                *v118 = -16;
                if ( v131 - 15 >= 255 )
                {
                  v155 = v153 / 0xFF;
                  v156 = v153 / 0xFF;
                  LOBYTE(v155) = -1;
                  memset_0(v118 + 1, v155, v156);
                  v130 = (_QWORD *)((char *)v130 + v156);
                  LOBYTE(v153) = v156 + v153;
                }
                *(_BYTE *)v130 = v153;
                v130 = (_QWORD *)((char *)v130 + 1);
                v116 = v223;
              }
              else
              {
                *v118 = 16 * ((_BYTE)v124 - (_BYTE)v117);
              }
              v132 = (_WORD *)((char *)v130 + (unsigned int)((_DWORD)v124 - (_DWORD)v117));
              v133 = (char *)v117 - (char *)v130;
              do
              {
                *v130 = *(_QWORD *)((char *)v130 + v133);
                ++v130;
              }
              while ( v130 < (_QWORD *)v132 );
              v134 = v220 - 7;
              v117 = v124;
              while ( 1 )
              {
                v135 = v118;
                v118 = v132 + 1;
                *v132 = (_WORD)v117 - (_WORD)v129;
                v136 = v129 + 4;
                v137 = (_QWORD *)((char *)v117 + 4);
                v138 = (_DWORD)v117 + 4;
                v139 = (char *)v117 + 4;
                v140 = (_DWORD)v117 + 4;
                v141 = (char *)v117 + 4;
                v142 = (unsigned __int64)v117 + 4;
                if ( (unsigned __int64)v117 + 4 >= v134 )
                  goto LABEL_148;
                if ( *v136 != *v137 )
                {
                  __asm { tzcnt   rcx, r8 }
                  v145 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  v139 = (char *)v117 + 12;
                  v136 = v129 + 12;
                  v137 = (_QWORD *)((char *)v117 + 12);
                  v140 = (_DWORD)v117 + 12;
                  v141 = (char *)v117 + 12;
                  v142 = (unsigned __int64)v117 + 12;
LABEL_148:
                  while ( (unsigned __int64)v139 < v134 )
                  {
                    if ( *v136 != *v137 )
                    {
                      __asm { tzcnt   rcx, r8 }
                      v145 = v140 + ((unsigned int)_RCX >> 3) - v138;
                      goto LABEL_142;
                    }
                    v137 = v141 + 8;
                    ++v136;
                    v139 = (char *)v137;
                    v140 = (_DWORD)v141 + 8;
                    v141 += 8;
                    v142 = (unsigned __int64)v137;
                  }
                  if ( v142 < v220 - 3 && *(_DWORD *)v136 == *(_DWORD *)v137 )
                  {
                    v137 = (_QWORD *)((char *)v137 + 4);
                    v136 = (_QWORD *)((char *)v136 + 4);
                  }
                  if ( (unsigned __int64)v137 < v220 - 1 && *(_WORD *)v136 == *(_WORD *)v137 )
                  {
                    v137 = (_QWORD *)((char *)v137 + 2);
                    v136 = (_QWORD *)((char *)v136 + 2);
                  }
                  if ( (unsigned __int64)v137 < v220 && *(_BYTE *)v136 == *(_BYTE *)v137 )
                    LODWORD(v137) = (_DWORD)v137 + 1;
                  v145 = (_DWORD)v137 - v138;
                }
LABEL_142:
                v117 = (_QWORD *)((char *)v117 + v145 + 4);
                v146 = *v135;
                if ( v145 >= 0xF )
                {
                  v151 = v145 - 15;
                  *v135 = v146 + 15;
                  *(_DWORD *)v118 = -1;
                  if ( v145 - 15 >= 0x3FC )
                  {
                    v154 = v151 / 0x3FC;
                    do
                    {
                      v118 += 4;
                      v151 -= 1020;
                      *(_DWORD *)v118 = -1;
                      --v154;
                    }
                    while ( v154 );
                  }
                  v152 = &v118[v151 / 0xFF];
                  v118 = v152 + 1;
                  *v152 = v151 + v151 / 0xFF;
                }
                else
                {
                  *v135 = v145 + v146;
                }
                if ( (unsigned __int64)v117 >= v213 )
                  goto LABEL_172;
                v115 = (int)v209;
                *(_DWORD *)&a8[4 * ((0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)v117 - 2)) >> 52)] = (_DWORD)v117 - (_DWORD)v209 - 2;
                v147 = (0xCF1BBCDCBB000000uLL * *v117) >> 52;
                v148 = *(unsigned int *)&a8[4 * v147];
                *(_DWORD *)&a8[4 * v147] = (_DWORD)v117 - (_DWORD)v209;
                v129 = &v209[v148];
                if ( (int)v148 + 0xFFFF < (unsigned int)((_DWORD)v117 - (_DWORD)v209)
                  || *(_DWORD *)v129 != *(_DWORD *)v117 )
                {
                  v114 = (_QWORD *)((char *)v117 + 1);
                  v113 = v213;
                  goto LABEL_128;
                }
                v132 = v118 + 1;
                *v118 = 0;
              }
            }
            v115 = (int)v209;
          }
LABEL_172:
          v157 = v217 - (char *)v117;
          if ( (unsigned __int64)(v217 - (char *)v117) < 0xF )
          {
            *v118 = 16 * v157;
          }
          else
          {
            *v118 = -16;
            v158 = v157 - 15;
            ++v118;
            if ( v157 - 15 >= 0xFF )
            {
              v159 = v158 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v159) = -1;
              memset_0(v118, SDWORD2(v159), v158 / 0xFF);
              v118 += v158 / 0xFF;
              v158 %= 0xFFuLL;
            }
            *v118 = v158;
          }
          memmove(v118 + 1, v117, v157);
          v11 = (_DWORD)v118 + 1 + v157 - (_DWORD)a4;
        }
      }
      else if ( (unsigned int)v8 <= 0x7E000000 )
      {
        if ( (_DWORD)v8 )
        {
          v64 = v12[4100];
          v65 = (char *)v10 + v8;
          v12[4102] += v8;
          v216 = (unsigned __int64)v10 + v8 - 5;
          v66 = (char *)v10 - v64;
          v219 = (char *)v10 + v8;
          v208 = (char *)v10 - v64;
          v12[4100] = v64 + v8;
          v67 = (unsigned __int64)v10 + v8 - 11;
          v212 = v67;
          v68 = v10;
          v12[4101] = 3;
          v69 = v9;
          if ( (int)v8 >= 13 )
          {
            v70 = (_DWORD *)((char *)v10 + 1);
            v71 = 0;
            *((_WORD *)v12 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v10) >> 19)) = v64;
LABEL_76:
            v72 = v70;
            v222 = v71;
            v73 = 1;
            v74 = 64;
            v75 = (unsigned int)(-1640531535 * *v70) >> 19;
            while ( 1 )
            {
              v76 = v72;
              v77 = (_WORD)v72 - (_WORD)v66;
              v78 = &a8[2 * v75];
              v79 = v73;
              v73 = v74 >> 6;
              v72 = (_DWORD *)((char *)v72 + v79);
              ++v74;
              if ( (unsigned __int64)v72 > v67 )
                break;
              v80 = &v66[*(unsigned __int16 *)v78];
              v81 = -1640531535 * *v72;
              *(_WORD *)v78 = v77;
              v75 = v81 >> 19;
              if ( *(_DWORD *)v80 == *v76 )
              {
                if ( v80 > a2 && *((_BYTE *)v76 - 1) == *(v80 - 1) )
                {
                  do
                  {
                    v76 = (_DWORD *)((char *)v76 - 1);
                    --v80;
                  }
                  while ( v76 > (_DWORD *)v68 && v80 > a2 && *((_BYTE *)v76 - 1) == *(v80 - 1) );
                }
                v82 = v69 + 1;
                v83 = (_DWORD)v76 - (_DWORD)v68;
                if ( (unsigned int)((_DWORD)v76 - (_DWORD)v68) >= 0xF )
                {
                  v105 = v83 - 15;
                  *v69 = -16;
                  if ( v83 - 15 >= 255 )
                  {
                    v107 = v105 / 0xFF;
                    v108 = v105 / 0xFF;
                    LOBYTE(v107) = -1;
                    memset_0(v69 + 1, v107, v108);
                    v82 = (_QWORD *)((char *)v82 + v108);
                    LOBYTE(v105) = v108 + v105;
                  }
                  *(_BYTE *)v82 = v105;
                  v82 = (_QWORD *)((char *)v82 + 1);
                  v71 = v222;
                }
                else
                {
                  *v69 = 16 * ((_BYTE)v76 - (_BYTE)v68);
                }
                v84 = (_WORD *)((char *)v82 + (unsigned int)((_DWORD)v76 - (_DWORD)v68));
                v85 = v68 - (_BYTE *)v82;
                do
                {
                  *v82 = *(_QWORD *)((char *)v82 + v85);
                  ++v82;
                }
                while ( v82 < (_QWORD *)v84 );
                v86 = v216 - 7;
                while ( 1 )
                {
                  v87 = v69;
                  v69 = v84 + 1;
                  *v84 = (_WORD)v76 - (_WORD)v80;
                  v88 = v80 + 4;
                  v89 = v76 + 1;
                  v90 = (_DWORD)v76 + 4;
                  v91 = v76 + 1;
                  v92 = (_DWORD)v76 + 4;
                  v93 = v76 + 1;
                  v94 = (unsigned __int64)(v76 + 1);
                  if ( (unsigned __int64)(v76 + 1) >= v86 )
                    goto LABEL_94;
                  if ( *v89 != *v88 )
                  {
                    __asm { tzcnt   rcx, rdx }
                    v97 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
                    v91 = v76 + 3;
                    ++v88;
                    v89 = v76 + 3;
                    v92 = (_DWORD)v76 + 12;
                    v93 = v76 + 3;
                    v94 = (unsigned __int64)(v76 + 3);
LABEL_94:
                    while ( (unsigned __int64)v91 < v86 )
                    {
                      if ( *v88 != *v89 )
                      {
                        __asm { tzcnt   rcx, rdx }
                        v97 = v92 + ((unsigned int)_RCX >> 3) - v90;
                        goto LABEL_89;
                      }
                      v89 = v93 + 2;
                      ++v88;
                      v91 = v89;
                      v92 = (_DWORD)v93 + 8;
                      v93 += 2;
                      v94 = (unsigned __int64)v89;
                    }
                    if ( v94 < v216 - 3 && *(_DWORD *)v88 == *(_DWORD *)v89 )
                    {
                      v89 = (_QWORD *)((char *)v89 + 4);
                      v88 = (_QWORD *)((char *)v88 + 4);
                    }
                    if ( (unsigned __int64)v89 < v216 - 1 && *(_WORD *)v88 == *(_WORD *)v89 )
                    {
                      v89 = (_QWORD *)((char *)v89 + 2);
                      v88 = (_QWORD *)((char *)v88 + 2);
                    }
                    if ( (unsigned __int64)v89 < v216 && *(_BYTE *)v88 == *(_BYTE *)v89 )
                      LODWORD(v89) = (_DWORD)v89 + 1;
                    v97 = (_DWORD)v89 - v90;
                  }
LABEL_89:
                  v76 = (_DWORD *)((char *)v76 + v97 + 4);
                  v98 = *v87;
                  if ( v97 >= 0xF )
                  {
                    *v87 = v98 + 15;
                    v103 = v97 - 15;
                    *(_DWORD *)v69 = -1;
                    if ( v97 - 15 >= 0x3FC )
                    {
                      v106 = v103 / 0x3FC;
                      do
                      {
                        v69 += 4;
                        v103 -= 1020;
                        *(_DWORD *)v69 = -1;
                        --v106;
                      }
                      while ( v106 );
                    }
                    v104 = &v69[v103 / 0xFF];
                    v69 = v104 + 1;
                    *v104 = v103 + v103 / 0xFF;
                  }
                  else
                  {
                    *v87 = v98 + v97;
                  }
                  v68 = v76;
                  if ( (unsigned __int64)v76 >= v212 )
                    goto LABEL_120;
                  v66 = v208;
                  *(_WORD *)&a8[2 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v76 - 2)) >> 19)] = (_WORD)v76 - (_WORD)v208 - 2;
                  v99 = (unsigned __int64)(unsigned int)(-1640531535 * *v76) >> 19;
                  v100 = *(unsigned __int16 *)&a8[2 * v99];
                  *(_WORD *)&a8[2 * v99] = (_WORD)v76 - (_WORD)v208;
                  v80 = &v208[v100];
                  if ( *(_DWORD *)v80 != *v76 )
                  {
                    v67 = v212;
                    v70 = (_DWORD *)((char *)v76 + 1);
                    goto LABEL_76;
                  }
                  v84 = v69 + 1;
                  *v69 = 0;
                }
              }
            }
LABEL_120:
            v65 = v219;
            LODWORD(v9) = (_DWORD)a4;
          }
          v109 = v65 - v68;
          if ( v109 < 0xF )
          {
            *v69 = 16 * v109;
          }
          else
          {
            *v69 = -16;
            v110 = v109 - 15;
            ++v69;
            if ( v109 - 15 >= 0xFF )
            {
              v111 = v110 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v111) = -1;
              memset_0(v69, SDWORD2(v111), v110 / 0xFF);
              v69 += v110 / 0xFF;
              v110 %= 0xFFuLL;
            }
            *v69 = v110;
          }
          memmove(v69 + 1, v68, v109);
          v11 = (_DWORD)v69 + 1 + v109 - (_DWORD)v9;
        }
        else
        {
          *v9 = 0;
          v11 = 1;
        }
      }
    }
    else if ( (int)v8 >= 65547 )
    {
      if ( (unsigned int)v8 <= 0x7E000000 )
      {
        v160 = v12[4100];
        v161 = (char *)v10 + v8;
        v12[4102] += v8;
        v162 = a4;
        v163 = (char *)v10 + 1;
        v12[4101] = 2;
        v214 = (unsigned __int64)&a4[a5];
        v221 = (char *)v10 + v8;
        v12[4100] = v160 + v8;
        v164 = (char *)v10 - v160;
        v165 = 0;
        v210 = (char *)v10 - v160;
        v166 = (char *)v10;
        v12[(0xCF1BBCDCBB000000uLL * *v10) >> 52] = v160;
LABEL_181:
        v224 = v165;
        v167 = 1;
        v168 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v163) >> 52;
        v169 = 64;
        while ( 1 )
        {
          v170 = *(unsigned int *)&a8[4 * v168];
          v171 = (unsigned int *)&a8[4 * v168];
          v172 = v163;
          v173 = (_DWORD)v163 - (_DWORD)v164;
          v174 = v167;
          v167 = v169 >> 6;
          v163 = &v172[v174];
          ++v169;
          if ( v163 > v161 - 11 )
            break;
          v175 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)v163;
          v176 = &v164[v170];
          *v171 = v173;
          v168 = v175 >> 52;
          if ( (int)v170 + 0xFFFF >= v173 && *(_DWORD *)v176 == *(_DWORD *)v172 )
          {
            if ( v176 > a2 && *(v172 - 1) == *(v176 - 1) )
            {
              do
              {
                --v172;
                --v176;
              }
              while ( v176 > a2 && v172 > v166 && *(v172 - 1) == *(v176 - 1) );
              v161 = v221;
            }
            v177 = v162 + 1;
            v178 = (unsigned int)((_DWORD)v172 - (_DWORD)v166);
            if ( (unsigned __int64)&v162[(unsigned int)v178 / 0xFF + 9 + v178] <= v214 )
            {
              if ( (unsigned int)v178 >= 0xF )
              {
                v200 = v178 - 15;
                *v162 = -16;
                if ( (int)v178 - 15 >= 255 )
                {
                  v202 = v200 / 0xFF;
                  v203 = v200 / 0xFF;
                  LOBYTE(v202) = -1;
                  memset_0(v162 + 1, v202, v203);
                  v178 = (unsigned int)((_DWORD)v172 - (_DWORD)v166);
                  v177 = (_QWORD *)((char *)v177 + v203);
                  LOBYTE(v200) = v203 + v200;
                }
                *(_BYTE *)v177 = v200;
                v177 = (_QWORD *)((char *)v177 + 1);
                v165 = v224;
              }
              else
              {
                *v162 = 16 * ((_BYTE)v172 - (_BYTE)v166);
              }
              v179 = (_WORD *)((char *)v177 + v178);
              v180 = v166 - (char *)v177;
              do
              {
                *v177 = *(_QWORD *)((char *)v177 + v180);
                ++v177;
              }
              while ( v177 < (_QWORD *)v179 );
              v181 = (unsigned __int64)(v161 - 12);
              v166 = v172;
              while ( 1 )
              {
                v182 = v162;
                v162 = v179 + 1;
                *v179 = (_WORD)v166 - (_WORD)v176;
                v183 = v176 + 4;
                v184 = v166 + 4;
                v185 = (_DWORD)v166 + 4;
                v186 = v166 + 4;
                v187 = (_DWORD)v166 + 4;
                v188 = v166 + 4;
                v189 = (unsigned __int64)(v166 + 4);
                if ( (unsigned __int64)(v166 + 4) >= v181 )
                  goto LABEL_203;
                if ( *v183 != *(_QWORD *)v184 )
                {
                  __asm { tzcnt   r8, r8 }
                  v192 = (unsigned int)_R8 >> 3;
                }
                else
                {
                  v186 = v166 + 12;
                  v183 = v176 + 12;
                  v184 = v166 + 12;
                  v187 = (_DWORD)v166 + 12;
                  v188 = v166 + 12;
                  v189 = (unsigned __int64)(v166 + 12);
LABEL_203:
                  while ( (unsigned __int64)v186 < v181 )
                  {
                    if ( *(_QWORD *)v184 != *v183 )
                    {
                      __asm { tzcnt   r8, rcx }
                      v192 = v187 + ((unsigned int)_R8 >> 3) - v185;
                      goto LABEL_196;
                    }
                    v184 = v188 + 8;
                    ++v183;
                    v186 = v184;
                    v187 = (_DWORD)v188 + 8;
                    v188 += 8;
                    v189 = (unsigned __int64)v184;
                  }
                  if ( v189 < (unsigned __int64)(v161 - 8) && *(_DWORD *)v183 == *(_DWORD *)v184 )
                  {
                    v184 += 4;
                    v183 = (_QWORD *)((char *)v183 + 4);
                  }
                  if ( v184 < v161 - 6 && *(_WORD *)v183 == *(_WORD *)v184 )
                  {
                    v184 += 2;
                    v183 = (_QWORD *)((char *)v183 + 2);
                  }
                  if ( v184 < v161 - 5 && *(_BYTE *)v183 == *v184 )
                    LODWORD(v184) = (_DWORD)v184 + 1;
                  v192 = (_DWORD)v184 - v185;
                }
LABEL_196:
                v166 += v192 + 4;
                if ( (unsigned __int64)&v162[(v192 + 240) / 0xFF + 6] > v214 )
                  break;
                v193 = *v182;
                if ( v192 >= 0xF )
                {
                  v198 = v192 - 15;
                  *v182 = v193 + 15;
                  *(_DWORD *)v162 = -1;
                  if ( v198 >= 0x3FC )
                  {
                    v201 = v198 / 0x3FC;
                    do
                    {
                      v162 += 4;
                      v198 -= 1020;
                      *(_DWORD *)v162 = -1;
                      --v201;
                    }
                    while ( v201 );
                  }
                  v199 = &v162[v198 / 0xFF];
                  v162 = v199 + 1;
                  *v199 = v198 + v198 / 0xFF;
                }
                else
                {
                  *v182 = v192 + v193;
                }
                if ( v166 >= v161 - 11 )
                  goto LABEL_227;
                *(_DWORD *)&a8[4 * ((0xCF1BBCDCBB000000uLL * *(_QWORD *)(v166 - 2)) >> 52)] = (_DWORD)v166
                                                                                            - (_DWORD)v210
                                                                                            - 2;
                v194 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v166) >> 52;
                v195 = *(unsigned int *)&a8[4 * v194];
                *(_DWORD *)&a8[4 * v194] = (_DWORD)v166 - (_DWORD)v210;
                v176 = &v210[v195];
                if ( (int)v195 + 0xFFFF < (unsigned int)((_DWORD)v166 - (_DWORD)v210)
                  || *(_DWORD *)v176 != *(_DWORD *)v166 )
                {
                  v164 = v210;
                  v163 = v166 + 1;
                  goto LABEL_181;
                }
                v179 = v162 + 1;
                *v162 = 0;
              }
            }
            goto LABEL_228;
          }
          v164 = v210;
        }
LABEL_227:
        v204 = v161 - v166;
        if ( (unsigned __int64)&v162[(v204 + 240) / 0xFF + 1 + v204] > v214 )
          goto LABEL_228;
        if ( v204 < 0xF )
        {
          *v162 = 16 * v204;
        }
        else
        {
          *v162 = -16;
          v205 = v204 - 15;
          ++v162;
          if ( v204 - 15 >= 0xFF )
          {
            v206 = v205 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v206) = -1;
            memset_0(v162, SDWORD2(v206), v205 / 0xFF);
            v162 += v205 / 0xFF;
            v205 %= 0xFFuLL;
          }
          *v162 = v205;
        }
        memmove(v162 + 1, v166, v204);
        v11 = v204 - (_DWORD)a4 + (_DWORD)v162 + 1;
      }
    }
    else if ( (unsigned int)v8 <= 0x7E000000 )
    {
      if ( (_DWORD)v8 )
      {
        v14 = v12[4100];
        v15 = (char *)v10 + v8;
        v12[4102] += v8;
        v207 = (char *)v10 + v8;
        v16 = (char *)v10 - v14;
        v215 = (__int64)v10 + v8 - 5;
        v218 = (char *)v10 - v14;
        v12[4100] = v14 + v8;
        v17 = (unsigned __int64)&v9[a5];
        v211 = v17;
        v18 = (char *)v10;
        v12[4101] = 3;
        v19 = v9;
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
          v20 = (char *)v10 + 1;
          *((_WORD *)v12 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v10) >> 19)) = v14;
LABEL_14:
          v21 = v20;
          v22 = 64;
          v23 = 1;
          v24 = (unsigned int)(-1640531535 * *(_DWORD *)v20) >> 19;
          while ( 1 )
          {
            v25 = v23;
            v26 = (_WORD *)v12 + v24;
            v27 = (__int16)v21;
            v23 = v22 >> 6;
            v28 = v21;
            v29 = v21;
            v21 += v25;
            v30 = v27 - (_WORD)v16;
            ++v22;
            if ( v21 > v15 - 11 )
            {
LABEL_58:
              LODWORD(v9) = (_DWORD)a4;
              v11 = 0;
              goto LABEL_59;
            }
            v31 = &v16[(unsigned __int16)*v26];
            v32 = -1640531535 * *(_DWORD *)v21;
            *v26 = v30;
            v12 = (unsigned int *)a8;
            v24 = v32 >> 19;
            if ( *(_DWORD *)v31 == *(_DWORD *)v29 )
              break;
            v15 = v207;
          }
          if ( v31 > a2 && *(v28 - 1) == *(v31 - 1) )
          {
            do
            {
              --v29;
              --v31;
            }
            while ( v29 > v18 && v31 > a2 && *(v29 - 1) == *(v31 - 1) );
            v17 = v211;
          }
          v33 = v19 + 1;
          v34 = (unsigned int)((_DWORD)v29 - (_DWORD)v18);
          if ( (unsigned __int64)&v19[(unsigned int)v34 / 0xFF + 9 + v34] <= v17 )
          {
            if ( (unsigned int)v34 >= 0xF )
            {
              v57 = v34 - 15;
              *v19 = -16;
              if ( (int)v34 - 15 >= 255 )
              {
                v59 = v57 / 0xFF;
                LOBYTE(v59) = -1;
                memset_0(v19 + 1, v59, v57 / 0xFF);
                v33 = (_QWORD *)((char *)v33 + v57 / 0xFF);
                LOBYTE(v57) = v57 / 0xFF + v57;
              }
              *(_BYTE *)v33 = v57;
              v33 = (_QWORD *)((char *)v33 + 1);
            }
            else
            {
              *v19 = 16 * ((_BYTE)v29 - (_BYTE)v18);
            }
            v35 = (_WORD *)((char *)v33 + v34);
            v36 = v18 - (char *)v33;
            do
            {
              *v33 = *(_QWORD *)((char *)v33 + v36);
              ++v33;
            }
            while ( v33 < (_QWORD *)v35 );
            v37 = v215;
            v38 = v215 - 7;
            v17 = v211;
            while ( 1 )
            {
              v39 = v29 + 4;
              v40 = v19;
              *v35 = (_WORD)v29 - (_WORD)v31;
              v19 = v35 + 1;
              v41 = v31 + 4;
              v42 = (_DWORD)v29 + 4;
              v43 = v29 + 4;
              v44 = (_DWORD)v29 + 4;
              v45 = v29 + 4;
              v46 = (unsigned __int64)(v29 + 4);
              if ( (unsigned __int64)(v29 + 4) >= v38 )
                goto LABEL_34;
              if ( *v39 != *v41 )
              {
                __asm { tzcnt   r8, rcx }
                v49 = (unsigned int)_R8 >> 3;
              }
              else
              {
                v43 = v29 + 12;
                ++v41;
                v39 = v29 + 12;
                v44 = (_DWORD)v29 + 12;
                v45 = v29 + 12;
                v46 = (unsigned __int64)(v29 + 12);
LABEL_34:
                while ( (unsigned __int64)v43 < v38 )
                {
                  if ( *v41 != *v39 )
                  {
                    __asm { tzcnt   r8, rcx }
                    v49 = v44 + ((unsigned int)_R8 >> 3) - v42;
                    goto LABEL_28;
                  }
                  v39 = v45 + 2;
                  ++v41;
                  v43 = v39;
                  v44 = (_DWORD)v45 + 8;
                  v45 += 2;
                  v46 = (unsigned __int64)v39;
                }
                if ( v46 < v37 - 3 && *(_DWORD *)v41 == *(_DWORD *)v39 )
                {
                  v39 = (_QWORD *)((char *)v39 + 4);
                  v41 = (_QWORD *)((char *)v41 + 4);
                }
                if ( (unsigned __int64)v39 < v37 - 1 && *(_WORD *)v41 == *(_WORD *)v39 )
                {
                  v39 = (_QWORD *)((char *)v39 + 2);
                  v41 = (_QWORD *)((char *)v41 + 2);
                }
                if ( (unsigned __int64)v39 < v37 && *(_BYTE *)v41 == *(_BYTE *)v39 )
                  LODWORD(v39) = (_DWORD)v39 + 1;
                v49 = (_DWORD)v39 - v42;
              }
LABEL_28:
              v29 += v49 + 4;
              if ( (unsigned __int64)&v19[(v49 + 240) / 0xFF + 6] > v211 )
                break;
              v50 = *v40;
              if ( v49 >= 0xF )
              {
                v55 = v49 - 15;
                *v40 = v50 + 15;
                *(_DWORD *)v19 = -1;
                if ( v55 >= 0x3FC )
                {
                  v58 = v55 / 0x3FC;
                  do
                  {
                    v19 += 4;
                    v55 -= 1020;
                    *(_DWORD *)v19 = -1;
                    --v58;
                  }
                  while ( v58 );
                }
                v56 = v55 / 0xFF;
                v19[v56] = v56 + v55;
                v19 += v56 + 1;
              }
              else
              {
                *v40 = v49 + v50;
              }
              v15 = v207;
              v18 = v29;
              if ( v29 >= v207 - 11 )
                goto LABEL_58;
              v16 = v218;
              v12 = (unsigned int *)a8;
              *(_WORD *)&a8[2 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v29 - 2)) >> 19)] = (_WORD)v29 - (_WORD)v218 - 2;
              v51 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v29) >> 19;
              v52 = *(unsigned __int16 *)&a8[2 * v51];
              *(_WORD *)&a8[2 * v51] = (_WORD)v29 - (_WORD)v218;
              v31 = &v218[v52];
              if ( *(_DWORD *)v31 != *(_DWORD *)v29 )
              {
                v15 = v207;
                v20 = v29 + 1;
                goto LABEL_14;
              }
              v37 = v215;
              v35 = v19 + 1;
              *v19 = 0;
            }
          }
LABEL_228:
          v11 = 0;
        }
      }
      else if ( a5 > 0 )
      {
        *v9 = 0;
        v11 = 1;
      }
    }
  }
  if ( v11 <= 0 )
    return 3221225507LL;
  result = 0LL;
  *a7 = v11;
  return result;
}
