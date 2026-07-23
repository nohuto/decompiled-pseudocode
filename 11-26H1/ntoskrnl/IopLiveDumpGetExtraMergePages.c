/*
 * XREFs of IopLiveDumpGetExtraMergePages @ 0x1405D23E4
 * Callers:
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x1405D583C (IopLiveDumpWriteDumpFileWithExtraPages.c)
 * Callees:
 *     <none>
 */

char __fastcall IopLiveDumpGetExtraMergePages(_QWORD *a1, __int64 a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v5; // r14
  _DWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rbp
  __int64 v10; // r11
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rtt
  __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // r13
  unsigned int v20; // r9d
  char v21; // r11
  int v22; // r8d
  int v23; // r15d
  bool v24; // cf
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  int v27; // ecx
  __int64 v29; // rcx
  __int64 v30; // [rsp+0h] [rbp-68h]
  unsigned __int64 v31; // [rsp+8h] [rbp-60h]
  unsigned __int64 v32; // [rsp+10h] [rbp-58h]

  v5 = a1[24];
  v6 = a4;
  v7 = a1[30];
  v9 = a1[25];
  v10 = a1[34];
  if ( v7 == v5 && v10 == v9 )
  {
LABEL_36:
    *v6 = 0;
    return 0;
  }
  v11 = v5 - v7;
  v12 = a1[27];
  v13 = v9 - v10;
  v14 = a1[28];
  v15 = 0LL;
  v16 = 0LL;
  v32 = v14 % BufferChunkSizeInBytes;
  v17 = 0LL;
  v18 = a1[32] % (unsigned __int64)BufferChunkSizeInBytes;
  v30 = v12 + v14 / BufferChunkSizeInBytes;
  v31 = v18;
  v19 = v12 + a1[32] / (unsigned __int64)BufferChunkSizeInBytes;
  v20 = 0;
  if ( (BufferChunkSizeInBytes - v32) >> 12 <= v11 )
    v11 = (BufferChunkSizeInBytes - v32) >> 12;
  v21 = 1;
  if ( (BufferChunkSizeInBytes - v18) >> 12 <= v13 )
    v13 = (BufferChunkSizeInBytes - v18) >> 12;
  while ( 1 )
  {
    if ( v13 )
    {
      v22 = 1;
      if ( v20 <= 1 )
        v16 = *(_QWORD *)((a1[33] + 8 * v15) % (unsigned __int64)BufferChunkSizeInBytes
                        + *(_QWORD *)(a1[94]
                                    + 8 * ((a1[33] + 8 * v15) / (unsigned __int64)BufferChunkSizeInBytes + a1[27]))) >> 12;
    }
    else
    {
      v22 = 0;
    }
    if ( v11 )
    {
      v23 = 1;
      if ( (v20 & 0xFFFFFFFD) != 0 )
        goto LABEL_19;
      v17 = *(_QWORD *)((a1[29] + 8 * v15) % (unsigned __int64)BufferChunkSizeInBytes
                      + *(_QWORD *)(a1[94] + 8
                                           * ((a1[29] + 8 * v15) / (unsigned __int64)BufferChunkSizeInBytes + a1[27]))) >> 12;
    }
    else
    {
      v23 = 0;
    }
    if ( !v20 )
    {
      if ( !v23 )
      {
        if ( !v22 )
          goto LABEL_34;
        v20 = 1;
        goto LABEL_30;
      }
      if ( !v22 )
      {
        v20 = 2;
        goto LABEL_30;
      }
      v20 = 2 - (v16 < v17);
    }
LABEL_19:
    if ( v20 != 1 )
      break;
    if ( !v22 )
      goto LABEL_34;
    if ( v23 )
    {
      v24 = v17 < v16;
      goto LABEL_29;
    }
LABEL_30:
    if ( v20 == 1 )
    {
      *(_QWORD *)(a2 + 8 * v15) = v16;
      v25 = a1[80];
      v26 = v16 >> 3;
      v27 = *(char *)((v16 >> 3) + v25) | (1 << (v16 & 7));
      --v13;
    }
    else
    {
      *(_QWORD *)(a2 + 8 * v15) = v17;
      v25 = a1[78];
      v26 = v17 >> 3;
      v27 = *(char *)((v17 >> 3) + v25) | (1 << (v17 & 7));
      --v11;
    }
    *(_BYTE *)(v26 + v25) = v27;
    v15 = (unsigned int)(v15 + 1);
  }
  if ( !v23 )
    goto LABEL_34;
  if ( !v22 )
    goto LABEL_30;
  v24 = v16 < v17;
LABEL_29:
  if ( !v24 )
    goto LABEL_30;
LABEL_34:
  if ( !(_DWORD)v15 )
  {
    v6 = a4;
    goto LABEL_36;
  }
  v29 = a1[94];
  if ( v20 == 1 )
  {
    *a5 = v19;
    *a3 = *(_QWORD *)(v29 + 8 * v19) + v31;
    if ( v13 || a1[35] == v19 )
      v21 = 0;
    a1[34] += (unsigned int)v15;
    a1[32] += (unsigned int)((_DWORD)v15 << 12);
    a1[33] += 8 * v15;
  }
  else
  {
    *a5 = v30;
    *a3 = *(_QWORD *)(v29 + 8 * v30) + v32;
    if ( v11 || a1[31] == v30 )
      v21 = 0;
    a1[30] += (unsigned int)v15;
    a1[28] += (unsigned int)((_DWORD)v15 << 12);
    a1[29] += 8 * v15;
  }
  *a4 = v15;
  return v21;
}
