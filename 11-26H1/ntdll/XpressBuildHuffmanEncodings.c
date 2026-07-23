/*
 * XREFs of XpressBuildHuffmanEncodings @ 0x1800B7450
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x1800B5AB0 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1800B6BA0 (RtlCompressBufferXpressHuffStandard.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall XpressBuildHuffmanEncodings(_QWORD *a1)
{
  unsigned __int8 *v2; // r15
  unsigned __int8 *v3; // rbx
  _DWORD *v4; // r8
  unsigned __int64 i; // rdx
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r14
  _WORD *v8; // rcx
  __int64 v9; // rdx
  unsigned __int8 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r11
  unsigned __int16 *v13; // r10
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  char *v16; // rcx
  __int64 v17; // rdx
  unsigned __int8 *v18; // rcx
  unsigned __int8 *v19; // r8
  unsigned __int8 *v20; // rdx
  unsigned __int8 *v21; // r10
  unsigned __int8 *v22; // r9
  __int64 v23; // r10
  __int64 v24; // r9
  __int64 v25; // rcx
  _QWORD *v26; // r9
  __int64 v27; // r10
  __int64 *j; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // r9
  __int64 v32; // r11
  __int64 v33; // rbp
  char *v34; // rbx
  __int64 v35; // rdi
  _BYTE *v36; // r10
  unsigned __int64 v37; // rax
  unsigned __int8 *v38; // r8
  unsigned int *v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // rdi
  unsigned __int64 *v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // r8
  char v46; // dl

  memset_thunk_772440563353939046(a1 + 3331, 0, 0x202uLL);
  memset_thunk_772440563353939046((char *)a1 + 27162, 0, 0x202uLL);
  v2 = (unsigned __int8 *)(a1 + 256);
  v3 = (unsigned __int8 *)(a1 + 256);
  memset_thunk_772440563353939046(a1 + 3588, 0, 0x200uLL);
  v4 = a1 + 3652;
  for ( i = 0LL; i < 0x200; ++i )
  {
    v6 = (unsigned int)*v4;
    if ( *v4 )
    {
      *(_QWORD *)v3 = v6;
      ++*((_WORD *)a1 + (unsigned __int8)v6 + 13325);
      ++*((_WORD *)a1 + (v6 >> 8) + 13582);
      *((_QWORD *)v3 + 1) = 0LL;
      *((_QWORD *)v3 + 2) = i;
      v3 += 24;
    }
    ++v4;
  }
  memset_thunk_772440563353939046(a1 + 3908, 0, 0x100uLL);
  v7 = a1 + 259;
  if ( v3 <= (unsigned __int8 *)a1 + 2072 )
  {
    if ( v3 == v2 )
    {
      return 0LL;
    }
    else
    {
      v45 = a1[258];
      v46 = 16;
      if ( (v45 & 1) == 0 )
        v46 = 1;
      *((_BYTE *)a1 + (a1[258] >> 1) + 31264) = v46;
      *((_DWORD *)a1 + v45) = 1;
      return *(_QWORD *)v2;
    }
  }
  else
  {
    v8 = (_WORD *)a1 + 13325;
    v9 = 255LL;
    do
    {
      *v8 += *(v8 - 1);
      v8[257] += v8[256];
      ++v8;
      --v9;
    }
    while ( v9 );
    v10 = (unsigned __int8 *)(a1 + 256);
    if ( v2 < v3 )
    {
      do
      {
        *((_WORD *)a1 + *((unsigned __int16 *)a1 + *v10 + 13324) + 13838) = *((_WORD *)v10 + 8);
        v11 = *v10;
        v10 += 24;
        ++*((_WORD *)a1 + v11 + 13324);
      }
      while ( v10 < v3 );
    }
    v12 = (v3 - (unsigned __int8 *)a1 - 2048) / 24;
    if ( v12 )
    {
      v13 = (unsigned __int16 *)a1 + 13838;
      do
      {
        v14 = *v13++;
        v15 = *((unsigned int *)a1 + v14 + 7304);
        v16 = (char *)a1 + 2 * (v15 >> 8);
        v17 = *((unsigned __int16 *)v16 + 13581);
        *((_WORD *)v16 + 13581) = v17 + 1;
        a1[3 * v17 + 258] = v14;
        a1[3 * v17 + 256] = v15;
        --v12;
      }
      while ( v12 );
    }
    while ( 1 )
    {
      *((_QWORD *)v3 + 1) = v2;
      v18 = (unsigned __int8 *)(a1 + 262);
      *((_QWORD *)v3 + 2) = v7;
      v19 = v3;
      v20 = v3;
      *(_QWORD *)v3 = *v7 + *(_QWORD *)v2;
      while ( 1 )
      {
        v21 = v20;
        v22 = v18;
        if ( v18 == v3 && v20 == v19 )
          break;
        v19 += 24;
        if ( v18 == v3 || v20 < v19 && *(_QWORD *)v20 < *(_QWORD *)v18 )
        {
          v20 += 24;
          v22 = v21;
        }
        else
        {
          v18 += 24;
        }
        *((_QWORD *)v19 + 1) = v22;
        v23 = *(_QWORD *)v22;
        *(_QWORD *)v19 = *(_QWORD *)v22;
        if ( v18 == v3 || v20 < v19 && *(_QWORD *)v20 < *(_QWORD *)v18 )
        {
          *((_QWORD *)v19 + 2) = v20;
          v24 = v23 + *(_QWORD *)v20;
          v20 += 24;
        }
        else
        {
          *((_QWORD *)v19 + 2) = v18;
          v24 = v23 + *(_QWORD *)v18;
          v18 += 24;
        }
        *(_QWORD *)v19 = v24;
      }
      v25 = 0LL;
      v26 = a1 + 3331;
      v27 = 0LL;
      for ( j = a1 + 3332; ; v25 = *j )
      {
        while ( *((_QWORD *)v19 + 1) )
        {
          ++v25;
          ++v27;
          *j = v25;
          j += 2;
          *v26 = *((_QWORD *)v19 + 1);
          v26 += 2;
          v19 = (unsigned __int8 *)*((_QWORD *)v19 + 2);
        }
        v29 = *((_QWORD *)v19 + 2);
        *((_QWORD *)v19 + 1) = v25;
        *((_BYTE *)a1 + v29 + 28704) = v25;
        if ( !v27 )
          break;
        v19 = (unsigned __int8 *)*(v26 - 2);
        j -= 2;
        --v27;
        v26 -= 2;
      }
      v30 = a1[257];
      if ( v30 <= 0xF )
        break;
      v43 = a1 + 256;
      if ( v2 < v3 )
      {
        do
        {
          v44 = *v43 + 1;
          v43[1] = 0LL;
          *v43 = v44 >> 1;
          v43 += 3;
        }
        while ( v43 < (unsigned __int64 *)v3 );
      }
    }
    v31 = *((_QWORD *)v3 - 2);
    v32 = 0LL;
    v33 = 0LL;
    if ( v31 <= v30 )
    {
      v34 = (char *)a1 + 2;
      do
      {
        v35 = 0LL;
        v36 = a1 + 3908;
        v37 = 0LL;
        v38 = (unsigned __int8 *)(a1 + 3588);
        v39 = (unsigned int *)(a1 + 3652);
        do
        {
          if ( *v38 == v31 )
          {
            v40 = *v39;
            *v36 |= v31;
            v35 += v40;
            *(_WORD *)&v34[2 * v37] = v32++;
            LOWORD(a1[v37]) = v31;
          }
          if ( v38[1] == v31 )
          {
            v35 += v39[1];
            *v36 |= 16 * (_BYTE)v31;
            *(_WORD *)&v34[2 * v37 + 4] = v32++;
            WORD2(a1[v37]) = v31;
          }
          else
          {
            v34 = (char *)a1 + 2;
          }
          ++v36;
          ++v37;
          v38 += 2;
          v39 += 2;
        }
        while ( v37 < 256 );
        v41 = v31 * v35;
        v32 *= 2LL;
        ++v31;
        v33 += v41;
      }
      while ( v31 <= v30 );
    }
    return v33;
  }
}
