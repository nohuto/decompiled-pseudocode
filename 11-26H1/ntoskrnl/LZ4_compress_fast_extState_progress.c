/*
 * XREFs of LZ4_compress_fast_extState_progress @ 0x14062C938
 * Callers:
 *     RtlCompressBufferProgress @ 0x14061AAD0 (RtlCompressBufferProgress.c)
 * Callees:
 *     LZ4_initStream @ 0x140469B70 (LZ4_initStream.c)
 *     LZ4_compressBound @ 0x14046E010 (LZ4_compressBound.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall LZ4_compress_fast_extState_progress(
        void *a1,
        char *a2,
        _BYTE *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rbx
  _BYTE *v8; // rsi
  unsigned int *v10; // r11
  unsigned int v11; // edi
  __int64 v12; // rdx
  char *v13; // r15
  char *v14; // r12
  char *v15; // rbp
  char *v16; // rbx
  __int64 v17; // r14
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // r9
  _DWORD *v21; // r10
  __int16 v22; // dx
  __int64 v23; // r14
  __int64 v24; // rax
  char *v25; // r13
  unsigned int v26; // r14d
  _QWORD *v27; // r14
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // r12d
  unsigned int v31; // edx
  size_t v32; // rbx
  _WORD *v33; // rdx
  signed __int64 v34; // rbp
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // r14
  _QWORD *v37; // rcx
  char *v38; // r11
  _QWORD *v39; // rdx
  _DWORD *v40; // rax
  int v41; // ebx
  _DWORD *v42; // r9
  unsigned __int64 v43; // r8
  unsigned int v47; // ecx
  char v49; // al
  unsigned int v50; // r8d
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  __int64 v55; // r13
  size_t v56; // r15
  size_t v57; // rdi
  unsigned __int128 v58; // rax
  int v59; // edi
  __int64 v60; // rcx
  __int64 v61; // r13
  unsigned __int64 v62; // rbp
  int v63; // r8d
  _QWORD *v64; // r12
  unsigned __int64 v65; // rax
  char *v66; // r14
  unsigned __int64 v67; // rbx
  int v68; // ecx
  int v69; // r11d
  _DWORD *v70; // rdx
  unsigned int v71; // r9d
  unsigned int *v72; // r8
  unsigned int v73; // r10d
  unsigned __int64 v74; // rbx
  char *v75; // rbp
  _QWORD *v76; // r14
  int v77; // eax
  __int64 v78; // rcx
  unsigned int v79; // r13d
  unsigned int v80; // edx
  size_t v81; // rbx
  _WORD *v82; // r8
  signed __int64 v83; // r12
  unsigned __int64 v84; // rbx
  _QWORD *v85; // rcx
  char *v86; // r10
  _QWORD *v87; // rdx
  char *v88; // rax
  unsigned __int64 v89; // r8
  int v90; // r11d
  char *v91; // r9
  unsigned int v95; // ecx
  char v97; // al
  unsigned int v98; // r8d
  __int64 v99; // rax
  __int64 v100; // rdx
  unsigned __int64 v101; // rcx
  __int64 v102; // rax
  size_t v103; // r15
  size_t v104; // rdi
  unsigned __int128 v105; // rax
  __int64 v106; // rdx
  char *v107; // rbp
  __int16 v108; // r10
  char *v109; // r15
  int v110; // r8d
  char *v111; // rbx
  __int64 v112; // r14
  int v113; // ecx
  int v114; // r8d
  __int16 v115; // dx
  __int64 v116; // r9
  char *v117; // r12
  unsigned int v118; // r10d
  unsigned int v119; // r14d
  __int64 v120; // r13
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
  int v131; // r14d
  _QWORD *v132; // rcx
  char *v133; // r10
  _QWORD *v134; // rdx
  _DWORD *v135; // rax
  int v136; // r11d
  _DWORD *v137; // r9
  unsigned __int64 v138; // r8
  unsigned int v142; // r8d
  char v144; // al
  unsigned int v145; // r8d
  __int64 v146; // rax
  _BYTE *v147; // rax
  __int64 v148; // rdx
  unsigned __int64 v149; // rcx
  __int64 v150; // r13
  int v151; // r14d
  size_t v152; // rbp
  size_t v153; // rdi
  unsigned __int128 v154; // rax
  int v155; // edi
  __int64 v156; // rcx
  char *v157; // r15
  char *v158; // r13
  char *v159; // r9
  int v160; // r12d
  unsigned __int64 v161; // rax
  char *v162; // r14
  unsigned __int64 v163; // rbx
  int v164; // r11d
  int v165; // r12d
  char *v166; // r8
  unsigned int v167; // edx
  unsigned int *v168; // rcx
  __int64 v169; // r10
  __int64 v170; // rbx
  char *v171; // rbp
  _QWORD *v172; // r14
  __int64 v173; // r13
  unsigned int v174; // r12d
  unsigned int v175; // edx
  size_t v176; // rbx
  _WORD *v177; // rdx
  signed __int64 v178; // r9
  unsigned __int64 v179; // r14
  char *v180; // rcx
  char *v181; // r11
  _QWORD *v182; // rdx
  char *v183; // rax
  int v184; // ebx
  char *v185; // r10
  unsigned __int64 v186; // r8
  unsigned int v190; // r8d
  char v192; // al
  unsigned int v193; // r8d
  __int64 v194; // rax
  _BYTE *v195; // rax
  unsigned __int64 v196; // rcx
  __int64 v197; // rax
  size_t v198; // r15
  size_t v199; // rdi
  unsigned __int128 v200; // rax
  _DWORD *inited; // [rsp+20h] [rbp-78h]
  char *v203; // [rsp+28h] [rbp-70h]
  char *v204; // [rsp+28h] [rbp-70h]
  char *v205; // [rsp+28h] [rbp-70h]
  unsigned __int64 v206; // [rsp+30h] [rbp-68h]
  char *v207; // [rsp+30h] [rbp-68h]
  char *v208; // [rsp+30h] [rbp-68h]
  char *v209; // [rsp+38h] [rbp-60h]
  unsigned __int64 v210; // [rsp+38h] [rbp-60h]
  char *v211; // [rsp+38h] [rbp-60h]
  char *v212; // [rsp+38h] [rbp-60h]
  __int64 v213; // [rsp+40h] [rbp-58h]
  char *v214; // [rsp+40h] [rbp-58h]
  char *v215; // [rsp+40h] [rbp-58h]
  char *v216; // [rsp+40h] [rbp-58h]
  __int64 v217; // [rsp+48h] [rbp-50h]
  char *v218; // [rsp+48h] [rbp-50h]
  char *v219; // [rsp+50h] [rbp-48h]
  unsigned __int64 v220; // [rsp+50h] [rbp-48h]
  char *v221; // [rsp+58h] [rbp-40h]
  __int64 v222; // [rsp+58h] [rbp-40h]
  __int64 v223; // [rsp+58h] [rbp-40h]
  char *v224; // [rsp+58h] [rbp-40h]
  int v227; // [rsp+C0h] [rbp+28h]
  int v228; // [rsp+C0h] [rbp+28h]

  v7 = a4;
  v8 = a3;
  inited = LZ4_initStream(a1);
  v11 = 0;
  if ( (int)LZ4_compressBound(v7) > 0x10000 )
  {
    if ( (int)v7 >= 65547 )
    {
      if ( (unsigned int)v7 > 0x7E000000 )
        return v11;
      v156 = v10[4100];
      v157 = &a2[v7];
      v158 = &a2[-v156];
      v205 = a2;
      v224 = &a2[-v156];
      v159 = a2;
      v160 = 0;
      if ( a7 )
        v212 = &a2[*(int *)(a7 + 16)];
      else
        v212 = 0LL;
      v10[4102] += v7;
      v10[4100] = v156 + v7;
      v10[4101] = 2;
      v161 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)a2) >> 52;
      v162 = a2 + 1;
      v10[v161] = v156;
      v163 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v162) >> 52;
LABEL_195:
      v164 = 1;
      v228 = v160;
      v165 = 64;
      while ( 1 )
      {
        v166 = v162;
        v216 = v162;
        v167 = (_DWORD)v162 - (_DWORD)v158;
        v162 += v164;
        v168 = &inited[v163];
        v164 = v165 >> 6;
        v169 = *v168;
        ++v165;
        if ( v162 > v157 - 11 )
          break;
        v170 = *(_QWORD *)v162;
        v171 = &v158[v169];
        *v168 = v167;
        v163 = (0xCF1BBCDCBB000000uLL * v170) >> 52;
        if ( (int)v169 + 0xFFFF >= v167 && *(_DWORD *)v171 == *(_DWORD *)v166 )
        {
          if ( v171 > a2 && *(v166 - 1) == *(v171 - 1) )
          {
            do
            {
              --v166;
              --v171;
            }
            while ( v166 > v159 && v171 > a2 && *(v166 - 1) == *(v171 - 1) );
            v216 = v166;
          }
          v172 = v8 + 1;
          v173 = (unsigned int)((_DWORD)v166 - (_DWORD)v159);
          if ( &v8[(unsigned int)v173 / 0xFF + 9 + v173] <= a3 + 0x10000 )
          {
            if ( (unsigned int)v173 < 0xF )
            {
              *v8 = 16 * ((_BYTE)v166 - (_BYTE)v159);
            }
            else
            {
              v174 = v173 - 15;
              *v8 = -16;
              if ( (int)v173 - 15 >= 255 )
              {
                v175 = v174 / 0xFF;
                v176 = v174 / 0xFF;
                LOBYTE(v175) = -1;
                memset_0(v8 + 1, v175, v176);
                v166 = v216;
                v172 = (_QWORD *)((char *)v172 + v176);
                v159 = v205;
                LOBYTE(v174) = v176 + v174;
              }
              *(_BYTE *)v172 = v174;
              v172 = (_QWORD *)((char *)v172 + 1);
            }
            v177 = (_WORD *)((char *)v172 + v173);
            v178 = v159 - (char *)v172;
            do
            {
              *v172 = *(_QWORD *)((char *)v172 + v178);
              ++v172;
            }
            while ( v172 < (_QWORD *)v177 );
            v179 = (unsigned __int64)(v157 - 12);
            v160 = v228;
            v159 = v166;
            v158 = v224;
            while ( 1 )
            {
              v180 = v159 + 4;
              v181 = v8;
              *v177 = (_WORD)v159 - (_WORD)v171;
              v8 = v177 + 1;
              v182 = v171 + 4;
              v183 = v159 + 4;
              v184 = (_DWORD)v159 + 4;
              v185 = v159 + 4;
              v186 = (unsigned __int64)(v159 + 4);
              if ( (unsigned __int64)(v159 + 4) >= v179 )
                goto LABEL_216;
              if ( *v182 != *(_QWORD *)v180 )
              {
                __asm { tzcnt   r8, r8 }
                v190 = (unsigned int)_R8 >> 3;
              }
              else
              {
                v183 = v159 + 12;
                v182 = v171 + 12;
                v180 = v159 + 12;
                v185 = v159 + 12;
                v186 = (unsigned __int64)(v159 + 12);
LABEL_216:
                while ( (unsigned __int64)v183 < v179 )
                {
                  if ( *v182 != *(_QWORD *)v180 )
                  {
                    __asm { tzcnt   r8, r8 }
                    v190 = (_DWORD)v180 + ((unsigned int)_R8 >> 3) - v184;
                    goto LABEL_231;
                  }
                  v180 = v185 + 8;
                  ++v182;
                  v183 = v180;
                  v185 += 8;
                  v186 = (unsigned __int64)v180;
                }
                if ( v186 < (unsigned __int64)(v157 - 8) && *(_DWORD *)v182 == *(_DWORD *)v180 )
                {
                  v180 += 4;
                  v182 = (_QWORD *)((char *)v182 + 4);
                }
                if ( v180 < v157 - 6 && *(_WORD *)v182 == *(_WORD *)v180 )
                {
                  v180 += 2;
                  v182 = (_QWORD *)((char *)v182 + 2);
                }
                if ( v180 < v157 - 5 && *(_BYTE *)v182 == *v180 )
                  LODWORD(v180) = (_DWORD)v180 + 1;
                v190 = (_DWORD)v180 - v184;
              }
LABEL_231:
              v159 += v190 + 4;
              v205 = v159;
              if ( &v8[(v190 + 240) / 0xFF + 6] > a3 + 0x10000 )
                break;
              v192 = *v181;
              if ( v190 < 0xF )
              {
                *v181 = v190 + v192;
              }
              else
              {
                v193 = v190 - 15;
                *v181 = v192 + 15;
                *(_DWORD *)v8 = -1;
                if ( v193 >= 0x3FC )
                {
                  v194 = v193 / 0x3FC;
                  do
                  {
                    v8 += 4;
                    v193 -= 1020;
                    *(_DWORD *)v8 = -1;
                    --v194;
                  }
                  while ( v194 );
                }
                v195 = &v8[v193 / 0xFF];
                *v195 = v193 + v193 / 0xFF;
                v8 = v195 + 1;
              }
              if ( v159 >= v157 - 11 )
                goto LABEL_245;
              inited[(0xCF1BBCDCBB000000uLL * *(_QWORD *)(v159 - 2)) >> 52] = (_DWORD)v159 - (_DWORD)v224 - 2;
              v196 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v159) >> 52;
              v197 = (unsigned int)inited[v196];
              inited[v196] = (_DWORD)v159 - (_DWORD)v224;
              v171 = &v224[v197];
              if ( (int)v197 + 0xFFFF < (unsigned int)((_DWORD)v159 - (_DWORD)v224)
                || *(_DWORD *)v171 != *(_DWORD *)v159 )
              {
                v162 = v159 + 1;
                v163 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)(v159 + 1)) >> 52;
                if ( v212 && v162 >= v212 )
                {
                  guard_dispatch_icall_no_overrides(*(_QWORD *)(a7 + 8), v212);
                  v159 = v205;
                  v212 = &v162[*(int *)(a7 + 16)];
                }
                goto LABEL_195;
              }
              v177 = v8 + 1;
              *v8 = 0;
            }
          }
          return v11;
        }
      }
LABEL_245:
      v151 = (int)a3;
      v198 = v157 - v159;
      if ( &v8[(v198 + 240) / 0xFF + 1 + v198] > a3 + 0x10000 )
        return v11;
      if ( v198 < 0xF )
      {
        *v8 = 16 * v198;
      }
      else
      {
        *v8 = -16;
        v199 = v198 - 15;
        ++v8;
        if ( v198 - 15 >= 0xFF )
        {
          v200 = v199 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v200) = -1;
          memset_0(v8, SDWORD2(v200), v199 / 0xFF);
          v159 = v205;
          v8 += v199 / 0xFF;
          LOBYTE(v199) = v199 / 0xFF + v199;
        }
        *v8 = v199;
      }
      memmove(v8 + 1, v159, v198);
      v155 = v198 + (_DWORD)v8 + 1;
    }
    else
    {
      if ( (unsigned int)v7 > 0x7E000000 )
        return v11;
      if ( !(_DWORD)v7 )
        goto LABEL_5;
      v106 = v10[4100];
      v107 = &a2[v7];
      v108 = (_WORD)a2 - v106;
      v109 = a2;
      v208 = &a2[-v106];
      v110 = 0;
      if ( a7 )
        v211 = &a2[*(int *)(a7 + 16)];
      else
        v211 = 0LL;
      v10[4102] += v7;
      v10[4100] = v106 + v7;
      v10[4101] = 3;
      if ( (int)v7 >= 13 )
      {
        v111 = a2 + 1;
        *((_WORD *)v10 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)a2) >> 19)) = v106;
        v112 = (unsigned int)(-1640531535 * *(_DWORD *)(a2 + 1)) >> 19;
LABEL_134:
        v113 = 1;
        v227 = v110;
        v114 = 64;
        do
        {
          v115 = (_WORD)v111 - v108;
          v215 = v111;
          v116 = (unsigned int)v112;
          v117 = v111;
          v118 = *((unsigned __int16 *)inited + v112);
          v111 += v113;
          v113 = v114++ >> 6;
          if ( v111 > v107 - 11 )
            goto LABEL_183;
          v119 = -1640531535 * *(_DWORD *)v111;
          v120 = v118;
          v108 = (__int16)v208;
          v121 = &v208[v120];
          *((_WORD *)inited + v116) = v115;
          v112 = v119 >> 19;
        }
        while ( *(_DWORD *)v121 != *(_DWORD *)v117 );
        if ( v121 > a2 && *(v117 - 1) == *(v121 - 1) )
        {
          do
          {
            --v117;
            --v121;
          }
          while ( v117 > v109 && v121 > a2 && *(v117 - 1) == *(v121 - 1) );
          v215 = v117;
        }
        v122 = v8 + 1;
        v123 = (unsigned int)((_DWORD)v117 - (_DWORD)v109);
        v223 = v123;
        if ( &v8[v123 + 9 + (unsigned int)v123 / 0xFF] > a3 + 0x10000 )
          return v11;
        if ( (unsigned int)v123 < 0xF )
        {
          *v8 = 16 * ((_BYTE)v117 - (_BYTE)v109);
        }
        else
        {
          v124 = v123 - 15;
          *v8 = -16;
          if ( (int)v123 - 15 >= 255 )
          {
            v125 = v124 / 0xFF;
            v126 = v124 / 0xFF;
            LOBYTE(v125) = -1;
            memset_0(v8 + 1, v125, v126);
            v123 = v223;
            v122 = (_QWORD *)((char *)v122 + v126);
            LOBYTE(v124) = v126 + v124;
          }
          *(_BYTE *)v122 = v124;
          v122 = (_QWORD *)((char *)v122 + 1);
          v117 = v215;
        }
        v127 = (_WORD *)((char *)v122 + v123);
        v128 = v109 - (char *)v122;
        do
        {
          *v122 = *(_QWORD *)((char *)v122 + v128);
          ++v122;
        }
        while ( v122 < (_QWORD *)v127 );
        v129 = (unsigned __int64)(v107 - 5);
        v130 = (unsigned __int64)(v107 - 12);
        v131 = v227;
        while ( 1 )
        {
          v132 = v117 + 4;
          v133 = v8;
          *v127 = (_WORD)v117 - (_WORD)v121;
          v8 = v127 + 1;
          v134 = v121 + 4;
          v135 = v117 + 4;
          v136 = (_DWORD)v117 + 4;
          v137 = v117 + 4;
          v138 = (unsigned __int64)(v117 + 4);
          if ( (unsigned __int64)(v117 + 4) < v130 )
          {
            if ( *v132 != *v134 )
            {
              __asm { tzcnt   r8, r8 }
              v142 = (unsigned int)_R8 >> 3;
              goto LABEL_170;
            }
            v135 = v117 + 12;
            v134 = v121 + 12;
            v132 = v117 + 12;
            v137 = v117 + 12;
            v138 = (unsigned __int64)(v117 + 12);
          }
          v227 = v131;
          while ( (unsigned __int64)v135 < v130 )
          {
            if ( *v134 != *v132 )
            {
              __asm { tzcnt   r8, r8 }
              v142 = (_DWORD)v132 + ((unsigned int)_R8 >> 3) - v136;
              goto LABEL_170;
            }
            v132 = v137 + 2;
            ++v134;
            v135 = v132;
            v137 += 2;
            v138 = (unsigned __int64)v132;
          }
          if ( v138 < v129 - 3 && *(_DWORD *)v134 == *(_DWORD *)v132 )
          {
            v132 = (_QWORD *)((char *)v132 + 4);
            v134 = (_QWORD *)((char *)v134 + 4);
          }
          if ( (unsigned __int64)v132 < v129 - 1 && *(_WORD *)v134 == *(_WORD *)v132 )
          {
            v132 = (_QWORD *)((char *)v132 + 2);
            v134 = (_QWORD *)((char *)v134 + 2);
          }
          if ( (unsigned __int64)v132 < v129 && *(_BYTE *)v134 == *(_BYTE *)v132 )
            LODWORD(v132) = (_DWORD)v132 + 1;
          v142 = (_DWORD)v132 - v136;
LABEL_170:
          v117 += v142 + 4;
          if ( &v8[(v142 + 240) / 0xFF + 6] > a3 + 0x10000 )
            return v11;
          v144 = *v133;
          if ( v142 < 0xF )
          {
            *v133 = v142 + v144;
          }
          else
          {
            v145 = v142 - 15;
            *v133 = v144 + 15;
            *(_DWORD *)v8 = -1;
            if ( v145 >= 0x3FC )
            {
              v146 = v145 / 0x3FC;
              do
              {
                v8 += 4;
                v145 -= 1020;
                *(_DWORD *)v8 = -1;
                --v146;
              }
              while ( v146 );
            }
            v147 = &v8[v145 / 0xFF];
            *v147 = v145 + v145 / 0xFF;
            v8 = v147 + 1;
          }
          v109 = v117;
          if ( v117 >= v107 - 11 )
            break;
          v108 = (__int16)v208;
          v148 = (unsigned __int16)v117;
          LOWORD(v148) = (_WORD)v117 - (_WORD)v208 - 2;
          *((_WORD *)inited + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v117 - 2)) >> 19)) = v148;
          v149 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v117) >> 19;
          v150 = *((unsigned __int16 *)inited + v149);
          *((_WORD *)inited + v149) = (_WORD)v117 - (_WORD)v208;
          v121 = &v208[v150];
          if ( *(_DWORD *)v121 != *(_DWORD *)v117 )
          {
            v111 = v117 + 1;
            v110 = v227;
            v112 = (unsigned int)(-1640531535 * *(_DWORD *)(v117 + 1)) >> 19;
            if ( v211 && v111 >= v211 )
            {
              guard_dispatch_icall_no_overrides(*(_QWORD *)(a7 + 8), v148);
              v108 = (__int16)v208;
              v110 = v227;
              v211 = &v111[*(int *)(a7 + 16)];
            }
            goto LABEL_134;
          }
          v127 = v8 + 1;
          *v8 = 0;
          v227 = v131;
          v129 = (unsigned __int64)(v107 - 5);
        }
      }
LABEL_183:
      v151 = (int)a3;
      v152 = v107 - v109;
      if ( &v8[v152 + 1 + (v152 + 240) / 0xFF] > a3 + 0x10000 )
        return v11;
      if ( v152 < 0xF )
      {
        *v8 = 16 * v152;
      }
      else
      {
        *v8 = -16;
        v153 = v152 - 15;
        ++v8;
        if ( v152 - 15 >= 0xFF )
        {
          v154 = v153 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v154) = -1;
          memset_0(v8, SDWORD2(v154), v153 / 0xFF);
          v8 += v153 / 0xFF;
          LOBYTE(v153) = v153 / 0xFF + v153;
        }
        *v8 = v153;
      }
      memmove(v8 + 1, v109, v152);
      v155 = (_DWORD)v8 + 1 + v152;
    }
    return (unsigned int)(v155 - v151);
  }
  if ( (int)v7 >= 65547 )
  {
    if ( (unsigned int)v7 > 0x7E000000 )
      return v11;
    v60 = v10[4100];
    v61 = a7;
    v62 = (unsigned __int64)&a2[v7 - 11];
    v218 = &a2[v7];
    v63 = (_DWORD)a2 - v60;
    v210 = v62;
    v204 = &a2[-v60];
    v220 = (unsigned __int64)&a2[v7 - 5];
    v64 = a2;
    if ( a7 )
      v207 = &a2[*(int *)(a7 + 16)];
    else
      v207 = 0LL;
    v10[4102] += v7;
    v10[4100] = v60 + v7;
    v10[4101] = 2;
    v65 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)a2) >> 52;
    v66 = a2 + 1;
    v10[v65] = v60;
    v67 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v66) >> 52;
LABEL_70:
    v68 = 1;
    v69 = 64;
    while ( 1 )
    {
      v70 = v66;
      v214 = v66;
      v71 = (_DWORD)v66 - v63;
      v66 += v68;
      v68 = v69 >> 6;
      v72 = &inited[v67];
      v73 = *v72;
      ++v69;
      if ( (unsigned __int64)v66 > v62 )
        break;
      v74 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)v66;
      *v72 = v71;
      v75 = &v204[v73];
      v67 = v74 >> 52;
      if ( v73 + 0xFFFF >= v71 && *(_DWORD *)v75 == *v70 )
      {
        if ( v75 > a2 && *((_BYTE *)v70 - 1) == *(v75 - 1) )
        {
          do
          {
            v70 = (_DWORD *)((char *)v70 - 1);
            --v75;
          }
          while ( v70 > (_DWORD *)v64 && v75 > a2 && *((_BYTE *)v70 - 1) == *(v75 - 1) );
          v214 = (char *)v70;
        }
        v76 = v8 + 1;
        v77 = (_DWORD)v70 - (_DWORD)v64;
        v78 = (unsigned int)((_DWORD)v70 - (_DWORD)v64);
        v222 = v78;
        if ( (unsigned int)((_DWORD)v70 - (_DWORD)v64) < 0xF )
        {
          *v8 = 16 * v78;
        }
        else
        {
          v79 = v77 - 15;
          *v8 = -16;
          if ( v77 - 15 >= 255 )
          {
            v80 = v79 / 0xFF;
            v81 = v79 / 0xFF;
            LOBYTE(v80) = -1;
            memset_0(v8 + 1, v80, v81);
            v70 = v214;
            v76 = (_QWORD *)((char *)v76 + v81);
            v78 = v222;
            LOBYTE(v79) = v81 + v79;
          }
          *(_BYTE *)v76 = v79;
          v76 = (_QWORD *)((char *)v76 + 1);
          v61 = a7;
        }
        v82 = (_WORD *)((char *)v76 + v78);
        v83 = (char *)v64 - (char *)v76;
        do
        {
          *v76 = *(_QWORD *)((char *)v76 + v83);
          ++v76;
        }
        while ( v76 < (_QWORD *)v82 );
        v84 = v220 - 7;
        v64 = v70;
        while ( 1 )
        {
          v85 = (_QWORD *)((char *)v64 + 4);
          v86 = v8;
          *v82 = (_WORD)v64 - (_WORD)v75;
          v8 = v82 + 1;
          v87 = v75 + 4;
          v88 = (char *)v64 + 4;
          v89 = (unsigned __int64)v64 + 4;
          v90 = (_DWORD)v64 + 4;
          v91 = (char *)v64 + 4;
          if ( (unsigned __int64)v64 + 4 >= v84 )
            goto LABEL_91;
          if ( *v87 != *v85 )
          {
            __asm { tzcnt   rcx, r8 }
            v95 = (unsigned int)_RCX >> 3;
          }
          else
          {
            v88 = (char *)v64 + 12;
            v87 = v75 + 12;
            v85 = (_QWORD *)((char *)v64 + 12);
            v91 = (char *)v64 + 12;
            v89 = (unsigned __int64)v64 + 12;
LABEL_91:
            while ( (unsigned __int64)v88 < v84 )
            {
              if ( *v87 != *v85 )
              {
                __asm { tzcnt   rax, r8 }
                v95 = ((unsigned int)_RAX >> 3) - v90 + (_DWORD)v85;
                goto LABEL_106;
              }
              v85 = v91 + 8;
              ++v87;
              v88 = (char *)v85;
              v91 += 8;
              v89 = (unsigned __int64)v85;
            }
            if ( v89 < v220 - 3 && *(_DWORD *)v87 == *(_DWORD *)v85 )
            {
              v85 = (_QWORD *)((char *)v85 + 4);
              v87 = (_QWORD *)((char *)v87 + 4);
            }
            if ( (unsigned __int64)v85 < v220 - 1 && *(_WORD *)v87 == *(_WORD *)v85 )
            {
              v85 = (_QWORD *)((char *)v85 + 2);
              v87 = (_QWORD *)((char *)v87 + 2);
            }
            if ( (unsigned __int64)v85 < v220 && *(_BYTE *)v87 == *(_BYTE *)v85 )
              LODWORD(v85) = (_DWORD)v85 + 1;
            v95 = (_DWORD)v85 - v90;
          }
LABEL_106:
          v64 = (_QWORD *)((char *)v64 + v95 + 4);
          v97 = *v86;
          if ( v95 < 0xF )
          {
            *v86 = v95 + v97;
          }
          else
          {
            v98 = v95 - 15;
            *v86 = v97 + 15;
            *(_DWORD *)v8 = -1;
            if ( v95 - 15 >= 0x3FC )
            {
              v99 = v98 / 0x3FC;
              do
              {
                v8 += 4;
                v98 -= 1020;
                *(_DWORD *)v8 = -1;
                --v99;
              }
              while ( v99 );
            }
            v100 = v98 / 0xFF;
            v8[v100] = v100 + v98;
            v8 += v100 + 1;
          }
          if ( (unsigned __int64)v64 >= v210 )
            goto LABEL_120;
          v63 = (int)v204;
          inited[(0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)v64 - 2)) >> 52] = (_DWORD)v64 - (_DWORD)v204 - 2;
          v101 = (0xCF1BBCDCBB000000uLL * *v64) >> 52;
          v102 = (unsigned int)inited[v101];
          inited[v101] = (_DWORD)v64 - (_DWORD)v204;
          v75 = &v204[v102];
          if ( (int)v102 + 0xFFFF < (unsigned int)((_DWORD)v64 - (_DWORD)v204) || *(_DWORD *)v75 != *(_DWORD *)v64 )
          {
            v66 = (char *)v64 + 1;
            v67 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)v64 + 1)) >> 52;
            if ( v207 && v66 >= v207 )
            {
              guard_dispatch_icall_no_overrides(*(_QWORD *)(v61 + 8), v207);
              v63 = (int)v204;
              v207 = &v66[*(int *)(v61 + 16)];
            }
            v62 = v210;
            goto LABEL_70;
          }
          v82 = v8 + 1;
          *v8 = 0;
        }
      }
      v63 = (int)v204;
      v62 = v210;
    }
LABEL_120:
    v103 = v218 - (char *)v64;
    if ( (unsigned __int64)(v218 - (char *)v64) < 0xF )
    {
      *v8 = 16 * v103;
    }
    else
    {
      *v8 = -16;
      v104 = v103 - 15;
      ++v8;
      if ( v103 - 15 >= 0xFF )
      {
        v105 = v104 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v105) = -1;
        memset_0(v8, SDWORD2(v105), v104 / 0xFF);
        v8 += v104 / 0xFF;
        v104 %= 0xFFuLL;
      }
      *v8 = v104;
    }
    memmove(v8 + 1, v64, v103);
    v59 = v103 + (_DWORD)v8 + 1;
    return (unsigned int)(v59 - (_DWORD)a3);
  }
  if ( (unsigned int)v7 <= 0x7E000000 )
  {
    if ( !(_DWORD)v7 )
    {
LABEL_5:
      *v8 = 0;
      return 1;
    }
    v12 = v10[4100];
    v13 = &a2[v7];
    v206 = (unsigned __int64)&a2[v7 - 11];
    v14 = &a2[-v12];
    v221 = &a2[v7];
    v219 = &a2[-v12];
    v213 = (__int64)&a2[v7 - 5];
    v15 = a2;
    if ( a7 )
      v203 = &a2[*(int *)(a7 + 16)];
    else
      v203 = 0LL;
    v10[4102] += v7;
    v10[4100] = v12 + v7;
    v10[4101] = 3;
    if ( (int)v7 >= 13 )
    {
      v16 = a2 + 1;
      *((_WORD *)v10 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)a2) >> 19)) = v12;
      v17 = (unsigned int)(-1640531535 * *(_DWORD *)(a2 + 1)) >> 19;
LABEL_11:
      v18 = 1;
      v19 = 64;
      while ( 1 )
      {
        v20 = (unsigned int)v17;
        v21 = v16;
        v209 = v16;
        v22 = (_WORD)v16 - (_WORD)v14;
        v23 = *((unsigned __int16 *)inited + v17);
        v24 = v18;
        v18 = v19 >> 6;
        v16 += v24;
        ++v19;
        if ( (unsigned __int64)v16 > v206 )
          break;
        v25 = &v14[v23];
        v26 = -1640531535 * *(_DWORD *)v16;
        *((_WORD *)inited + v20) = v22;
        v17 = v26 >> 19;
        if ( *(_DWORD *)v25 == *v21 )
        {
          if ( v25 > a2 && *((_BYTE *)v21 - 1) == *(v25 - 1) )
          {
            do
            {
              v21 = (_DWORD *)((char *)v21 - 1);
              --v25;
            }
            while ( v21 > (_DWORD *)v15 && v25 > a2 && *((_BYTE *)v21 - 1) == *(v25 - 1) );
            v209 = (char *)v21;
          }
          v27 = v8 + 1;
          v28 = (_DWORD)v21 - (_DWORD)v15;
          v29 = (unsigned int)((_DWORD)v21 - (_DWORD)v15);
          v217 = v29;
          if ( (unsigned int)((_DWORD)v21 - (_DWORD)v15) < 0xF )
          {
            *v8 = 16 * v29;
          }
          else
          {
            v30 = v28 - 15;
            *v8 = -16;
            if ( v28 - 15 >= 255 )
            {
              v31 = v30 / 0xFF;
              v32 = v30 / 0xFF;
              LOBYTE(v31) = -1;
              memset_0(v8 + 1, v31, v32);
              v29 = v217;
              v27 = (_QWORD *)((char *)v27 + v32);
              v21 = v209;
              LOBYTE(v30) = v32 + v30;
            }
            *(_BYTE *)v27 = v30;
            v27 = (_QWORD *)((char *)v27 + 1);
            v14 = v219;
          }
          v33 = (_WORD *)((char *)v27 + v29);
          v34 = v15 - (char *)v27;
          do
          {
            *v27 = *(_QWORD *)((char *)v27 + v34);
            ++v27;
          }
          while ( v27 < (_QWORD *)v33 );
          v35 = v213;
          v36 = v213 - 7;
          while ( 1 )
          {
            v37 = v21 + 1;
            v38 = v8;
            *v33 = (_WORD)v21 - (_WORD)v25;
            v8 = v33 + 1;
            v39 = v25 + 4;
            v40 = v21 + 1;
            v41 = (_DWORD)v21 + 4;
            v42 = v21 + 1;
            v43 = (unsigned __int64)(v21 + 1);
            if ( (unsigned __int64)(v21 + 1) >= v36 )
              goto LABEL_30;
            if ( *v37 != *v39 )
            {
              __asm { tzcnt   rcx, r8 }
              v47 = (unsigned int)_RCX >> 3;
            }
            else
            {
              v40 = v21 + 3;
              v39 = v25 + 12;
              v37 = v21 + 3;
              v42 = v21 + 3;
              v43 = (unsigned __int64)(v21 + 3);
LABEL_30:
              while ( (unsigned __int64)v40 < v36 )
              {
                if ( *v39 != *v37 )
                {
                  __asm { tzcnt   rax, r8 }
                  v47 = ((unsigned int)_RAX >> 3) - v41 + (_DWORD)v37;
                  goto LABEL_45;
                }
                v37 = v42 + 2;
                ++v39;
                v40 = v37;
                v42 += 2;
                v43 = (unsigned __int64)v37;
              }
              if ( v43 < v35 - 3 && *(_DWORD *)v39 == *(_DWORD *)v37 )
              {
                v37 = (_QWORD *)((char *)v37 + 4);
                v39 = (_QWORD *)((char *)v39 + 4);
              }
              if ( (unsigned __int64)v37 < v35 - 1 && *(_WORD *)v39 == *(_WORD *)v37 )
              {
                v37 = (_QWORD *)((char *)v37 + 2);
                v39 = (_QWORD *)((char *)v39 + 2);
              }
              if ( (unsigned __int64)v37 < v35 && *(_BYTE *)v39 == *(_BYTE *)v37 )
                LODWORD(v37) = (_DWORD)v37 + 1;
              v47 = (_DWORD)v37 - v41;
            }
LABEL_45:
            v21 = (_DWORD *)((char *)v21 + v47 + 4);
            v49 = *v38;
            if ( v47 < 0xF )
            {
              *v38 = v47 + v49;
            }
            else
            {
              v50 = v47 - 15;
              *v38 = v49 + 15;
              *(_DWORD *)v8 = -1;
              if ( v47 - 15 >= 0x3FC )
              {
                v51 = v50 / 0x3FC;
                do
                {
                  v8 += 4;
                  v50 -= 1020;
                  *(_DWORD *)v8 = -1;
                  --v51;
                }
                while ( v51 );
              }
              v52 = v50 / 0xFF;
              v8[v52] = v52 + v50;
              v8 += v52 + 1;
            }
            v15 = (char *)v21;
            if ( (unsigned __int64)v21 >= v206 )
              goto LABEL_57;
            v53 = (unsigned __int16)v21;
            LOWORD(v53) = (_WORD)v21 - (_WORD)v14 - 2;
            *((_WORD *)inited + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v21 - 2)) >> 19)) = v53;
            v54 = (unsigned __int64)(unsigned int)(-1640531535 * *v21) >> 19;
            v55 = *((unsigned __int16 *)inited + v54);
            *((_WORD *)inited + v54) = (_WORD)v21 - (_WORD)v14;
            v25 = &v14[v55];
            if ( *(_DWORD *)v25 != *v21 )
            {
              v16 = (char *)v21 + 1;
              v17 = (unsigned int)(-1640531535 * *(_DWORD *)((char *)v21 + 1)) >> 19;
              if ( v203 && v16 >= v203 )
              {
                guard_dispatch_icall_no_overrides(*(_QWORD *)(a7 + 8), v53);
                v203 = &v16[*(int *)(a7 + 16)];
              }
              goto LABEL_11;
            }
            v35 = v213;
            v33 = v8 + 1;
            *v8 = 0;
          }
        }
      }
LABEL_57:
      v13 = v221;
    }
    v56 = v13 - v15;
    if ( v56 < 0xF )
    {
      *v8 = 16 * v56;
    }
    else
    {
      *v8 = -16;
      v57 = v56 - 15;
      ++v8;
      if ( v56 - 15 >= 0xFF )
      {
        v58 = v57 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v58) = -1;
        memset_0(v8, SDWORD2(v58), v57 / 0xFF);
        v8 += v57 / 0xFF;
        v57 %= 0xFFuLL;
      }
      *v8 = v57;
    }
    memmove(v8 + 1, v15, v56);
    v59 = (_DWORD)v8 + 1 + v56;
    return (unsigned int)(v59 - (_DWORD)a3);
  }
  return v11;
}
