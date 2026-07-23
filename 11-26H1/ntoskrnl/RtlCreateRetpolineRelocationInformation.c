/*
 * XREFs of RtlCreateRetpolineRelocationInformation @ 0x14046CA6C
 * Callers:
 *     MiCreateRetpolineRelocationInformation @ 0x140AA7894 (MiCreateRetpolineRelocationInformation.c)
 * Callees:
 *     RtlpCopyRetpolineRelocationBlockEntryArray @ 0x14046C99C (RtlpCopyRetpolineRelocationBlockEntryArray.c)
 *     RtlSizeOfRetpolineRelocationEntry @ 0x14046CEF8 (RtlSizeOfRetpolineRelocationEntry.c)
 *     RtlSizeOfRetpolineIndirectFixup @ 0x14046CF2C (RtlSizeOfRetpolineIndirectFixup.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlCreateRetpolineRelocationInformation(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        char *a6,
        __int64 a7,
        void *a8,
        unsigned int a9)
{
  unsigned __int64 v11; // r10
  size_t v13; // r8
  size_t v14; // rsi
  char *v15; // r14
  unsigned int v16; // r10d
  unsigned __int8 v17; // cl
  char *v18; // r13
  _DWORD *v19; // rdx
  unsigned __int64 v20; // r11
  _DWORD *v21; // r8
  _DWORD *v22; // r9
  unsigned __int64 v23; // rdi
  _DWORD *v24; // rbp
  unsigned int v25; // esi
  __int64 v26; // r12
  unsigned int v27; // r15d
  unsigned int v28; // eax
  char *v29; // rbx
  _WORD *v30; // rbp
  unsigned __int64 v31; // r14
  _WORD *v32; // rdi
  char *v33; // rsi
  size_t v34; // r13
  char *v35; // rsi
  unsigned __int64 v36; // r14
  _WORD *v37; // rdi
  size_t v38; // r12
  __int16 v39; // r10
  unsigned int v40; // r11d
  char *v41; // rdx
  char *v42; // r8
  char *v43; // r9
  __int64 v45; // rax
  int v46; // eax
  char *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // [rsp+30h] [rbp-98h]
  _DWORD *v51; // [rsp+38h] [rbp-90h]
  _DWORD *v52; // [rsp+40h] [rbp-88h]
  _DWORD *v53; // [rsp+48h] [rbp-80h]
  _DWORD *v54; // [rsp+50h] [rbp-78h]
  _DWORD *v55; // [rsp+58h] [rbp-70h]
  unsigned __int64 v56; // [rsp+60h] [rbp-68h]
  unsigned __int64 v57; // [rsp+68h] [rbp-60h]
  unsigned __int64 v58; // [rsp+70h] [rbp-58h]
  char *v59; // [rsp+80h] [rbp-48h]
  unsigned int v61; // [rsp+D8h] [rbp+10h]

  v11 = (unsigned __int64)a1 >> 12;
  v55 = 0LL;
  v13 = 4 * (a2 + 3 * v11);
  if ( (unsigned int)a7 < v13 )
    return 3221225507LL;
  v14 = 8 * v11;
  if ( a9 < 8 * v11 )
    return 3221225507LL;
  v15 = a6;
  memset_0(a6, 0, v13);
  memset_0(a8, 0, v14);
  v16 = 0;
  v17 = 0;
  v18 = 0LL;
  v61 = 0;
  if ( a3 )
  {
    v19 = (_DWORD *)(a3 + 12);
    v20 = a3 + 12 + *(unsigned int *)(a3 + 8);
  }
  else
  {
    v19 = 0LL;
    v20 = 0LL;
  }
  v56 = v20;
  v51 = v19;
  if ( a4 )
  {
    v21 = (_DWORD *)(a4 + 12);
    a4 += 12LL + *(unsigned int *)(a4 + 8);
  }
  else
  {
    v21 = 0LL;
  }
  v57 = a4;
  v52 = v21;
  if ( a5 )
  {
    v22 = (_DWORD *)(a5 + 12);
    v23 = a5 + 12 + *(unsigned int *)(a5 + 8);
  }
  else
  {
    v22 = 0LL;
    v23 = 0LL;
  }
  v58 = v23;
  v53 = v22;
  if ( a1 )
  {
    do
    {
      if ( (unsigned __int64)v19 < v20 && *v19 == v16 )
      {
        v45 = (unsigned int)v19[1];
        v24 = v19;
        v19 = (_DWORD *)((char *)v19 + v45);
        v51 = v19;
        v25 = v45 - 8;
      }
      else
      {
        v24 = 0LL;
        v25 = 0;
      }
      LOWORD(v50) = v25;
      if ( (unsigned __int64)v21 < a4 && *v21 == v16 )
      {
        v48 = (unsigned int)v21[1];
        v54 = v21;
        v21 = (_DWORD *)((char *)v21 + v48);
        v52 = v21;
        LODWORD(v26) = v48 - 8;
      }
      else
      {
        v54 = 0LL;
        LODWORD(v26) = 0;
      }
      if ( (unsigned __int64)v22 < v23 && *v22 == v16 )
      {
        v49 = (unsigned int)v22[1];
        v55 = v22;
        v22 = (_DWORD *)((char *)v22 + v49);
        v53 = v22;
        v27 = v49 - 8;
      }
      else
      {
        v27 = 0;
      }
      LODWORD(a7) = v27;
      if ( v17 || v25 || (_DWORD)v26 || v27 )
      {
        *((_WORD *)v15 + 3) = v17;
        v59 = v15;
        if ( v17 )
        {
          v28 = RtlSizeOfRetpolineRelocationEntry(v17);
          memmove(v15 + 8, v18, v28);
        }
        v18 = v15 + 12;
        v29 = v15 + 12;
        if ( v25 )
        {
          v30 = v24 + 2;
          v31 = (unsigned __int64)v30 + v25;
          v32 = v30;
          v33 = v29;
          if ( (unsigned __int64)v30 < v31 )
          {
            v34 = (unsigned int)RtlSizeOfRetpolineRelocationEntry(3LL);
            do
            {
              if ( (*v32 & 0xFFF) != 0 || v32 == v30 )
              {
                memmove(v33, v32, v34);
                v33 += v34;
              }
              v32 = (_WORD *)((char *)v32 + v34);
            }
            while ( (unsigned __int64)v32 < v31 );
            v18 = v29;
          }
          v50 = (unsigned int)((_DWORD)v33 - (_DWORD)v29);
          v29 += v50;
        }
        if ( (_DWORD)v26 )
        {
          v35 = v29;
          v36 = (unsigned __int64)v54 + (unsigned int)v26 + 8;
          v37 = v54 + 2;
          if ( (unsigned __int64)(v54 + 2) < v36 )
          {
            v38 = (unsigned int)RtlSizeOfRetpolineRelocationEntry(4LL);
            do
            {
              if ( (*v37 & 0xFFF) != 0 || v37 == (_WORD *)(v54 + 2) )
              {
                memmove(v35, v37, v38);
                v35 += v38;
              }
              v37 = (_WORD *)((char *)v37 + v38);
            }
            while ( (unsigned __int64)v37 < v36 );
          }
          v26 = (unsigned int)((_DWORD)v35 - (_DWORD)v29);
          v29 += v26;
        }
        if ( v27 )
        {
          RtlpCopyRetpolineRelocationBlockEntryArray(v29, 5u, (_WORD *)v55 + 4, v27, &a7);
          LOWORD(v27) = a7;
          v29 += (unsigned int)a7;
        }
        v39 = 4095;
        v15 = v29;
        *(_WORD *)a6 = v50;
        v40 = 4096;
        v41 = &v18[(unsigned __int16)v50];
        *((_WORD *)a6 + 1) = v26;
        v42 = &v41[(unsigned __int16)v26];
        *((_WORD *)a6 + 2) = v27;
        v43 = &v42[(unsigned __int16)v27];
        a6 = v29;
        while ( v18 < v41 )
        {
          if ( (*(_DWORD *)v18 & 0xFFFu) + 12 > 0x1000 )
          {
            v17 = 3;
            goto LABEL_43;
          }
          v18 += 4;
        }
        while ( v41 < v42 )
        {
          v46 = RtlSizeOfRetpolineIndirectFixup(v41);
          if ( (unsigned int)(unsigned __int16)(v39 & *(_WORD *)v47) + v46 > v40 )
          {
            v17 = 4;
            v18 = v47;
            goto LABEL_43;
          }
          v41 = v47 + 2;
        }
        while ( 1 )
        {
          if ( v42 >= v43 )
          {
            v17 = 0;
            v18 = 0LL;
            goto LABEL_43;
          }
          if ( (unsigned int)(unsigned __int16)(v39 & *(_WORD *)v42) + 6 > v40 )
            break;
          v42 += 2;
        }
        v17 = 5;
        v18 = v42;
LABEL_43:
        v16 = v61;
        v22 = v53;
        v20 = v56;
        a4 = v57;
        v23 = v58;
        *((_QWORD *)a8 + ((unsigned __int64)v61 >> 12)) = v59;
        v19 = v51;
        v21 = v52;
      }
      v16 += 4096;
      v61 = v16;
    }
    while ( v16 < a1 );
  }
  return 0LL;
}
