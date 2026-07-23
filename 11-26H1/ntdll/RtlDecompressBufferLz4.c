/*
 * XREFs of RtlDecompressBufferLz4 @ 0x18011DCC0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlDecompressBufferLz4(char *a1, int a2, char *a3, int a4, int a5, int *a6)
{
  int v6; // r15d
  char *v8; // rsi
  unsigned __int8 *v9; // r14
  char *v10; // rdi
  char *v11; // r13
  unsigned __int64 v12; // r11
  char *v13; // r10
  int v14; // ebx
  unsigned int v15; // ecx
  size_t v16; // r8
  __int64 v17; // r8
  __int64 v18; // rax
  char *v19; // rdx
  unsigned __int64 v20; // r9
  signed __int64 v21; // rdi
  __int128 v22; // xmm1
  unsigned __int8 *v23; // rsi
  char *v24; // rdi
  __int128 v25; // xmm0
  unsigned __int64 v26; // rdx
  unsigned __int8 *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int8 *v32; // rbp
  unsigned __int8 *v33; // rbx
  unsigned __int8 *v34; // rbx
  __int64 v35; // rax
  unsigned __int8 *v36; // rdi
  signed __int64 v37; // rbx
  int v38; // eax
  unsigned __int64 v39; // rax
  unsigned __int8 *v40; // rdi
  unsigned __int64 v41; // rcx
  __int128 v42; // xmm1
  unsigned __int64 v43; // r8
  char v44; // dl
  __int128 v45; // xmm0
  unsigned __int8 *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  char *v51; // rbx
  unsigned __int8 *v52; // rdx
  signed __int64 v53; // rsi
  unsigned __int8 *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // r8
  unsigned __int64 v57; // r8
  unsigned __int8 *v58; // rbx
  char *v59; // rbx
  __int64 v60; // rax
  char *v61; // rdi
  char *v62; // rdx
  _QWORD *v63; // rcx
  signed __int64 v64; // rax
  char *v65; // rdi
  __int64 v66; // rbx
  unsigned __int64 v67; // [rsp+70h] [rbp+18h] BYREF

  v6 = (int)a3;
  if ( a3 && a2 >= 0 )
  {
    v8 = a3;
    v9 = (unsigned __int8 *)&a3[a4];
    v10 = a1;
    v11 = &a1[a2];
    v12 = (unsigned __int64)(v9 - 16);
    v13 = v11 - 32;
    if ( !a2 )
    {
      if ( a4 == 1 && !*a3 )
      {
        v14 = 0;
        goto LABEL_70;
      }
      return 3221225507LL;
    }
    if ( a4 )
    {
      if ( (unsigned __int64)a2 < 0x40 )
        goto LABEL_55;
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = (unsigned __int8)*v8++;
          v16 = (unsigned __int64)v15 >> 4;
          if ( v16 == 15 )
          {
            v17 = 0LL;
            if ( v8 < (char *)v9 - 15 )
            {
              while ( 1 )
              {
                v18 = (unsigned __int8)*v8++;
                v17 += v18;
                if ( v8 > (char *)v9 - 15 )
                  break;
                if ( (_BYTE)v18 != 0xFF )
                {
                  if ( v17 == -1 )
                    goto LABEL_68;
                  v16 = v17 + 15;
                  v19 = &v10[v16];
                  if ( &v10[v16] < v10 )
                    goto LABEL_68;
                  v20 = (unsigned __int64)&v8[v16];
                  if ( &v8[v16] < v8 )
                    goto LABEL_68;
                  if ( v19 <= v13 && v20 <= (unsigned __int64)(v9 - 32) )
                  {
                    v21 = v10 - v8;
                    do
                    {
                      *(_OWORD *)&v8[v21] = *(_OWORD *)v8;
                      v22 = *((_OWORD *)v8 + 1);
                      v8 += 32;
                      *(_OWORD *)&v8[v21 - 16] = v22;
                    }
                    while ( &v8[v21] < v19 );
                    v23 = (unsigned __int8 *)v20;
                    v24 = v19;
                    goto LABEL_23;
                  }
                  goto LABEL_71;
                }
              }
            }
            goto LABEL_68;
          }
          if ( v8 > (char *)v9 - 17 )
          {
LABEL_71:
            v12 = (unsigned __int64)(v9 - 16);
LABEL_72:
            v51 = &v10[v16];
            if ( &v10[v16] <= v11 - 12 )
            {
              v52 = (unsigned __int8 *)&v8[v16];
              if ( &v8[v16] <= (char *)v9 - 8 )
              {
                v53 = v8 - v10;
                do
                {
                  *(_QWORD *)v10 = *(_QWORD *)&v10[v53];
                  v10 += 8;
                }
                while ( v10 < v51 );
                v54 = v52;
                v24 = v51;
                v26 = *(unsigned __int16 *)v52;
                v8 = (char *)(v54 + 2);
                v27 = (unsigned __int8 *)&v51[-v26];
                v47 = v15 & 0xF;
                if ( v47 != 15 )
                {
LABEL_82:
                  v31 = v47 + 4;
                  goto LABEL_84;
                }
LABEL_77:
                v55 = 0LL;
                while ( 1 )
                {
                  v56 = (unsigned __int8)*v8++;
                  v55 += v56;
                  if ( v8 > (char *)v9 - 4 )
                    goto LABEL_68;
                  if ( (_BYTE)v56 != 0xFF )
                  {
                    if ( v55 == -1 )
                      goto LABEL_68;
                    v47 += v55;
                    if ( &v24[v47] < v24 )
                      goto LABEL_68;
                    goto LABEL_82;
                  }
                }
              }
            }
            if ( &v8[v16] != (char *)v9 || v51 > v11 )
              goto LABEL_68;
            memmove(v10, v8, v16);
            v14 = (_DWORD)v51 - (_DWORD)a1;
LABEL_69:
            if ( v14 >= 0 )
            {
LABEL_70:
              *a6 = v14;
              return 0LL;
            }
            return 3221225507LL;
          }
          v25 = *(_OWORD *)v8;
          v23 = (unsigned __int8 *)&v8[v16];
          *(_OWORD *)v10 = v25;
          v24 = &v10[v16];
LABEL_23:
          v26 = *(unsigned __int16 *)v23;
          v27 = (unsigned __int8 *)&v24[-v26];
          v8 = (char *)(v23 + 2);
          v28 = v15 & 0xF;
          if ( v28 == 15 )
          {
            v29 = 0LL;
            while ( 1 )
            {
              v30 = (unsigned __int8)*v8++;
              v29 += v30;
              if ( v8 > (char *)v9 - 4 )
                goto LABEL_68;
              if ( (_BYTE)v30 != 0xFF )
              {
                if ( v29 == -1 )
                  goto LABEL_68;
                v31 = v29 + 19;
                if ( &v24[v31] < v24 )
                  goto LABEL_68;
                if ( &v24[v31] >= v11 - 64 )
                  goto LABEL_83;
                if ( v27 < (unsigned __int8 *)a1 )
                  goto LABEL_68;
                goto LABEL_31;
              }
            }
          }
          v31 = v28 + 4;
          if ( &v24[v31] >= v11 - 64 )
          {
LABEL_83:
            v12 = (unsigned __int64)(v9 - 16);
LABEL_84:
            if ( v27 >= (unsigned __int8 *)a1 )
            {
              v57 = (unsigned __int64)&v24[v31];
              if ( v26 >= 8 )
              {
                v60 = *(_QWORD *)v27;
                v59 = (char *)(v27 + 8);
                *(_QWORD *)v24 = v60;
              }
              else
              {
                *v24 = *v27;
                v24[1] = v27[1];
                v24[2] = v27[2];
                v24[3] = v27[3];
                v58 = &v27[dword_1801913F8[v26]];
                *((_DWORD *)v24 + 1) = *(_DWORD *)v58;
                v59 = (char *)&v58[-dword_180191418[v26]];
              }
              v61 = v24 + 8;
              if ( v57 <= (unsigned __int64)(v11 - 12) )
              {
                *(_QWORD *)v61 = *(_QWORD *)v59;
                if ( v31 > 0x10 )
                {
                  v65 = v61 + 8;
                  v66 = v59 - v65;
                  do
                  {
                    *(_QWORD *)v65 = *(_QWORD *)&v65[v66 + 8];
                    v65 += 8;
                  }
                  while ( (unsigned __int64)v65 < v57 );
                }
                goto LABEL_100;
              }
              v62 = v11 - 7;
              if ( v57 <= (unsigned __int64)(v11 - 5) )
              {
                if ( v61 < v62 )
                {
                  v63 = v61;
                  do
                  {
                    *v63 = *(_QWORD *)((char *)v63 + v59 - v61);
                    ++v63;
                  }
                  while ( v63 < (_QWORD *)v62 );
                  v64 = v62 - v61;
                  v61 = v11 - 7;
                  v59 += v64;
                }
                while ( (unsigned __int64)v61 < v57 )
                  *v61++ = *v59++;
LABEL_100:
                v10 = (char *)v57;
LABEL_55:
                while ( 1 )
                {
                  v43 = (unsigned __int8)*v8++;
                  LOBYTE(v15) = v43;
                  v44 = v43;
                  v16 = v43 >> 4;
                  if ( v16 == 15 )
                    break;
                  if ( v10 > v13 || (unsigned __int64)v8 >= v12 )
                    goto LABEL_72;
                  v45 = *(_OWORD *)v8;
                  v46 = (unsigned __int8 *)&v8[v16];
                  v47 = v44 & 0xF;
                  v8 += v16 + 2;
                  *(_OWORD *)v10 = v45;
                  v26 = *(unsigned __int16 *)v46;
                  v24 = &v10[v16];
                  v27 = (unsigned __int8 *)&v24[-v26];
                  if ( v47 == 15 )
                    goto LABEL_77;
                  if ( v26 < 8 || v27 < (unsigned __int8 *)a1 )
                    goto LABEL_82;
                  *(_QWORD *)v24 = *(_QWORD *)v27;
                  *((_QWORD *)v24 + 1) = *((_QWORD *)v27 + 1);
                  *((_WORD *)v24 + 8) = *((_WORD *)v27 + 8);
                  v10 = &v24[v47 + 4];
                }
                v48 = 0LL;
                if ( v8 < (char *)v9 - 15 )
                {
                  while ( 1 )
                  {
                    v49 = (unsigned __int8)*v8++;
                    v48 += v49;
                    if ( v8 > (char *)v9 - 15 )
                      break;
                    if ( (_BYTE)v49 != 0xFF )
                    {
                      if ( v48 != -1 )
                      {
                        v16 = v48 + 15;
                        if ( &v10[v48 + 15] >= v10 && &v8[v16] >= v8 )
                          goto LABEL_72;
                      }
                      break;
                    }
                  }
                }
              }
            }
LABEL_68:
            v14 = v6 - (_DWORD)v8 - 1;
            goto LABEL_69;
          }
          if ( v27 < (unsigned __int8 *)a1 )
            goto LABEL_68;
          if ( v26 < 8 )
            break;
          *(_QWORD *)v24 = *(_QWORD *)v27;
          *((_QWORD *)v24 + 1) = *((_QWORD *)v27 + 1);
          *((_WORD *)v24 + 8) = *((_WORD *)v27 + 8);
          v10 = &v24[v31];
        }
LABEL_31:
        v32 = (unsigned __int8 *)&v24[v31];
        if ( v26 >= 0x10 )
        {
          do
          {
            *(_OWORD *)&v27[v26] = *(_OWORD *)v27;
            v42 = *((_OWORD *)v27 + 1);
            v27 += 32;
            *(_OWORD *)&v27[v26 - 16] = v42;
          }
          while ( &v27[v26] < v32 );
          goto LABEL_54;
        }
        if ( v26 == 1 )
        {
          memset_thunk_772440563353939046(&v67, *v27, 8uLL);
          v13 = v11 - 32;
        }
        else
        {
          if ( v26 == 2 )
          {
            LOWORD(v67) = *(_WORD *)v27;
            WORD1(v67) = v67;
            v38 = v67;
          }
          else
          {
            if ( v26 != 4 )
            {
              if ( v26 >= 8 )
              {
                v35 = *(_QWORD *)v27;
                v34 = v27 + 8;
                *(_QWORD *)v24 = v35;
              }
              else
              {
                _mm_lfence();
                *v24 = *v27;
                v24[1] = v27[1];
                v24[2] = v27[2];
                v24[3] = v27[3];
                v33 = &v27[dword_1801913F8[v26]];
                *((_DWORD *)v24 + 1) = *(_DWORD *)v33;
                v34 = &v33[-dword_180191418[v26]];
              }
              v36 = (unsigned __int8 *)(v24 + 8);
              v37 = v34 - v36;
              do
              {
                *(_QWORD *)v36 = *(_QWORD *)&v36[v37];
                v36 += 8;
              }
              while ( v36 < v32 );
              goto LABEL_54;
            }
            v38 = *(_DWORD *)v27;
            LODWORD(v67) = *(_DWORD *)v27;
          }
          HIDWORD(v67) = v38;
        }
        v39 = v67;
        *(_QWORD *)v24 = v67;
        v40 = (unsigned __int8 *)(v24 + 8);
        v41 = (unsigned __int64)(v32 - v40 + 7) >> 3;
        if ( v40 > v32 )
          v41 = 0LL;
        if ( v41 )
          memset64(v40, v39, v41);
LABEL_54:
        v10 = (char *)v32;
      }
    }
  }
  return 3221225507LL;
}
