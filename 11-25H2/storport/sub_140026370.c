/*
 * XREFs of sub_140026370 @ 0x140026370
 * Callers:
 *     sub_140050330 @ 0x140050330 (sub_140050330.c)
 *     sub_1400537EC @ 0x1400537EC (sub_1400537EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140026370(int *a1, __int64 a2)
{
  char v2; // r10
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  char v8; // r9
  int v9; // esi
  unsigned int v10; // r15d
  _QWORD *v11; // rdi
  unsigned int *v12; // r12
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ecx
  int *v18; // rax
  int v19; // edx
  __int64 v20; // r14
  int v21; // r15d
  __int64 v22; // rsi
  char *v23; // rcx
  __int64 v24; // rsi
  char *v25; // rax
  __int64 v26; // rsi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  char *v31; // rax
  unsigned int v32; // r8d
  unsigned int v33; // r9d
  unsigned int *v34; // r10
  __int64 v35; // rdi
  char *v36; // rcx
  __int64 v37; // rdi
  char *v38; // r8
  unsigned int v39; // edi
  unsigned int v40; // r11d
  unsigned int *v41; // r9
  char v42; // al
  __int64 v43; // rax
  unsigned __int64 v44; // rsi
  __int64 v45; // rax
  unsigned __int64 v46; // rdi
  _QWORD *v47; // [rsp+30h] [rbp-48h]
  __int64 v48; // [rsp+38h] [rbp-40h]
  int v49; // [rsp+88h] [rbp+10h]
  unsigned int v50; // [rsp+90h] [rbp+18h]

  v2 = 0;
  if ( !*(_QWORD *)(a2 + 8) )
    return 0LL;
  v5 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v7 = v6;
  v8 = *(_BYTE *)(v6 + 2);
  if ( v8 != 40 )
  {
    v11 = *(_QWORD **)(v6 + 48);
    v10 = *(unsigned __int8 *)(v6 + 2);
    v9 = *(_DWORD *)(v6 + 12);
    v47 = (_QWORD *)(v6 + 24);
    v48 = *(_QWORD *)(v6 + 24);
    if ( !v8 )
      v2 = *(_BYTE *)(v6 + 72);
    goto LABEL_14;
  }
  v9 = *(_DWORD *)(v6 + 24);
  v10 = *(_DWORD *)(v6 + 20);
  v11 = *(_QWORD **)(v6 + 96);
  v47 = (_QWORD *)(v6 + 24);
  v48 = *(_QWORD *)(v6 + 64);
  if ( v10 )
    goto LABEL_14;
  v49 = 0;
  v50 = *(_DWORD *)(v6 + 56);
  if ( !v50 )
    goto LABEL_14;
  v12 = (unsigned int *)(v6 + 120);
  while ( 1 )
  {
    v13 = *v12;
    if ( (unsigned int)v13 < 0x80 )
      goto LABEL_10;
    v14 = *(unsigned int *)(v6 + 16);
    if ( (unsigned int)v13 >= (unsigned int)v14 )
      goto LABEL_10;
    v15 = (unsigned int)v13;
    v16 = v6 + v13;
    if ( *(_DWORD *)v16 == 64 )
    {
      if ( v15 + 40 <= v14 )
      {
        v30 = v16;
        if ( !*(_BYTE *)(v16 + 10) )
          goto LABEL_14;
LABEL_47:
        v31 = (char *)(v30 + 24);
        goto LABEL_48;
      }
      goto LABEL_10;
    }
    if ( *(_DWORD *)v16 != 65 )
      break;
    if ( v15 + 56 <= v14 )
    {
      v30 = v16;
      if ( !*(_BYTE *)(v16 + 10) )
        goto LABEL_14;
      goto LABEL_47;
    }
LABEL_10:
    ++v12;
    if ( ++v49 >= v50 )
      goto LABEL_14;
  }
  if ( *(_DWORD *)v16 != 66 || v15 + 40 > v14 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v16 + 12) )
    goto LABEL_14;
  v31 = (char *)(v16 + 32);
LABEL_48:
  if ( v31 )
    v2 = *v31;
LABEL_14:
  if ( (v9 & 0xC0) == 0 || !v48 && !v11[13] )
    return 0LL;
  v17 = *a1;
  if ( *a1 == 1094997074 )
  {
    v18 = a1 + 94;
  }
  else
  {
    v18 = a1 + 42;
    if ( v17 != 1314275652 )
      v18 = 0LL;
  }
  if ( v10 <= 0x17 && (v19 = 8389124, _bittest(&v19, v10))
    || v18
    && ((v42 = *((_BYTE *)v18 + 97), v42 == 3) || (unsigned __int8)(v42 - 1) <= 1u && (v10 || ((v2 - 8) & 0x5D) != 0)) )
  {
    v20 = v11[13];
    v21 = 32;
    v22 = v11[23];
    if ( *(_BYTE *)(a2 + 64) )
      v21 = 16;
    if ( (*(_BYTE *)(v20 + 10) & 5) != 0 )
      v23 = *(char **)(v20 + 24);
    else
      v23 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v20, 0, MmCached, 0LL, 0, v21 | 0x40000000u);
    if ( v23 )
    {
      if ( v22 )
        v24 = v22 - *(unsigned int *)(v20 + 44) - *(_QWORD *)(v20 + 32);
      else
        v24 = 0LL;
      v25 = &v23[v24];
      if ( *(_BYTE *)(v7 + 2) == 40 )
        *(_QWORD *)(v7 + 64) = v25;
      else
        *(_QWORD *)(v7 + 24) = v25;
      v26 = v11[17];
      if ( !v26 )
        return 0LL;
      v35 = v11[24];
      if ( (*(_BYTE *)(v26 + 10) & 5) != 0 )
        v36 = *(char **)(v26 + 24);
      else
        v36 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v26, 0, MmCached, 0LL, 0, v21 | 0x40000000u);
      if ( v36 )
      {
        if ( v35 )
          v37 = v35 - *(unsigned int *)(v26 + 44) - *(_QWORD *)(v26 + 32);
        else
          v37 = 0LL;
        v38 = &v36[v37];
        if ( *(_BYTE *)(v7 + 2) == 40 && (*(_BYTE *)(v7 + 24) & 0xC0) == 0xC0 )
        {
          v39 = *(_DWORD *)(v7 + 56);
          v40 = 0;
          if ( v39 )
          {
            v41 = (unsigned int *)(v7 + 120);
            while ( 1 )
            {
              v43 = *v41;
              if ( (unsigned int)v43 >= 0x80 )
              {
                v44 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v43 <= (unsigned int)v44 && *(_DWORD *)(v43 + v7) == 1 && v43 + 24 <= v44 )
                  break;
              }
              ++v40;
              ++v41;
              if ( v40 >= v39 )
                goto LABEL_67;
            }
            v5 = v43 + v7;
          }
        }
LABEL_67:
        *(_QWORD *)(v5 + 16) = v38;
        return 0LL;
      }
    }
    return 3221225626LL;
  }
  if ( v17 == 1094997074 )
  {
    v28 = *((unsigned __int8 *)a1 + 4370);
  }
  else
  {
    if ( v17 != 1314275652 )
      return 0LL;
    v28 = ((unsigned int)a1[36] >> 12) & 1;
  }
  if ( !v28 )
    return 0LL;
  if ( v8 != 40 )
  {
    *v47 = 0LL;
    return 0LL;
  }
  v29 = 0LL;
  if ( (*(_BYTE *)v47 & 0xC0) == 0xC0 )
  {
    v32 = *(_DWORD *)(v7 + 56);
    v33 = 0;
    if ( v32 )
    {
      v34 = (unsigned int *)(v7 + 120);
      while ( 1 )
      {
        v45 = *v34;
        if ( (unsigned int)v45 >= 0x80 )
        {
          v46 = *(unsigned int *)(v7 + 16);
          if ( (unsigned int)v45 <= (unsigned int)v46 && *(_DWORD *)(v45 + v7) == 1 && v45 + 24 <= v46 )
            break;
        }
        ++v33;
        ++v34;
        if ( v33 >= v32 )
          goto LABEL_43;
      }
      v29 = v45 + v7;
    }
  }
LABEL_43:
  *(_QWORD *)(v7 + 64) = 0LL;
  if ( !v29 )
    return 0LL;
  *(_QWORD *)(v29 + 16) = 0LL;
  return 0LL;
}
