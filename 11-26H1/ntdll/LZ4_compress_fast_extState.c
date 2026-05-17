/*
 * XREFs of LZ4_compress_fast_extState @ 0x180109AE8
 * Callers:
 *     RtlCompressBufferLz4 @ 0x180152EC0 (RtlCompressBufferLz4.c)
 * Callees:
 *     LZ4_compressBound @ 0x1801207E0 (LZ4_compressBound.c)
 *     LZ4_initStream @ 0x18012129C (LZ4_initStream.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LZ4_compress_fast_extState(__int64 a1, char *a2, _BYTE *a3, int a4, int a5)
{
  __int64 v5; // rbx
  _BYTE *v6; // r12
  unsigned int *v8; // r11
  unsigned int v9; // edi
  __int64 v10; // rdx
  char *v11; // rbp
  _BYTE *v12; // rsi
  char *v13; // r15
  int v14; // r12d
  char *v15; // rdx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rcx
  __int16 v19; // r10
  __int64 v20; // rbx
  __int64 v21; // rcx
  char *v22; // r11
  __int16 v23; // r10
  char *v24; // r13
  unsigned int v25; // ecx
  _QWORD *v26; // r14
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // r12d
  unsigned int v30; // edx
  size_t v31; // rbx
  _WORD *v32; // rdx
  signed __int64 v33; // r15
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // r14
  _QWORD *v36; // rcx
  char *v37; // r10
  _QWORD *v38; // rdx
  _DWORD *v39; // rax
  int v40; // ebx
  _DWORD *v41; // r9
  unsigned __int64 v42; // r8
  unsigned int v46; // ecx
  char v48; // al
  unsigned int v49; // r8d
  __int64 v50; // rax
  _BYTE *v51; // rax
  unsigned __int64 v52; // rcx
  __int64 v53; // r13
  size_t v54; // rbp
  size_t v55; // rdi
  unsigned __int128 v56; // rax
  char *v57; // rdx
  __int64 v58; // rcx
  char *v59; // r13
  _BYTE *v60; // rsi
  int v61; // r8d
  char *v62; // r15
  int v63; // r14d
  char *v64; // rdx
  int v65; // ebx
  int v66; // r10d
  unsigned __int64 v67; // rcx
  __int64 v68; // rax
  unsigned int v69; // r9d
  unsigned int *v70; // r11
  unsigned int v71; // r14d
  char *v72; // r8
  unsigned __int64 v73; // rcx
  char *v74; // rbp
  _QWORD *v75; // r14
  int v76; // eax
  __int64 v77; // rcx
  unsigned int v78; // r12d
  unsigned int v79; // edx
  size_t v80; // rbx
  _WORD *v81; // rdx
  signed __int64 v82; // r15
  unsigned __int64 v83; // rbx
  char *v84; // rcx
  char *v85; // r10
  _QWORD *v86; // rdx
  char *v87; // rax
  int v88; // r11d
  char *v89; // r9
  unsigned __int64 v90; // r8
  unsigned int v94; // ecx
  char v96; // al
  unsigned int v97; // r8d
  __int64 v98; // rax
  _BYTE *v99; // rax
  unsigned __int64 v100; // rcx
  __int64 v101; // rax
  size_t v102; // r13
  size_t v103; // rdi
  unsigned __int128 v104; // rax
  int v105; // edi
  __int64 v106; // rdx
  char *v107; // rbp
  __int16 v108; // r11
  char *v109; // r15
  _BYTE *v110; // rsi
  int v111; // r14d
  char *v112; // rdx
  int v113; // r9d
  int v114; // r8d
  __int64 v115; // rcx
  __int16 v116; // r10
  __int64 v117; // r11
  char *v118; // rbx
  char *v119; // r12
  unsigned int v120; // ecx
  __int64 v121; // r13
  unsigned int v122; // ecx
  char *v123; // r13
  _QWORD *v124; // r14
  __int64 v125; // rcx
  unsigned int v126; // r12d
  unsigned int v127; // edx
  size_t v128; // rbx
  _WORD *v129; // rdx
  signed __int64 v130; // r15
  unsigned __int64 v131; // r15
  unsigned __int64 v132; // rbx
  _QWORD *v133; // rcx
  char *v134; // r10
  _QWORD *v135; // rdx
  _DWORD *v136; // rax
  int v137; // r11d
  _DWORD *v138; // r9
  unsigned __int64 v139; // r8
  unsigned int v143; // r8d
  char v145; // al
  unsigned int v146; // r8d
  __int64 v147; // rax
  _BYTE *v148; // rax
  unsigned __int64 v149; // rcx
  __int64 v150; // r13
  size_t v151; // rbp
  size_t v152; // rdi
  unsigned __int128 v153; // rax
  __int64 v154; // rcx
  char *v155; // rbp
  char *v156; // rdx
  int v157; // r8d
  char *v158; // r10
  int v159; // r12d
  int v160; // ebx
  int v161; // r12d
  unsigned __int64 v162; // rcx
  __int64 v163; // rax
  unsigned int v164; // r9d
  unsigned int *v165; // r11
  unsigned int v166; // r14d
  char *v167; // r8
  unsigned __int64 v168; // rcx
  char *v169; // r15
  _QWORD *v170; // r14
  __int64 v171; // r13
  unsigned int v172; // r12d
  unsigned int v173; // edx
  size_t v174; // rbx
  _WORD *v175; // rdx
  signed __int64 v176; // r10
  unsigned __int64 v177; // r14
  char *v178; // rcx
  char *v179; // r11
  _QWORD *v180; // rdx
  char *v181; // rax
  int v182; // ebx
  char *v183; // r9
  unsigned __int64 v184; // r8
  unsigned int v188; // r8d
  char v190; // al
  unsigned int v191; // r8d
  __int64 v192; // rax
  __int64 v193; // rdx
  unsigned __int64 v194; // rcx
  __int64 v195; // rax
  size_t v196; // rdi
  unsigned __int128 v197; // rax
  unsigned int *inited; // [rsp+20h] [rbp-68h]
  char *v200; // [rsp+28h] [rbp-60h]
  char *v201; // [rsp+28h] [rbp-60h]
  unsigned __int64 v202; // [rsp+28h] [rbp-60h]
  char *v203; // [rsp+30h] [rbp-58h]
  unsigned __int64 v204; // [rsp+30h] [rbp-58h]
  char *v205; // [rsp+30h] [rbp-58h]
  char *v206; // [rsp+38h] [rbp-50h]
  char *v207; // [rsp+38h] [rbp-50h]
  char *v208; // [rsp+38h] [rbp-50h]
  char *v209; // [rsp+38h] [rbp-50h]
  __int64 v210; // [rsp+40h] [rbp-48h]
  __int64 v211; // [rsp+40h] [rbp-48h]
  __int64 v212; // [rsp+40h] [rbp-48h]
  char *v213; // [rsp+40h] [rbp-48h]
  int v216; // [rsp+B0h] [rbp+28h]
  int v217; // [rsp+B0h] [rbp+28h]
  int v218; // [rsp+B0h] [rbp+28h]
  int v219; // [rsp+B0h] [rbp+28h]

  v5 = a4;
  v6 = a3;
  inited = (unsigned int *)LZ4_initStream();
  v9 = 0;
  if ( a5 < (int)LZ4_compressBound((unsigned int)v5) )
  {
    if ( (int)v5 >= 65547 )
    {
      if ( (unsigned int)v5 > 0x7E000000 )
        return v9;
      v154 = v8[4100];
      v8[4102] += v5;
      v155 = &a2[v5];
      v202 = (unsigned __int64)&v6[a5];
      v156 = a2 + 1;
      v8[4101] = 2;
      v209 = a2;
      v8[4100] = v154 + v5;
      v157 = (_DWORD)a2 - v154;
      v12 = v6;
      v205 = &a2[-v154];
      v158 = a2;
      v159 = 0;
      v8[(0xCF1BBCDCBB000000uLL * *(_QWORD *)a2) >> 52] = v154;
LABEL_177:
      v160 = 1;
      v219 = v159;
      v161 = 64;
      v162 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v156) >> 52;
      while ( 1 )
      {
        v163 = v160;
        v213 = v156;
        v164 = (_DWORD)v156 - v157;
        v165 = &v8[v162];
        v166 = *v165;
        v167 = v156;
        v160 = v161++ >> 6;
        v156 += v163;
        if ( v156 > v155 - 11 )
          break;
        v168 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)v156;
        *v165 = v164;
        v169 = &v205[v166];
        v162 = v168 >> 52;
        if ( v166 + 0xFFFF >= v164 && *(_DWORD *)v169 == *(_DWORD *)v167 )
        {
          if ( v169 > a2 && *(v167 - 1) == *(v169 - 1) )
          {
            do
            {
              --v167;
              --v169;
            }
            while ( v169 > a2 && v167 > v158 && *(v167 - 1) == *(v169 - 1) );
            v213 = v167;
          }
          v170 = v12 + 1;
          v171 = (unsigned int)((_DWORD)v167 - (_DWORD)v158);
          if ( (unsigned __int64)&v12[v171 + 9 + (unsigned int)v171 / 0xFF] <= v202 )
          {
            if ( (unsigned int)v171 < 0xF )
            {
              *v12 = 16 * ((_BYTE)v167 - (_BYTE)v158);
            }
            else
            {
              v172 = v171 - 15;
              *v12 = -16;
              if ( (int)v171 - 15 >= 255 )
              {
                v173 = v172 / 0xFF;
                v174 = v172 / 0xFF;
                LOBYTE(v173) = -1;
                memset_thunk_772440563353939046(v12 + 1, v173, v174);
                v158 = v209;
                v170 = (_QWORD *)((char *)v170 + v174);
                v167 = v213;
                LOBYTE(v172) = v174 + v172;
              }
              *(_BYTE *)v170 = v172;
              v170 = (_QWORD *)((char *)v170 + 1);
            }
            v175 = (_WORD *)((char *)v170 + v171);
            v176 = v158 - (char *)v170;
            do
            {
              *v170 = *(_QWORD *)((char *)v170 + v176);
              ++v170;
            }
            while ( v170 < (_QWORD *)v175 );
            v177 = (unsigned __int64)(v155 - 12);
            v159 = v219;
            v158 = v167;
            while ( 1 )
            {
              v178 = v158 + 4;
              v179 = v12;
              *v175 = (_WORD)v158 - (_WORD)v169;
              v12 = v175 + 1;
              v180 = v169 + 4;
              v181 = v158 + 4;
              v182 = (_DWORD)v158 + 4;
              v183 = v158 + 4;
              v184 = (unsigned __int64)(v158 + 4);
              if ( (unsigned __int64)(v158 + 4) >= v177 )
                goto LABEL_199;
              if ( *(_QWORD *)v178 != *v180 )
              {
                __asm { tzcnt   r8, rax }
                v188 = (unsigned int)_R8 >> 3;
              }
              else
              {
                v181 = v158 + 12;
                v180 = v169 + 12;
                v178 = v158 + 12;
                v183 = v158 + 12;
                v184 = (unsigned __int64)(v158 + 12);
LABEL_199:
                while ( (unsigned __int64)v181 < v177 )
                {
                  if ( *v180 != *(_QWORD *)v178 )
                  {
                    __asm { tzcnt   r8, rax }
                    v188 = (_DWORD)v178 + ((unsigned int)_R8 >> 3) - v182;
                    goto LABEL_214;
                  }
                  v178 = v183 + 8;
                  ++v180;
                  v181 = v178;
                  v183 += 8;
                  v184 = (unsigned __int64)v178;
                }
                if ( v184 < (unsigned __int64)(v155 - 8) && *(_DWORD *)v180 == *(_DWORD *)v178 )
                {
                  v178 += 4;
                  v180 = (_QWORD *)((char *)v180 + 4);
                }
                if ( v178 < v155 - 6 && *(_WORD *)v180 == *(_WORD *)v178 )
                {
                  v178 += 2;
                  v180 = (_QWORD *)((char *)v180 + 2);
                }
                if ( v178 < v155 - 5 && *(_BYTE *)v180 == *v178 )
                  LODWORD(v178) = (_DWORD)v178 + 1;
                v188 = (_DWORD)v178 - v182;
              }
LABEL_214:
              v158 += v188 + 4;
              v209 = v158;
              if ( (unsigned __int64)&v12[(v188 + 240) / 0xFF + 6] > v202 )
                break;
              v190 = *v179;
              if ( v188 < 0xF )
              {
                *v179 = v188 + v190;
              }
              else
              {
                v191 = v188 - 15;
                *v179 = v190 + 15;
                *(_DWORD *)v12 = -1;
                if ( v191 >= 0x3FC )
                {
                  v192 = v191 / 0x3FC;
                  do
                  {
                    v12 += 4;
                    v191 -= 1020;
                    *(_DWORD *)v12 = -1;
                    --v192;
                  }
                  while ( v192 );
                }
                v193 = v191 / 0xFF;
                v12[v193] = v193 + v191;
                v12 += v193 + 1;
              }
              if ( v158 >= v155 - 11 )
                goto LABEL_226;
              v157 = (int)v205;
              v8 = inited;
              inited[(0xCF1BBCDCBB000000uLL * *(_QWORD *)(v158 - 2)) >> 52] = (_DWORD)v158 - (_DWORD)v205 - 2;
              v194 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v158) >> 52;
              v195 = inited[v194];
              inited[v194] = (_DWORD)v158 - (_DWORD)v205;
              v169 = &v205[v195];
              if ( (int)v195 + 0xFFFF < (unsigned int)((_DWORD)v158 - (_DWORD)v205)
                || *(_DWORD *)v169 != *(_DWORD *)v158 )
              {
                v156 = v158 + 1;
                goto LABEL_177;
              }
              v175 = v12 + 1;
              *v12 = 0;
            }
          }
          return v9;
        }
        v157 = (int)v205;
        v8 = inited;
      }
LABEL_226:
      v54 = v155 - v158;
      if ( (unsigned __int64)&v12[(v54 + 240) / 0xFF + 1 + v54] > v202 )
        return v9;
      if ( v54 < 0xF )
      {
        *v12 = 16 * v54;
      }
      else
      {
        *v12 = -16;
        v196 = v54 - 15;
        ++v12;
        if ( v54 - 15 >= 0xFF )
        {
          v197 = v196 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v197) = -1;
          memset_thunk_772440563353939046(v12, SDWORD2(v197), v196 / 0xFF);
          v158 = v209;
          v12 += v196 / 0xFF;
          LOBYTE(v196) = v196 / 0xFF + v196;
        }
        *v12 = v196;
      }
      v57 = v158;
LABEL_233:
      memmove(v12 + 1, v57, v54);
      v105 = (_DWORD)v12 + 1 + v54;
      return (unsigned int)(v105 - (_DWORD)a3);
    }
    if ( (unsigned int)v5 > 0x7E000000 )
      return v9;
    if ( !(_DWORD)v5 )
    {
      if ( a5 <= 0 )
        return v9;
      goto LABEL_5;
    }
    v106 = v8[4100];
    v107 = &a2[v5];
    v204 = (unsigned __int64)&v6[a5];
    v108 = (_WORD)a2 - v106;
    v109 = a2;
    v201 = &a2[-v106];
    inited[4102] += v5;
    v110 = v6;
    inited[4100] = v106 + v5;
    v111 = 0;
    inited[4101] = 3;
    if ( (int)v5 < 13 )
    {
LABEL_168:
      v151 = v107 - v109;
      if ( (unsigned __int64)&v110[v151 + 1 + (v151 + 240) / 0xFF] <= v204 )
      {
        if ( v151 < 0xF )
        {
          *v110 = 16 * v151;
        }
        else
        {
          *v110 = -16;
          v152 = v151 - 15;
          ++v110;
          if ( v151 - 15 >= 0xFF )
          {
            v153 = v152 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v153) = -1;
            memset_thunk_772440563353939046(v110, SDWORD2(v153), v152 / 0xFF);
            v110 += v152 / 0xFF;
            LOBYTE(v152) = v152 / 0xFF + v152;
          }
          *v110 = v152;
        }
        memmove(v110 + 1, v109, v151);
        return (unsigned int)((_DWORD)v110 + 1 + v151 - (_DWORD)v6);
      }
    }
    else
    {
      *((_WORD *)inited + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)a2) >> 19)) = v106;
      v112 = a2 + 1;
LABEL_121:
      v113 = 1;
      v218 = v111;
      v114 = 64;
      v115 = (unsigned int)(-1640531535 * *(_DWORD *)v112) >> 19;
      do
      {
        v116 = (_WORD)v112 - v108;
        v208 = v112;
        v117 = (unsigned int)v115;
        v118 = v112;
        v119 = v112;
        v120 = *((unsigned __int16 *)inited + v115);
        v112 += v113;
        v113 = v114++ >> 6;
        if ( v112 > v107 - 11 )
        {
LABEL_167:
          LODWORD(v6) = (_DWORD)a3;
          goto LABEL_168;
        }
        v121 = v120;
        v122 = -1640531535 * *(_DWORD *)v112;
        v123 = &v201[v121];
        *((_WORD *)inited + v117) = v116;
        v108 = (__int16)v201;
        v115 = v122 >> 19;
      }
      while ( *(_DWORD *)v123 != *(_DWORD *)v119 );
      if ( v123 > a2 && *(v118 - 1) == *(v123 - 1) )
      {
        do
        {
          --v119;
          --v123;
        }
        while ( v123 > a2 && v119 > v109 && *(v119 - 1) == *(v123 - 1) );
        v208 = v119;
      }
      v124 = v110 + 1;
      v125 = (unsigned int)((_DWORD)v119 - (_DWORD)v109);
      v212 = v125;
      if ( (unsigned __int64)&v110[v125 + 9 + (unsigned int)v125 / 0xFF] <= v204 )
      {
        if ( (unsigned int)v125 < 0xF )
        {
          *v110 = 16 * ((_BYTE)v119 - (_BYTE)v109);
        }
        else
        {
          v126 = v125 - 15;
          *v110 = -16;
          if ( (int)v125 - 15 >= 255 )
          {
            v127 = v126 / 0xFF;
            v128 = v126 / 0xFF;
            LOBYTE(v127) = -1;
            memset_thunk_772440563353939046(v110 + 1, v127, v128);
            v125 = v212;
            v124 = (_QWORD *)((char *)v124 + v128);
            LOBYTE(v126) = v128 + v126;
          }
          *(_BYTE *)v124 = v126;
          v124 = (_QWORD *)((char *)v124 + 1);
          v119 = v208;
        }
        v129 = (_WORD *)((char *)v124 + v125);
        v130 = v109 - (char *)v124;
        do
        {
          *v124 = *(_QWORD *)((char *)v124 + v130);
          ++v124;
        }
        while ( v124 < (_QWORD *)v129 );
        v131 = (unsigned __int64)(v107 - 5);
        v132 = (unsigned __int64)(v107 - 12);
        v111 = v218;
        while ( 1 )
        {
          v133 = v119 + 4;
          v134 = v110;
          *v129 = (_WORD)v119 - (_WORD)v123;
          v110 = v129 + 1;
          v135 = v123 + 4;
          v136 = v119 + 4;
          v137 = (_DWORD)v119 + 4;
          v138 = v119 + 4;
          v139 = (unsigned __int64)(v119 + 4);
          if ( (unsigned __int64)(v119 + 4) >= v132 )
            goto LABEL_141;
          if ( *v135 != *v133 )
          {
            __asm { tzcnt   r8, rax }
            v143 = (unsigned int)_R8 >> 3;
          }
          else
          {
            v136 = v119 + 12;
            v135 = v123 + 12;
            v133 = v119 + 12;
            v138 = v119 + 12;
            v139 = (unsigned __int64)(v119 + 12);
LABEL_141:
            while ( (unsigned __int64)v136 < v132 )
            {
              if ( *v135 != *v133 )
              {
                __asm { tzcnt   r8, rax }
                v143 = (_DWORD)v133 + ((unsigned int)_R8 >> 3) - v137;
                goto LABEL_156;
              }
              v133 = v138 + 2;
              ++v135;
              v136 = v133;
              v138 += 2;
              v139 = (unsigned __int64)v133;
            }
            if ( v139 < v131 - 3 && *(_DWORD *)v135 == *(_DWORD *)v133 )
            {
              v133 = (_QWORD *)((char *)v133 + 4);
              v135 = (_QWORD *)((char *)v135 + 4);
            }
            if ( (unsigned __int64)v133 < v131 - 1 && *(_WORD *)v135 == *(_WORD *)v133 )
            {
              v133 = (_QWORD *)((char *)v133 + 2);
              v135 = (_QWORD *)((char *)v135 + 2);
            }
            if ( (unsigned __int64)v133 < v131 && *(_BYTE *)v135 == *(_BYTE *)v133 )
              LODWORD(v133) = (_DWORD)v133 + 1;
            v143 = (_DWORD)v133 - v137;
          }
LABEL_156:
          v119 += v143 + 4;
          if ( (unsigned __int64)&v110[(v143 + 240) / 0xFF + 6] > v204 )
            break;
          v145 = *v134;
          if ( v143 < 0xF )
          {
            *v134 = v145 + v143;
          }
          else
          {
            v146 = v143 - 15;
            *v134 = v145 + 15;
            *(_DWORD *)v110 = -1;
            if ( v146 >= 0x3FC )
            {
              v147 = v146 / 0x3FC;
              do
              {
                v110 += 4;
                v146 -= 1020;
                *(_DWORD *)v110 = -1;
                --v147;
              }
              while ( v147 );
            }
            v148 = &v110[v146 / 0xFF];
            *v148 = v146 + v146 / 0xFF;
            v110 = v148 + 1;
          }
          v109 = v119;
          if ( v119 >= v107 - 11 )
            goto LABEL_167;
          v108 = (__int16)v201;
          *((_WORD *)inited + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v119 - 2)) >> 19)) = (_WORD)v119 - (_WORD)v201 - 2;
          v149 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v119) >> 19;
          v150 = *((unsigned __int16 *)inited + v149);
          *((_WORD *)inited + v149) = (_WORD)v119 - (_WORD)v201;
          v123 = &v201[v150];
          if ( *(_DWORD *)v123 != *(_DWORD *)v119 )
          {
            v112 = v119 + 1;
            goto LABEL_121;
          }
          v129 = v110 + 1;
          *v110 = 0;
          v131 = (unsigned __int64)(v107 - 5);
        }
      }
    }
  }
  else
  {
    if ( (int)v5 >= 65547 )
    {
      if ( (unsigned int)v5 > 0x7E000000 )
        return v9;
      v58 = v8[4100];
      v59 = &a2[v5];
      v60 = a3;
      v8[4102] += v5;
      v61 = (_DWORD)a2 - v58;
      v8[4101] = 2;
      v8[4100] = v58 + v5;
      v62 = a2;
      v200 = &a2[-v58];
      v63 = 0;
      v64 = a2 + 1;
      v8[(0xCF1BBCDCBB000000uLL * *(_QWORD *)a2) >> 52] = v58;
LABEL_61:
      v65 = 64;
      v217 = v63;
      v66 = 1;
      v67 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v64) >> 52;
      while ( 1 )
      {
        v68 = v66;
        v207 = v64;
        v69 = (_DWORD)v64 - v61;
        v70 = &v8[v67];
        v71 = *v70;
        v72 = v64;
        v66 = v65++ >> 6;
        v64 += v68;
        if ( v64 > v59 - 11 )
          break;
        v73 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)v64;
        *v70 = v69;
        v74 = &v200[v71];
        v67 = v73 >> 52;
        if ( v71 + 0xFFFF >= v69 && *(_DWORD *)v74 == *(_DWORD *)v72 )
        {
          if ( v74 > a2 && *(v72 - 1) == *(v74 - 1) )
          {
            do
            {
              --v72;
              --v74;
            }
            while ( v74 > a2 && v72 > v62 && *(v72 - 1) == *(v74 - 1) );
            v207 = v72;
          }
          v75 = v60 + 1;
          v76 = (_DWORD)v72 - (_DWORD)v62;
          v77 = (unsigned int)((_DWORD)v72 - (_DWORD)v62);
          v211 = v77;
          if ( (unsigned int)((_DWORD)v72 - (_DWORD)v62) < 0xF )
          {
            *v60 = 16 * v77;
          }
          else
          {
            v78 = v76 - 15;
            *v60 = -16;
            if ( v76 - 15 >= 255 )
            {
              v79 = v78 / 0xFF;
              v80 = v78 / 0xFF;
              LOBYTE(v79) = -1;
              memset_thunk_772440563353939046(v60 + 1, v79, v80);
              v77 = v211;
              v75 = (_QWORD *)((char *)v75 + v80);
              v72 = v207;
              LOBYTE(v78) = v80 + v78;
            }
            *(_BYTE *)v75 = v78;
            v75 = (_QWORD *)((char *)v75 + 1);
          }
          v81 = (_WORD *)((char *)v75 + v77);
          v82 = v62 - (char *)v75;
          do
          {
            *v75 = *(_QWORD *)((char *)v75 + v82);
            ++v75;
          }
          while ( v75 < (_QWORD *)v81 );
          v83 = (unsigned __int64)(v59 - 12);
          v63 = v217;
          v62 = v72;
          while ( 1 )
          {
            v84 = v62 + 4;
            v85 = v60;
            *v81 = (_WORD)v62 - (_WORD)v74;
            v60 = v81 + 1;
            v86 = v74 + 4;
            v87 = v62 + 4;
            v88 = (_DWORD)v62 + 4;
            v89 = v62 + 4;
            v90 = (unsigned __int64)(v62 + 4);
            if ( (unsigned __int64)(v62 + 4) >= v83 )
              goto LABEL_82;
            if ( *(_QWORD *)v84 != *v86 )
            {
              __asm { tzcnt   rcx, rax }
              v94 = (unsigned int)_RCX >> 3;
            }
            else
            {
              v87 = v62 + 12;
              v86 = v74 + 12;
              v84 = v62 + 12;
              v89 = v62 + 12;
              v90 = (unsigned __int64)(v62 + 12);
LABEL_82:
              while ( (unsigned __int64)v87 < v83 )
              {
                if ( *v86 != *(_QWORD *)v84 )
                {
                  __asm { tzcnt   rax, rax }
                  v94 = ((unsigned int)_RAX >> 3) - v88 + (_DWORD)v84;
                  goto LABEL_97;
                }
                v84 = v89 + 8;
                ++v86;
                v87 = v84;
                v89 += 8;
                v90 = (unsigned __int64)v84;
              }
              if ( v90 < (unsigned __int64)(v59 - 8) && *(_DWORD *)v86 == *(_DWORD *)v84 )
              {
                v84 += 4;
                v86 = (_QWORD *)((char *)v86 + 4);
              }
              if ( v84 < v59 - 6 && *(_WORD *)v86 == *(_WORD *)v84 )
              {
                v84 += 2;
                v86 = (_QWORD *)((char *)v86 + 2);
              }
              if ( v84 < v59 - 5 && *(_BYTE *)v86 == *v84 )
                LODWORD(v84) = (_DWORD)v84 + 1;
              v94 = (_DWORD)v84 - v88;
            }
LABEL_97:
            v62 += v94 + 4;
            v96 = *v85;
            if ( v94 < 0xF )
            {
              *v85 = v94 + v96;
            }
            else
            {
              v97 = v94 - 15;
              *v85 = v96 + 15;
              *(_DWORD *)v60 = -1;
              if ( v94 - 15 >= 0x3FC )
              {
                v98 = v97 / 0x3FC;
                do
                {
                  v60 += 4;
                  v97 -= 1020;
                  *(_DWORD *)v60 = -1;
                  --v98;
                }
                while ( v98 );
              }
              v99 = &v60[v97 / 0xFF];
              *v99 = v97 + v97 / 0xFF;
              v60 = v99 + 1;
            }
            if ( v62 >= v59 - 11 )
              goto LABEL_108;
            v61 = (int)v200;
            v8 = inited;
            inited[(0xCF1BBCDCBB000000uLL * *(_QWORD *)(v62 - 2)) >> 52] = (_DWORD)v62 - (_DWORD)v200 - 2;
            v100 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v62) >> 52;
            v101 = inited[v100];
            inited[v100] = (_DWORD)v62 - (_DWORD)v200;
            v74 = &v200[v101];
            if ( (int)v101 + 0xFFFF < (unsigned int)((_DWORD)v62 - (_DWORD)v200) || *(_DWORD *)v74 != *(_DWORD *)v62 )
            {
              v64 = v62 + 1;
              goto LABEL_61;
            }
            v81 = v60 + 1;
            *v60 = 0;
          }
        }
        v61 = (int)v200;
        v8 = inited;
      }
LABEL_108:
      v102 = v59 - v62;
      if ( v102 < 0xF )
      {
        *v60 = 16 * v102;
      }
      else
      {
        *v60 = -16;
        v103 = v102 - 15;
        ++v60;
        if ( v102 - 15 >= 0xFF )
        {
          v104 = v103 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v104) = -1;
          memset_thunk_772440563353939046(v60, SDWORD2(v104), v103 / 0xFF);
          v60 += v103 / 0xFF;
          v103 %= 0xFFuLL;
        }
        *v60 = v103;
      }
      memmove(v60 + 1, v62, v102);
      v105 = (_DWORD)v60 + 1 + v102;
      return (unsigned int)(v105 - (_DWORD)a3);
    }
    if ( (unsigned int)v5 <= 0x7E000000 )
    {
      if ( !(_DWORD)v5 )
      {
LABEL_5:
        *v6 = 0;
        return 1;
      }
      v10 = v8[4100];
      v11 = &a2[v5];
      v8[4102] += v5;
      v8[4101] = 3;
      v203 = &a2[-v10];
      v12 = v6;
      v13 = a2;
      v8[4100] = v10 + v5;
      v14 = 0;
      if ( (int)v5 >= 13 )
      {
        *((_WORD *)v8 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)a2) >> 19)) = v10;
        v15 = a2 + 1;
LABEL_8:
        v16 = 1;
        v216 = v14;
        v17 = 64;
        v18 = (unsigned int)(-1640531535 * *(_DWORD *)v15) >> 19;
        while ( 1 )
        {
          v19 = (__int16)v15;
          v20 = (unsigned int)v18;
          v21 = *((unsigned __int16 *)v8 + v18);
          v22 = v15;
          v206 = v15;
          v15 += v16;
          v16 = v17 >> 6;
          v23 = v19 - (_WORD)v203;
          ++v17;
          if ( v15 > v11 - 11 )
            break;
          v24 = &v203[v21];
          v25 = -1640531535 * *(_DWORD *)v15;
          *((_WORD *)inited + v20) = v23;
          v18 = v25 >> 19;
          if ( *(_DWORD *)v24 == *(_DWORD *)v22 )
          {
            if ( v24 > a2 && *(v22 - 1) == *(v24 - 1) )
            {
              do
              {
                --v22;
                --v24;
              }
              while ( v24 > a2 && v22 > v13 && *(v22 - 1) == *(v24 - 1) );
              v206 = v22;
            }
            v26 = v12 + 1;
            v27 = (_DWORD)v22 - (_DWORD)v13;
            v28 = (unsigned int)((_DWORD)v22 - (_DWORD)v13);
            v210 = v28;
            if ( (unsigned int)((_DWORD)v22 - (_DWORD)v13) < 0xF )
            {
              *v12 = 16 * v28;
            }
            else
            {
              v29 = v27 - 15;
              *v12 = -16;
              if ( v27 - 15 >= 255 )
              {
                v30 = v29 / 0xFF;
                v31 = v29 / 0xFF;
                LOBYTE(v30) = -1;
                memset_thunk_772440563353939046(v12 + 1, v30, v31);
                v28 = v210;
                v26 = (_QWORD *)((char *)v26 + v31);
                v22 = v206;
                LOBYTE(v29) = v31 + v29;
              }
              *(_BYTE *)v26 = v29;
              v26 = (_QWORD *)((char *)v26 + 1);
            }
            v32 = (_WORD *)((char *)v26 + v28);
            v33 = v13 - (char *)v26;
            do
            {
              *v26 = *(_QWORD *)((char *)v26 + v33);
              ++v26;
            }
            while ( v26 < (_QWORD *)v32 );
            v34 = (unsigned __int64)(v11 - 5);
            v35 = (unsigned __int64)(v11 - 12);
            v14 = v216;
            while ( 1 )
            {
              v36 = v22 + 4;
              v37 = v12;
              *v32 = (_WORD)v22 - (_WORD)v24;
              v12 = v32 + 1;
              v38 = v24 + 4;
              v39 = v22 + 4;
              v40 = (_DWORD)v22 + 4;
              v41 = v22 + 4;
              v42 = (unsigned __int64)(v22 + 4);
              if ( (unsigned __int64)(v22 + 4) >= v35 )
                goto LABEL_28;
              if ( *v38 != *v36 )
              {
                __asm { tzcnt   rcx, rax }
                v46 = (unsigned int)_RCX >> 3;
              }
              else
              {
                v39 = v22 + 12;
                v38 = v24 + 12;
                v36 = v22 + 12;
                v41 = v22 + 12;
                v42 = (unsigned __int64)(v22 + 12);
LABEL_28:
                while ( (unsigned __int64)v39 < v35 )
                {
                  if ( *v38 != *v36 )
                  {
                    __asm { tzcnt   rax, rax }
                    v46 = ((unsigned int)_RAX >> 3) - v40 + (_DWORD)v36;
                    goto LABEL_43;
                  }
                  v36 = v41 + 2;
                  ++v38;
                  v39 = v36;
                  v41 += 2;
                  v42 = (unsigned __int64)v36;
                }
                if ( v42 < v34 - 3 && *(_DWORD *)v38 == *(_DWORD *)v36 )
                {
                  v36 = (_QWORD *)((char *)v36 + 4);
                  v38 = (_QWORD *)((char *)v38 + 4);
                }
                if ( (unsigned __int64)v36 < v34 - 1 && *(_WORD *)v38 == *(_WORD *)v36 )
                {
                  v36 = (_QWORD *)((char *)v36 + 2);
                  v38 = (_QWORD *)((char *)v38 + 2);
                }
                if ( (unsigned __int64)v36 < v34 && *(_BYTE *)v38 == *(_BYTE *)v36 )
                  LODWORD(v36) = (_DWORD)v36 + 1;
                v46 = (_DWORD)v36 - v40;
              }
LABEL_43:
              v22 += v46 + 4;
              v48 = *v37;
              if ( v46 < 0xF )
              {
                *v37 = v46 + v48;
              }
              else
              {
                v49 = v46 - 15;
                *v37 = v48 + 15;
                *(_DWORD *)v12 = -1;
                if ( v46 - 15 >= 0x3FC )
                {
                  v50 = v49 / 0x3FC;
                  do
                  {
                    v12 += 4;
                    v49 -= 1020;
                    *(_DWORD *)v12 = -1;
                    --v50;
                  }
                  while ( v50 );
                }
                v51 = &v12[v49 / 0xFF];
                *v51 = v49 + v49 / 0xFF;
                v12 = v51 + 1;
              }
              v13 = v22;
              if ( v22 >= v11 - 11 )
                goto LABEL_53;
              *((_WORD *)inited + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v22 - 2)) >> 19)) = (_WORD)v22 - (_WORD)v203 - 2;
              v52 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v22) >> 19;
              v53 = *((unsigned __int16 *)inited + v52);
              *((_WORD *)inited + v52) = (_WORD)v22 - (_WORD)v203;
              v24 = &v203[v53];
              if ( *(_DWORD *)v24 != *(_DWORD *)v22 )
              {
                v15 = v22 + 1;
                v8 = inited;
                goto LABEL_8;
              }
              v32 = v12 + 1;
              *v12 = 0;
              v34 = (unsigned __int64)(v11 - 5);
            }
          }
          v8 = inited;
        }
      }
LABEL_53:
      v54 = v11 - v13;
      if ( v54 < 0xF )
      {
        *v12 = 16 * v54;
      }
      else
      {
        *v12 = -16;
        v55 = v54 - 15;
        ++v12;
        if ( v54 - 15 >= 0xFF )
        {
          v56 = v55 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v56) = -1;
          memset_thunk_772440563353939046(v12, SDWORD2(v56), v55 / 0xFF);
          v12 += v55 / 0xFF;
          v55 %= 0xFFuLL;
        }
        *v12 = v55;
      }
      v57 = v13;
      goto LABEL_233;
    }
  }
  return v9;
}
