/*
 * XREFs of LZ4_compress_fast_extState @ 0x1801094B4
 * Callers:
 *     RtlCompressBufferLz4 @ 0x180152D90 (RtlCompressBufferLz4.c)
 * Callees:
 *     LZ4_compressBound @ 0x180120590 (LZ4_compressBound.c)
 *     LZ4_initStream @ 0x18012104C (LZ4_initStream.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LZ4_compress_fast_extState(__int64 a1, char *a2, _BYTE *a3, int a4, int a5)
{
  __int64 v5; // rbx
  _BYTE *v6; // r12
  __int64 v8; // rdx
  unsigned int *v9; // r8
  unsigned int v10; // edi
  __int64 v11; // rdx
  char *v12; // r15
  _BYTE *v13; // rsi
  char *v14; // rbp
  int v15; // r12d
  char *v16; // rdx
  int v17; // r8d
  int v18; // r11d
  __int64 v19; // rcx
  __int64 v20; // rbx
  char *v21; // r9
  __int16 v22; // r10
  __int64 v23; // rcx
  char *v24; // r13
  unsigned int v25; // ecx
  _QWORD *v26; // r14
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // r12d
  unsigned int v30; // edx
  size_t v31; // rbx
  _WORD *v32; // rdx
  signed __int64 v33; // rbp
  unsigned __int64 v34; // r14
  char *v35; // rcx
  char *v36; // r11
  _QWORD *v37; // rdx
  char *v38; // rax
  int v39; // ebx
  _DWORD *v40; // r10
  unsigned __int64 v41; // r8
  unsigned int v45; // ecx
  char v47; // al
  unsigned int v48; // r8d
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  __int64 v52; // r13
  size_t v53; // r15
  size_t v54; // rdi
  unsigned __int128 v55; // rax
  char *v56; // rdx
  __int64 v57; // rcx
  int v58; // r10d
  _QWORD *v59; // r15
  _BYTE *v60; // rsi
  int v61; // r13d
  _QWORD *v62; // rdx
  int v63; // r8d
  int v64; // r9d
  unsigned __int64 v65; // rcx
  _DWORD *v66; // r12
  unsigned int v67; // r11d
  unsigned int *v68; // r10
  unsigned int v69; // ebx
  unsigned __int64 v70; // rcx
  char *v71; // rbp
  _QWORD *v72; // r14
  int v73; // eax
  __int64 v74; // rcx
  unsigned int v75; // r13d
  unsigned int v76; // edx
  size_t v77; // rbx
  _WORD *v78; // rdx
  signed __int64 v79; // r15
  unsigned __int64 v80; // rbx
  _QWORD *v81; // rcx
  char *v82; // r10
  _QWORD *v83; // rdx
  char *v84; // rax
  int v85; // r11d
  char *v86; // r9
  unsigned __int64 v87; // r8
  unsigned int v91; // ecx
  char v93; // al
  unsigned int v94; // r8d
  __int64 v95; // rax
  _BYTE *v96; // rax
  unsigned __int64 v97; // rcx
  __int64 v98; // rax
  size_t v99; // rbp
  size_t v100; // rdi
  unsigned __int128 v101; // rax
  int v102; // edi
  __int64 v103; // rdx
  char *v104; // rbp
  __int16 v105; // r11
  char *v106; // r15
  _BYTE *v107; // rsi
  int v108; // r14d
  char *v109; // rdx
  int v110; // r8d
  int v111; // r10d
  __int64 v112; // rcx
  __int16 v113; // r9
  __int64 v114; // r11
  char *v115; // rbx
  char *v116; // r12
  unsigned int v117; // ecx
  __int64 v118; // rax
  __int64 v119; // r13
  unsigned int v120; // ecx
  char *v121; // r13
  _QWORD *v122; // r14
  __int64 v123; // rcx
  unsigned int v124; // r12d
  unsigned int v125; // edx
  size_t v126; // rbx
  _WORD *v127; // rdx
  signed __int64 v128; // r15
  unsigned __int64 v129; // r15
  unsigned __int64 v130; // rbx
  _QWORD *v131; // rcx
  char *v132; // r10
  _QWORD *v133; // rdx
  _DWORD *v134; // rax
  int v135; // r11d
  _DWORD *v136; // r9
  unsigned __int64 v137; // r8
  unsigned int v141; // r8d
  char v143; // al
  unsigned int v144; // r8d
  __int64 v145; // rax
  _BYTE *v146; // rax
  unsigned __int64 v147; // rcx
  __int64 v148; // r13
  size_t v149; // rbp
  size_t v150; // rdi
  unsigned __int128 v151; // rax
  __int64 v152; // rcx
  char *v153; // r15
  char *v154; // rdx
  char *v155; // rbp
  char *v156; // r10
  int v157; // r12d
  int v158; // r8d
  int v159; // r11d
  unsigned __int64 v160; // rcx
  char *v161; // r13
  unsigned int v162; // ebx
  unsigned int *v163; // r9
  __int64 v164; // r14
  unsigned __int64 v165; // rcx
  char *v166; // rbp
  _QWORD *v167; // r14
  __int64 v168; // rcx
  unsigned int v169; // r12d
  unsigned int v170; // edx
  size_t v171; // rbx
  _WORD *v172; // rdx
  signed __int64 v173; // r10
  unsigned __int64 v174; // r14
  char *v175; // rcx
  char *v176; // r11
  _QWORD *v177; // rdx
  char *v178; // rax
  int v179; // ebx
  char *v180; // r9
  unsigned __int64 v181; // r8
  unsigned int v185; // r8d
  char v187; // al
  unsigned int v188; // r8d
  __int64 v189; // rax
  _BYTE *v190; // rax
  unsigned __int64 v191; // rcx
  __int64 v192; // rax
  size_t v193; // rdi
  unsigned __int128 v194; // rax
  __int64 inited; // [rsp+20h] [rbp-68h]
  __int64 v197; // [rsp+28h] [rbp-60h]
  char *v198; // [rsp+28h] [rbp-60h]
  char *v199; // [rsp+28h] [rbp-60h]
  unsigned __int64 v200; // [rsp+28h] [rbp-60h]
  char *v201; // [rsp+30h] [rbp-58h]
  _BYTE *v202; // [rsp+30h] [rbp-58h]
  char *v203; // [rsp+30h] [rbp-58h]
  char *v204; // [rsp+38h] [rbp-50h]
  unsigned __int64 v205; // [rsp+38h] [rbp-50h]
  char *v206; // [rsp+38h] [rbp-50h]
  char *v207; // [rsp+38h] [rbp-50h]
  unsigned __int64 v208; // [rsp+40h] [rbp-48h]
  char *v209; // [rsp+48h] [rbp-40h]
  __int64 v210; // [rsp+48h] [rbp-40h]
  __int64 v211; // [rsp+48h] [rbp-40h]
  int v213; // [rsp+A0h] [rbp+18h]
  int v214; // [rsp+B0h] [rbp+28h]
  int v215; // [rsp+B0h] [rbp+28h]
  int v216; // [rsp+B0h] [rbp+28h]
  int v217; // [rsp+B0h] [rbp+28h]

  v213 = (int)a3;
  v5 = a4;
  v6 = a3;
  inited = LZ4_initStream();
  v10 = 0;
  if ( a5 < (int)LZ4_compressBound((unsigned int)v5, v8, inited) )
  {
    if ( (int)v5 >= 65547 )
    {
      if ( (unsigned int)v5 > 0x7E000000 )
        return v10;
      v152 = v9[4100];
      v9[4102] += v5;
      v153 = &a2[v5];
      v200 = (unsigned __int64)&v6[a5];
      v154 = a2 + 1;
      v9[4101] = 2;
      v207 = a2;
      v9[4100] = v152 + v5;
      v155 = &a2[-v152];
      v13 = v6;
      v203 = &a2[-v152];
      v156 = a2;
      v157 = 0;
      v9[(0xCF1BBCDCBB000000uLL * *(_QWORD *)a2) >> 52] = v152;
LABEL_175:
      v158 = 1;
      v217 = v157;
      v159 = 64;
      v160 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v154) >> 52;
      while ( 1 )
      {
        v161 = v154;
        v162 = (_DWORD)v154 - (_DWORD)v155;
        v154 += v158;
        v163 = (unsigned int *)(inited + 4 * v160);
        v158 = v159 >> 6;
        v164 = *v163;
        ++v159;
        if ( v154 > v153 - 11 )
          break;
        v165 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)v154;
        v166 = &v155[v164];
        *v163 = v162;
        v160 = v165 >> 52;
        if ( (int)v164 + 0xFFFF >= v162 && *(_DWORD *)v166 == *(_DWORD *)v161 )
        {
          if ( v166 > a2 )
          {
            do
            {
              if ( *(v161 - 1) != *(v166 - 1) )
                break;
              --v161;
              --v166;
            }
            while ( v166 > a2 && v161 > v156 );
          }
          v167 = v13 + 1;
          v168 = (unsigned int)((_DWORD)v161 - (_DWORD)v156);
          v211 = v168;
          if ( (unsigned __int64)&v13[v168 + 9 + (unsigned int)v168 / 0xFF] <= v200 )
          {
            if ( (unsigned int)v168 < 0xF )
            {
              *v13 = 16 * ((_BYTE)v161 - (_BYTE)v156);
            }
            else
            {
              v169 = v168 - 15;
              *v13 = -16;
              if ( (int)v168 - 15 >= 255 )
              {
                v170 = v169 / 0xFF;
                v171 = v169 / 0xFF;
                LOBYTE(v170) = -1;
                memset_thunk_772440563353939046(v13 + 1, v170, v171);
                v168 = v211;
                v167 = (_QWORD *)((char *)v167 + v171);
                v156 = v207;
                LOBYTE(v169) = v171 + v169;
              }
              *(_BYTE *)v167 = v169;
              v167 = (_QWORD *)((char *)v167 + 1);
              v157 = v217;
            }
            v172 = (_WORD *)((char *)v167 + v168);
            v173 = v156 - (char *)v167;
            do
            {
              *v167 = *(_QWORD *)((char *)v167 + v173);
              ++v167;
            }
            while ( v167 < (_QWORD *)v172 );
            v174 = (unsigned __int64)(v153 - 12);
            v156 = v161;
            while ( 1 )
            {
              v175 = v156 + 4;
              v176 = v13;
              *v172 = (_WORD)v156 - (_WORD)v166;
              v13 = v172 + 1;
              v177 = v166 + 4;
              v178 = v156 + 4;
              v179 = (_DWORD)v156 + 4;
              v180 = v156 + 4;
              v181 = (unsigned __int64)(v156 + 4);
              if ( (unsigned __int64)(v156 + 4) >= v174 )
                goto LABEL_196;
              if ( *(_QWORD *)v175 != *v177 )
              {
                __asm { tzcnt   r8, rax }
                v185 = (unsigned int)_R8 >> 3;
              }
              else
              {
                v178 = v156 + 12;
                v177 = v166 + 12;
                v175 = v156 + 12;
                v180 = v156 + 12;
                v181 = (unsigned __int64)(v156 + 12);
LABEL_196:
                while ( (unsigned __int64)v178 < v174 )
                {
                  if ( *v177 != *(_QWORD *)v175 )
                  {
                    __asm { tzcnt   r8, rax }
                    v185 = (_DWORD)v175 + ((unsigned int)_R8 >> 3) - v179;
                    goto LABEL_211;
                  }
                  v175 = v180 + 8;
                  ++v177;
                  v178 = v175;
                  v180 += 8;
                  v181 = (unsigned __int64)v175;
                }
                if ( v181 < (unsigned __int64)(v153 - 8) && *(_DWORD *)v177 == *(_DWORD *)v175 )
                {
                  v175 += 4;
                  v177 = (_QWORD *)((char *)v177 + 4);
                }
                if ( v175 < v153 - 6 && *(_WORD *)v177 == *(_WORD *)v175 )
                {
                  v175 += 2;
                  v177 = (_QWORD *)((char *)v177 + 2);
                }
                if ( v175 < v153 - 5 && *(_BYTE *)v177 == *v175 )
                  LODWORD(v175) = (_DWORD)v175 + 1;
                v185 = (_DWORD)v175 - v179;
              }
LABEL_211:
              v156 += v185 + 4;
              v207 = v156;
              if ( (unsigned __int64)&v13[(v185 + 240) / 0xFF + 6] > v200 )
                break;
              v187 = *v176;
              if ( v185 < 0xF )
              {
                *v176 = v185 + v187;
              }
              else
              {
                v188 = v185 - 15;
                *v176 = v187 + 15;
                *(_DWORD *)v13 = -1;
                if ( v188 >= 0x3FC )
                {
                  v189 = v188 / 0x3FC;
                  do
                  {
                    v13 += 4;
                    v188 -= 1020;
                    *(_DWORD *)v13 = -1;
                    --v189;
                  }
                  while ( v189 );
                }
                v190 = &v13[v188 / 0xFF];
                *v190 = v188 + v188 / 0xFF;
                v13 = v190 + 1;
              }
              if ( v156 >= v153 - 11 )
                goto LABEL_223;
              *(_DWORD *)(inited + 4 * ((0xCF1BBCDCBB000000uLL * *(_QWORD *)(v156 - 2)) >> 52)) = (_DWORD)v156
                                                                                                - (_DWORD)v203
                                                                                                - 2;
              v191 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v156) >> 52;
              v192 = *(unsigned int *)(inited + 4 * v191);
              *(_DWORD *)(inited + 4 * v191) = (_DWORD)v156 - (_DWORD)v203;
              v166 = &v203[v192];
              if ( (int)v192 + 0xFFFF < (unsigned int)((_DWORD)v156 - (_DWORD)v203)
                || *(_DWORD *)v166 != *(_DWORD *)v156 )
              {
                v155 = v203;
                v154 = v156 + 1;
                goto LABEL_175;
              }
              v172 = v13 + 1;
              *v13 = 0;
            }
          }
          return v10;
        }
        v155 = v203;
      }
LABEL_223:
      v53 = v153 - v156;
      if ( (unsigned __int64)&v13[(v53 + 240) / 0xFF + 1 + v53] > v200 )
        return v10;
      if ( v53 < 0xF )
      {
        *v13 = 16 * v53;
      }
      else
      {
        *v13 = -16;
        v193 = v53 - 15;
        ++v13;
        if ( v53 - 15 >= 0xFF )
        {
          v194 = v193 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v194) = -1;
          memset_thunk_772440563353939046(v13, SDWORD2(v194), v193 / 0xFF);
          v156 = v207;
          v13 += v193 / 0xFF;
          LOBYTE(v193) = v193 / 0xFF + v193;
        }
        *v13 = v193;
      }
      v56 = v156;
LABEL_230:
      memmove(v13 + 1, v56, v53);
      v102 = (_DWORD)v13 + 1 + v53;
      return (unsigned int)(v102 - v213);
    }
    if ( (unsigned int)v5 > 0x7E000000 )
      return v10;
    if ( !(_DWORD)v5 )
    {
      if ( a5 <= 0 )
        return v10;
      goto LABEL_5;
    }
    v103 = v9[4100];
    v9[4102] += v5;
    v104 = &a2[v5];
    v202 = &v6[a5];
    v105 = (_WORD)a2 - v103;
    v9[4101] = 3;
    v199 = &a2[-v103];
    v9[4100] = v103 + v5;
    v106 = a2;
    v107 = v6;
    v108 = 0;
    if ( (int)v5 < 13 )
    {
LABEL_166:
      v149 = v104 - v106;
      if ( &v107[v149 + 1 + (v149 + 240) / 0xFF] <= v202 )
      {
        if ( v149 < 0xF )
        {
          *v107 = 16 * v149;
        }
        else
        {
          *v107 = -16;
          v150 = v149 - 15;
          ++v107;
          if ( v149 - 15 >= 0xFF )
          {
            v151 = v150 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v151) = -1;
            memset_thunk_772440563353939046(v107, SDWORD2(v151), v150 / 0xFF);
            v107 += v150 / 0xFF;
            LOBYTE(v150) = v150 / 0xFF + v150;
          }
          *v107 = v150;
        }
        memmove(v107 + 1, v106, v149);
        return (unsigned int)((_DWORD)v107 + 1 + v149 - (_DWORD)v6);
      }
    }
    else
    {
      *((_WORD *)v9 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)a2) >> 19)) = v103;
      v109 = a2 + 1;
LABEL_119:
      v110 = 1;
      v216 = v108;
      v111 = 64;
      v112 = (unsigned int)(-1640531535 * *(_DWORD *)v109) >> 19;
      do
      {
        v113 = (_WORD)v109 - v105;
        v206 = v109;
        v114 = (unsigned int)v112;
        v115 = v109;
        v116 = v109;
        v117 = *(unsigned __int16 *)(inited + 2 * v112);
        v118 = v110;
        v110 = v111 >> 6;
        v109 += v118;
        ++v111;
        if ( v109 > v104 - 11 )
        {
LABEL_165:
          LODWORD(v6) = v213;
          goto LABEL_166;
        }
        v119 = v117;
        v120 = -1640531535 * *(_DWORD *)v109;
        v121 = &v199[v119];
        *(_WORD *)(inited + 2 * v114) = v113;
        v105 = (__int16)v199;
        v112 = v120 >> 19;
      }
      while ( *(_DWORD *)v121 != *(_DWORD *)v116 );
      if ( v121 > a2 && *(v115 - 1) == *(v121 - 1) )
      {
        do
        {
          --v116;
          --v121;
        }
        while ( v116 > v106 && v121 > a2 && *(v116 - 1) == *(v121 - 1) );
        v206 = v116;
      }
      v122 = v107 + 1;
      v123 = (unsigned int)((_DWORD)v116 - (_DWORD)v106);
      v210 = v123;
      if ( &v107[(unsigned int)v123 / 0xFF + 9 + v123] <= v202 )
      {
        if ( (unsigned int)v123 < 0xF )
        {
          *v107 = 16 * ((_BYTE)v116 - (_BYTE)v106);
        }
        else
        {
          v124 = v123 - 15;
          *v107 = -16;
          if ( (int)v123 - 15 >= 255 )
          {
            v125 = v124 / 0xFF;
            v126 = v124 / 0xFF;
            LOBYTE(v125) = -1;
            memset_thunk_772440563353939046(v107 + 1, v125, v126);
            v123 = v210;
            v122 = (_QWORD *)((char *)v122 + v126);
            LOBYTE(v124) = v126 + v124;
          }
          *(_BYTE *)v122 = v124;
          v122 = (_QWORD *)((char *)v122 + 1);
          v116 = v206;
        }
        v127 = (_WORD *)((char *)v122 + v123);
        v128 = v106 - (char *)v122;
        do
        {
          *v122 = *(_QWORD *)((char *)v122 + v128);
          ++v122;
        }
        while ( v122 < (_QWORD *)v127 );
        v129 = (unsigned __int64)(v104 - 5);
        v130 = (unsigned __int64)(v104 - 12);
        v108 = v216;
        while ( 1 )
        {
          v131 = v116 + 4;
          v132 = v107;
          *v127 = (_WORD)v116 - (_WORD)v121;
          v107 = v127 + 1;
          v133 = v121 + 4;
          v134 = v116 + 4;
          v135 = (_DWORD)v116 + 4;
          v136 = v116 + 4;
          v137 = (unsigned __int64)(v116 + 4);
          if ( (unsigned __int64)(v116 + 4) >= v130 )
            goto LABEL_139;
          if ( *v133 != *v131 )
          {
            __asm { tzcnt   r8, rax }
            v141 = (unsigned int)_R8 >> 3;
          }
          else
          {
            v134 = v116 + 12;
            v133 = v121 + 12;
            v131 = v116 + 12;
            v136 = v116 + 12;
            v137 = (unsigned __int64)(v116 + 12);
LABEL_139:
            while ( (unsigned __int64)v134 < v130 )
            {
              if ( *v133 != *v131 )
              {
                __asm { tzcnt   r8, rax }
                v141 = (_DWORD)v131 + ((unsigned int)_R8 >> 3) - v135;
                goto LABEL_154;
              }
              v131 = v136 + 2;
              ++v133;
              v134 = v131;
              v136 += 2;
              v137 = (unsigned __int64)v131;
            }
            if ( v137 < v129 - 3 && *(_DWORD *)v133 == *(_DWORD *)v131 )
            {
              v131 = (_QWORD *)((char *)v131 + 4);
              v133 = (_QWORD *)((char *)v133 + 4);
            }
            if ( (unsigned __int64)v131 < v129 - 1 && *(_WORD *)v133 == *(_WORD *)v131 )
            {
              v131 = (_QWORD *)((char *)v131 + 2);
              v133 = (_QWORD *)((char *)v133 + 2);
            }
            if ( (unsigned __int64)v131 < v129 && *(_BYTE *)v133 == *(_BYTE *)v131 )
              LODWORD(v131) = (_DWORD)v131 + 1;
            v141 = (_DWORD)v131 - v135;
          }
LABEL_154:
          v116 += v141 + 4;
          if ( &v107[(v141 + 240) / 0xFF + 6] > v202 )
            break;
          v143 = *v132;
          if ( v141 < 0xF )
          {
            *v132 = v141 + v143;
          }
          else
          {
            v144 = v141 - 15;
            *v132 = v143 + 15;
            *(_DWORD *)v107 = -1;
            if ( v144 >= 0x3FC )
            {
              v145 = v144 / 0x3FC;
              do
              {
                v107 += 4;
                v144 -= 1020;
                *(_DWORD *)v107 = -1;
                --v145;
              }
              while ( v145 );
            }
            v146 = &v107[v144 / 0xFF];
            *v146 = v144 + v144 / 0xFF;
            v107 = v146 + 1;
          }
          v106 = v116;
          if ( v116 >= v104 - 11 )
            goto LABEL_165;
          v105 = (__int16)v199;
          *(_WORD *)(inited + 2 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v116 - 2)) >> 19)) = (_WORD)v116 - (_WORD)v199 - 2;
          v147 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v116) >> 19;
          v148 = *(unsigned __int16 *)(inited + 2 * v147);
          *(_WORD *)(inited + 2 * v147) = (_WORD)v116 - (_WORD)v199;
          v121 = &v199[v148];
          if ( *(_DWORD *)v121 != *(_DWORD *)v116 )
          {
            v109 = v116 + 1;
            goto LABEL_119;
          }
          v127 = v107 + 1;
          *v107 = 0;
          v129 = (unsigned __int64)(v104 - 5);
        }
      }
    }
  }
  else
  {
    if ( (int)v5 >= 65547 )
    {
      if ( (unsigned int)v5 > 0x7E000000 )
        return v10;
      v57 = v9[4100];
      v9[4102] += v5;
      v205 = (unsigned __int64)&a2[v5 - 11];
      v58 = (_DWORD)a2 - v57;
      v9[4101] = 2;
      v9[4100] = v57 + v5;
      v59 = a2;
      v198 = &a2[-v57];
      v60 = v6;
      v209 = &a2[v5];
      v61 = 0;
      v208 = (unsigned __int64)&a2[v5 - 5];
      v62 = a2 + 1;
      v9[(0xCF1BBCDCBB000000uLL * *(_QWORD *)a2) >> 52] = v57;
LABEL_60:
      v63 = 1;
      v215 = v61;
      v64 = 64;
      v65 = (0xCF1BBCDCBB000000uLL * *v62) >> 52;
      while ( 1 )
      {
        v66 = v62;
        v67 = (_DWORD)v62 - v58;
        v62 = (_QWORD *)((char *)v62 + v63);
        v63 = v64 >> 6;
        v68 = (unsigned int *)(inited + 4 * v65);
        v69 = *v68;
        ++v64;
        if ( (unsigned __int64)v62 > v205 )
          break;
        v70 = 0xCF1BBCDCBB000000uLL * *v62;
        *v68 = v67;
        v71 = &v198[v69];
        v65 = v70 >> 52;
        if ( v69 + 0xFFFF >= v67 && *(_DWORD *)v71 == *v66 )
        {
          if ( v71 > a2 )
          {
            do
            {
              if ( *((_BYTE *)v66 - 1) != *(v71 - 1) )
                break;
              v66 = (_DWORD *)((char *)v66 - 1);
              --v71;
            }
            while ( v71 > a2 && v66 > (_DWORD *)v59 );
          }
          v72 = v60 + 1;
          v73 = (_DWORD)v66 - (_DWORD)v59;
          v74 = (unsigned int)((_DWORD)v66 - (_DWORD)v59);
          if ( (unsigned int)((_DWORD)v66 - (_DWORD)v59) < 0xF )
          {
            *v60 = 16 * ((_BYTE)v66 - (_BYTE)v59);
          }
          else
          {
            v75 = v73 - 15;
            *v60 = -16;
            if ( v73 - 15 >= 255 )
            {
              v76 = v75 / 0xFF;
              v77 = v75 / 0xFF;
              LOBYTE(v76) = -1;
              memset_thunk_772440563353939046(v60 + 1, v76, v77);
              v74 = (unsigned int)((_DWORD)v66 - (_DWORD)v59);
              v72 = (_QWORD *)((char *)v72 + v77);
              LOBYTE(v75) = v77 + v75;
            }
            *(_BYTE *)v72 = v75;
            v72 = (_QWORD *)((char *)v72 + 1);
            v61 = v215;
          }
          v78 = (_WORD *)((char *)v72 + v74);
          v79 = (char *)v59 - (char *)v72;
          do
          {
            *v72 = *(_QWORD *)((char *)v72 + v79);
            ++v72;
          }
          while ( v72 < (_QWORD *)v78 );
          v80 = v208 - 7;
          v59 = v66;
          while ( 1 )
          {
            v81 = (_QWORD *)((char *)v59 + 4);
            v82 = v60;
            *v78 = (_WORD)v59 - (_WORD)v71;
            v60 = v78 + 1;
            v83 = v71 + 4;
            v84 = (char *)v59 + 4;
            v85 = (_DWORD)v59 + 4;
            v86 = (char *)v59 + 4;
            v87 = (unsigned __int64)v59 + 4;
            if ( (unsigned __int64)v59 + 4 >= v80 )
              goto LABEL_80;
            if ( *v81 != *v83 )
            {
              __asm { tzcnt   rcx, rax }
              v91 = (unsigned int)_RCX >> 3;
            }
            else
            {
              v84 = (char *)v59 + 12;
              v83 = v71 + 12;
              v81 = (_QWORD *)((char *)v59 + 12);
              v86 = (char *)v59 + 12;
              v87 = (unsigned __int64)v59 + 12;
LABEL_80:
              while ( (unsigned __int64)v84 < v80 )
              {
                if ( *v83 != *v81 )
                {
                  __asm { tzcnt   rax, rax }
                  v91 = ((unsigned int)_RAX >> 3) - v85 + (_DWORD)v81;
                  goto LABEL_95;
                }
                v81 = v86 + 8;
                ++v83;
                v84 = (char *)v81;
                v86 += 8;
                v87 = (unsigned __int64)v81;
              }
              if ( v87 < v208 - 3 && *(_DWORD *)v83 == *(_DWORD *)v81 )
              {
                v81 = (_QWORD *)((char *)v81 + 4);
                v83 = (_QWORD *)((char *)v83 + 4);
              }
              if ( (unsigned __int64)v81 < v208 - 1 && *(_WORD *)v83 == *(_WORD *)v81 )
              {
                v81 = (_QWORD *)((char *)v81 + 2);
                v83 = (_QWORD *)((char *)v83 + 2);
              }
              if ( (unsigned __int64)v81 < v208 && *(_BYTE *)v83 == *(_BYTE *)v81 )
                LODWORD(v81) = (_DWORD)v81 + 1;
              v91 = (_DWORD)v81 - v85;
            }
LABEL_95:
            v59 = (_QWORD *)((char *)v59 + v91 + 4);
            v93 = *v82;
            if ( v91 < 0xF )
            {
              *v82 = v93 + v91;
            }
            else
            {
              v94 = v91 - 15;
              *v82 = v93 + 15;
              *(_DWORD *)v60 = -1;
              if ( v91 - 15 >= 0x3FC )
              {
                v95 = v94 / 0x3FC;
                do
                {
                  v60 += 4;
                  v94 -= 1020;
                  *(_DWORD *)v60 = -1;
                  --v95;
                }
                while ( v95 );
              }
              v96 = &v60[v94 / 0xFF];
              *v96 = v94 + v94 / 0xFF;
              v60 = v96 + 1;
            }
            if ( (unsigned __int64)v59 >= v205 )
              goto LABEL_106;
            v58 = (int)v198;
            *(_DWORD *)(inited + 4 * ((0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)v59 - 2)) >> 52)) = (_DWORD)v59 - (_DWORD)v198 - 2;
            v97 = (0xCF1BBCDCBB000000uLL * *v59) >> 52;
            v98 = *(unsigned int *)(inited + 4 * v97);
            *(_DWORD *)(inited + 4 * v97) = (_DWORD)v59 - (_DWORD)v198;
            v71 = &v198[v98];
            if ( (int)v98 + 0xFFFF < (unsigned int)((_DWORD)v59 - (_DWORD)v198) || *(_DWORD *)v71 != *(_DWORD *)v59 )
            {
              v62 = (_QWORD *)((char *)v59 + 1);
              goto LABEL_60;
            }
            v78 = v60 + 1;
            *v60 = 0;
          }
        }
        v58 = (int)v198;
      }
LABEL_106:
      v99 = v209 - (char *)v59;
      if ( (unsigned __int64)(v209 - (char *)v59) < 0xF )
      {
        *v60 = 16 * v99;
      }
      else
      {
        *v60 = -16;
        v100 = v99 - 15;
        ++v60;
        if ( v99 - 15 >= 0xFF )
        {
          v101 = v100 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v101) = -1;
          memset_thunk_772440563353939046(v60, SDWORD2(v101), v100 / 0xFF);
          v60 += v100 / 0xFF;
          v100 %= 0xFFuLL;
        }
        *v60 = v100;
      }
      memmove(v60 + 1, v59, v99);
      v102 = (_DWORD)v60 + 1 + v99;
      return (unsigned int)(v102 - v213);
    }
    if ( (unsigned int)v5 <= 0x7E000000 )
    {
      if ( !(_DWORD)v5 )
      {
LABEL_5:
        *v6 = 0;
        return 1;
      }
      v11 = v9[4100];
      v12 = &a2[v5];
      v9[4102] += v5;
      v9[4101] = 3;
      v201 = &a2[-v11];
      v13 = v6;
      v14 = a2;
      v9[4100] = v11 + v5;
      v15 = 0;
      if ( (int)v5 >= 13 )
      {
        *((_WORD *)v9 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)a2) >> 19)) = v11;
        v16 = a2 + 1;
LABEL_8:
        v17 = 1;
        v214 = v15;
        v18 = 64;
        v19 = (unsigned int)(-1640531535 * *(_DWORD *)v16) >> 19;
        while ( 1 )
        {
          v20 = (unsigned int)v19;
          v21 = v16;
          v204 = v16;
          v22 = (_WORD)v16 - (_WORD)v201;
          v23 = *(unsigned __int16 *)(inited + 2 * v19);
          v16 += v17;
          v17 = v18++ >> 6;
          if ( v16 > v12 - 11 )
            break;
          v24 = &v201[v23];
          v25 = -1640531535 * *(_DWORD *)v16;
          *(_WORD *)(inited + 2 * v20) = v22;
          v19 = v25 >> 19;
          if ( *(_DWORD *)v24 == *(_DWORD *)v21 )
          {
            if ( v24 > a2 && *(v21 - 1) == *(v24 - 1) )
            {
              do
              {
                --v21;
                --v24;
              }
              while ( v21 > v14 && v24 > a2 && *(v21 - 1) == *(v24 - 1) );
              v204 = v21;
            }
            v26 = v13 + 1;
            v27 = (_DWORD)v21 - (_DWORD)v14;
            v28 = (unsigned int)((_DWORD)v21 - (_DWORD)v14);
            v197 = v28;
            if ( (unsigned int)((_DWORD)v21 - (_DWORD)v14) < 0xF )
            {
              *v13 = 16 * v28;
            }
            else
            {
              v29 = v27 - 15;
              *v13 = -16;
              if ( v27 - 15 >= 255 )
              {
                v30 = v29 / 0xFF;
                v31 = v29 / 0xFF;
                LOBYTE(v30) = -1;
                memset_thunk_772440563353939046(v13 + 1, v30, v31);
                v28 = v197;
                v26 = (_QWORD *)((char *)v26 + v31);
                v21 = v204;
                LOBYTE(v29) = v31 + v29;
              }
              *(_BYTE *)v26 = v29;
              v26 = (_QWORD *)((char *)v26 + 1);
              v15 = v214;
            }
            v32 = (_WORD *)((char *)v26 + v28);
            v33 = v14 - (char *)v26;
            do
            {
              *v26 = *(_QWORD *)((char *)v26 + v33);
              ++v26;
            }
            while ( v26 < (_QWORD *)v32 );
            v34 = (unsigned __int64)(v12 - 12);
            while ( 1 )
            {
              v35 = v21 + 4;
              v36 = v13;
              *v32 = (_WORD)v21 - (_WORD)v24;
              v13 = v32 + 1;
              v37 = v24 + 4;
              v38 = v21 + 4;
              v39 = (_DWORD)v21 + 4;
              v40 = v21 + 4;
              v41 = (unsigned __int64)(v21 + 4);
              if ( (unsigned __int64)(v21 + 4) >= v34 )
                goto LABEL_27;
              if ( *v37 != *(_QWORD *)v35 )
              {
                __asm { tzcnt   rcx, rax }
                v45 = (unsigned int)_RCX >> 3;
              }
              else
              {
                v38 = v21 + 12;
                v37 = v24 + 12;
                v35 = v21 + 12;
                v40 = v21 + 12;
                v41 = (unsigned __int64)(v21 + 12);
LABEL_27:
                while ( (unsigned __int64)v38 < v34 )
                {
                  if ( *v37 != *(_QWORD *)v35 )
                  {
                    __asm { tzcnt   rax, rax }
                    v45 = ((unsigned int)_RAX >> 3) - v39 + (_DWORD)v35;
                    goto LABEL_42;
                  }
                  v35 = (char *)(v40 + 2);
                  ++v37;
                  v38 = v35;
                  v40 += 2;
                  v41 = (unsigned __int64)v35;
                }
                if ( v41 < (unsigned __int64)(v12 - 8) && *(_DWORD *)v37 == *(_DWORD *)v35 )
                {
                  v35 += 4;
                  v37 = (_QWORD *)((char *)v37 + 4);
                }
                if ( v35 < v12 - 6 && *(_WORD *)v37 == *(_WORD *)v35 )
                {
                  v35 += 2;
                  v37 = (_QWORD *)((char *)v37 + 2);
                }
                if ( v35 < v12 - 5 && *(_BYTE *)v37 == *v35 )
                  LODWORD(v35) = (_DWORD)v35 + 1;
                v45 = (_DWORD)v35 - v39;
              }
LABEL_42:
              v21 += v45 + 4;
              v47 = *v36;
              if ( v45 < 0xF )
              {
                *v36 = v45 + v47;
              }
              else
              {
                v48 = v45 - 15;
                *v36 = v47 + 15;
                *(_DWORD *)v13 = -1;
                if ( v45 - 15 >= 0x3FC )
                {
                  v49 = v48 / 0x3FC;
                  do
                  {
                    v13 += 4;
                    v48 -= 1020;
                    *(_DWORD *)v13 = -1;
                    --v49;
                  }
                  while ( v49 );
                }
                v50 = v48 / 0xFF;
                v13[v50] = v50 + v48;
                v13 += v50 + 1;
              }
              v14 = v21;
              if ( v21 >= v12 - 11 )
                goto LABEL_52;
              *(_WORD *)(inited + 2 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v21 - 2)) >> 19)) = (_WORD)v21 - (_WORD)v201 - 2;
              v51 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v21) >> 19;
              v52 = *(unsigned __int16 *)(inited + 2 * v51);
              *(_WORD *)(inited + 2 * v51) = (_WORD)v21 - (_WORD)v201;
              v24 = &v201[v52];
              if ( *(_DWORD *)v24 != *(_DWORD *)v21 )
              {
                v16 = v21 + 1;
                goto LABEL_8;
              }
              v32 = v13 + 1;
              *v13 = 0;
            }
          }
        }
      }
LABEL_52:
      v53 = v12 - v14;
      if ( v53 < 0xF )
      {
        *v13 = 16 * v53;
      }
      else
      {
        *v13 = -16;
        v54 = v53 - 15;
        ++v13;
        if ( v53 - 15 >= 0xFF )
        {
          v55 = v54 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v55) = -1;
          memset_thunk_772440563353939046(v13, SDWORD2(v55), v54 / 0xFF);
          v13 += v54 / 0xFF;
          v54 %= 0xFFuLL;
        }
        *v13 = v54;
      }
      v56 = v14;
      goto LABEL_230;
    }
  }
  return v10;
}
