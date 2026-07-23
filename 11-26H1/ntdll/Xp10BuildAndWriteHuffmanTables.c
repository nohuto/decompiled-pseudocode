/*
 * XREFs of Xp10BuildAndWriteHuffmanTables @ 0x180122D8C
 * Callers:
 *     Xp10BuildAndWriteHuffmanEncodings @ 0x1801515CC (Xp10BuildAndWriteHuffmanEncodings.c)
 * Callees:
 *     Xp10BuildHuffmanEncodings @ 0x180115150 (Xp10BuildHuffmanEncodings.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall Xp10BuildAndWriteHuffmanTables(unsigned int *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // r9d
  unsigned __int16 v9; // cx
  int v10; // edx
  int v11; // r8d
  int v12; // eax
  unsigned __int16 v13; // dx
  unsigned int v14; // r8d
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
  int v61; // edx
  int v62; // eax
  unsigned int v63; // ecx
  _BYTE *v64; // r8
  int v65; // edi
  unsigned int v66; // r11d
  unsigned int v67; // r9d
  unsigned int v68; // r10d
  __int64 v69; // rax
  char v70; // dl
  unsigned int v71; // eax
  unsigned int v72; // r10d
  __int64 v73; // rdx
  _BYTE *v74; // r8
  unsigned __int64 v75; // rax
  unsigned __int16 v76; // r9
  int v77; // esi
  unsigned int v78; // r14d
  unsigned int v79; // ecx
  int v80; // r11d
  _BYTE *v81; // r8
  unsigned int v82; // edi
  unsigned int v83; // r10d
  __int64 v84; // rax
  char v85; // dl
  int v86; // eax
  _BYTE *v87; // r8
  unsigned int v88; // r11d
  __int64 v89; // rdx
  unsigned __int64 v90; // rax
  unsigned int v91; // r8d
  int v92; // esi
  unsigned int v93; // r14d
  unsigned int v94; // ecx
  int v95; // r11d
  _BYTE *v96; // r9
  unsigned int v97; // edi
  unsigned int v98; // r10d
  __int64 v99; // rax
  char v100; // dl
  int v101; // eax
  _BYTE *v102; // r9
  unsigned int v103; // r11d
  __int64 v104; // rdx
  unsigned __int64 v105; // rax
  unsigned int v106; // ecx
  unsigned int v107; // r10d
  _BYTE *v108; // r9
  int v109; // esi
  unsigned int v110; // r11d
  unsigned int v111; // edi
  __int64 v112; // rax
  char v113; // dl
  unsigned int v114; // eax
  unsigned int v115; // r11d
  __int64 v116; // rdx
  _BYTE *v117; // r9
  unsigned __int64 v118; // rax
  unsigned int v119; // eax
  unsigned int v120; // edx
  int v121; // edi
  _BYTE *v122; // r9
  unsigned int v123; // r11d
  unsigned int v124; // r8d
  unsigned int v125; // r10d
  __int64 v126; // rax
  char v127; // dl
  unsigned int v128; // eax
  unsigned int v129; // r8d
  __int64 v130; // rdx
  _BYTE *v131; // r9
  unsigned __int64 v132; // rax
  __int64 v133; // rax
  char v134; // dl
  unsigned int v135; // eax
  unsigned int v136; // edi
  __int64 v137; // rdx
  _BYTE *v138; // r9
  unsigned __int64 v139; // rax
  unsigned int v140; // r8d
  __int64 v141; // rsi
  unsigned int v142; // r10d
  _BYTE *v143; // r9
  int v144; // r11d
  unsigned int v145; // edi
  __int64 v146; // rax
  char v147; // dl
  unsigned int v148; // eax
  unsigned int v149; // r11d
  __int64 v150; // rdx
  _BYTE *v151; // r9
  unsigned __int64 v152; // rax
  unsigned int v153; // ecx
  int v154; // edi
  _BYTE *v155; // r9
  unsigned int v156; // r11d
  __int64 v157; // rax
  char v158; // dl
  unsigned int v159; // eax
  unsigned __int64 v160; // rax
  int v162; // [rsp+30h] [rbp-D0h]
  _DWORD v165[28]; // [rsp+40h] [rbp-C0h] BYREF
  int v166; // [rsp+B0h] [rbp-50h]
  int v167; // [rsp+B4h] [rbp-4Ch]
  _DWORD v168[28]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v169; // [rsp+140h] [rbp+40h]
  unsigned int v170; // [rsp+144h] [rbp+44h]

  memset_thunk_772440563353939046(v165, 0, 0x84uLL);
  memset_thunk_772440563353939046(v168, 0, 0x84uLL);
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
      ++v165[v11];
      ++v9;
    }
    else
    {
      v13 = v9;
      while ( v9 < a3 && (*(_BYTE *)(a2 + 4LL * v9) & 0x1F) == 0 )
        ++v9;
      while ( (unsigned __int16)(v13 ^ v9) >= 0x10u )
      {
        ++v166;
        v13 = (v13 & 0xFFF0) + 16;
      }
      v14 = v9 - v13;
      if ( v9 != v13 )
      {
        if ( v14 >= 5 )
          ++v167;
        else
          v165[0] += v14;
      }
    }
  }
  v15 = 33LL;
  Xp10BuildHuffmanEncodings(a1, (__int64)v165, 0x21u, 8u, (__int64)v168);
  v16 = 4;
  v17 = v168;
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
        v33 = byte_180181FE0[4 * v32];
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
          *v37 |= (unsigned __int8)v35 & byte_180181FE0[4 * v36];
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
          v54 = byte_180181FE0[4 * v53];
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
          goto LABEL_58;
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
          v47 = byte_180181FE0[4 * v46];
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
LABEL_58:
          if ( (_DWORD)v50 )
            *v51 |= (unsigned __int8)v49 & byte_180181FE0[4 * v50];
          *(_DWORD *)(a4 + 8) += v44;
        }
      }
      v16 = v24;
      goto LABEL_72;
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
        *v28 |= (unsigned __int8)v29 & byte_180181FE0[4 * v27];
      *(_DWORD *)(a4 + 8) += v25;
    }
LABEL_72:
    ++v17;
    --v15;
  }
  while ( v15 );
  v57 = a3;
  v58 = 8;
  v162 = 8;
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
        v162 = v58;
      }
      v63 = *(_DWORD *)(a4 + 8);
      v64 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v63 >> 3));
      v65 = v63 & 7;
      v66 = 8 - v65;
      v67 = v168[v61] & 0x1F;
      v68 = v168[v61] >> 5;
      if ( v63 + v67 <= *(_DWORD *)(a4 + 12) || (v67 = *(_DWORD *)(a4 + 12) - v63) != 0 )
      {
        v69 = v67;
        if ( v66 < v67 )
          v69 = v66;
        v70 = byte_180181FE0[4 * v69];
        v71 = v67;
        *v64 |= ((unsigned __int8)v68 & (unsigned __int8)v70) << v65;
        if ( v66 < v67 )
          v71 = 8 - v65;
        v72 = v68 >> v66;
        v73 = v67 - v71;
        v74 = v64 + 1;
        if ( (unsigned int)v73 >= 8 )
        {
          v75 = (unsigned __int64)(unsigned int)v73 >> 3;
          do
          {
            *v74 = v72;
            v73 = (unsigned int)(v73 - 8);
            v72 >>= 8;
            ++v74;
            --v75;
          }
          while ( v75 );
        }
        if ( (_DWORD)v73 )
          *v74 |= (unsigned __int8)v72 & byte_180181FE0[4 * v73];
        *(_DWORD *)(a4 + 8) += v67;
      }
      ++v59;
    }
    else
    {
      v76 = v59;
      while ( v59 < v57 && (*(_BYTE *)(a2 + 4LL * v59) & 0x1F) == 0 )
        ++v59;
      if ( (unsigned __int16)(v76 ^ v59) >= 0x10u )
      {
        v77 = v169 & 0x1F;
        v78 = v169 >> 5;
        do
        {
          v79 = *(_DWORD *)(a4 + 8);
          v80 = v79 & 7;
          v81 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v79 >> 3));
          v82 = 8 - v80;
          v83 = v77;
          if ( v79 + v77 <= *(_DWORD *)(a4 + 12) || (v83 = *(_DWORD *)(a4 + 12) - v79) != 0 )
          {
            v84 = v83;
            if ( v82 < v83 )
              v84 = v82;
            v85 = byte_180181FE0[4 * v84];
            v86 = v83;
            *v81 |= ((unsigned __int8)v78 & (unsigned __int8)v85) << v80;
            if ( v82 < v83 )
              v86 = 8 - v80;
            v87 = v81 + 1;
            v88 = v78 >> v82;
            v89 = v83 - v86;
            if ( (unsigned int)v89 >= 8 )
            {
              v90 = (unsigned __int64)(unsigned int)v89 >> 3;
              do
              {
                *v87 = v88;
                v89 = (unsigned int)(v89 - 8);
                v88 >>= 8;
                ++v87;
                --v90;
              }
              while ( v90 );
            }
            if ( (_DWORD)v89 )
              *v87 |= (unsigned __int8)v88 & byte_180181FE0[4 * v89];
            *(_DWORD *)(a4 + 8) += v83;
          }
          v76 = (v76 & 0xFFF0) + 16;
        }
        while ( (unsigned __int16)(v76 ^ v59) >= 0x10u );
        v58 = v162;
        v57 = a3;
      }
      v91 = v59 - v76;
      if ( v59 == v76 )
        continue;
      if ( v91 >= 5 )
      {
        v106 = *(_DWORD *)(a4 + 8);
        v107 = v170 & 0x1F;
        v108 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v106 >> 3));
        v109 = v106 & 7;
        v110 = v170 >> 5;
        v111 = 8 - v109;
        if ( v106 + v107 <= *(_DWORD *)(a4 + 12) || (v107 = *(_DWORD *)(a4 + 12) - v106) != 0 )
        {
          v112 = v107;
          if ( v111 < v107 )
            v112 = v111;
          v113 = byte_180181FE0[4 * v112];
          v114 = v107;
          *v108 |= ((unsigned __int8)v110 & (unsigned __int8)v113) << v109;
          if ( v111 < v107 )
            v114 = 8 - v109;
          v115 = v110 >> v111;
          v116 = v107 - v114;
          v117 = v108 + 1;
          if ( (unsigned int)v116 >= 8 )
          {
            v118 = (unsigned __int64)(unsigned int)v116 >> 3;
            do
            {
              *v117 = v115;
              v116 = (unsigned int)(v116 - 8);
              v115 >>= 8;
              ++v117;
              --v118;
            }
            while ( v118 );
          }
          if ( (_DWORD)v116 )
            *v117 |= (unsigned __int8)v115 & byte_180181FE0[4 * v116];
          v106 = v107 + *(_DWORD *)(a4 + 8);
          *(_DWORD *)(a4 + 8) = v106;
        }
        v119 = *(_DWORD *)(a4 + 12);
        v120 = v106 + 2;
        v121 = v106 & 7;
        v122 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v106 >> 3));
        v123 = 8 - v121;
        v124 = v91 - 5;
        v125 = 2;
        if ( v124 >= 3 )
        {
          if ( v120 <= v119 || (v125 = v119 - v106, v119 != v106) )
          {
            v133 = v125;
            if ( v123 < v125 )
              v133 = v123;
            v134 = byte_180181FE0[4 * v133];
            v135 = v125;
            *v122 |= (v134 & 3) << v121;
            if ( v123 < v125 )
              v135 = 8 - v121;
            v136 = 3u >> v123;
            v137 = v125 - v135;
            v138 = v122 + 1;
            if ( (unsigned int)v137 >= 8 )
            {
              v139 = (unsigned __int64)(unsigned int)v137 >> 3;
              do
              {
                *v138 = v136;
                v137 = (unsigned int)(v137 - 8);
                v136 >>= 8;
                ++v138;
                --v139;
              }
              while ( v139 );
            }
            if ( (_DWORD)v137 )
              *v138 |= (unsigned __int8)v136 & byte_180181FE0[4 * v137];
            v106 = v125 + *(_DWORD *)(a4 + 8);
            *(_DWORD *)(a4 + 8) = v106;
          }
          v140 = v124 - 3;
          if ( v140 >= 7 )
          {
            v141 = v140 / 7;
            do
            {
              v142 = 3;
              v143 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v106 >> 3));
              v144 = v106 & 7;
              v145 = 8 - v144;
              if ( v106 + 3 <= *(_DWORD *)(a4 + 12) || (v142 = *(_DWORD *)(a4 + 12) - v106) != 0 )
              {
                v146 = v142;
                if ( v145 < v142 )
                  v146 = v145;
                v147 = byte_180181FE0[4 * v146];
                v148 = v142;
                *v143 |= (v147 & 7) << v144;
                if ( v145 < v142 )
                  v148 = 8 - v144;
                v149 = 7u >> v145;
                v150 = v142 - v148;
                v151 = v143 + 1;
                if ( (unsigned int)v150 >= 8 )
                {
                  v152 = (unsigned __int64)(unsigned int)v150 >> 3;
                  do
                  {
                    *v151 = v149;
                    v150 = (unsigned int)(v150 - 8);
                    v149 >>= 8;
                    ++v151;
                    --v152;
                  }
                  while ( v152 );
                }
                if ( (_DWORD)v150 )
                  *v151 |= (unsigned __int8)v149 & byte_180181FE0[4 * v150];
                *(_DWORD *)(a4 + 8) += v142;
                v106 = *(_DWORD *)(a4 + 8);
              }
              v140 -= 7;
              --v141;
            }
            while ( v141 );
            v58 = v162;
            v57 = a3;
          }
          v153 = *(_DWORD *)(a4 + 8);
          v125 = 3;
          v154 = v153 & 7;
          v155 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v153 >> 3));
          v156 = 8 - v154;
          if ( v153 + 3 > *(_DWORD *)(a4 + 12) )
          {
            v125 = *(_DWORD *)(a4 + 12) - v153;
            if ( !v125 )
              continue;
          }
          v157 = v125;
          if ( v156 < v125 )
            v157 = v156;
          v158 = byte_180181FE0[4 * v157];
          v159 = v125;
          *v155 |= ((unsigned __int8)v140 & (unsigned __int8)v158) << v154;
          if ( v156 < v125 )
            v159 = 8 - v154;
          v129 = v140 >> v156;
          v130 = v125 - v159;
          v131 = v155 + 1;
          if ( (unsigned int)v130 >= 8 )
          {
            v160 = (unsigned __int64)(unsigned int)v130 >> 3;
            do
            {
              *v131 = v129;
              v130 = (unsigned int)(v130 - 8);
              v129 >>= 8;
              ++v131;
              --v160;
            }
            while ( v160 );
          }
          goto LABEL_155;
        }
        if ( v120 <= v119 || (v125 = v119 - v106, v119 != v106) )
        {
          v126 = v125;
          if ( v123 < v125 )
            v126 = v123;
          v127 = byte_180181FE0[4 * v126];
          v128 = v125;
          *v122 |= ((unsigned __int8)v124 & (unsigned __int8)v127) << v121;
          if ( v123 < v125 )
            v128 = 8 - v121;
          v129 = v124 >> v123;
          v130 = v125 - v128;
          v131 = v122 + 1;
          if ( (unsigned int)v130 >= 8 )
          {
            v132 = (unsigned __int64)(unsigned int)v130 >> 3;
            do
            {
              *v131 = v129;
              v130 = (unsigned int)(v130 - 8);
              v129 >>= 8;
              ++v131;
              --v132;
            }
            while ( v132 );
          }
LABEL_155:
          if ( (_DWORD)v130 )
            *v131 |= (unsigned __int8)v129 & byte_180181FE0[4 * v130];
          *(_DWORD *)(a4 + 8) += v125;
        }
      }
      else
      {
        v92 = v168[0] & 0x1F;
        v93 = v168[0] >> 5;
        do
        {
          v94 = *(_DWORD *)(a4 + 8);
          v95 = v94 & 7;
          v96 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v94 >> 3));
          v97 = 8 - v95;
          v98 = v92;
          if ( v94 + v92 <= *(_DWORD *)(a4 + 12) || (v98 = *(_DWORD *)(a4 + 12) - v94) != 0 )
          {
            v99 = v98;
            if ( v97 < v98 )
              v99 = v97;
            v100 = byte_180181FE0[4 * v99];
            v101 = v98;
            *v96 |= ((unsigned __int8)v93 & (unsigned __int8)v100) << v95;
            if ( v97 < v98 )
              v101 = 8 - v95;
            v102 = v96 + 1;
            v103 = v93 >> v97;
            v104 = v98 - v101;
            if ( (unsigned int)v104 >= 8 )
            {
              v105 = (unsigned __int64)(unsigned int)v104 >> 3;
              do
              {
                *v102 = v103;
                v104 = (unsigned int)(v104 - 8);
                v103 >>= 8;
                ++v102;
                --v105;
              }
              while ( v105 );
            }
            if ( (_DWORD)v104 )
              *v102 |= (unsigned __int8)v103 & byte_180181FE0[4 * v104];
            *(_DWORD *)(a4 + 8) += v98;
          }
          --v91;
        }
        while ( v91 );
        v58 = v162;
        v57 = a3;
      }
    }
  }
  return 0LL;
}
