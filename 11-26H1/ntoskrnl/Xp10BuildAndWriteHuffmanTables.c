/*
 * XREFs of Xp10BuildAndWriteHuffmanTables @ 0x1408107B4
 * Callers:
 *     Xp10BuildAndWriteHuffmanEncodings @ 0x1408103D8 (Xp10BuildAndWriteHuffmanEncodings.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     Xp10BuildHuffmanEncodings @ 0x1408114AC (Xp10BuildHuffmanEncodings.c)
 */

__int64 __fastcall Xp10BuildAndWriteHuffmanTables(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // r9d
  unsigned __int16 v9; // dx
  int v10; // ecx
  int v11; // r8d
  int v12; // eax
  unsigned __int16 v13; // r8
  unsigned int v14; // ecx
  __int64 v15; // r15
  unsigned int v16; // r14d
  _DWORD *v17; // r12
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v20; // edi
  _BYTE *v21; // r8
  unsigned int v22; // r11d
  unsigned int v23; // r10d
  unsigned int v24; // esi
  unsigned int v25; // edx
  unsigned int v26; // eax
  __int64 v27; // rcx
  _BYTE *v28; // r8
  unsigned int v29; // r9d
  unsigned __int64 v30; // rax
  unsigned int v31; // r9d
  __int64 v32; // rax
  char v33; // dl
  unsigned int v34; // eax
  unsigned int v35; // r11d
  __int64 v36; // rdx
  _BYTE *v37; // r8
  unsigned __int64 v38; // rax
  unsigned int v39; // eax
  unsigned int v40; // edx
  int v41; // edi
  _BYTE *v42; // r8
  unsigned int v43; // r10d
  unsigned int v44; // r9d
  unsigned int v45; // r11d
  __int64 v46; // rax
  char v47; // dl
  unsigned int v48; // eax
  unsigned int v49; // r11d
  __int64 v50; // rdx
  _BYTE *v51; // r8
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  char v54; // dl
  unsigned int v55; // eax
  unsigned __int64 v56; // rax
  unsigned int v57; // r13d
  int v58; // r12d
  unsigned __int16 v59; // r15
  int v60; // ecx
  unsigned int v61; // edx
  int v62; // eax
  unsigned int v63; // ecx
  __int64 v64; // rax
  unsigned int v65; // edx
  int v66; // edi
  _BYTE *v67; // r8
  unsigned int v68; // r11d
  unsigned int v69; // r9d
  unsigned int v70; // r10d
  __int64 v71; // rax
  char v72; // dl
  unsigned int v73; // eax
  unsigned int v74; // r10d
  __int64 v75; // rdx
  _BYTE *v76; // r8
  unsigned __int64 v77; // rax
  unsigned __int16 v78; // r9
  int v79; // esi
  unsigned int v80; // r14d
  unsigned int v81; // ecx
  unsigned int v82; // edx
  _BYTE *v83; // r8
  int v84; // r11d
  unsigned int v85; // edi
  unsigned int v86; // r10d
  __int64 v87; // rax
  char v88; // dl
  int v89; // eax
  _BYTE *v90; // r8
  unsigned int v91; // r11d
  __int64 v92; // rdx
  unsigned __int64 v93; // rax
  unsigned int v94; // r8d
  int v95; // esi
  unsigned int v96; // r14d
  unsigned int v97; // ecx
  unsigned int v98; // edx
  _BYTE *v99; // r9
  int v100; // r11d
  unsigned int v101; // edi
  unsigned int v102; // r10d
  __int64 v103; // rax
  char v104; // dl
  int v105; // eax
  _BYTE *v106; // r9
  unsigned int v107; // r11d
  __int64 v108; // rdx
  unsigned __int64 v109; // rax
  unsigned int v110; // ecx
  unsigned int v111; // r10d
  unsigned int v112; // edx
  int v113; // esi
  _BYTE *v114; // r9
  unsigned int v115; // edi
  unsigned int v116; // r11d
  __int64 v117; // rax
  char v118; // dl
  unsigned int v119; // eax
  unsigned int v120; // r11d
  __int64 v121; // rdx
  _BYTE *v122; // r9
  unsigned __int64 v123; // rax
  unsigned int v124; // eax
  unsigned int v125; // edx
  int v126; // edi
  _BYTE *v127; // r9
  unsigned int v128; // r11d
  unsigned int v129; // r8d
  unsigned int v130; // r10d
  __int64 v131; // rax
  char v132; // dl
  unsigned int v133; // eax
  unsigned int v134; // r8d
  __int64 v135; // rdx
  _BYTE *v136; // r9
  unsigned __int64 v137; // rax
  __int64 v138; // rax
  char v139; // dl
  unsigned int v140; // eax
  unsigned int v141; // edi
  __int64 v142; // rdx
  _BYTE *v143; // r9
  unsigned __int64 v144; // rax
  unsigned int v145; // r8d
  __int64 v146; // rsi
  unsigned int v147; // edx
  unsigned int v148; // r10d
  _BYTE *v149; // r9
  int v150; // r11d
  unsigned int v151; // edi
  __int64 v152; // rax
  char v153; // dl
  unsigned int v154; // eax
  unsigned int v155; // r11d
  __int64 v156; // rdx
  _BYTE *v157; // r9
  unsigned __int64 v158; // rax
  unsigned int v159; // ecx
  unsigned int v160; // edx
  _BYTE *v161; // r9
  int v162; // edi
  unsigned int v163; // r11d
  __int64 v164; // rax
  char v165; // dl
  unsigned int v166; // eax
  unsigned __int64 v167; // rax
  int v169; // [rsp+30h] [rbp-D0h]
  _DWORD v172[28]; // [rsp+40h] [rbp-C0h] BYREF
  int v173; // [rsp+B0h] [rbp-50h]
  int v174; // [rsp+B4h] [rbp-4Ch]
  _DWORD v175[28]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v176; // [rsp+140h] [rbp+40h]
  unsigned int v177; // [rsp+144h] [rbp+44h]

  memset_0(v172, 0, 0x84uLL);
  memset_0(v175, 0, 0x84uLL);
  v8 = 8;
  v9 = 0;
  while ( v9 < a3 )
  {
    v10 = *(_DWORD *)(a2 + 4LL * v9) & 0x1F;
    if ( v10 )
    {
      v11 = *(_DWORD *)(a2 + 4LL * v9) & 0x1F;
      if ( v10 == v8 )
      {
        v11 = 30;
      }
      else
      {
        if ( v9 >= 0x10u )
        {
          v12 = *(_DWORD *)(a2 + 4LL * v9 - 64) & 0x1F;
          if ( v10 == v12 )
          {
            v11 = 31;
          }
          else if ( v10 == v12 + 1 )
          {
            v11 = 32;
          }
        }
        v8 = *(_DWORD *)(a2 + 4LL * v9) & 0x1F;
      }
      ++v172[v11];
      ++v9;
    }
    else
    {
      v13 = v9;
      while ( v9 < a3 && (*(_DWORD *)(a2 + 4LL * v9) & 0x1F) == 0 )
        ++v9;
      for ( ; (unsigned __int16)(v13 ^ v9) >= 0x10u; v13 = (v13 & 0xFFF0) + 16 )
        ++v173;
      v14 = v9 - v13;
      if ( v9 != v13 )
      {
        if ( v14 >= 5 )
          ++v174;
        else
          v172[0] += v14;
      }
    }
  }
  v15 = 33LL;
  Xp10BuildHuffmanEncodings(a1, (unsigned int)v172, 33, 8, (__int64)v175);
  v16 = 4;
  v17 = v175;
  do
  {
    v18 = *(_DWORD *)(a4 + 8);
    v19 = *(_DWORD *)(a4 + 12);
    v20 = v18 & 7;
    v21 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v18 >> 3));
    v22 = v18 + 1;
    v23 = 8 - v20;
    v24 = *v17 & 0x1F;
    if ( v24 != v16 )
    {
      v31 = 1;
      if ( v22 <= v19 || (v31 = v19 - v18, v19 != v18) )
      {
        v32 = v31;
        if ( v23 < v31 )
          v32 = v23;
        v33 = byte_140035FA0[4 * v32];
        v34 = v31;
        *v21 |= (v33 & 1) << v20;
        if ( v23 < v31 )
          v34 = 8 - v20;
        v35 = 1u >> v23;
        v36 = v31 - v34;
        v37 = v21 + 1;
        if ( (unsigned int)v36 >= 8 )
        {
          v38 = (unsigned __int64)(unsigned int)v36 >> 3;
          do
          {
            *v37 = v35;
            v36 = (unsigned int)(v36 - 8);
            v35 >>= 8;
            ++v37;
            --v38;
          }
          while ( v38 );
        }
        if ( (_DWORD)v36 )
          *v37 |= (unsigned __int8)v35 & byte_140035FA0[4 * v36];
        v18 = v31 + *(_DWORD *)(a4 + 8);
        *(_DWORD *)(a4 + 8) = v18;
      }
      v39 = *(_DWORD *)(a4 + 12);
      v40 = v18 + 3;
      v41 = v18 & 7;
      v42 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v18 >> 3));
      v43 = 8 - v41;
      v44 = 3;
      if ( v24 <= v16 )
      {
        if ( v40 <= v39 || (v44 = v39 - v18, v39 != v18) )
        {
          v53 = v44;
          if ( v43 < v44 )
            v53 = v43;
          v54 = byte_140035FA0[4 * v53];
          v55 = v44;
          *v42 |= ((unsigned __int8)v24 & (unsigned __int8)v54) << v41;
          if ( v43 < v44 )
            v55 = 8 - v41;
          v49 = v24 >> v43;
          v50 = v44 - v55;
          v51 = v42 + 1;
          if ( (unsigned int)v50 >= 8 )
          {
            v56 = (unsigned __int64)(unsigned int)v50 >> 3;
            do
            {
              *v51 = v49;
              v50 = (unsigned int)(v50 - 8);
              v49 >>= 8;
              ++v51;
              --v56;
            }
            while ( v56 );
          }
          goto LABEL_57;
        }
      }
      else
      {
        v45 = v24 - 1;
        if ( v40 <= v39 || (v44 = v39 - v18, v39 != v18) )
        {
          v46 = v44;
          if ( v43 < v44 )
            v46 = v43;
          v47 = byte_140035FA0[4 * v46];
          v48 = v44;
          *v42 |= ((unsigned __int8)v45 & (unsigned __int8)v47) << v41;
          if ( v43 < v44 )
            v48 = 8 - v41;
          v49 = v45 >> v43;
          v50 = v44 - v48;
          v51 = v42 + 1;
          if ( (unsigned int)v50 >= 8 )
          {
            v52 = (unsigned __int64)(unsigned int)v50 >> 3;
            do
            {
              *v51 = v49;
              v50 = (unsigned int)(v50 - 8);
              v49 >>= 8;
              ++v51;
              --v52;
            }
            while ( v52 );
          }
LABEL_57:
          if ( (_DWORD)v50 )
            *v51 |= (unsigned __int8)v49 & byte_140035FA0[4 * v50];
          *(_DWORD *)(a4 + 8) += v44;
        }
      }
      v16 = v24;
      goto LABEL_71;
    }
    v25 = 1;
    if ( v22 <= v19 || (v25 = v19 - v18, v19 != v18) )
    {
      v26 = v25;
      if ( v23 < v25 )
        v26 = 8 - v20;
      v27 = v25 - v26;
      v28 = v21 + 1;
      v29 = 0;
      if ( (unsigned int)v27 >= 8 )
      {
        v30 = (unsigned __int64)(unsigned int)v27 >> 3;
        do
        {
          *v28 = v29;
          v27 = (unsigned int)(v27 - 8);
          v29 >>= 8;
          ++v28;
          --v30;
        }
        while ( v30 );
      }
      if ( (_DWORD)v27 )
        *v28 |= (unsigned __int8)v29 & byte_140035FA0[4 * v27];
      *(_DWORD *)(a4 + 8) += v25;
    }
LABEL_71:
    ++v17;
    --v15;
  }
  while ( v15 );
  v57 = a3;
  v58 = 8;
  v169 = 8;
  v59 = 0;
  while ( v59 < v57 )
  {
    v60 = *(_DWORD *)(a2 + 4LL * v59) & 0x1F;
    if ( v60 )
    {
      v61 = *(_DWORD *)(a2 + 4LL * v59) & 0x1F;
      if ( v60 == v58 )
      {
        v61 = 30;
      }
      else
      {
        if ( v59 >= 0x10u )
        {
          v62 = *(_DWORD *)(a2 + 4LL * v59 - 64) & 0x1F;
          if ( v60 == v62 )
          {
            v61 = 31;
          }
          else if ( v60 == v62 + 1 )
          {
            v61 = 32;
          }
        }
        v58 = *(_DWORD *)(a2 + 4LL * v59) & 0x1F;
        v169 = v58;
      }
      v63 = *(_DWORD *)(a4 + 8);
      v64 = v61;
      v65 = *(_DWORD *)(a4 + 12);
      v66 = v63 & 7;
      v67 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v63 >> 3));
      v68 = 8 - v66;
      v69 = v175[v64] & 0x1F;
      v70 = v175[v64] >> 5;
      if ( v63 + v69 <= v65 || (v69 = v65 - v63, v65 != v63) )
      {
        v71 = v69;
        if ( v68 < v69 )
          v71 = v68;
        v72 = byte_140035FA0[4 * v71];
        v73 = v69;
        *v67 |= ((unsigned __int8)v70 & (unsigned __int8)v72) << v66;
        if ( v68 < v69 )
          v73 = 8 - v66;
        v74 = v70 >> v68;
        v75 = v69 - v73;
        v76 = v67 + 1;
        if ( (unsigned int)v75 >= 8 )
        {
          v77 = (unsigned __int64)(unsigned int)v75 >> 3;
          do
          {
            *v76 = v74;
            v75 = (unsigned int)(v75 - 8);
            v74 >>= 8;
            ++v76;
            --v77;
          }
          while ( v77 );
        }
        if ( (_DWORD)v75 )
          *v76 |= (unsigned __int8)v74 & byte_140035FA0[4 * v75];
        *(_DWORD *)(a4 + 8) += v69;
      }
      ++v59;
    }
    else
    {
      v78 = v59;
      while ( v59 < v57 && (*(_DWORD *)(a2 + 4LL * v59) & 0x1F) == 0 )
        ++v59;
      if ( (unsigned __int16)(v78 ^ v59) >= 0x10u )
      {
        v79 = v176 & 0x1F;
        v80 = v176 >> 5;
        do
        {
          v81 = *(_DWORD *)(a4 + 8);
          v82 = *(_DWORD *)(a4 + 12);
          v83 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v81 >> 3));
          v84 = v81 & 7;
          v85 = 8 - v84;
          v86 = v79;
          if ( v81 + v79 <= v82 || (v86 = v82 - v81, v82 != v81) )
          {
            v87 = v86;
            if ( v85 < v86 )
              v87 = v85;
            v88 = byte_140035FA0[4 * v87];
            v89 = v86;
            *v83 |= ((unsigned __int8)v80 & (unsigned __int8)v88) << v84;
            if ( v85 < v86 )
              v89 = 8 - v84;
            v90 = v83 + 1;
            v91 = v80 >> v85;
            v92 = v86 - v89;
            if ( (unsigned int)v92 >= 8 )
            {
              v93 = (unsigned __int64)(unsigned int)v92 >> 3;
              do
              {
                *v90 = v91;
                v92 = (unsigned int)(v92 - 8);
                v91 >>= 8;
                ++v90;
                --v93;
              }
              while ( v93 );
            }
            if ( (_DWORD)v92 )
              *v90 |= (unsigned __int8)v91 & byte_140035FA0[4 * v92];
            *(_DWORD *)(a4 + 8) += v86;
          }
          v78 = (v78 & 0xFFF0) + 16;
        }
        while ( (unsigned __int16)(v78 ^ v59) >= 0x10u );
        v58 = v169;
        v57 = a3;
      }
      v94 = v59 - v78;
      if ( v59 == v78 )
        continue;
      if ( v94 >= 5 )
      {
        v110 = *(_DWORD *)(a4 + 8);
        v111 = v177 & 0x1F;
        v112 = *(_DWORD *)(a4 + 12);
        v113 = v110 & 7;
        v114 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v110 >> 3));
        v115 = 8 - v113;
        v116 = v177 >> 5;
        if ( v110 + v111 <= v112 || (v111 = v112 - v110, v112 != v110) )
        {
          v117 = v111;
          if ( v115 < v111 )
            v117 = v115;
          v118 = byte_140035FA0[4 * v117];
          v119 = v111;
          *v114 |= ((unsigned __int8)v116 & (unsigned __int8)v118) << v113;
          if ( v115 < v111 )
            v119 = 8 - v113;
          v120 = v116 >> v115;
          v121 = v111 - v119;
          v122 = v114 + 1;
          if ( (unsigned int)v121 >= 8 )
          {
            v123 = (unsigned __int64)(unsigned int)v121 >> 3;
            do
            {
              *v122 = v120;
              v121 = (unsigned int)(v121 - 8);
              v120 >>= 8;
              ++v122;
              --v123;
            }
            while ( v123 );
          }
          if ( (_DWORD)v121 )
            *v122 |= (unsigned __int8)v120 & byte_140035FA0[4 * v121];
          v110 = v111 + *(_DWORD *)(a4 + 8);
          *(_DWORD *)(a4 + 8) = v110;
        }
        v124 = *(_DWORD *)(a4 + 12);
        v125 = v110 + 2;
        v126 = v110 & 7;
        v127 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v110 >> 3));
        v128 = 8 - v126;
        v129 = v94 - 5;
        v130 = 2;
        if ( v129 >= 3 )
        {
          if ( v125 <= v124 || (v130 = v124 - v110, v124 != v110) )
          {
            v138 = v130;
            if ( v128 < v130 )
              v138 = v128;
            v139 = byte_140035FA0[4 * v138];
            v140 = v130;
            *v127 |= (v139 & 3) << v126;
            if ( v128 < v130 )
              v140 = 8 - v126;
            v141 = 3u >> v128;
            v142 = v130 - v140;
            v143 = v127 + 1;
            if ( (unsigned int)v142 >= 8 )
            {
              v144 = (unsigned __int64)(unsigned int)v142 >> 3;
              do
              {
                *v143 = v141;
                v142 = (unsigned int)(v142 - 8);
                v141 >>= 8;
                ++v143;
                --v144;
              }
              while ( v144 );
            }
            if ( (_DWORD)v142 )
              *v143 |= (unsigned __int8)v141 & byte_140035FA0[4 * v142];
            v110 = v130 + *(_DWORD *)(a4 + 8);
            *(_DWORD *)(a4 + 8) = v110;
          }
          v145 = v129 - 3;
          if ( v145 >= 7 )
          {
            v146 = v145 / 7;
            do
            {
              v147 = *(_DWORD *)(a4 + 12);
              v148 = 3;
              v149 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v110 >> 3));
              v150 = v110 & 7;
              v151 = 8 - v150;
              if ( v110 + 3 <= v147 || (v148 = v147 - v110, v147 != v110) )
              {
                v152 = v148;
                if ( v151 < v148 )
                  v152 = v151;
                v153 = byte_140035FA0[4 * v152];
                v154 = v148;
                *v149 |= (v153 & 7) << v150;
                if ( v151 < v148 )
                  v154 = 8 - v150;
                v155 = 7u >> v151;
                v156 = v148 - v154;
                v157 = v149 + 1;
                if ( (unsigned int)v156 >= 8 )
                {
                  v158 = (unsigned __int64)(unsigned int)v156 >> 3;
                  do
                  {
                    *v157 = v155;
                    v156 = (unsigned int)(v156 - 8);
                    v155 >>= 8;
                    ++v157;
                    --v158;
                  }
                  while ( v158 );
                }
                if ( (_DWORD)v156 )
                  *v157 |= (unsigned __int8)v155 & byte_140035FA0[4 * v156];
                *(_DWORD *)(a4 + 8) += v148;
                v110 = *(_DWORD *)(a4 + 8);
              }
              v145 -= 7;
              --v146;
            }
            while ( v146 );
            v58 = v169;
            v57 = a3;
          }
          v159 = *(_DWORD *)(a4 + 8);
          v130 = 3;
          v160 = *(_DWORD *)(a4 + 12);
          v161 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v159 >> 3));
          v162 = v159 & 7;
          v163 = 8 - v162;
          if ( v159 + 3 > v160 )
          {
            v130 = v160 - v159;
            if ( v160 == v159 )
              continue;
          }
          v164 = v130;
          if ( v163 < v130 )
            v164 = v163;
          v165 = byte_140035FA0[4 * v164];
          v166 = v130;
          *v161 |= ((unsigned __int8)v145 & (unsigned __int8)v165) << v162;
          if ( v163 < v130 )
            v166 = 8 - v162;
          v134 = v145 >> v163;
          v135 = v130 - v166;
          v136 = v161 + 1;
          if ( (unsigned int)v135 >= 8 )
          {
            v167 = (unsigned __int64)(unsigned int)v135 >> 3;
            do
            {
              *v136 = v134;
              v135 = (unsigned int)(v135 - 8);
              v134 >>= 8;
              ++v136;
              --v167;
            }
            while ( v167 );
          }
          goto LABEL_154;
        }
        if ( v125 <= v124 || (v130 = v124 - v110, v124 != v110) )
        {
          v131 = v130;
          if ( v128 < v130 )
            v131 = v128;
          v132 = byte_140035FA0[4 * v131];
          v133 = v130;
          *v127 |= ((unsigned __int8)v129 & (unsigned __int8)v132) << v126;
          if ( v128 < v130 )
            v133 = 8 - v126;
          v134 = v129 >> v128;
          v135 = v130 - v133;
          v136 = v127 + 1;
          if ( (unsigned int)v135 >= 8 )
          {
            v137 = (unsigned __int64)(unsigned int)v135 >> 3;
            do
            {
              *v136 = v134;
              v135 = (unsigned int)(v135 - 8);
              v134 >>= 8;
              ++v136;
              --v137;
            }
            while ( v137 );
          }
LABEL_154:
          if ( (_DWORD)v135 )
            *v136 |= (unsigned __int8)v134 & byte_140035FA0[4 * v135];
          *(_DWORD *)(a4 + 8) += v130;
        }
      }
      else
      {
        v95 = v175[0] & 0x1F;
        v96 = v175[0] >> 5;
        do
        {
          v97 = *(_DWORD *)(a4 + 8);
          v98 = *(_DWORD *)(a4 + 12);
          v99 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v97 >> 3));
          v100 = v97 & 7;
          v101 = 8 - v100;
          v102 = v95;
          if ( v97 + v95 <= v98 || (v102 = v98 - v97, v98 != v97) )
          {
            v103 = v102;
            if ( v101 < v102 )
              v103 = v101;
            v104 = byte_140035FA0[4 * v103];
            v105 = v102;
            *v99 |= ((unsigned __int8)v96 & (unsigned __int8)v104) << v100;
            if ( v101 < v102 )
              v105 = 8 - v100;
            v106 = v99 + 1;
            v107 = v96 >> v101;
            v108 = v102 - v105;
            if ( (unsigned int)v108 >= 8 )
            {
              v109 = (unsigned __int64)(unsigned int)v108 >> 3;
              do
              {
                *v106 = v107;
                v108 = (unsigned int)(v108 - 8);
                v107 >>= 8;
                ++v106;
                --v109;
              }
              while ( v109 );
            }
            if ( (_DWORD)v108 )
              *v106 |= (unsigned __int8)v107 & byte_140035FA0[4 * v108];
            *(_DWORD *)(a4 + 8) += v102;
          }
          --v94;
        }
        while ( v94 );
        v58 = v169;
        v57 = a3;
      }
    }
  }
  return 0LL;
}
