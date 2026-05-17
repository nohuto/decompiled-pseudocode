/*
 * XREFs of XpressBuildHuffmanEncodings @ 0x1800B9F30
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x1800B8590 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1800B9680 (RtlCompressBufferXpressHuffStandard.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall XpressBuildHuffmanEncodings(_QWORD *a1)
{
  unsigned __int8 *v2; // r13
  unsigned __int8 *v3; // rbx
  _DWORD *v4; // r8
  unsigned __int64 i; // rdx
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r12
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
  unsigned __int8 *v18; // rdx
  unsigned __int8 *v19; // rcx
  unsigned __int8 *v20; // r8
  unsigned __int8 *v21; // r10
  unsigned __int8 *v22; // rdi
  unsigned __int8 *v23; // r11
  unsigned __int8 *v24; // r9
  unsigned __int8 *v25; // rbp
  __int64 v26; // r10
  __int64 v27; // r9
  __int64 v28; // rdi
  _QWORD *v29; // r9
  __int64 v30; // rdx
  __int64 *v31; // r8
  __int64 j; // r10
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r9
  __int64 v36; // r11
  __int64 v37; // rbp
  unsigned __int64 v38; // r14
  char *v39; // rbx
  _BYTE *v40; // r10
  unsigned __int64 v41; // rax
  unsigned __int8 *v42; // r8
  unsigned int *v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // rdi
  unsigned __int64 *v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // r8
  char v50; // dl

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
      v49 = a1[258];
      v50 = 16;
      if ( (v49 & 1) == 0 )
        v50 = 1;
      *((_BYTE *)a1 + (a1[258] >> 1) + 31264) = v50;
      *((_DWORD *)a1 + v49) = 1;
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
        v21 = v19;
        v22 = v19;
        v23 = v20;
        v24 = v18;
        v25 = v19;
        if ( v18 == v3 && v20 == v19 )
          break;
        v19 += 24;
        if ( v18 == v3 || v20 < v19 && *(_QWORD *)v20 < *(_QWORD *)v18 )
        {
          v20 += 24;
          v24 = v23;
        }
        else
        {
          v18 += 24;
        }
        *((_QWORD *)v21 + 4) = v24;
        v26 = *(_QWORD *)v24;
        *(_QWORD *)v19 = *(_QWORD *)v24;
        if ( v18 == v3 || v20 < v19 && *(_QWORD *)v20 < *(_QWORD *)v18 )
        {
          *((_QWORD *)v22 + 5) = v20;
          v27 = v26 + *(_QWORD *)v20;
          v20 += 24;
        }
        else
        {
          *((_QWORD *)v22 + 5) = v18;
          v27 = v26 + *(_QWORD *)v18;
          v18 += 24;
        }
        *((_QWORD *)v25 + 3) = v27;
      }
      v28 = 0LL;
      v29 = a1 + 3331;
      v30 = 0LL;
      v31 = a1 + 3332;
      for ( j = 0LL; ; --j )
      {
        while ( *((_QWORD *)v19 + 1) )
        {
          ++v30;
          ++j;
          *v31 = v30;
          v31 += 2;
          *v29 = *((_QWORD *)v19 + 1);
          v29 += 2;
          v19 = (unsigned __int8 *)*((_QWORD *)v19 + 2);
        }
        v33 = *((_QWORD *)v19 + 2);
        *((_QWORD *)v19 + 1) = v30;
        *((_BYTE *)a1 + v33 + 28704) = v30;
        if ( !j )
          break;
        v19 = (unsigned __int8 *)*(v29 - 2);
        v31 -= 2;
        v29 -= 2;
        v30 = *v31;
      }
      v34 = a1[257];
      if ( v34 <= 0xF )
        break;
      v47 = a1 + 256;
      if ( v2 < v3 )
      {
        do
        {
          v48 = *v47 + 1;
          v47[1] = 0LL;
          *v47 = v48 >> 1;
          v47 += 3;
        }
        while ( v47 < (unsigned __int64 *)v3 );
      }
    }
    v35 = *((_QWORD *)v3 - 2);
    v36 = 0LL;
    v37 = 0LL;
    v38 = a1[257];
    if ( v35 <= v34 )
    {
      v39 = (char *)a1 + 2;
      do
      {
        v40 = a1 + 3908;
        v41 = 0LL;
        v42 = (unsigned __int8 *)(a1 + 3588);
        v43 = (unsigned int *)(a1 + 3652);
        do
        {
          if ( *v42 == v35 )
          {
            v44 = *v43;
            *v40 |= v35;
            v28 += v44;
            *(_WORD *)&v39[2 * v41] = v36++;
            LOWORD(a1[v41]) = v35;
          }
          if ( v42[1] == v35 )
          {
            v28 += v43[1];
            *v40 |= 16 * (_BYTE)v35;
            *(_WORD *)&v39[2 * v41 + 4] = v36++;
            WORD2(a1[v41]) = v35;
          }
          else
          {
            v39 = (char *)a1 + 2;
          }
          ++v40;
          ++v41;
          v42 += 2;
          v43 += 2;
        }
        while ( v41 < 256 );
        v45 = v35 * v28;
        v36 *= 2LL;
        ++v35;
        v37 += v45;
        v28 = 0LL;
      }
      while ( v35 <= v38 );
    }
    return v37;
  }
}
