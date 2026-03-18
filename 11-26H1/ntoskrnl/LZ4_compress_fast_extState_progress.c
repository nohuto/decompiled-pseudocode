/*
 * XREFs of LZ4_compress_fast_extState_progress @ 0x1406298E8
 * Callers:
 *     RtlCompressBufferProgress @ 0x140617A80 (RtlCompressBufferProgress.c)
 * Callees:
 *     LZ4_initStream @ 0x1404703F0 (LZ4_initStream.c)
 *     LZ4_compressBound @ 0x140474890 (LZ4_compressBound.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
  _BYTE *v8; // r13
  unsigned int *v10; // r11
  unsigned int v11; // edi
  __int64 v12; // rdx
  char *v13; // r15
  char *v14; // rbp
  _BYTE *v15; // rsi
  char *v16; // rbx
  __int64 v17; // r14
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // r9
  _DWORD *v21; // r12
  __int64 v22; // r14
  __int16 v23; // dx
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
  unsigned __int64 v36; // rbx
  _QWORD *v37; // rcx
  char *v38; // r10
  _QWORD *v39; // rdx
  _DWORD *v40; // rax
  int v41; // r11d
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
  char *v61; // r15
  int v62; // r8d
  _BYTE *v63; // rsi
  char *v64; // r12
  int v65; // r13d
  unsigned __int64 v66; // rax
  char *v67; // r14
  unsigned __int64 v68; // rbx
  int v69; // r13d
  int v70; // r11d
  unsigned int v71; // ecx
  char *v72; // r8
  unsigned int *v73; // rdx
  unsigned int v74; // r9d
  unsigned __int64 v75; // rbx
  char *v76; // rbp
  _QWORD *v77; // r14
  int v78; // eax
  __int64 v79; // rcx
  unsigned int v80; // r13d
  unsigned int v81; // edx
  size_t v82; // rbx
  _WORD *v83; // rdx
  signed __int64 v84; // r12
  unsigned __int64 v85; // rbx
  char *v86; // rcx
  char *v87; // r10
  _QWORD *v88; // rdx
  char *v89; // rax
  int v90; // r11d
  char *v91; // r9
  unsigned __int64 v92; // r8
  unsigned int v96; // ecx
  char v98; // al
  unsigned int v99; // r8d
  __int64 v100; // rax
  _BYTE *v101; // rax
  unsigned __int64 v102; // rcx
  __int64 v103; // rax
  size_t v104; // r15
  size_t v105; // rdi
  unsigned __int128 v106; // rax
  __int64 v107; // rdx
  char *v108; // rbp
  char *v109; // r15
  _BYTE *v110; // rsi
  int v111; // r8d
  char *v112; // rbx
  __int64 v113; // r14
  int v114; // ecx
  int v115; // r8d
  __int64 v116; // r9
  char *v117; // r12
  __int64 v118; // r14
  __int16 v119; // dx
  char *v120; // r13
  unsigned int v121; // r14d
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
  __int64 v147; // rdx
  __int64 v148; // rdx
  unsigned __int64 v149; // rcx
  __int64 v150; // r13
  size_t v151; // rbp
  size_t v152; // rdi
  unsigned __int128 v153; // rax
  __int64 v154; // rcx
  char *v155; // r15
  int v156; // r8d
  _BYTE *v157; // rsi
  char *v158; // r9
  int v159; // r12d
  unsigned __int64 v160; // rax
  char *v161; // r14
  unsigned __int64 v162; // rbx
  int v163; // ebp
  int v164; // r12d
  unsigned int v165; // ecx
  char *v166; // r8
  unsigned int *v167; // rdx
  unsigned int v168; // r10d
  unsigned __int64 v169; // rbx
  char *v170; // r13
  _QWORD *v171; // r14
  __int64 v172; // r12
  unsigned int v173; // ebp
  unsigned int v174; // edx
  size_t v175; // rbx
  _WORD *v176; // rdx
  signed __int64 v177; // r9
  unsigned __int64 v178; // rbp
  char *v179; // rcx
  char *v180; // r11
  _QWORD *v181; // rdx
  char *v182; // rax
  int v183; // ebx
  char *v184; // r10
  unsigned __int64 v185; // r8
  unsigned int v189; // r8d
  char v191; // al
  unsigned int v192; // r8d
  __int64 v193; // rax
  __int64 v194; // rdx
  unsigned __int64 v195; // rcx
  __int64 v196; // rax
  size_t v197; // r15
  size_t v198; // rdi
  unsigned __int128 v199; // rax
  _DWORD *inited; // [rsp+20h] [rbp-78h]
  unsigned __int64 v202; // [rsp+28h] [rbp-70h]
  char *v203; // [rsp+28h] [rbp-70h]
  char *v204; // [rsp+28h] [rbp-70h]
  char *v205; // [rsp+30h] [rbp-68h]
  char *v206; // [rsp+30h] [rbp-68h]
  char *v207; // [rsp+30h] [rbp-68h]
  char *v208; // [rsp+30h] [rbp-68h]
  char *v209; // [rsp+38h] [rbp-60h]
  char *v210; // [rsp+38h] [rbp-60h]
  char *v211; // [rsp+40h] [rbp-58h]
  char *v212; // [rsp+40h] [rbp-58h]
  __int64 v213; // [rsp+48h] [rbp-50h]
  char *v214; // [rsp+48h] [rbp-50h]
  char *v215; // [rsp+48h] [rbp-50h]
  char *v216; // [rsp+48h] [rbp-50h]
  __int64 v217; // [rsp+50h] [rbp-48h]
  char *v218; // [rsp+58h] [rbp-40h]
  __int64 v219; // [rsp+58h] [rbp-40h]
  __int64 v220; // [rsp+58h] [rbp-40h]
  int v223; // [rsp+C0h] [rbp+28h]
  int v224; // [rsp+C0h] [rbp+28h]
  int v225; // [rsp+C0h] [rbp+28h]

  v7 = a4;
  v8 = a3;
  inited = LZ4_initStream(a1);
  v11 = 0;
  if ( (int)LZ4_compressBound(v7) <= 0x10000 )
  {
    if ( (int)v7 >= 65547 )
    {
      if ( (unsigned int)v7 <= 0x7E000000 )
      {
        v60 = v10[4100];
        v61 = &a2[v7];
        v62 = (_DWORD)a2 - v60;
        v63 = v8;
        v203 = &a2[-v60];
        v64 = a2;
        v65 = 0;
        if ( a7 )
          v206 = &a2[*(int *)(a7 + 16)];
        else
          v206 = 0LL;
        v10[4102] += v7;
        v10[4100] = v60 + v7;
        v10[4101] = 2;
        v66 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)a2) >> 52;
        v67 = a2 + 1;
        v10[v66] = v60;
        v68 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v67) >> 52;
LABEL_70:
        v223 = v65;
        v69 = 1;
        v70 = 64;
        while ( 1 )
        {
          v71 = (_DWORD)v67 - v62;
          v214 = v67;
          v72 = v67;
          v73 = &inited[v68];
          v74 = *v73;
          v67 += v69;
          v69 = v70++ >> 6;
          if ( v67 > v61 - 11 )
            break;
          v75 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)v67;
          *v73 = v71;
          v76 = &v203[v74];
          v68 = v75 >> 52;
          if ( v74 + 0xFFFF >= v71 && *(_DWORD *)v76 == *(_DWORD *)v72 )
          {
            if ( v76 > a2 && *(v72 - 1) == *(v76 - 1) )
            {
              do
              {
                --v72;
                --v76;
              }
              while ( v72 > v64 && v76 > a2 && *(v72 - 1) == *(v76 - 1) );
              v214 = v72;
            }
            v77 = v63 + 1;
            v78 = (_DWORD)v72 - (_DWORD)v64;
            v79 = (unsigned int)((_DWORD)v72 - (_DWORD)v64);
            v219 = v79;
            if ( (unsigned int)((_DWORD)v72 - (_DWORD)v64) < 0xF )
            {
              *v63 = 16 * v79;
            }
            else
            {
              v80 = v78 - 15;
              *v63 = -16;
              if ( v78 - 15 >= 255 )
              {
                v81 = v80 / 0xFF;
                v82 = v80 / 0xFF;
                LOBYTE(v81) = -1;
                memset_0(v63 + 1, v81, v82);
                v79 = v219;
                v77 = (_QWORD *)((char *)v77 + v82);
                v72 = v214;
                LOBYTE(v80) = v82 + v80;
              }
              *(_BYTE *)v77 = v80;
              v77 = (_QWORD *)((char *)v77 + 1);
            }
            v83 = (_WORD *)((char *)v77 + v79);
            v84 = v64 - (char *)v77;
            do
            {
              *v77 = *(_QWORD *)((char *)v77 + v84);
              ++v77;
            }
            while ( v77 < (_QWORD *)v83 );
            v85 = (unsigned __int64)(v61 - 12);
            v65 = v223;
            v64 = v72;
            while ( 1 )
            {
              v86 = v64 + 4;
              v87 = v63;
              *v83 = (_WORD)v64 - (_WORD)v76;
              v63 = v83 + 1;
              v88 = v76 + 4;
              v89 = v64 + 4;
              v90 = (_DWORD)v64 + 4;
              v91 = v64 + 4;
              v92 = (unsigned __int64)(v64 + 4);
              if ( (unsigned __int64)(v64 + 4) >= v85 )
                goto LABEL_91;
              if ( *v88 != *(_QWORD *)v86 )
              {
                __asm { tzcnt   rcx, r8 }
                v96 = (unsigned int)_RCX >> 3;
              }
              else
              {
                v89 = v64 + 12;
                v88 = v76 + 12;
                v86 = v64 + 12;
                v91 = v64 + 12;
                v92 = (unsigned __int64)(v64 + 12);
LABEL_91:
                while ( (unsigned __int64)v89 < v85 )
                {
                  if ( *v88 != *(_QWORD *)v86 )
                  {
                    __asm { tzcnt   rax, r8 }
                    v96 = ((unsigned int)_RAX >> 3) - v90 + (_DWORD)v86;
                    goto LABEL_106;
                  }
                  v86 = v91 + 8;
                  ++v88;
                  v89 = v86;
                  v91 += 8;
                  v92 = (unsigned __int64)v86;
                }
                if ( v92 < (unsigned __int64)(v61 - 8) && *(_DWORD *)v88 == *(_DWORD *)v86 )
                {
                  v86 += 4;
                  v88 = (_QWORD *)((char *)v88 + 4);
                }
                if ( v86 < v61 - 6 && *(_WORD *)v88 == *(_WORD *)v86 )
                {
                  v86 += 2;
                  v88 = (_QWORD *)((char *)v88 + 2);
                }
                if ( v86 < v61 - 5 && *(_BYTE *)v88 == *v86 )
                  LODWORD(v86) = (_DWORD)v86 + 1;
                v96 = (_DWORD)v86 - v90;
              }
LABEL_106:
              v64 += v96 + 4;
              v98 = *v87;
              if ( v96 < 0xF )
              {
                *v87 = v96 + v98;
              }
              else
              {
                v99 = v96 - 15;
                *v87 = v98 + 15;
                *(_DWORD *)v63 = -1;
                if ( v96 - 15 >= 0x3FC )
                {
                  v100 = v99 / 0x3FC;
                  do
                  {
                    v63 += 4;
                    v99 -= 1020;
                    *(_DWORD *)v63 = -1;
                    --v100;
                  }
                  while ( v100 );
                }
                v101 = &v63[v99 / 0xFF];
                *v101 = v99 + v99 / 0xFF;
                v63 = v101 + 1;
              }
              if ( v64 >= v61 - 11 )
                goto LABEL_119;
              v62 = (int)v203;
              inited[(0xCF1BBCDCBB000000uLL * *(_QWORD *)(v64 - 2)) >> 52] = (_DWORD)v64 - (_DWORD)v203 - 2;
              v102 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v64) >> 52;
              v103 = (unsigned int)inited[v102];
              inited[v102] = (_DWORD)v64 - (_DWORD)v203;
              v76 = &v203[v103];
              if ( (int)v103 + 0xFFFF < (unsigned int)((_DWORD)v64 - (_DWORD)v203) || *(_DWORD *)v76 != *(_DWORD *)v64 )
              {
                v67 = v64 + 1;
                v68 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)(v64 + 1)) >> 52;
                if ( v206 && v67 >= v206 )
                {
                  guard_dispatch_icall_no_overrides(*(_QWORD *)(a7 + 8), v206);
                  v62 = (int)v203;
                  v206 = &v67[*(int *)(a7 + 16)];
                }
                goto LABEL_70;
              }
              v83 = v63 + 1;
              *v63 = 0;
            }
          }
          v62 = (int)v203;
        }
LABEL_119:
        v104 = v61 - v64;
        if ( v104 < 0xF )
        {
          *v63 = 16 * v104;
        }
        else
        {
          *v63 = -16;
          v105 = v104 - 15;
          ++v63;
          if ( v104 - 15 >= 0xFF )
          {
            v106 = v105 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v106) = -1;
            memset_0(v63, SDWORD2(v106), v105 / 0xFF);
            v63 += v105 / 0xFF;
            v105 %= 0xFFuLL;
          }
          *v63 = v105;
        }
        memmove(v63 + 1, v64, v104);
        return (unsigned int)(v104 + (_DWORD)v63 + 1 - (_DWORD)a3);
      }
    }
    else if ( (unsigned int)v7 <= 0x7E000000 )
    {
      if ( !(_DWORD)v7 )
      {
LABEL_5:
        *v8 = 0;
        return 1;
      }
      v12 = v10[4100];
      v13 = &a2[v7];
      v202 = (unsigned __int64)&a2[v7 - 11];
      v218 = &a2[v7];
      v211 = &a2[-v12];
      v213 = (__int64)&a2[v7 - 5];
      v14 = a2;
      v15 = v8;
      if ( a7 )
        v205 = &a2[*(int *)(a7 + 16)];
      else
        v205 = 0LL;
      v10[4102] += v7;
      v10[4100] = v12 + v7;
      v10[4101] = 3;
      if ( (int)v7 >= 13 )
      {
        v16 = a2 + 1;
        *((_WORD *)v10 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)a2) >> 19)) = v12;
        v17 = (unsigned int)(-1640531535 * *(_DWORD *)(a2 + 1)) >> 19;
LABEL_11:
        v18 = 64;
        v19 = 1;
        while ( 1 )
        {
          v20 = (unsigned int)v17;
          v21 = v16;
          v209 = v16;
          v22 = *((unsigned __int16 *)inited + v17);
          v23 = (_WORD)v16 - (_WORD)v211;
          v24 = v19;
          v19 = v18 >> 6;
          v16 += v24;
          ++v18;
          if ( (unsigned __int64)v16 > v202 )
            break;
          v25 = &v211[v22];
          v26 = -1640531535 * *(_DWORD *)v16;
          *((_WORD *)inited + v20) = v23;
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
              while ( v21 > (_DWORD *)v14 && v25 > a2 && *((_BYTE *)v21 - 1) == *(v25 - 1) );
              v209 = (char *)v21;
            }
            v27 = v15 + 1;
            v28 = (_DWORD)v21 - (_DWORD)v14;
            v29 = (unsigned int)((_DWORD)v21 - (_DWORD)v14);
            v217 = v29;
            if ( (unsigned int)((_DWORD)v21 - (_DWORD)v14) < 0xF )
            {
              *v15 = 16 * v29;
            }
            else
            {
              v30 = v28 - 15;
              *v15 = -16;
              if ( v28 - 15 >= 255 )
              {
                v31 = v30 / 0xFF;
                v32 = v30 / 0xFF;
                LOBYTE(v31) = -1;
                memset_0(v15 + 1, v31, v32);
                v29 = v217;
                v27 = (_QWORD *)((char *)v27 + v32);
                LOBYTE(v30) = v32 + v30;
              }
              *(_BYTE *)v27 = v30;
              v27 = (_QWORD *)((char *)v27 + 1);
              v21 = v209;
            }
            v33 = (_WORD *)((char *)v27 + v29);
            v34 = v14 - (char *)v27;
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
              v38 = v15;
              *v33 = (_WORD)v21 - (_WORD)v25;
              v15 = v33 + 1;
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
                *(_DWORD *)v15 = -1;
                if ( v47 - 15 >= 0x3FC )
                {
                  v51 = v50 / 0x3FC;
                  do
                  {
                    v15 += 4;
                    v50 -= 1020;
                    *(_DWORD *)v15 = -1;
                    --v51;
                  }
                  while ( v51 );
                }
                v52 = v50 / 0xFF;
                v15[v52] = v52 + v50;
                v15 += v52 + 1;
              }
              v14 = (char *)v21;
              if ( (unsigned __int64)v21 >= v202 )
                goto LABEL_57;
              v53 = (unsigned __int16)v21;
              LOWORD(v53) = (_WORD)v21 - (_WORD)v211 - 2;
              *((_WORD *)inited + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v21 - 2)) >> 19)) = v53;
              v54 = (unsigned __int64)(unsigned int)(-1640531535 * *v21) >> 19;
              v55 = *((unsigned __int16 *)inited + v54);
              *((_WORD *)inited + v54) = (_WORD)v21 - (_WORD)v211;
              v25 = &v211[v55];
              if ( *(_DWORD *)v25 != *v21 )
              {
                v16 = (char *)v21 + 1;
                v17 = (unsigned int)(-1640531535 * *(_DWORD *)((char *)v21 + 1)) >> 19;
                if ( v205 && v16 >= v205 )
                {
                  guard_dispatch_icall_no_overrides(*(_QWORD *)(a7 + 8), v53);
                  v205 = &v16[*(int *)(a7 + 16)];
                }
                goto LABEL_11;
              }
              v35 = v213;
              v33 = v15 + 1;
              *v15 = 0;
            }
          }
        }
LABEL_57:
        v13 = v218;
        LODWORD(v8) = (_DWORD)a3;
      }
      v56 = v13 - v14;
      if ( v56 < 0xF )
      {
        *v15 = 16 * v56;
      }
      else
      {
        *v15 = -16;
        v57 = v56 - 15;
        ++v15;
        if ( v56 - 15 >= 0xFF )
        {
          v58 = v57 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v58) = -1;
          memset_0(v15, SDWORD2(v58), v57 / 0xFF);
          v15 += v57 / 0xFF;
          v57 %= 0xFFuLL;
        }
        *v15 = v57;
      }
      memmove(v15 + 1, v14, v56);
      v59 = (_DWORD)v15 + 1 + v56;
      return (unsigned int)(v59 - (_DWORD)v8);
    }
    return v11;
  }
  if ( (int)v7 >= 65547 )
  {
    if ( (unsigned int)v7 <= 0x7E000000 )
    {
      v154 = v10[4100];
      v155 = &a2[v7];
      v208 = a2;
      v156 = (_DWORD)a2 - v154;
      v157 = v8;
      v158 = a2;
      v204 = &a2[-v154];
      v159 = 0;
      if ( a7 )
        v210 = &a2[*(int *)(a7 + 16)];
      else
        v210 = 0LL;
      v10[4102] += v7;
      v10[4100] = v154 + v7;
      v10[4101] = 2;
      v160 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)a2) >> 52;
      v161 = a2 + 1;
      v10[v160] = v154;
      v162 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v161) >> 52;
LABEL_195:
      v163 = 64;
      v225 = v159;
      v164 = 1;
      while ( 1 )
      {
        v165 = (_DWORD)v161 - v156;
        v216 = v161;
        v166 = v161;
        v167 = &inited[v162];
        v168 = *v167;
        v161 += v164;
        v164 = v163++ >> 6;
        if ( v161 > v155 - 11 )
        {
LABEL_246:
          v197 = v155 - v158;
          if ( &v157[(v197 + 240) / 0xFF + 1 + v197] <= a3 + 0x10000 )
          {
            if ( v197 < 0xF )
            {
              *v157 = 16 * v197;
            }
            else
            {
              *v157 = -16;
              v198 = v197 - 15;
              ++v157;
              if ( v197 - 15 >= 0xFF )
              {
                v199 = v198 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v199) = -1;
                memset_0(v157, SDWORD2(v199), v198 / 0xFF);
                v158 = v208;
                v157 += v198 / 0xFF;
                LOBYTE(v198) = v198 / 0xFF + v198;
              }
              *v157 = v198;
            }
            memmove(v157 + 1, v158, v197);
            return (unsigned int)(v197 + (_DWORD)v157 + 1 - (_DWORD)a3);
          }
          return v11;
        }
        v169 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)v161;
        *v167 = v165;
        v170 = &v204[v168];
        v162 = v169 >> 52;
        if ( v168 + 0xFFFF >= v165 && *(_DWORD *)v170 == *(_DWORD *)v166 )
          break;
        v156 = (int)v204;
      }
      if ( v170 > a2 && *(v166 - 1) == *(v170 - 1) )
      {
        do
        {
          --v166;
          --v170;
        }
        while ( v166 > v158 && v170 > a2 && *(v166 - 1) == *(v170 - 1) );
        v216 = v166;
      }
      v171 = v157 + 1;
      v172 = (unsigned int)((_DWORD)v166 - (_DWORD)v158);
      if ( &v157[(unsigned int)v172 / 0xFF + 9 + v172] <= a3 + 0x10000 )
      {
        if ( (unsigned int)v172 < 0xF )
        {
          *v157 = 16 * ((_BYTE)v166 - (_BYTE)v158);
        }
        else
        {
          v173 = v172 - 15;
          *v157 = -16;
          if ( (int)v172 - 15 >= 255 )
          {
            v174 = v173 / 0xFF;
            v175 = v173 / 0xFF;
            LOBYTE(v174) = -1;
            memset_0(v157 + 1, v174, v175);
            v158 = v208;
            v171 = (_QWORD *)((char *)v171 + v175);
            v166 = v216;
            LOBYTE(v173) = v175 + v173;
          }
          *(_BYTE *)v171 = v173;
          v171 = (_QWORD *)((char *)v171 + 1);
        }
        v176 = (_WORD *)((char *)v171 + v172);
        v177 = v158 - (char *)v171;
        do
        {
          *v171 = *(_QWORD *)((char *)v171 + v177);
          ++v171;
        }
        while ( v171 < (_QWORD *)v176 );
        v178 = (unsigned __int64)(v155 - 12);
        v159 = v225;
        v158 = v166;
        while ( 1 )
        {
          v179 = v158 + 4;
          v180 = v157;
          *v176 = (_WORD)v158 - (_WORD)v170;
          v157 = v176 + 1;
          v181 = v170 + 4;
          v182 = v158 + 4;
          v183 = (_DWORD)v158 + 4;
          v184 = v158 + 4;
          v185 = (unsigned __int64)(v158 + 4);
          if ( (unsigned __int64)(v158 + 4) >= v178 )
            goto LABEL_217;
          if ( *v181 != *(_QWORD *)v179 )
          {
            __asm { tzcnt   r8, r8 }
            v189 = (unsigned int)_R8 >> 3;
          }
          else
          {
            v182 = v158 + 12;
            v181 = v170 + 12;
            v179 = v158 + 12;
            v184 = v158 + 12;
            v185 = (unsigned __int64)(v158 + 12);
LABEL_217:
            while ( (unsigned __int64)v182 < v178 )
            {
              if ( *v181 != *(_QWORD *)v179 )
              {
                __asm { tzcnt   r8, r8 }
                v189 = (_DWORD)v179 + ((unsigned int)_R8 >> 3) - v183;
                goto LABEL_232;
              }
              v179 = v184 + 8;
              ++v181;
              v182 = v179;
              v184 += 8;
              v185 = (unsigned __int64)v179;
            }
            if ( v185 < (unsigned __int64)(v155 - 8) && *(_DWORD *)v181 == *(_DWORD *)v179 )
            {
              v179 += 4;
              v181 = (_QWORD *)((char *)v181 + 4);
            }
            if ( v179 < v155 - 6 && *(_WORD *)v181 == *(_WORD *)v179 )
            {
              v179 += 2;
              v181 = (_QWORD *)((char *)v181 + 2);
            }
            if ( v179 < v155 - 5 && *(_BYTE *)v181 == *v179 )
              LODWORD(v179) = (_DWORD)v179 + 1;
            v189 = (_DWORD)v179 - v183;
          }
LABEL_232:
          v158 += v189 + 4;
          v208 = v158;
          if ( &v157[(v189 + 240) / 0xFF + 6] > a3 + 0x10000 )
            break;
          v191 = *v180;
          if ( v189 < 0xF )
          {
            *v180 = v189 + v191;
          }
          else
          {
            v192 = v189 - 15;
            *v180 = v191 + 15;
            *(_DWORD *)v157 = -1;
            if ( v192 >= 0x3FC )
            {
              v193 = v192 / 0x3FC;
              do
              {
                v157 += 4;
                v192 -= 1020;
                *(_DWORD *)v157 = -1;
                --v193;
              }
              while ( v193 );
            }
            v194 = v192 / 0xFF;
            v157[v194] = v194 + v192;
            v157 += v194 + 1;
          }
          if ( v158 >= v155 - 11 )
            goto LABEL_246;
          v156 = (int)v204;
          inited[(0xCF1BBCDCBB000000uLL * *(_QWORD *)(v158 - 2)) >> 52] = (_DWORD)v158 - (_DWORD)v204 - 2;
          v195 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v158) >> 52;
          v196 = (unsigned int)inited[v195];
          inited[v195] = (_DWORD)v158 - (_DWORD)v204;
          v170 = &v204[v196];
          if ( (int)v196 + 0xFFFF < (unsigned int)((_DWORD)v158 - (_DWORD)v204) || *(_DWORD *)v170 != *(_DWORD *)v158 )
          {
            v161 = v158 + 1;
            v162 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)(v158 + 1)) >> 52;
            if ( v210 && v161 >= v210 )
            {
              guard_dispatch_icall_no_overrides(*(_QWORD *)(a7 + 8), v210);
              v158 = v208;
              v156 = (int)v204;
              v210 = &v161[*(int *)(a7 + 16)];
            }
            goto LABEL_195;
          }
          v176 = v157 + 1;
          *v157 = 0;
        }
      }
    }
    return v11;
  }
  if ( (unsigned int)v7 > 0x7E000000 )
    return v11;
  if ( !(_DWORD)v7 )
    goto LABEL_5;
  v107 = v10[4100];
  v108 = &a2[v7];
  v109 = a2;
  v212 = &a2[-v107];
  v110 = v8;
  v111 = 0;
  if ( a7 )
    v207 = &a2[*(int *)(a7 + 16)];
  else
    v207 = 0LL;
  v10[4102] += v7;
  v10[4100] = v107 + v7;
  v10[4101] = 3;
  if ( (int)v7 < 13 )
  {
LABEL_183:
    v151 = v108 - v109;
    if ( &v110[v151 + 1 + (v151 + 240) / 0xFF] > v8 + 0x10000 )
      return v11;
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
        memset_0(v110, SDWORD2(v153), v152 / 0xFF);
        v110 += v152 / 0xFF;
        LOBYTE(v152) = v152 / 0xFF + v152;
      }
      *v110 = v152;
    }
    memmove(v110 + 1, v109, v151);
    v59 = (_DWORD)v110 + 1 + v151;
    return (unsigned int)(v59 - (_DWORD)v8);
  }
  v112 = a2 + 1;
  *((_WORD *)v10 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)a2) >> 19)) = v107;
  v113 = (unsigned int)(-1640531535 * *(_DWORD *)(a2 + 1)) >> 19;
LABEL_133:
  v114 = 64;
  v224 = v111;
  v115 = 1;
  do
  {
    v116 = (unsigned int)v113;
    v117 = v112;
    v215 = v112;
    v118 = *((unsigned __int16 *)inited + v113);
    v119 = (_WORD)v112 - (_WORD)v212;
    v112 += v115;
    v115 = v114++ >> 6;
    if ( v112 > v108 - 11 )
    {
      v8 = a3;
      goto LABEL_183;
    }
    v120 = &v212[v118];
    v121 = -1640531535 * *(_DWORD *)v112;
    *((_WORD *)inited + v116) = v119;
    v113 = v121 >> 19;
  }
  while ( *(_DWORD *)v120 != *(_DWORD *)v117 );
  if ( v120 > a2 && *(v117 - 1) == *(v120 - 1) )
  {
    do
    {
      --v117;
      --v120;
    }
    while ( v117 > v109 && v120 > a2 && *(v117 - 1) == *(v120 - 1) );
    v215 = v117;
  }
  v122 = v110 + 1;
  v123 = (unsigned int)((_DWORD)v117 - (_DWORD)v109);
  v220 = v123;
  if ( &v110[v123 + 9 + (unsigned int)v123 / 0xFF] <= a3 + 0x10000 )
  {
    if ( (unsigned int)v123 < 0xF )
    {
      *v110 = 16 * ((_BYTE)v117 - (_BYTE)v109);
    }
    else
    {
      v124 = v123 - 15;
      *v110 = -16;
      if ( (int)v123 - 15 >= 255 )
      {
        v125 = v124 / 0xFF;
        v126 = v124 / 0xFF;
        LOBYTE(v125) = -1;
        memset_0(v110 + 1, v125, v126);
        v123 = v220;
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
    v129 = (unsigned __int64)(v108 - 5);
    v130 = (unsigned __int64)(v108 - 12);
    v131 = v224;
    while ( 1 )
    {
      v132 = v117 + 4;
      v133 = v110;
      *v127 = (_WORD)v117 - (_WORD)v120;
      v110 = v127 + 1;
      v134 = v120 + 4;
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
          goto LABEL_169;
        }
        v135 = v117 + 12;
        v134 = v120 + 12;
        v132 = v117 + 12;
        v137 = v117 + 12;
        v138 = (unsigned __int64)(v117 + 12);
      }
      v224 = v131;
      while ( (unsigned __int64)v135 < v130 )
      {
        if ( *v134 != *v132 )
        {
          __asm { tzcnt   r8, r8 }
          v142 = (_DWORD)v132 + ((unsigned int)_R8 >> 3) - v136;
          goto LABEL_169;
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
LABEL_169:
      v8 = a3;
      v117 += v142 + 4;
      if ( &v110[(v142 + 240) / 0xFF + 6] > a3 + 0x10000 )
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
        *(_DWORD *)v110 = -1;
        if ( v145 >= 0x3FC )
        {
          v146 = v145 / 0x3FC;
          do
          {
            v110 += 4;
            v145 -= 1020;
            *(_DWORD *)v110 = -1;
            --v146;
          }
          while ( v146 );
        }
        v147 = v145 / 0xFF;
        v110[v147] = v147 + v145;
        v110 += v147 + 1;
      }
      v109 = v117;
      if ( v117 >= v108 - 11 )
        goto LABEL_183;
      v148 = (unsigned __int16)v117;
      LOWORD(v148) = (_WORD)v117 - (_WORD)v212 - 2;
      *((_WORD *)inited + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v117 - 2)) >> 19)) = v148;
      v149 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v117) >> 19;
      v150 = *((unsigned __int16 *)inited + v149);
      *((_WORD *)inited + v149) = (_WORD)v117 - (_WORD)v212;
      v120 = &v212[v150];
      if ( *(_DWORD *)v120 != *(_DWORD *)v117 )
      {
        v112 = v117 + 1;
        v111 = v224;
        v113 = (unsigned int)(-1640531535 * *(_DWORD *)(v117 + 1)) >> 19;
        if ( v207 && v112 >= v207 )
        {
          guard_dispatch_icall_no_overrides(*(_QWORD *)(a7 + 8), v148);
          v111 = v224;
          v207 = &v112[*(int *)(a7 + 16)];
        }
        goto LABEL_133;
      }
      v127 = v110 + 1;
      *v110 = 0;
      v224 = v131;
      v129 = (unsigned __int64)(v108 - 5);
    }
  }
  return v11;
}
