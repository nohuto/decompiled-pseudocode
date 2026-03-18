/*
 * XREFs of ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x14011E338
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14011DC94 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x14011F43C (-LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z.c)
 *     ValidateKbdNLSTable @ 0x1401A23C0 (ValidateKbdNLSTable.c)
 *     strcmp_0 @ 0x14024BBFA (strcmp_0.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
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
  unsigned __int64 m; // rdx
  unsigned __int64 k; // r8
  unsigned __int64 v17; // r9
  PVOID v18; // rcx
  char *v19; // r15
  __int16 v20; // ax
  __int64 v21; // r13
  int v22; // ebp
  unsigned __int64 v23; // r14
  unsigned __int64 i; // rbx
  unsigned int v26; // eax
  __int64 v27; // rbx
  unsigned int v28; // r12d
  char *v29; // rcx
  char *v30; // rax
  char *v31; // rbp
  __int64 v32; // r15
  unsigned __int64 v33; // r11
  unsigned __int64 v34; // rax
  HANDLE v35; // rbx
  HANDLE v36; // r14
  unsigned __int64 *v37; // rcx
  unsigned __int64 *v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  char *v41; // rax
  unsigned __int64 j; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  _WORD *v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 *v50; // rax
  unsigned __int64 *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  char *v59; // rax
  char *v60; // rax
  char *v61; // rcx
  char *v62; // rax
  char *v63; // rcx
  __int64 v64; // rax
  _WORD *v65; // rcx
  char *v66; // rcx
  char *v67; // rax
  unsigned __int64 v68; // rcx
  unsigned int v69; // eax
  __int64 v70; // rax
  bool v71; // cc
  unsigned __int64 v72; // rcx
  __int64 v73; // rax
  unsigned __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int64 v77; // r10
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  char *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  char *v85; // rax
  __int64 v86; // rax
  unsigned __int64 v87; // r10
  __int64 v88; // rax
  __int64 v89; // rax
  unsigned __int64 v90; // rax
  __int64 v91; // rax
  unsigned __int64 v92; // rax
  __int64 v93; // rax
  int v94; // r8d
  __int16 *v95; // rcx
  __int16 v96; // ax
  unsigned __int64 v97; // r10
  __int64 v98; // rax
  __int64 v99; // rcx
  unsigned int v100[2]; // [rsp+38h] [rbp-60h] BYREF
  PVOID Buffer; // [rsp+40h] [rbp-58h] BYREF
  HANDLE v102; // [rsp+48h] [rbp-50h]
  HANDLE v103; // [rsp+50h] [rbp-48h]

  v100[0] = 0;
  v5 = 0LL;
  Buffer = 0LL;
  v6 = 0LL;
  v7 = 0;
  v9 = a1;
  v10 = *(HANDLE *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3) + 63536);
  v102 = v10;
  CurrentProcessId = PsGetCurrentProcessId();
  *((_QWORD *)v9 + 6) = 0LL;
  v12 = CurrentProcessId;
  v103 = CurrentProcessId;
  if ( (int)LoadFileContent(a2, v13, v14, &Buffer, v100) >= 0 )
  {
    m = (unsigned __int64)Buffer + *((unsigned int *)Buffer + 15);
    v18 = Buffer;
    if ( m >= (unsigned __int64)Buffer && (v12 == v10 || m + 263 >= m) )
    {
      v19 = (char *)Buffer + v100[0];
      if ( m + 264 < (unsigned __int64)v19 )
      {
        v20 = *(_WORD *)(m + 4);
        k = 512LL;
        if ( v20 == 512 || (k = 34404LL, v20 == -31132) || (k = 43620LL, v20 == -21916) )
          v21 = *(_QWORD *)(m + 48);
        else
          v21 = *(unsigned int *)(m + 52);
        v22 = *(unsigned __int16 *)(m + 6);
        v23 = m + *(unsigned __int16 *)(m + 20) + 24LL;
        for ( i = v23 + 40; ; i += 40LL )
        {
          *(_QWORD *)v100 = v23;
          if ( !v22 || v23 < (unsigned __int64)v18 || v103 != v102 && i - 1 < v23 || i >= (unsigned __int64)v19 )
            goto LABEL_9;
          if ( !strcmp_0((const char *)v23, ".data") )
            break;
          v18 = Buffer;
          v23 += 40LL;
          --v22;
        }
        v26 = *(_DWORD *)(v23 + 12);
        if ( a3 < v26
          || (v27 = *(unsigned int *)(v23 + 8), v28 = a3 - v26, v28 >= (unsigned int)v27)
          || (unsigned int)v27 >= 0x40000
          || (v29 = (char *)Buffer + *(unsigned int *)(v23 + 20), v29 < Buffer)
          || &v29[v27] < v29
          || &v29[v27] >= v19 )
        {
LABEL_9:
          v7 = 0;
          goto LABEL_10;
        }
        v30 = (char *)Win32AllocPoolZInitImpl(256LL, (unsigned int)v27, 0x746B7355u);
        v31 = v30;
        if ( v30 )
        {
          v32 = *(_QWORD *)v100;
          *((_QWORD *)a1 + 3) = v30;
          memmove(v30, (char *)Buffer + *(unsigned int *)(v32 + 20), (unsigned int)v27);
          *((_DWORD *)a1 + 10) = v27;
          v33 = (unsigned __int64)&v31[v27];
          v34 = *(unsigned int *)(v32 + 12);
          v5 = (unsigned __int64)&v31[v28];
          if ( (unsigned __int64)v31 >= v34 )
          {
            v35 = v102;
            v36 = v103;
            v17 = (unsigned __int64)&v31[-v34 - v21];
            if ( v103 == v102 || v5 >= (unsigned __int64)v31 && v5 <= v33 - 104 )
            {
              v37 = *(unsigned __int64 **)v5;
              if ( !*(_QWORD *)v5
                || (v38 = (unsigned __int64 *)((char *)v37 + v17),
                    *(_QWORD *)v5 = (char *)v37 + v17,
                    v37 = v38,
                    v38 >= (unsigned __int64 *)v31)
                && (v39 = (unsigned __int64)(v38 + 2), v39 >= (unsigned __int64)v37)
                && v39 <= v33 )
              {
                if ( v36 == v35 || v37 )
                {
                  if ( !*v37
                    || (*v37 += v17, v37 = *(unsigned __int64 **)v5, v40 = **(_QWORD **)v5, v40 >= (unsigned __int64)v31)
                    && (m = v40 + 2, v40 + 2 >= v40)
                    && m <= v33 )
                  {
                    if ( v36 == v35 || v37 >= (unsigned __int64 *)v31 && (unsigned __int64)v37 <= v33 - 16 )
                    {
                      v41 = (char *)*v37;
                      for ( j = *v37 + 2; v41 >= v31 && j >= (unsigned __int64)v41 && j <= v33; j += 2LL )
                      {
                        if ( !*v41 )
                        {
                          v43 = *(_QWORD *)(v5 + 8);
                          if ( v43 )
                          {
                            v50 = (unsigned __int64 *)(v17 + v43);
                            *(_QWORD *)(v5 + 8) = v50;
                            if ( v50 < (unsigned __int64 *)v31 )
                              break;
                            v51 = v50 + 2;
                            if ( v50 + 2 < v50 || (unsigned __int64)v51 > v33 )
                              break;
                            if ( v50 )
                            {
                              while ( v50 >= (unsigned __int64 *)v31 && v51 >= v50 && (unsigned __int64)v51 <= v33 )
                              {
                                m = *v50;
                                if ( !*v50 )
                                  goto LABEL_49;
                                m += v17;
                                *v50 = m;
                                if ( m < (unsigned __int64)v31 )
                                  break;
                                k = m + 4;
                                if ( m + 4 < m || k > v33 )
                                  break;
                                v50 += 2;
                                v51 += 2;
                              }
                              break;
                            }
                          }
LABEL_49:
                          v44 = *(_QWORD *)(v5 + 16);
                          if ( v44 )
                          {
                            v59 = (char *)(v17 + v44);
                            *(_QWORD *)(v5 + 16) = v59;
                            if ( v59 < v31 || v59 + 8 < v59 || (unsigned __int64)(v59 + 8) > v33 )
                              break;
                            while ( v59 )
                            {
                              if ( v59 < v31 || v59 + 8 < v59 || (unsigned __int64)(v59 + 8) > v33 )
                                goto LABEL_69;
                              if ( !*(_DWORD *)v59 )
                                break;
                              v59 += 8;
                            }
                          }
                          if ( *(_WORD *)(v5 + 82) )
                          {
                            v57 = *(_QWORD *)(v5 + 88);
                            if ( v57 )
                            {
                              v58 = v17 + v57;
                              *(_QWORD *)(v5 + 88) = v58;
                              if ( v58 < (unsigned __int64)v31 || v58 + 6 < v58 || v58 + 6 > v33 )
                                break;
                            }
                          }
                          v45 = *(_QWORD *)(v5 + 24);
                          if ( v45 )
                          {
                            m = v45 + v17;
                            *(_QWORD *)(v5 + 24) = v45 + v17;
                            if ( v45 + v17 < (unsigned __int64)v31 || m + 16 < m || m + 16 > v33 )
                              break;
                            if ( m )
                            {
                              while ( m >= (unsigned __int64)v31 )
                              {
                                k = m + 16;
                                if ( m + 16 < m || k > v33 )
                                  break;
                                if ( !*(_BYTE *)m )
                                  goto LABEL_52;
                                v65 = *(_WORD **)(m + 8);
                                if ( v65 )
                                {
                                  v65 = (_WORD *)((char *)v65 + v17);
                                  *(_QWORD *)(m + 8) = v65;
                                  if ( v65 < (_WORD *)v31 || v65 + 1 < v65 || (unsigned __int64)(v65 + 1) > v33 )
                                    break;
                                }
                                if ( v36 != v35 && v65 )
                                {
                                  while ( v65 >= (_WORD *)v31 && (unsigned __int64)v65 <= v33 - 2 )
                                  {
                                    if ( !*v65 )
                                      goto LABEL_164;
                                    ++v65;
                                  }
                                  *(_QWORD *)(m + 8) = 0LL;
                                }
LABEL_164:
                                m += 16LL;
                              }
                              break;
                            }
                          }
LABEL_52:
                          v46 = *(_QWORD *)(v5 + 32);
                          if ( v46 )
                          {
                            m = v46 + v17;
                            *(_QWORD *)(v5 + 32) = v46 + v17;
                            if ( v46 + v17 < (unsigned __int64)v31 || m + 16 < m || m + 16 > v33 )
                              break;
                            if ( m )
                            {
                              while ( m >= (unsigned __int64)v31 )
                              {
                                k = m + 16;
                                if ( m + 16 < m || k > v33 )
                                  break;
                                if ( !*(_BYTE *)m )
                                  goto LABEL_82;
                                v47 = *(_WORD **)(m + 8);
                                if ( v47 )
                                {
                                  v47 = (_WORD *)((char *)v47 + v17);
                                  *(_QWORD *)(m + 8) = v47;
                                  if ( v47 < (_WORD *)v31 || v47 + 1 < v47 || (unsigned __int64)(v47 + 1) > v33 )
                                    break;
                                }
                                if ( v36 != v35 && v47 )
                                {
                                  while ( v47 >= (_WORD *)v31 && (unsigned __int64)v47 <= v33 - 2 )
                                  {
                                    if ( !*v47 )
                                      goto LABEL_66;
                                    ++v47;
                                  }
                                  *(_QWORD *)(m + 8) = 0LL;
                                }
LABEL_66:
                                m += 16LL;
                              }
                              break;
                            }
                          }
LABEL_82:
                          v52 = *(_QWORD *)(v5 + 40);
                          if ( v52 )
                          {
                            v67 = (char *)(v17 + v52);
                            *(_QWORD *)(v5 + 40) = v67;
                            if ( v67 < v31 )
                              break;
                            k = (unsigned __int64)(v67 + 8);
                            if ( v67 + 8 < v67 || k > v33 )
                              break;
                            if ( v67 )
                            {
LABEL_172:
                              if ( v67 < v31 || k < (unsigned __int64)v67 || k > v33 )
                                break;
                              if ( *(_QWORD *)v67 )
                              {
                                v66 = (char *)(v17 + *(_QWORD *)v67);
                                *(_QWORD *)v67 = v66;
                                if ( v66 >= v31 )
                                {
                                  m = (unsigned __int64)(v66 + 2);
                                  if ( v66 + 2 >= v66 && m <= v33 )
                                  {
                                    while ( v66 >= v31 && m >= (unsigned __int64)v66 && m <= v33 )
                                    {
                                      if ( !*(_WORD *)v66 )
                                      {
                                        v67 += 8;
                                        k += 8LL;
                                        goto LABEL_172;
                                      }
                                      v66 += 2;
                                      m += 2LL;
                                    }
                                  }
                                }
                                break;
                              }
                            }
                          }
                          v53 = *(_QWORD *)(v5 + 48);
                          if ( !v53 )
                            break;
                          v54 = v53 + v17;
                          *(_QWORD *)(v5 + 48) = v53 + v17;
                          if ( v53 + v17 < (unsigned __int64)v31 )
                            break;
                          if ( v54 + 2 < v54 )
                            break;
                          if ( v54 + 2 > v33 )
                            break;
                          m = v54 + 2LL * *(unsigned __int8 *)(v5 + 56);
                          if ( m < (unsigned __int64)v31 || m + 2 < m || m + 2 > v33 )
                            break;
                          v55 = *(_QWORD *)(v5 + 64);
                          if ( v55 )
                          {
                            v56 = v17 + v55;
                            *(_QWORD *)(v5 + 64) = v56;
                            if ( v56 < (unsigned __int64)v31 || v56 + 4 < v56 || v56 + 4 > v33 )
                              break;
                            if ( v56 )
                            {
                              while ( v36 != v35 || *(_WORD *)(v56 + 2) )
                              {
                                if ( v56 < (unsigned __int64)v31 )
                                  goto LABEL_69;
                                m = v56 + 4;
                                if ( v56 + 4 < v56 || m > v33 )
                                  goto LABEL_69;
                                if ( v36 != v35 && !*(_WORD *)(v56 + 2) )
                                  break;
                                v56 += 4LL;
                              }
                            }
                          }
                          v48 = *(_QWORD *)(v5 + 72);
                          if ( v48 )
                          {
                            v49 = v17 + v48;
                            *(_QWORD *)(v5 + 72) = v49;
                            if ( v49 < (unsigned __int64)v31 )
                              break;
                            v68 = v49 + 4;
                            if ( v49 + 4 < v49 || v68 > v33 )
                              break;
                            if ( v49 )
                            {
                              while ( v49 >= (unsigned __int64)v31 && v68 >= v49 && v68 <= v33 )
                              {
                                if ( !*(_WORD *)(v68 - 2) )
                                  goto LABEL_118;
                                v49 += 4LL;
                                v68 += 4LL;
                              }
                              break;
                            }
                          }
LABEL_118:
                          if ( a4 )
                          {
                            v69 = *(_DWORD *)(v32 + 12);
                            if ( a4 < v69 )
                              break;
                            v6 = (unsigned __int64)&v31[a4 - v69];
                            if ( v6 < (unsigned __int64)v31 || v6 + 32 < v6 || v6 + 32 > v33 )
                              break;
                            v70 = *(_QWORD *)(v6 + 8);
                            if ( v70 )
                            {
                              m = v70 + v17;
                              *(_QWORD *)(v6 + 8) = v70 + v17;
                              if ( v70 + v17 < (unsigned __int64)v31 || m + 132 < m || m + 132 > v33 )
                                break;
                              if ( m )
                              {
                                k = *(unsigned int *)(v6 + 4);
                                if ( v36 == v35 )
                                {
                                  v72 = m + 132LL * (unsigned int)(k - 1);
                                  if ( v72 < (unsigned __int64)v31 || v72 + 132 < v72 )
                                    break;
                                  v71 = v72 + 132 <= v33;
                                }
                                else
                                {
                                  m = (v33 - m) / 0x84;
                                  v71 = k <= m;
                                }
                                if ( !v71 )
                                  break;
                              }
                            }
                            v73 = *(_QWORD *)(v6 + 24);
                            if ( v73 )
                            {
                              v74 = v73 + v17;
                              *(_QWORD *)(v6 + 24) = v73 + v17;
                              if ( v73 + v17 < (unsigned __int64)v31 )
                                break;
                              if ( v74 + 2 < v74 )
                                break;
                              if ( v74 + 2 > v33 )
                                break;
                              if ( v74 )
                              {
                                m = v74 + 2LL * (*(_DWORD *)(v6 + 16) - 1);
                                if ( m < (unsigned __int64)v31 || m + 2 < m || m + 2 > v33 )
                                  break;
                              }
                            }
                            if ( v36 != v35 )
                            {
                              v75 = *(unsigned int *)(v6 + 4);
                              m = v6 + 32;
                              if ( (_DWORD)v75 )
                              {
                                k = *(_QWORD *)(v6 + 8);
                                if ( k < m && k + 132 * v75 > v6 )
                                  break;
                              }
                              if ( v6 - 104 < v5 && m > v5 )
                                break;
                            }
                            if ( !(unsigned __int8)ValidateKbdNLSTable(v6) )
                              break;
                            *((_QWORD *)a1 + 6) = v6;
                          }
                          if ( v36 == v35 )
                            goto LABEL_402;
                          m = *(_QWORD *)(v5 + 8);
                          if ( m )
                          {
                            k = m + 16;
LABEL_141:
                            if ( m < (unsigned __int64)v31 || k < m || k > v33 )
                              break;
                            v63 = *(char **)m;
                            if ( *(_QWORD *)m )
                            {
                              while ( v63 >= v31 )
                              {
                                v17 = (unsigned __int64)(v63 + 4);
                                if ( v63 + 4 < v63 || v17 > v33 )
                                  break;
                                if ( !*v63 )
                                {
                                  if ( !v6
                                    || (v76 = *(unsigned int *)(v6 + 4), !(_DWORD)v76)
                                    || (v77 = *(_QWORD *)(v6 + 8), v77 >= v17)
                                    || v77 + 132 * v76 <= *(_QWORD *)m )
                                  {
                                    if ( *(_QWORD *)m - 104LL >= v5 || v17 <= v5 )
                                    {
                                      m += 16LL;
                                      k += 16LL;
                                      goto LABEL_141;
                                    }
                                  }
                                  goto LABEL_69;
                                }
                                v64 = *(unsigned __int8 *)(k - 8);
                                if ( (unsigned __int8)v64 > 1u )
                                {
                                  v17 = (unsigned __int64)&v63[2 * v64];
                                  if ( v17 < (unsigned __int64)v31 || v17 + 2 < v17 || v17 + 2 > v33 )
                                    goto LABEL_69;
                                }
                                v63 += *(unsigned __int8 *)(k - 7);
                              }
                              break;
                            }
                            m += 16LL;
                            if ( v6 )
                            {
                              v78 = *(unsigned int *)(v6 + 4);
                              if ( (_DWORD)v78 )
                              {
                                k = *(_QWORD *)(v6 + 8);
                                if ( k < m && k + 132 * v78 > *(_QWORD *)(v5 + 8) )
                                  break;
                              }
                            }
                            if ( *(_QWORD *)(v5 + 8) - 104LL < v5 && m > v5 )
                              break;
                          }
                          v60 = *(char **)(v5 + 16);
                          v61 = v60 + 8;
                          while ( v60 )
                          {
                            if ( v60 < v31 || v61 < v60 || (unsigned __int64)v61 > v33 )
                              goto LABEL_69;
                            m = (unsigned __int64)(v60 + 8);
                            if ( !*(_DWORD *)v60 )
                            {
                              if ( v6 )
                              {
                                v79 = *(unsigned int *)(v6 + 4);
                                if ( (_DWORD)v79 )
                                {
                                  k = *(_QWORD *)(v6 + 8);
                                  if ( k < m && k + 132 * v79 > *(_QWORD *)(v5 + 16) )
                                    goto LABEL_69;
                                }
                              }
                              if ( *(_QWORD *)(v5 + 16) - 104LL < v5 && m > v5 )
                                goto LABEL_69;
                              break;
                            }
                            v60 += 8;
                            v61 += 8;
                          }
                          m = *(_QWORD *)(v5 + 24);
                          if ( m )
                          {
                            while ( m >= (unsigned __int64)v31 )
                            {
                              k = m + 16;
                              if ( m + 16 < m || k > v33 )
                                break;
                              if ( !*(_BYTE *)m )
                              {
                                if ( v6 )
                                {
                                  v81 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v81 )
                                  {
                                    m = *(_QWORD *)(v6 + 8);
                                    if ( m < k && m + 132 * v81 > *(_QWORD *)(v5 + 24) )
                                      goto LABEL_69;
                                  }
                                }
                                if ( *(_QWORD *)(v5 + 24) - 104LL < v5 && k > v5 )
                                  goto LABEL_69;
                                goto LABEL_286;
                              }
                              v62 = *(char **)(m + 8);
                              if ( v62 )
                              {
                                for ( k = (unsigned __int64)(v62 + 2);
                                      v62 >= v31 && k >= (unsigned __int64)v62 && k <= v33;
                                      k += 2LL )
                                {
                                  if ( !*(_WORD *)v62 )
                                  {
                                    if ( !v6
                                      || (v80 = *(unsigned int *)(v6 + 4), !(_DWORD)v80)
                                      || (v17 = *(_QWORD *)(v6 + 8), v17 >= k)
                                      || v17 + 132 * v80 <= *(_QWORD *)(m + 8) )
                                    {
                                      if ( k <= v5 || *(_QWORD *)(m + 8) - 104LL >= v5 )
                                        goto LABEL_137;
                                    }
                                    goto LABEL_69;
                                  }
                                  v62 += 2;
                                }
                                goto LABEL_69;
                              }
LABEL_137:
                              m += 16LL;
                            }
                            break;
                          }
LABEL_286:
                          m = *(_QWORD *)(v5 + 32);
                          if ( m )
                          {
                            while ( m >= (unsigned __int64)v31 )
                            {
                              k = m + 16;
                              if ( m + 16 < m || k > v33 )
                                break;
                              if ( !*(_BYTE *)m )
                              {
                                if ( v6 )
                                {
                                  v84 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v84 )
                                  {
                                    m = *(_QWORD *)(v6 + 8);
                                    if ( m < k && m + 132 * v84 > *(_QWORD *)(v5 + 32) )
                                      goto LABEL_69;
                                  }
                                }
                                if ( *(_QWORD *)(v5 + 32) - 104LL < v5 && k > v5 )
                                  goto LABEL_69;
                                goto LABEL_311;
                              }
                              v82 = *(char **)(m + 8);
                              if ( v82 )
                              {
                                for ( k = (unsigned __int64)(v82 + 2);
                                      v82 >= v31 && k >= (unsigned __int64)v82 && k <= v33;
                                      k += 2LL )
                                {
                                  if ( !*(_WORD *)v82 )
                                  {
                                    if ( v6 )
                                    {
                                      v83 = *(unsigned int *)(v6 + 4);
                                      if ( (_DWORD)v83 )
                                      {
                                        v17 = *(_QWORD *)(v6 + 8);
                                        if ( v17 < k && v17 + 132 * v83 > *(_QWORD *)(m + 8) )
                                          goto LABEL_69;
                                      }
                                    }
                                    if ( *(_QWORD *)(m + 8) - 104LL < v5 && k > v5 )
                                      goto LABEL_69;
                                    goto LABEL_304;
                                  }
                                  v82 += 2;
                                }
                                goto LABEL_69;
                              }
LABEL_304:
                              m += 16LL;
                            }
                            break;
                          }
LABEL_311:
                          m = *(_QWORD *)(v5 + 40);
                          if ( m )
                          {
                            v17 = m + 8;
LABEL_313:
                            if ( m < (unsigned __int64)v31 || v17 < m || v17 > v33 )
                              break;
                            v85 = *(char **)m;
                            if ( *(_QWORD *)m )
                            {
                              for ( k = (unsigned __int64)(v85 + 2);
                                    v85 >= v31 && k >= (unsigned __int64)v85 && k <= v33;
                                    k += 2LL )
                              {
                                if ( !*(_WORD *)v85 )
                                {
                                  if ( !v6
                                    || (v86 = *(unsigned int *)(v6 + 4), !(_DWORD)v86)
                                    || (v87 = *(_QWORD *)(v6 + 8), v87 >= k)
                                    || v87 + 132 * v86 <= *(_QWORD *)m )
                                  {
                                    if ( *(_QWORD *)m - 104LL >= v5 || k <= v5 )
                                    {
                                      m += 8LL;
                                      v17 += 8LL;
                                      goto LABEL_313;
                                    }
                                  }
                                  goto LABEL_69;
                                }
                                v85 += 2;
                              }
                              break;
                            }
                            m += 8LL;
                            if ( v6 )
                            {
                              v88 = *(unsigned int *)(v6 + 4);
                              if ( (_DWORD)v88 )
                              {
                                k = *(_QWORD *)(v6 + 8);
                                if ( k < m && k + 132 * v88 > *(_QWORD *)(v5 + 40) )
                                  break;
                              }
                            }
                            if ( *(_QWORD *)(v5 + 40) - 104LL < v5 && m > v5 )
                              break;
                          }
                          v89 = *(unsigned __int8 *)(v5 + 56);
                          if ( (_BYTE)v89 )
                          {
                            if ( v6 )
                            {
                              m = *(unsigned int *)(v6 + 4);
                              if ( (_DWORD)m )
                              {
                                k = *(_QWORD *)(v5 + 48);
                                v17 = *(_QWORD *)(v6 + 8);
                                if ( v17 < k + 2 * v89 && v17 + 132 * m > k )
                                  break;
                              }
                            }
                          }
                          v90 = *(_QWORD *)(v5 + 64);
                          if ( v90 )
                          {
                            for ( m = v90 + 4; v90 >= (unsigned __int64)v31 && m >= v90 && m <= v33; m += 4LL )
                            {
                              if ( !*(_WORD *)(m - 2) )
                              {
                                if ( v6 )
                                {
                                  v91 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v91 )
                                  {
                                    k = *(_QWORD *)(v6 + 8);
                                    if ( k < m && k + 132 * v91 > *(_QWORD *)(v5 + 64) )
                                      goto LABEL_69;
                                  }
                                }
                                if ( *(_QWORD *)(v5 + 64) - 104LL < v5 && m > v5 )
                                  goto LABEL_69;
                                goto LABEL_354;
                              }
                              v90 += 4LL;
                            }
                            break;
                          }
LABEL_354:
                          v92 = *(_QWORD *)(v5 + 72);
                          if ( v92 )
                          {
                            for ( m = v92 + 4; v92 >= (unsigned __int64)v31 && m >= v92 && m <= v33; m += 4LL )
                            {
                              if ( !*(_WORD *)(m - 2) )
                              {
                                if ( v6 )
                                {
                                  v93 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v93 )
                                  {
                                    k = *(_QWORD *)(v6 + 8);
                                    if ( k < m && k + 132 * v93 > *(_QWORD *)(v5 + 72) )
                                      goto LABEL_69;
                                  }
                                }
                                if ( *(_QWORD *)(v5 + 72) - 104LL < v5 && m > v5 )
                                  goto LABEL_69;
                                goto LABEL_367;
                              }
                              v92 += 4LL;
                            }
                            break;
                          }
LABEL_367:
                          if ( *(_WORD *)(v5 + 82) )
                          {
                            m = *(_QWORD *)(v5 + 88);
                            if ( m )
                            {
                              while ( 1 )
                              {
                                v94 = 0;
                                if ( m < (unsigned __int64)v31 || m > v33 - 6 )
                                  break;
                                if ( !*(_BYTE *)m )
                                  goto LABEL_390;
                                v95 = (__int16 *)(m + 4);
                                while ( v94 < *(unsigned __int8 *)(v5 + 84) )
                                {
                                  if ( v94 > 0 )
                                  {
                                    v17 = m + 2 * (v94 + 2LL);
                                    if ( v17 < (unsigned __int64)v31 || v17 > v33 - 2 )
                                    {
                                      *(_QWORD *)(v5 + 88) = 0LL;
                                      break;
                                    }
                                  }
                                  v96 = *v95;
                                  v17 = 61440LL;
                                  ++v95;
                                  ++v94;
                                  if ( v96 == -4096 )
                                    break;
                                }
                                if ( !*(_QWORD *)(v5 + 88) )
                                  goto LABEL_390;
                                if ( v94 > 0 )
                                {
                                  if ( v6 )
                                  {
                                    v17 = *(unsigned int *)(v6 + 4);
                                    if ( (_DWORD)v17 )
                                    {
                                      v97 = *(_QWORD *)(v6 + 8);
                                      if ( v97 < m + 2 * (v94 + 2LL) && v97 + 132 * v17 > m + 4 )
                                        break;
                                    }
                                  }
                                  if ( m - 100 < v5 && m + 2 * (v94 + 2LL) > v5 )
                                    break;
                                }
                                m += *(unsigned __int8 *)(v5 + 85);
                              }
                              *(_QWORD *)(v5 + 88) = 0LL;
LABEL_390:
                              k = *(_QWORD *)(v5 + 88);
                              if ( k )
                              {
                                if ( (m += 6LL, v6)
                                  && (v98 = *(unsigned int *)(v6 + 4), (_DWORD)v98)
                                  && (v17 = *(_QWORD *)(v6 + 8), v17 < m)
                                  && v17 + 132 * v98 > k
                                  || k - 104 < v5 && m > v5 )
                                {
                                  *(_QWORD *)(v5 + 88) = 0LL;
                                }
                              }
                            }
                          }
                          if ( v6 )
                          {
                            v99 = *(unsigned int *)(v6 + 4);
                            if ( (_DWORD)v99 )
                            {
                              m = *(_QWORD *)(v6 + 8);
                              if ( m - 104 < v5 && m + 132 * v99 > v5 )
                                break;
                            }
                          }
                          goto LABEL_402;
                        }
                        v41 += 2;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_69:
          GreDeleteFastMutex(v31, m, k, v17);
          v7 = 0;
        }
        else
        {
LABEL_402:
          v7 = 1;
        }
      }
LABEL_10:
      v9 = a1;
    }
  }
  if ( Buffer )
    GreDeleteFastMutex((char *)Buffer, m, k, v17);
  if ( v7 )
    return (struct tagKbdLayer *)v5;
  *((_QWORD *)v9 + 6) = 0LL;
  return 0LL;
}
