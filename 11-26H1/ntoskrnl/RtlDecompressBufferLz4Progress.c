/*
 * XREFs of RtlDecompressBufferLz4Progress @ 0x140627EBC
 * Callers:
 *     RtlDecompressBufferProgress @ 0x14061AD08 (RtlDecompressBufferProgress.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlDecompressBufferLz4Progress(
        unsigned __int8 *a1,
        int a2,
        char *a3,
        int a4,
        int *a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int8 *v7; // r11
  int v8; // r13d
  unsigned __int8 *v9; // r15
  unsigned __int8 *v10; // r12
  unsigned __int64 v11; // rax
  char *v12; // rsi
  char *i; // rdi
  char *v14; // r10
  unsigned __int64 v15; // rbp
  char *v16; // rbx
  int v17; // ebx
  unsigned __int8 *v18; // r9
  unsigned __int64 v19; // rdx
  unsigned int v20; // r14d
  size_t v21; // r8
  __int64 v22; // r8
  __int64 v23; // rax
  char *v24; // rcx
  signed __int64 v25; // rdi
  __int128 v26; // xmm1
  unsigned __int8 *v27; // rsi
  char *v28; // rdi
  __int128 v29; // xmm0
  unsigned __int64 v30; // rbp
  unsigned __int8 *v31; // rbx
  __int64 v32; // r14
  __int64 v33; // r14
  __int64 v34; // rax
  unsigned __int64 v35; // r14
  unsigned __int8 *v36; // r14
  unsigned __int8 *v37; // rbx
  unsigned __int8 *v38; // rbx
  __int16 v39; // ax
  __int64 v40; // rax
  unsigned __int8 *v41; // rdi
  signed __int64 v42; // rbx
  int v43; // eax
  unsigned __int64 v44; // rax
  unsigned __int8 *v45; // rdi
  unsigned __int64 v46; // rcx
  __int128 v47; // xmm1
  unsigned __int64 v48; // r8
  char v49; // cl
  __int128 v50; // xmm0
  unsigned __int8 *v51; // rax
  __int64 v52; // r14
  __int64 v53; // rax
  __int64 v54; // rcx
  char *v56; // rbx
  unsigned __int8 *v57; // rcx
  signed __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rcx
  unsigned __int8 *v61; // rbx
  char *v62; // rbx
  __int64 v63; // rax
  char *v64; // rdi
  char *v65; // r8
  _QWORD *v66; // rcx
  signed __int64 v67; // rax
  char *v68; // rdi
  signed __int64 v69; // rbx
  unsigned __int8 *v70; // [rsp+20h] [rbp-58h]
  char *v71; // [rsp+28h] [rbp-50h]
  unsigned __int64 v73; // [rsp+90h] [rbp+18h] BYREF

  v7 = a1;
  v8 = (int)a3;
  if ( a3 && a2 >= 0 )
  {
    v9 = (unsigned __int8 *)(a3 + 4096);
    v10 = (unsigned __int8 *)&a3[a4];
    v11 = a2;
    v12 = a3;
    i = (char *)a1;
    v14 = (char *)&a1[a2];
    v71 = v14;
    v15 = (unsigned __int64)(v10 - 16);
    v16 = v14 - 32;
    if ( !a2 )
    {
      if ( a4 == 1 && !*a3 )
      {
        v17 = 0;
        goto LABEL_72;
      }
      return 3221225507LL;
    }
    if ( a4 )
    {
      v70 = (unsigned __int8 *)(a3 + 4096);
      v18 = (unsigned __int8 *)(a3 + 4096);
      v19 = 0x140000000uLL;
      if ( v11 < 0x40 )
        goto LABEL_56;
      while ( 1 )
      {
        while ( 1 )
        {
          v20 = (unsigned __int8)*v12++;
          v21 = (unsigned __int64)v20 >> 4;
          if ( v21 == 15 )
          {
            v22 = 0LL;
            if ( v12 < (char *)v10 - 15 )
            {
              while ( 1 )
              {
                v23 = (unsigned __int8)*v12++;
                v22 += v23;
                if ( v12 > (char *)v10 - 15 )
                  break;
                if ( (_BYTE)v23 != 0xFF )
                {
                  if ( v22 == -1 )
                    goto LABEL_70;
                  v21 = v22 + 15;
                  v24 = &i[v21];
                  if ( &i[v21] < i )
                    goto LABEL_70;
                  v19 = (unsigned __int64)&v12[v21];
                  if ( &v12[v21] < v12 )
                    goto LABEL_70;
                  if ( v24 <= v16 && v19 <= (unsigned __int64)(v10 - 32) )
                  {
                    v25 = i - v12;
                    do
                    {
                      *(_OWORD *)&v12[v25] = *(_OWORD *)v12;
                      v26 = *((_OWORD *)v12 + 1);
                      v12 += 32;
                      *(_OWORD *)&v12[v25 - 16] = v26;
                    }
                    while ( &v12[v25] < v24 );
                    v27 = (unsigned __int8 *)v19;
                    v28 = v24;
                    v19 = 0x140000000uLL;
                    goto LABEL_23;
                  }
                  goto LABEL_73;
                }
              }
            }
            goto LABEL_70;
          }
          if ( v12 > (char *)v10 - 17 )
          {
LABEL_73:
            v18 = v9;
LABEL_74:
            v56 = &i[v21];
            if ( &i[v21] <= v14 - 12 )
            {
              v57 = (unsigned __int8 *)&v12[v21];
              if ( &v12[v21] <= (char *)v10 - 8 )
              {
                v58 = v12 - i;
                do
                {
                  *(_QWORD *)i = *(_QWORD *)&i[v58];
                  i += 8;
                }
                while ( i < v56 );
                v30 = *(unsigned __int16 *)v57;
                v12 = (char *)(v57 + 2);
                v28 = v56;
                v31 = (unsigned __int8 *)&v56[-v30];
                if ( v18 && v12 >= (char *)v18 )
                {
                  guard_dispatch_icall_no_overrides(a7, v19);
                  v14 = v71;
                  v18 = (unsigned __int8 *)(v12 + 4096);
                  v7 = a1;
                }
                v70 = v18;
                v52 = v20 & 0xF;
                if ( v52 == 15 )
                {
LABEL_82:
                  v59 = 0LL;
                  while ( 1 )
                  {
                    v60 = (unsigned __int8)*v12++;
                    v59 += v60;
                    if ( v12 > (char *)v10 - 4 )
                      goto LABEL_70;
                    if ( (_BYTE)v60 != 0xFF )
                    {
                      if ( v59 == -1 )
                        goto LABEL_70;
                      v52 += v59;
                      if ( &v28[v52] < v28 )
                        goto LABEL_70;
                      break;
                    }
                  }
                }
LABEL_87:
                v35 = v52 + 4;
LABEL_88:
                if ( v31 >= v7 )
                {
                  v19 = (unsigned __int64)&v28[v35];
                  if ( v30 >= 8 )
                  {
                    v63 = *(_QWORD *)v31;
                    v62 = (char *)(v31 + 8);
                    *(_QWORD *)v28 = v63;
                  }
                  else
                  {
                    *v28 = *v31;
                    v28[1] = v31[1];
                    v28[2] = v31[2];
                    v28[3] = v31[3];
                    v61 = &v31[dword_1400379E0[v30]];
                    *((_DWORD *)v28 + 1) = *(_DWORD *)v61;
                    v62 = (char *)&v61[-dword_1400379C0[v30]];
                  }
                  v64 = v28 + 8;
                  if ( v19 <= (unsigned __int64)(v14 - 12) )
                  {
                    *(_QWORD *)v64 = *(_QWORD *)v62;
                    if ( v35 > 0x10 )
                    {
                      v68 = v64 + 8;
                      v69 = v62 - v68;
                      do
                      {
                        *(_QWORD *)v68 = *(_QWORD *)&v68[v69 + 8];
                        v68 += 8;
                      }
                      while ( (unsigned __int64)v68 < v19 );
                    }
LABEL_104:
                    v18 = v70;
                    for ( i = (char *)v19; ; i = &v28[v52 + 4] )
                    {
                      v16 = v14 - 32;
                      v15 = (unsigned __int64)(v10 - 16);
LABEL_56:
                      v48 = (unsigned __int8)*v12++;
                      LOBYTE(v20) = v48;
                      v49 = v48;
                      v21 = v48 >> 4;
                      if ( v21 == 15 )
                        break;
                      if ( i > v16 || (unsigned __int64)v12 >= v15 )
                        goto LABEL_74;
                      v50 = *(_OWORD *)v12;
                      v51 = (unsigned __int8 *)&v12[v21];
                      v52 = v49 & 0xF;
                      v12 += v21 + 2;
                      *(_OWORD *)i = v50;
                      v30 = *(unsigned __int16 *)v51;
                      v28 = &i[v21];
                      v31 = (unsigned __int8 *)&v28[-v30];
                      if ( v52 == 15 )
                        goto LABEL_82;
                      if ( v30 < 8 || v31 < v7 )
                        goto LABEL_87;
                      *(_QWORD *)v28 = *(_QWORD *)v31;
                      *((_QWORD *)v28 + 1) = *((_QWORD *)v31 + 1);
                      *((_WORD *)v28 + 8) = *((_WORD *)v31 + 8);
                    }
                    v19 = (unsigned __int64)(v10 - 15);
                    v53 = 0LL;
                    if ( v12 < (char *)v10 - 15 )
                    {
                      while ( 1 )
                      {
                        v54 = (unsigned __int8)*v12++;
                        v53 += v54;
                        if ( (unsigned __int64)v12 > v19 )
                          break;
                        if ( (_BYTE)v54 != 0xFF )
                        {
                          if ( v53 != -1 )
                          {
                            v21 = v53 + 15;
                            if ( &i[v53 + 15] >= i && &v12[v21] >= v12 )
                              goto LABEL_74;
                          }
                          goto LABEL_70;
                        }
                      }
                    }
                    goto LABEL_70;
                  }
                  v65 = v14 - 7;
                  if ( v19 <= (unsigned __int64)(v14 - 5) )
                  {
                    if ( v64 < v65 )
                    {
                      v66 = v64;
                      do
                      {
                        *v66 = *(_QWORD *)((char *)v66 + v62 - v64);
                        ++v66;
                      }
                      while ( v66 < (_QWORD *)v65 );
                      v67 = v65 - v64;
                      v64 = v14 - 7;
                      v62 += v67;
                    }
                    while ( (unsigned __int64)v64 < v19 )
                      *v64++ = *v62++;
                    goto LABEL_104;
                  }
                }
LABEL_70:
                v17 = v8 - (_DWORD)v12 - 1;
                goto LABEL_71;
              }
            }
            if ( &v12[v21] != (char *)v10 || v56 > v14 )
              goto LABEL_70;
            memmove(i, v12, v21);
            v17 = (_DWORD)v56 - (_DWORD)a1;
LABEL_71:
            if ( v17 >= 0 )
            {
LABEL_72:
              *a5 = v17;
              return 0LL;
            }
            return 3221225507LL;
          }
          v29 = *(_OWORD *)v12;
          v27 = (unsigned __int8 *)&v12[v21];
          *(_OWORD *)i = v29;
          v28 = &i[v21];
LABEL_23:
          v30 = *(unsigned __int16 *)v27;
          v31 = (unsigned __int8 *)&v28[-v30];
          v12 = (char *)(v27 + 2);
          v32 = v20 & 0xF;
          if ( v32 == 15 )
          {
            v33 = 0LL;
            while ( 1 )
            {
              v34 = (unsigned __int8)*v12++;
              v33 += v34;
              if ( v12 > (char *)v10 - 4 )
                goto LABEL_70;
              if ( (_BYTE)v34 != 0xFF )
              {
                if ( v33 == -1 )
                  goto LABEL_70;
                v35 = v33 + 19;
                if ( &v28[v35] < v28 )
                  goto LABEL_70;
                if ( &v28[v35] >= v14 - 64 )
                  goto LABEL_55;
                if ( v31 < v7 )
                  goto LABEL_70;
                goto LABEL_31;
              }
            }
          }
          v35 = v32 + 4;
          if ( &v28[v35] >= v14 - 64 )
          {
LABEL_55:
            v70 = v9;
            goto LABEL_88;
          }
          if ( v31 < v7 )
            goto LABEL_70;
          if ( v30 < 8 )
            break;
          *(_QWORD *)v28 = *(_QWORD *)v31;
          *((_QWORD *)v28 + 1) = *((_QWORD *)v31 + 1);
          v39 = *((_WORD *)v31 + 8);
          v16 = v14 - 32;
          *((_WORD *)v28 + 8) = v39;
          i = &v28[v35];
        }
LABEL_31:
        v36 = (unsigned __int8 *)&v28[v35];
        if ( v30 >= 0x10 )
        {
          do
          {
            *(_OWORD *)&v31[v30] = *(_OWORD *)v31;
            v47 = *((_OWORD *)v31 + 1);
            v31 += 32;
            *(_OWORD *)&v31[v30 - 16] = v47;
          }
          while ( &v31[v30] < v36 );
          goto LABEL_54;
        }
        if ( v30 == 1 )
        {
          memset_0(&v73, *v31, sizeof(v73));
          v14 = v71;
          v7 = a1;
        }
        else
        {
          if ( v30 == 2 )
          {
            LOWORD(v73) = *(_WORD *)v31;
            WORD1(v73) = v73;
            v43 = v73;
          }
          else
          {
            if ( v30 != 4 )
            {
              if ( v30 >= 8 )
              {
                v40 = *(_QWORD *)v31;
                v38 = v31 + 8;
                *(_QWORD *)v28 = v40;
              }
              else
              {
                _mm_lfence();
                *v28 = *v31;
                v28[1] = v31[1];
                v28[2] = v31[2];
                v28[3] = v31[3];
                v37 = &v31[dword_1400379E0[v30]];
                *((_DWORD *)v28 + 1) = *(_DWORD *)v37;
                v38 = &v37[-dword_1400379C0[v30]];
              }
              v41 = (unsigned __int8 *)(v28 + 8);
              v42 = v38 - v41;
              do
              {
                *(_QWORD *)v41 = *(_QWORD *)&v41[v42];
                v41 += 8;
              }
              while ( v41 < v36 );
              goto LABEL_54;
            }
            v43 = *(_DWORD *)v31;
            LODWORD(v73) = *(_DWORD *)v31;
          }
          HIDWORD(v73) = v43;
        }
        v44 = v73;
        *(_QWORD *)v28 = v73;
        v45 = (unsigned __int8 *)(v28 + 8);
        v46 = (unsigned __int64)(v36 - v45 + 7) >> 3;
        if ( v45 > v36 )
          v46 = 0LL;
        if ( v46 )
          memset64(v45, v44, v46);
LABEL_54:
        i = (char *)v36;
        v16 = v14 - 32;
        v19 = 0x140000000uLL;
      }
    }
  }
  return 3221225507LL;
}
