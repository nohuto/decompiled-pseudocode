/*
 * XREFs of RtlDecompressBufferLz4 @ 0x1403924A0
 * Callers:
 *     SmStoreDecompressBuffer @ 0x140392390 (SmStoreDecompressBuffer.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall RtlDecompressBufferLz4(char *a1, int a2, char *a3, int a4, int a5, int *a6)
{
  unsigned __int64 v6; // rax
  int v7; // r12d
  char *v8; // r14
  char *v9; // rsi
  unsigned __int8 *v10; // r10
  unsigned __int64 v11; // r15
  char *v12; // rdx
  unsigned int v13; // edi
  size_t v14; // r8
  __int128 v15; // xmm0
  unsigned __int8 *v16; // rdx
  char *v17; // rcx
  unsigned __int64 v18; // r8
  char *v19; // rbx
  __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rax
  char *v24; // r9
  __int128 v25; // xmm0
  __int64 v26; // r8
  __int64 v27; // rax
  char *v28; // r9
  unsigned __int64 v29; // r11
  signed __int64 v30; // rcx
  __int128 v31; // xmm0
  int v32; // eax
  char *v33; // rdi
  unsigned __int64 v34; // rcx
  int v35; // ebp
  unsigned __int8 *v37; // r9
  signed __int64 v38; // rdx
  __int64 v39; // rdi
  unsigned __int64 v40; // r9
  __int64 v41; // rax
  char *v42; // rbx
  char *v43; // rcx
  unsigned __int64 v44; // r8
  _QWORD *v45; // rdi
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // r8
  char v48; // al
  __int128 v49; // xmm0
  unsigned __int8 *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // r11
  char *v53; // rcx
  __int64 v54; // rbx
  char *v55; // rbx
  __int64 v56; // r9
  __int64 v57; // rax
  char *v58; // rbx
  char *v59; // rbx
  char *v60; // rbx
  char *v61; // rcx
  __int64 v62; // rbx
  char v63; // al
  __int64 v64; // rax
  unsigned __int64 v65; // [rsp+70h] [rbp+18h]

  v6 = a2;
  v7 = (int)a3;
  v8 = a1;
  if ( a3 && a2 >= 0 )
  {
    v9 = &a1[a2];
    v10 = (unsigned __int8 *)&a3[a4];
    v11 = (unsigned __int64)(v9 - 32);
    v12 = a3;
    if ( !(_DWORD)v6 )
    {
      if ( a4 == 1 && !*a3 )
      {
        v35 = 0;
        goto LABEL_45;
      }
      return 3221225507LL;
    }
    if ( a4 )
    {
      if ( v6 < 0x40 )
        goto LABEL_65;
      while ( 1 )
      {
        while ( 1 )
        {
          v13 = (unsigned __int8)*v12++;
          v14 = (unsigned __int64)v13 >> 4;
          if ( v14 == 15 )
          {
            v26 = 0LL;
            if ( v12 < (char *)v10 - 15 )
            {
              while ( 1 )
              {
                v27 = (unsigned __int8)*v12++;
                v26 += v27;
                if ( v12 > (char *)v10 - 15 )
                  break;
                if ( (_BYTE)v27 != 0xFF )
                {
                  if ( v26 == -1 )
                    goto LABEL_43;
                  v14 = v26 + 15;
                  v28 = &a1[v14];
                  if ( &a1[v14] < a1 )
                    goto LABEL_43;
                  v29 = (unsigned __int64)&v12[v14];
                  if ( &v12[v14] < v12 )
                    goto LABEL_43;
                  if ( (unsigned __int64)v28 <= v11 && v29 <= (unsigned __int64)(v10 - 32) )
                  {
                    v30 = a1 - v12;
                    do
                    {
                      v31 = *(_OWORD *)v12;
                      v12 += 32;
                      *(_OWORD *)&v12[v30 - 32] = v31;
                      *(_OWORD *)&v12[v30 - 16] = *((_OWORD *)v12 - 1);
                    }
                    while ( &v12[v30] < v28 );
                    v16 = (unsigned __int8 *)v29;
                    v17 = v28;
                    goto LABEL_9;
                  }
                  goto LABEL_79;
                }
              }
            }
            goto LABEL_43;
          }
          if ( v12 > (char *)v10 - 17 )
          {
LABEL_79:
            v55 = &a1[v14];
            if ( &a1[v14] <= v9 - 12 )
            {
              v37 = (unsigned __int8 *)&v12[v14];
              if ( &v12[v14] <= (char *)v10 - 8 )
              {
                v38 = v12 - a1;
                do
                {
                  *(_QWORD *)a1 = *(_QWORD *)&a1[v38];
                  a1 += 8;
                }
                while ( a1 < v55 );
                v18 = *(unsigned __int16 *)v37;
                v12 = (char *)(v37 + 2);
                v17 = v55;
                v19 = &v55[-v18];
                v39 = v13 & 0xF;
                if ( v39 == 15 )
                {
LABEL_69:
                  v51 = 0LL;
                  while ( 1 )
                  {
                    v52 = (unsigned __int8)*v12++;
                    v51 += v52;
                    if ( v12 > (char *)v10 - 4 )
                      break;
                    if ( (_BYTE)v52 != 0xFF )
                    {
                      if ( v51 != -1 )
                      {
                        v39 += v51;
                        if ( &v17[v39] >= v17 )
                          goto LABEL_53;
                      }
                      break;
                    }
                  }
                }
                else
                {
LABEL_53:
                  v21 = v39 + 4;
LABEL_54:
                  if ( v19 >= v8 )
                  {
                    v40 = (unsigned __int64)&v17[v21];
                    if ( v18 < 8 )
                    {
                      *v17 = *v19;
                      v17[1] = v19[1];
                      v17[2] = v19[2];
                      v17[3] = v19[3];
                      v58 = &v19[dword_1400379E0[v18]];
                      *((_DWORD *)v17 + 1) = *(_DWORD *)v58;
                      v42 = &v58[-dword_1400379C0[v18]];
                    }
                    else
                    {
                      v41 = *(_QWORD *)v19;
                      v42 = v19 + 8;
                      *(_QWORD *)v17 = v41;
                    }
                    v43 = v17 + 8;
                    if ( v40 <= (unsigned __int64)(v9 - 12) )
                    {
                      *(_QWORD *)v43 = *(_QWORD *)v42;
                      if ( v21 > 0x10 )
                      {
                        v53 = v43 + 8;
                        v54 = v42 - v53;
                        do
                        {
                          *(_QWORD *)v53 = *(_QWORD *)&v53[v54 + 8];
                          v53 += 8;
                        }
                        while ( (unsigned __int64)v53 < v40 );
                      }
                      goto LABEL_64;
                    }
                    v44 = (unsigned __int64)(v9 - 7);
                    if ( v40 <= (unsigned __int64)(v9 - 5) )
                    {
                      if ( (unsigned __int64)v43 < v44 )
                      {
                        v45 = v43;
                        do
                        {
                          *v45 = *(_QWORD *)((char *)v45 + v42 - v43);
                          ++v45;
                        }
                        while ( (unsigned __int64)v45 < v44 );
                        v46 = v44 - (_QWORD)v43;
                        v43 = v9 - 7;
                        v42 += v46;
                      }
                      for ( ; (unsigned __int64)v43 < v40; ++v43 )
                      {
                        v63 = *v42++;
                        *v43 = v63;
                      }
LABEL_64:
                      a1 = (char *)v40;
LABEL_65:
                      while ( 1 )
                      {
                        v47 = (unsigned __int8)*v12++;
                        LOBYTE(v13) = v47;
                        v48 = v47;
                        v14 = v47 >> 4;
                        if ( v14 == 15 )
                          break;
                        if ( (unsigned __int64)a1 > v11 || v12 >= (char *)v10 - 16 )
                          goto LABEL_79;
                        v49 = *(_OWORD *)v12;
                        v50 = (unsigned __int8 *)&v12[v14];
                        v39 = v48 & 0xF;
                        *(_OWORD *)a1 = v49;
                        v17 = &a1[v14];
                        v18 = *(unsigned __int16 *)v50;
                        v19 = &v17[-v18];
                        v12 = (char *)(v50 + 2);
                        if ( v39 == 15 )
                          goto LABEL_69;
                        if ( v18 < 8 || v19 < v8 )
                          goto LABEL_53;
                        *(_QWORD *)v17 = *(_QWORD *)v19;
                        *((_QWORD *)v17 + 1) = *((_QWORD *)v19 + 1);
                        *((_WORD *)v17 + 8) = *((_WORD *)v19 + 8);
                        a1 = &v17[v39 + 4];
                      }
                      v56 = 0LL;
                      if ( v12 < (char *)v10 - 15 )
                      {
                        while ( 1 )
                        {
                          v57 = (unsigned __int8)*v12++;
                          v56 += v57;
                          if ( v12 > (char *)v10 - 15 )
                            break;
                          if ( (_BYTE)v57 != 0xFF )
                          {
                            if ( v56 == -1 )
                              break;
                            v14 = v56 + 15;
                            if ( &a1[v56 + 15] < a1 || &v12[v14] < v12 )
                              break;
                            goto LABEL_79;
                          }
                        }
                      }
                    }
                  }
                }
LABEL_43:
                v35 = v7 - (_DWORD)v12 - 1;
                goto LABEL_44;
              }
            }
            if ( &v12[v14] != (char *)v10 || v55 > v9 )
              goto LABEL_43;
            memmove(a1, v12, v14);
            v35 = (_DWORD)v55 - (_DWORD)v8;
LABEL_44:
            if ( v35 >= 0 )
            {
LABEL_45:
              *a6 = v35;
              return 0LL;
            }
            return 3221225507LL;
          }
          v15 = *(_OWORD *)v12;
          v16 = (unsigned __int8 *)&v12[v14];
          *(_OWORD *)a1 = v15;
          v17 = &a1[v14];
LABEL_9:
          v18 = *(unsigned __int16 *)v16;
          v19 = &v17[-v18];
          v12 = (char *)(v16 + 2);
          v20 = v13 & 0xF;
          if ( v20 == 15 )
          {
            v22 = 0LL;
            while ( 1 )
            {
              v23 = (unsigned __int8)*v12++;
              v22 += v23;
              if ( v12 > (char *)v10 - 4 )
                goto LABEL_43;
              if ( (_BYTE)v23 != 0xFF )
              {
                if ( v22 == -1 )
                  goto LABEL_43;
                v21 = v22 + 19;
                if ( &v17[v21] < v17 )
                  goto LABEL_43;
                if ( &v17[v21] >= v9 - 64 )
                  goto LABEL_54;
                if ( v19 < v8 )
                  goto LABEL_43;
                goto LABEL_21;
              }
            }
          }
          v21 = v20 + 4;
          if ( &v17[v21] >= v9 - 64 )
            goto LABEL_54;
          if ( v19 < v8 )
            goto LABEL_43;
          if ( v18 < 8 )
            break;
          *(_QWORD *)v17 = *(_QWORD *)v19;
          *((_QWORD *)v17 + 1) = *((_QWORD *)v19 + 1);
          *((_WORD *)v17 + 8) = *((_WORD *)v19 + 8);
          a1 = &v17[v21];
        }
LABEL_21:
        v24 = &v17[v21];
        if ( v18 >= 0x10 )
        {
          do
          {
            v25 = *(_OWORD *)v19;
            v19 += 32;
            *(_OWORD *)&v19[v18 - 32] = v25;
            *(_OWORD *)&v19[v18 - 16] = *((_OWORD *)v19 - 1);
          }
          while ( &v19[v18] < v24 );
          goto LABEL_23;
        }
        switch ( v18 )
        {
          case 2uLL:
            LOWORD(v65) = *(_WORD *)v19;
            WORD1(v65) = *(_WORD *)v19;
            v32 = v65;
            break;
          case 1uLL:
            LOBYTE(v65) = *v19;
            BYTE1(v65) = *v19;
            BYTE2(v65) = *v19;
            BYTE3(v65) = *v19;
            BYTE4(v65) = *v19;
            BYTE5(v65) = *v19;
            BYTE6(v65) = *v19;
            HIBYTE(v65) = *v19;
            goto LABEL_38;
          case 4uLL:
            v32 = *(_DWORD *)v19;
            LODWORD(v65) = *(_DWORD *)v19;
            break;
          default:
            if ( v18 >= 8 )
            {
              v64 = *(_QWORD *)v19;
              v60 = v19 + 8;
              *(_QWORD *)v17 = v64;
            }
            else
            {
              _mm_lfence();
              *v17 = *v19;
              v17[1] = v19[1];
              v17[2] = v19[2];
              v17[3] = v19[3];
              v59 = &v19[dword_1400379E0[v18]];
              *((_DWORD *)v17 + 1) = *(_DWORD *)v59;
              v60 = &v59[-dword_1400379C0[v18]];
            }
            v61 = v17 + 8;
            v62 = v60 - v61;
            do
            {
              *(_QWORD *)v61 = *(_QWORD *)&v61[v62];
              v61 += 8;
            }
            while ( v61 < v24 );
            goto LABEL_23;
        }
        HIDWORD(v65) = v32;
LABEL_38:
        v33 = v17 + 8;
        *(_QWORD *)v17 = v65;
        v34 = (unsigned __int64)(v24 - (v17 + 8) + 7) >> 3;
        if ( v33 > v24 )
          v34 = 0LL;
        if ( v34 )
        {
          memset64(v33, v65, v34);
          a1 = v24;
        }
        else
        {
LABEL_23:
          a1 = v24;
        }
      }
    }
  }
  return 3221225507LL;
}
