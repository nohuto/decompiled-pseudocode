/*
 * XREFs of ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x14010D514
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14010D3A8 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x14010E674 (-LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z.c)
 *     ValidateKbdNLSTable @ 0x14015EBF8 (ValidateKbdNLSTable.c)
 *     strcmp_0 @ 0x140242E6A (strcmp_0.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

struct tagKbdLayer *__fastcall ReadLayoutFile(struct tagKBDFILE *a1, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  int v7; // r13d
  struct tagKBDFILE *v9; // r15
  HANDLE v10; // rbp
  HANDLE CurrentProcessId; // rax
  HANDLE v12; // r14
  unsigned int v13; // edx
  unsigned int v14; // r8d
  PVOID v15; // rdx
  __int64 v16; // rax
  char *v17; // rcx
  char *v18; // r15
  __int16 v19; // ax
  __int64 v20; // r13
  int v21; // ebp
  unsigned __int64 v22; // r14
  unsigned __int64 i; // rbx
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned int v28; // eax
  __int64 v29; // rbx
  unsigned int v30; // r12d
  char *v31; // rax
  char *v32; // rax
  char *v33; // rbp
  __int64 v34; // r15
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // rax
  HANDLE v37; // rbx
  HANDLE v38; // r14
  char *v39; // r9
  unsigned __int64 *v40; // rcx
  char *v41; // rax
  unsigned __int64 j; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  _WORD **k; // rdx
  _BYTE *v50; // rax
  _WORD *v51; // rcx
  __int64 v52; // rcx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rax
  _WORD **m; // rdx
  _BYTE *v57; // rax
  _WORD *v58; // rcx
  unsigned __int64 *v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rax
  _WORD *n; // rcx
  char *v71; // rax
  unsigned __int64 *v72; // rcx
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rax
  char *v75; // rax
  char *v76; // rcx
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  unsigned __int64 v79; // rax
  char **v80; // rdx
  char **v81; // r8
  char *v82; // rcx
  _BYTE *v83; // r9
  __int64 v84; // rax
  char *v85; // rdx
  char *v86; // rax
  char *v87; // rcx
  char *v88; // rcx
  unsigned __int64 v89; // rax
  bool ii; // zf
  char *v91; // rax
  unsigned __int64 v92; // rax
  unsigned int v93; // eax
  __int64 v94; // rdx
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rdx
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // r8
  bool v99; // cc
  unsigned __int64 v100; // rcx
  __int64 v101; // rcx
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rdx
  __int64 v106; // rax
  unsigned __int64 v107; // rdx
  unsigned __int64 v108; // r8
  char *v109; // r10
  char *v110; // rax
  __int64 v111; // rax
  unsigned __int64 v112; // r10
  _BYTE **v113; // rdx
  __int64 v114; // rax
  unsigned __int64 v115; // r8
  char *v116; // rax
  char *v117; // rcx
  _DWORD *v118; // rdx
  __int64 v119; // rax
  unsigned __int64 v120; // r8
  unsigned __int64 v121; // rdx
  unsigned __int64 v122; // r8
  char *v123; // rax
  _WORD *v124; // r8
  __int64 v125; // rax
  unsigned __int64 v126; // r9
  __int64 v127; // rax
  unsigned __int64 v128; // rdx
  unsigned __int64 v129; // rdx
  unsigned __int64 v130; // r8
  char *v131; // rax
  _WORD *v132; // r8
  __int64 v133; // rax
  unsigned __int64 v134; // r9
  __int64 v135; // rax
  unsigned __int64 v136; // rdx
  char **v137; // rdx
  _WORD **v138; // r9
  char *v139; // rax
  _WORD **v140; // rdx
  __int64 v141; // rax
  unsigned __int64 v142; // r8
  __int64 v143; // rax
  __int64 v144; // rdx
  unsigned __int64 v145; // r8
  unsigned __int64 v146; // r9
  unsigned __int64 v147; // rax
  unsigned __int64 v148; // rdx
  _WORD *v149; // r8
  __int64 v150; // rax
  unsigned __int64 v151; // r10
  __int64 v152; // rax
  unsigned __int64 v153; // r8
  unsigned __int64 v154; // rax
  unsigned __int64 v155; // rdx
  __int64 v156; // rax
  unsigned __int64 v157; // r8
  char *v158; // rdx
  int v159; // r8d
  __int16 *v160; // rcx
  unsigned __int64 v161; // r9
  __int16 v162; // ax
  __int64 v163; // r9
  unsigned __int64 v164; // r10
  unsigned __int64 v165; // r8
  _BYTE *v166; // rdx
  __int64 v167; // rax
  unsigned __int64 v168; // r9
  __int64 v169; // rcx
  __int64 v170; // rdx
  unsigned int v171[2]; // [rsp+38h] [rbp-60h] BYREF
  PVOID Buffer; // [rsp+40h] [rbp-58h] BYREF
  HANDLE v173; // [rsp+48h] [rbp-50h]
  HANDLE v174; // [rsp+50h] [rbp-48h]

  v171[0] = 0;
  v5 = 0LL;
  Buffer = 0LL;
  v6 = 0LL;
  v7 = 0;
  v9 = a1;
  v10 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63544);
  v173 = v10;
  CurrentProcessId = PsGetCurrentProcessId();
  *((_QWORD *)v9 + 6) = 0LL;
  v12 = CurrentProcessId;
  v174 = CurrentProcessId;
  if ( (int)LoadFileContent(a2, v13, v14, &Buffer, v171) >= 0 )
  {
    v15 = Buffer;
    v16 = *((unsigned int *)Buffer + 15);
    v17 = (char *)Buffer + v16;
    if ( (char *)Buffer + v16 >= Buffer && (v12 == v10 || v17 + 263 >= v17) )
    {
      v18 = (char *)Buffer + v171[0];
      if ( v17 + 264 < v18 )
      {
        v19 = *((_WORD *)v17 + 2);
        if ( v19 == 512 || v19 == -31132 || v19 == -21916 )
          v20 = *((_QWORD *)v17 + 6);
        else
          v20 = *((unsigned int *)v17 + 13);
        v21 = *((unsigned __int16 *)v17 + 3);
        v22 = (unsigned __int64)&v17[*((unsigned __int16 *)v17 + 10) + 24];
        for ( i = v22 + 40; ; i += 40LL )
        {
          *(_QWORD *)v171 = v22;
          if ( !v21 || v22 < (unsigned __int64)v15 || v174 != v173 && i - 1 < v22 || i >= (unsigned __int64)v18 )
            goto LABEL_9;
          if ( !strcmp_0((const char *)v22, ".data") )
            break;
          v15 = Buffer;
          v22 += 40LL;
          --v21;
        }
        v28 = *(_DWORD *)(v22 + 12);
        if ( a3 < v28
          || (v29 = *(unsigned int *)(v22 + 8), v30 = a3 - v28, v30 >= (unsigned int)v29)
          || (unsigned int)v29 >= 0x40000
          || (v31 = (char *)Buffer + *(unsigned int *)(v22 + 20), v31 < Buffer)
          || &v31[v29] < v31
          || &v31[v29] >= v18 )
        {
LABEL_9:
          v7 = 0;
          goto LABEL_13;
        }
        v32 = (char *)Win32AllocPoolZInitImpl(256LL, (unsigned int)v29, 0x746B7355u);
        v33 = v32;
        if ( v32 )
        {
          v34 = *(_QWORD *)v171;
          *((_QWORD *)a1 + 3) = v32;
          memmove(v32, (char *)Buffer + *(unsigned int *)(v34 + 20), (unsigned int)v29);
          *((_DWORD *)a1 + 10) = v29;
          v35 = (unsigned __int64)&v33[v29];
          v36 = *(unsigned int *)(v34 + 12);
          v5 = (unsigned __int64)&v33[v30];
          if ( (unsigned __int64)v33 >= v36 )
          {
            v37 = v173;
            v38 = v174;
            v39 = &v33[-v36 - v20];
            if ( v174 == v173 || v5 >= (unsigned __int64)v33 && v5 <= v35 - 104 )
            {
              v40 = *(unsigned __int64 **)v5;
              if ( !*(_QWORD *)v5
                || (v59 = (unsigned __int64 *)&v39[(_QWORD)v40],
                    *(_QWORD *)v5 = &v39[(_QWORD)v40],
                    v40 = v59,
                    v59 >= (unsigned __int64 *)v33)
                && (v60 = (unsigned __int64)(v59 + 2), v60 >= (unsigned __int64)v40)
                && v60 <= v35 )
              {
                if ( v38 == v37 || v40 )
                {
                  if ( !*v40
                    || (*v40 += (unsigned __int64)v39,
                        v40 = *(unsigned __int64 **)v5,
                        v61 = **(_QWORD **)v5,
                        v61 >= (unsigned __int64)v33)
                    && v61 + 2 >= v61
                    && v61 + 2 <= v35 )
                  {
                    if ( v38 == v37 || v40 >= (unsigned __int64 *)v33 && (unsigned __int64)v40 <= v35 - 16 )
                    {
                      v41 = (char *)*v40;
                      for ( j = *v40 + 2; v41 >= v33 && j >= (unsigned __int64)v41 && j <= v35; j += 2LL )
                      {
                        if ( !*v41 )
                        {
                          v43 = *(_QWORD *)(v5 + 8);
                          if ( v43 )
                          {
                            v71 = &v39[v43];
                            *(_QWORD *)(v5 + 8) = &v39[v43];
                            v72 = (unsigned __int64 *)v71;
                            if ( v71 < v33 )
                              break;
                            v73 = (unsigned __int64)(v71 + 16);
                            if ( v73 < (unsigned __int64)v72 || v73 > v35 )
                              break;
                            if ( v72 )
                            {
                              while ( v72 >= (unsigned __int64 *)v33
                                   && v72 + 2 >= v72
                                   && (unsigned __int64)(v72 + 2) <= v35 )
                              {
                                if ( !*v72 )
                                  goto LABEL_46;
                                v74 = (unsigned __int64)&v39[*v72];
                                *v72 = v74;
                                if ( v74 < (unsigned __int64)v33 || v74 + 4 < v74 || v74 + 4 > v35 )
                                  break;
                                v72 += 2;
                              }
                              break;
                            }
                          }
LABEL_46:
                          v44 = *(_QWORD *)(v5 + 16);
                          if ( v44 )
                          {
                            v75 = &v39[v44];
                            *(_QWORD *)(v5 + 16) = &v39[v44];
                            v76 = v75;
                            if ( v75 < v33 )
                              break;
                            v77 = (unsigned __int64)(v75 + 8);
                            if ( v77 < (unsigned __int64)v76 || v77 > v35 )
                              break;
                            while ( v76 )
                            {
                              if ( v76 < v33 || v76 + 8 < v76 || (unsigned __int64)(v76 + 8) > v35 )
                                goto LABEL_12;
                              if ( !*(_DWORD *)v76 )
                                break;
                              v76 += 8;
                            }
                          }
                          if ( *(_WORD *)(v5 + 82) )
                          {
                            v78 = *(_QWORD *)(v5 + 88);
                            if ( v78 )
                            {
                              v79 = (unsigned __int64)&v39[v78];
                              *(_QWORD *)(v5 + 88) = v79;
                              if ( v79 < (unsigned __int64)v33 || v79 + 6 < v79 || v79 + 6 > v35 )
                                break;
                            }
                          }
                          v45 = *(_QWORD *)(v5 + 24);
                          if ( v45 )
                          {
                            v46 = (unsigned __int64)&v39[v45];
                            *(_QWORD *)(v5 + 24) = &v39[v45];
                            v47 = v46;
                            if ( v46 < (unsigned __int64)v33 )
                              break;
                            v48 = v46 + 16;
                            if ( v48 < v47 || v48 > v35 )
                              break;
                            if ( v47 )
                            {
                              for ( k = (_WORD **)(v47 + 8); ; k += 2 )
                              {
                                v50 = k - 1;
                                if ( k - 1 < (_WORD **)v33 || k + 1 < (_WORD **)v50 || (unsigned __int64)(k + 1) > v35 )
                                  break;
                                if ( !*v50 )
                                  goto LABEL_64;
                                v51 = *k;
                                if ( *k )
                                {
                                  v51 = (_WORD *)((char *)v51 + (_QWORD)v39);
                                  *k = v51;
                                  if ( v51 < (_WORD *)v33 || v51 + 1 < v51 || (unsigned __int64)(v51 + 1) > v35 )
                                    break;
                                }
                                if ( v38 != v37 && v51 )
                                {
                                  while ( v51 >= (_WORD *)v33 && (unsigned __int64)v51 <= v35 - 2 )
                                  {
                                    if ( !*v51 )
                                      goto LABEL_63;
                                    ++v51;
                                  }
                                  *k = 0LL;
                                }
LABEL_63:
                                ;
                              }
                              break;
                            }
                          }
LABEL_64:
                          v52 = *(_QWORD *)(v5 + 32);
                          if ( v52 )
                          {
                            v53 = (unsigned __int64)&v39[v52];
                            *(_QWORD *)(v5 + 32) = &v39[v52];
                            v54 = v53;
                            if ( v53 < (unsigned __int64)v33 )
                              break;
                            v55 = v53 + 16;
                            if ( v55 < v54 || v55 > v35 )
                              break;
                            if ( v54 )
                            {
                              for ( m = (_WORD **)(v54 + 8); ; m += 2 )
                              {
                                v57 = m - 1;
                                if ( m - 1 < (_WORD **)v33 || m + 1 < (_WORD **)v57 || (unsigned __int64)(m + 1) > v35 )
                                  break;
                                if ( !*v57 )
                                  goto LABEL_88;
                                v58 = *m;
                                if ( *m )
                                {
                                  v58 = (_WORD *)((char *)v58 + (_QWORD)v39);
                                  *m = v58;
                                  if ( v58 < (_WORD *)v33 || v58 + 1 < v58 || (unsigned __int64)(v58 + 1) > v35 )
                                    break;
                                }
                                if ( v38 != v37 && v58 )
                                {
                                  while ( v58 >= (_WORD *)v33 && (unsigned __int64)v58 <= v35 - 2 )
                                  {
                                    if ( !*v58 )
                                      goto LABEL_79;
                                    ++v58;
                                  }
                                  *m = 0LL;
                                }
LABEL_79:
                                ;
                              }
                              break;
                            }
                          }
LABEL_88:
                          v62 = *(_QWORD *)(v5 + 40);
                          if ( v62 )
                          {
                            v91 = &v39[v62];
                            *(_QWORD *)(v5 + 40) = &v39[v62];
                            v88 = v91;
                            if ( v91 < v33 )
                              break;
                            v92 = (unsigned __int64)(v91 + 8);
                            if ( v92 < (unsigned __int64)v88 || v92 > v35 )
                              break;
                            if ( v88 )
                            {
LABEL_152:
                              if ( v88 < v33 )
                                break;
                              v85 = v88 + 8;
                              if ( v88 + 8 < v88 || (unsigned __int64)v85 > v35 )
                                break;
                              if ( *(_QWORD *)v88 )
                              {
                                v86 = &v39[*(_QWORD *)v88];
                                *(_QWORD *)v88 = v86;
                                if ( v86 >= v33 )
                                {
                                  v87 = v86 + 2;
                                  if ( v86 + 2 >= v86 && (unsigned __int64)v87 <= v35 )
                                  {
                                    while ( v86 >= v33 && v87 >= v86 && (unsigned __int64)v87 <= v35 )
                                    {
                                      if ( !*(_WORD *)v86 )
                                      {
                                        v88 = v85;
                                        goto LABEL_152;
                                      }
                                      v86 += 2;
                                      v87 += 2;
                                    }
                                  }
                                }
                                break;
                              }
                            }
                          }
                          v63 = *(_QWORD *)(v5 + 48);
                          if ( !v63 )
                            break;
                          v64 = (unsigned __int64)&v39[v63];
                          *(_QWORD *)(v5 + 48) = &v39[v63];
                          if ( &v39[v63] < v33 )
                            break;
                          if ( v64 + 2 < v64 )
                            break;
                          if ( v64 + 2 > v35 )
                            break;
                          v65 = v64 + 2LL * *(unsigned __int8 *)(v5 + 56);
                          if ( v65 < (unsigned __int64)v33 || v65 + 2 < v65 || v65 + 2 > v35 )
                            break;
                          v66 = *(_QWORD *)(v5 + 64);
                          if ( v66 )
                          {
                            v67 = (unsigned __int64)&v39[v66];
                            *(_QWORD *)(v5 + 64) = &v39[v66];
                            v68 = v67;
                            if ( v67 < (unsigned __int64)v33 )
                              break;
                            v69 = v67 + 4;
                            if ( v69 < v68 || v69 > v35 )
                              break;
                            if ( v68 )
                            {
                              for ( n = (_WORD *)(v68 + 2); v38 != v37 || *n; n += 2 )
                              {
                                if ( n - 1 < (_WORD *)v33 || n + 1 < n - 1 || (unsigned __int64)(n + 1) > v35 )
                                  goto LABEL_12;
                                if ( v38 != v37 && !*n )
                                  break;
                              }
                            }
                          }
                          v24 = *(_QWORD *)(v5 + 72);
                          if ( v24 )
                          {
                            v25 = (unsigned __int64)&v39[v24];
                            *(_QWORD *)(v5 + 72) = &v39[v24];
                            v26 = v25;
                            if ( v25 < (unsigned __int64)v33 )
                              break;
                            v89 = v25 + 4;
                            if ( v89 < v26 || v89 > v35 )
                              break;
                            for ( ii = v26 == 0; !ii; ii = *(_WORD *)(v26 - 2) == 0 )
                            {
                              v26 += 4LL;
                              if ( v26 - 4 < (unsigned __int64)v33 || v26 < v26 - 4 || v26 > v35 )
                                goto LABEL_12;
                            }
                          }
                          if ( a4 )
                          {
                            v93 = *(_DWORD *)(v34 + 12);
                            if ( a4 < v93 )
                              break;
                            v6 = (unsigned __int64)&v33[a4 - v93];
                            if ( v6 < (unsigned __int64)v33 || v6 + 32 < v6 || v6 + 32 > v35 )
                              break;
                            v94 = *(_QWORD *)(v6 + 8);
                            if ( v94 )
                            {
                              v95 = (unsigned __int64)&v39[v94];
                              *(_QWORD *)(v6 + 8) = &v39[v94];
                              v96 = v95;
                              if ( v95 < (unsigned __int64)v33 )
                                break;
                              v97 = v95 + 132;
                              if ( v97 < v96 || v97 > v35 )
                                break;
                              if ( v96 )
                              {
                                v98 = *(unsigned int *)(v6 + 4);
                                if ( v38 == v37 )
                                {
                                  v100 = v96 + 132LL * (unsigned int)(v98 - 1);
                                  if ( v100 < (unsigned __int64)v33 || v100 + 132 < v100 )
                                    break;
                                  v99 = v100 + 132 <= v35;
                                }
                                else
                                {
                                  v99 = v98 <= (v35 - v96) / 0x84;
                                }
                                if ( !v99 )
                                  break;
                              }
                            }
                            v101 = *(_QWORD *)(v6 + 24);
                            if ( v101 )
                            {
                              v102 = (unsigned __int64)&v39[v101];
                              *(_QWORD *)(v6 + 24) = &v39[v101];
                              v103 = v102;
                              if ( v102 < (unsigned __int64)v33 )
                                break;
                              v104 = v102 + 2;
                              if ( v104 < v103 )
                                break;
                              if ( v104 > v35 )
                                break;
                              if ( v103 )
                              {
                                v105 = v103 + 2LL * (*(_DWORD *)(v6 + 16) - 1);
                                if ( v105 < (unsigned __int64)v33 || v105 + 2 < v105 || v105 + 2 > v35 )
                                  break;
                              }
                            }
                            if ( v38 != v37 )
                            {
                              v106 = *(unsigned int *)(v6 + 4);
                              v107 = v6 + 32;
                              if ( (_DWORD)v106 )
                              {
                                v108 = *(_QWORD *)(v6 + 8);
                                if ( v108 < v107 && v108 + 132 * v106 > v6 )
                                  break;
                              }
                              if ( v6 - 104 < v5 && v107 > v5 )
                                break;
                            }
                            if ( !(unsigned __int8)ValidateKbdNLSTable(v6) )
                              break;
                            *((_QWORD *)a1 + 6) = v6;
                          }
                          if ( v38 == v37 )
                            goto LABEL_398;
                          v80 = *(char ***)(v5 + 8);
                          if ( v80 )
                          {
                            v81 = v80 + 2;
LABEL_141:
                            if ( v80 < (char **)v33 || v81 < v80 || (unsigned __int64)v81 > v35 )
                              break;
                            v82 = *v80;
                            if ( *v80 )
                            {
                              while ( v82 >= v33 )
                              {
                                v83 = v82 + 4;
                                if ( v82 + 4 < v82 || (unsigned __int64)v83 > v35 )
                                  break;
                                if ( !*v82 )
                                {
                                  if ( !v6
                                    || (v111 = *(unsigned int *)(v6 + 4), !(_DWORD)v111)
                                    || (v112 = *(_QWORD *)(v6 + 8), v112 >= (unsigned __int64)v83)
                                    || v112 + 132 * v111 <= (unsigned __int64)*v80 )
                                  {
                                    if ( (unsigned __int64)(*v80 - 104) >= v5 || (unsigned __int64)v83 <= v5 )
                                    {
                                      v80 += 2;
                                      v81 += 2;
                                      goto LABEL_141;
                                    }
                                  }
                                  goto LABEL_12;
                                }
                                v84 = *((unsigned __int8 *)v81 - 8);
                                if ( (unsigned __int8)v84 > 1u )
                                {
                                  v109 = &v82[2 * v84];
                                  if ( v109 < v33 )
                                    goto LABEL_12;
                                  v110 = &v82[2 * v84 + 2];
                                  if ( v110 < v109 || (unsigned __int64)v110 > v35 )
                                    goto LABEL_12;
                                }
                                v82 += *((unsigned __int8 *)v81 - 7);
                              }
                              break;
                            }
                            v113 = v80 + 2;
                            if ( v6 )
                            {
                              v114 = *(unsigned int *)(v6 + 4);
                              if ( (_DWORD)v114 )
                              {
                                v115 = *(_QWORD *)(v6 + 8);
                                if ( v115 < (unsigned __int64)v113 && v115 + 132 * v114 > *(_QWORD *)(v5 + 8) )
                                  break;
                              }
                            }
                            if ( *(_QWORD *)(v5 + 8) - 104LL < v5 && (unsigned __int64)v113 > v5 )
                              break;
                          }
                          v116 = *(char **)(v5 + 16);
                          v117 = v116 + 8;
                          while ( v116 )
                          {
                            if ( v116 < v33 || v117 < v116 || (unsigned __int64)v117 > v35 )
                              goto LABEL_12;
                            v118 = v116 + 8;
                            if ( !*(_DWORD *)v116 )
                            {
                              if ( v6 )
                              {
                                v119 = *(unsigned int *)(v6 + 4);
                                if ( (_DWORD)v119 )
                                {
                                  v120 = *(_QWORD *)(v6 + 8);
                                  if ( v120 < (unsigned __int64)v118 && v120 + 132 * v119 > *(_QWORD *)(v5 + 16) )
                                    goto LABEL_12;
                                }
                              }
                              if ( *(_QWORD *)(v5 + 16) - 104LL < v5 && (unsigned __int64)v118 > v5 )
                                goto LABEL_12;
                              break;
                            }
                            v116 += 8;
                            v117 += 8;
                          }
                          v121 = *(_QWORD *)(v5 + 24);
                          if ( v121 )
                          {
                            while ( v121 >= (unsigned __int64)v33 )
                            {
                              v122 = v121 + 16;
                              if ( v121 + 16 < v121 || v122 > v35 )
                                break;
                              if ( !*(_BYTE *)v121 )
                              {
                                if ( v6 )
                                {
                                  v127 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v127 )
                                  {
                                    v128 = *(_QWORD *)(v6 + 8);
                                    if ( v128 < v122 && v128 + 132 * v127 > *(_QWORD *)(v5 + 24) )
                                      goto LABEL_12;
                                  }
                                }
                                if ( *(_QWORD *)(v5 + 24) - 104LL < v5 && v122 > v5 )
                                  goto LABEL_12;
                                goto LABEL_286;
                              }
                              v123 = *(char **)(v121 + 8);
                              if ( v123 )
                              {
                                while ( v123 >= v33 )
                                {
                                  v124 = v123 + 2;
                                  if ( v123 + 2 < v123 || (unsigned __int64)v124 > v35 )
                                    break;
                                  if ( !*(_WORD *)v123 )
                                  {
                                    if ( v6 )
                                    {
                                      v125 = *(unsigned int *)(v6 + 4);
                                      if ( (_DWORD)v125 )
                                      {
                                        v126 = *(_QWORD *)(v6 + 8);
                                        if ( v126 < (unsigned __int64)v124 && v126 + 132 * v125 > *(_QWORD *)(v121 + 8) )
                                          goto LABEL_12;
                                      }
                                    }
                                    if ( *(_QWORD *)(v121 + 8) - 104LL < v5 && (unsigned __int64)v124 > v5 )
                                      goto LABEL_12;
                                    goto LABEL_279;
                                  }
                                  v123 += 2;
                                }
                                goto LABEL_12;
                              }
LABEL_279:
                              v121 += 16LL;
                            }
                            break;
                          }
LABEL_286:
                          v129 = *(_QWORD *)(v5 + 32);
                          if ( v129 )
                          {
                            while ( v129 >= (unsigned __int64)v33 )
                            {
                              v130 = v129 + 16;
                              if ( v129 + 16 < v129 || v130 > v35 )
                                break;
                              if ( !*(_BYTE *)v129 )
                              {
                                if ( v6 )
                                {
                                  v135 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v135 )
                                  {
                                    v136 = *(_QWORD *)(v6 + 8);
                                    if ( v136 < v130 && v136 + 132 * v135 > *(_QWORD *)(v5 + 32) )
                                      goto LABEL_12;
                                  }
                                }
                                if ( *(_QWORD *)(v5 + 32) - 104LL < v5 && v130 > v5 )
                                  goto LABEL_12;
                                goto LABEL_310;
                              }
                              v131 = *(char **)(v129 + 8);
                              if ( v131 )
                              {
                                while ( v131 >= v33 )
                                {
                                  v132 = v131 + 2;
                                  if ( v131 + 2 < v131 || (unsigned __int64)v132 > v35 )
                                    break;
                                  if ( !*(_WORD *)v131 )
                                  {
                                    if ( v6 )
                                    {
                                      v133 = *(unsigned int *)(v6 + 4);
                                      if ( (_DWORD)v133 )
                                      {
                                        v134 = *(_QWORD *)(v6 + 8);
                                        if ( v134 < (unsigned __int64)v132 && v134 + 132 * v133 > *(_QWORD *)(v129 + 8) )
                                          goto LABEL_12;
                                      }
                                    }
                                    if ( *(_QWORD *)(v129 + 8) - 104LL < v5 && (unsigned __int64)v132 > v5 )
                                      goto LABEL_12;
                                    goto LABEL_303;
                                  }
                                  v131 += 2;
                                }
                                goto LABEL_12;
                              }
LABEL_303:
                              v129 += 16LL;
                            }
                            break;
                          }
LABEL_310:
                          v137 = *(char ***)(v5 + 40);
                          if ( v137 )
                          {
                            v138 = (_WORD **)(v137 + 1);
LABEL_312:
                            if ( v137 < (char **)v33 || v138 < (_WORD **)v137 || (unsigned __int64)v138 > v35 )
                              break;
                            v139 = *v137;
                            if ( *v137 )
                            {
                              while ( v139 >= v33 )
                              {
                                v149 = v139 + 2;
                                if ( v139 + 2 < v139 || (unsigned __int64)v149 > v35 )
                                  break;
                                if ( !*(_WORD *)v139 )
                                {
                                  if ( !v6
                                    || (v150 = *(unsigned int *)(v6 + 4), !(_DWORD)v150)
                                    || (v151 = *(_QWORD *)(v6 + 8), v151 >= (unsigned __int64)v149)
                                    || v151 + 132 * v150 <= (unsigned __int64)*v137 )
                                  {
                                    if ( (unsigned __int64)(*v137 - 104) >= v5 || (unsigned __int64)v149 <= v5 )
                                    {
                                      ++v137;
                                      ++v138;
                                      goto LABEL_312;
                                    }
                                  }
                                  goto LABEL_12;
                                }
                                v139 += 2;
                              }
                              break;
                            }
                            v140 = (_WORD **)(v137 + 1);
                            if ( v6 )
                            {
                              v141 = *(unsigned int *)(v6 + 4);
                              if ( (_DWORD)v141 )
                              {
                                v142 = *(_QWORD *)(v6 + 8);
                                if ( v142 < (unsigned __int64)v140 && v142 + 132 * v141 > *(_QWORD *)(v5 + 40) )
                                  break;
                              }
                            }
                            if ( *(_QWORD *)(v5 + 40) - 104LL < v5 && (unsigned __int64)v140 > v5 )
                              break;
                          }
                          v143 = *(unsigned __int8 *)(v5 + 56);
                          if ( (_BYTE)v143 )
                          {
                            if ( v6 )
                            {
                              v144 = *(unsigned int *)(v6 + 4);
                              if ( (_DWORD)v144 )
                              {
                                v145 = *(_QWORD *)(v5 + 48);
                                v146 = *(_QWORD *)(v6 + 8);
                                if ( v146 < v145 + 2 * v143 && v146 + 132 * v144 > v145 )
                                  break;
                              }
                            }
                          }
                          v147 = *(_QWORD *)(v5 + 64);
                          if ( v147 )
                          {
                            while ( v147 >= (unsigned __int64)v33 )
                            {
                              v148 = v147 + 4;
                              if ( v147 + 4 < v147 || v148 > v35 )
                                break;
                              if ( !*(_WORD *)(v147 + 2) )
                              {
                                if ( v6 )
                                {
                                  v152 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v152 )
                                  {
                                    v153 = *(_QWORD *)(v6 + 8);
                                    if ( v153 < v148 && v153 + 132 * v152 > *(_QWORD *)(v5 + 64) )
                                      goto LABEL_12;
                                  }
                                }
                                if ( *(_QWORD *)(v5 + 64) - 104LL < v5 && v148 > v5 )
                                  goto LABEL_12;
                                goto LABEL_351;
                              }
                              v147 += 4LL;
                            }
                            break;
                          }
LABEL_351:
                          v154 = *(_QWORD *)(v5 + 72);
                          if ( v154 )
                          {
                            while ( v154 >= (unsigned __int64)v33 )
                            {
                              v155 = v154 + 4;
                              if ( v154 + 4 < v154 || v155 > v35 )
                                break;
                              if ( !*(_WORD *)(v154 + 2) )
                              {
                                if ( v6 )
                                {
                                  v156 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v156 )
                                  {
                                    v157 = *(_QWORD *)(v6 + 8);
                                    if ( v157 < v155 && v157 + 132 * v156 > *(_QWORD *)(v5 + 72) )
                                      goto LABEL_12;
                                  }
                                }
                                if ( *(_QWORD *)(v5 + 72) - 104LL < v5 && v155 > v5 )
                                  goto LABEL_12;
                                goto LABEL_363;
                              }
                              v154 += 4LL;
                            }
                            break;
                          }
LABEL_363:
                          if ( *(_WORD *)(v5 + 82) )
                          {
                            v158 = *(char **)(v5 + 88);
                            if ( v158 )
                            {
                              while ( 1 )
                              {
                                v159 = 0;
                                if ( v158 < v33 || (unsigned __int64)v158 > v35 - 6 )
                                  break;
                                if ( !*v158 )
                                  goto LABEL_386;
                                v160 = (__int16 *)(v158 + 4);
                                while ( v159 < *(unsigned __int8 *)(v5 + 84) )
                                {
                                  if ( v159 > 0 )
                                  {
                                    v161 = (unsigned __int64)&v158[2 * v159 + 4];
                                    if ( v161 < (unsigned __int64)v33 || v161 > v35 - 2 )
                                    {
                                      *(_QWORD *)(v5 + 88) = 0LL;
                                      break;
                                    }
                                  }
                                  v162 = *v160++;
                                  ++v159;
                                  if ( v162 == -4096 )
                                    break;
                                }
                                if ( !*(_QWORD *)(v5 + 88) )
                                  goto LABEL_386;
                                if ( v159 > 0 )
                                {
                                  if ( v6 )
                                  {
                                    v163 = *(unsigned int *)(v6 + 4);
                                    if ( (_DWORD)v163 )
                                    {
                                      v164 = *(_QWORD *)(v6 + 8);
                                      if ( v164 < (unsigned __int64)&v158[2 * v159 + 4]
                                        && v164 + 132 * v163 > (unsigned __int64)(v158 + 4) )
                                      {
                                        break;
                                      }
                                    }
                                  }
                                  if ( (unsigned __int64)(v158 - 100) < v5 && (unsigned __int64)&v158[2 * v159 + 4] > v5 )
                                    break;
                                }
                                v158 += *(unsigned __int8 *)(v5 + 85);
                              }
                              *(_QWORD *)(v5 + 88) = 0LL;
LABEL_386:
                              v165 = *(_QWORD *)(v5 + 88);
                              if ( v165 )
                              {
                                if ( (v166 = v158 + 6, v6)
                                  && (v167 = *(unsigned int *)(v6 + 4), (_DWORD)v167)
                                  && (v168 = *(_QWORD *)(v6 + 8), v168 < (unsigned __int64)v166)
                                  && v168 + 132 * v167 > v165
                                  || v165 - 104 < v5 && (unsigned __int64)v166 > v5 )
                                {
                                  *(_QWORD *)(v5 + 88) = 0LL;
                                }
                              }
                            }
                          }
                          if ( v6 )
                          {
                            v169 = *(unsigned int *)(v6 + 4);
                            if ( (_DWORD)v169 )
                            {
                              v170 = *(_QWORD *)(v6 + 8);
                              if ( v170 - 104 < v5 && v170 + 132 * v169 > v5 )
                                break;
                            }
                          }
                          goto LABEL_398;
                        }
                        v41 += 2;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_12:
          GreDeleteFastMutex(v33);
          v7 = 0;
        }
        else
        {
LABEL_398:
          v7 = 1;
        }
      }
LABEL_13:
      v9 = a1;
    }
  }
  if ( Buffer )
    GreDeleteFastMutex((char *)Buffer);
  if ( v7 )
    return (struct tagKbdLayer *)v5;
  *((_QWORD *)v9 + 6) = 0LL;
  return 0LL;
}
