/*
 * XREFs of RtlDecompressBufferXpressHuff @ 0x1800B82F0
 * Callers:
 *     <none>
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x1800B88D0 (XpressBuildHuffmanDecodingTable.c)
 */

__int64 __fastcall RtlDecompressBufferXpressHuff(
        _BYTE *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int8 *v7; // rbp
  unsigned __int64 v9; // rbx
  _BYTE *v10; // rsi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdi
  _BYTE *v13; // r13
  int v14; // r8d
  unsigned __int16 *v15; // rbp
  int v16; // eax
  __int64 v17; // r9
  unsigned int v18; // r8d
  unsigned __int64 v19; // r14
  __int16 v20; // ax
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  __int16 v23; // di
  __int64 v24; // r10
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  _BYTE *v29; // rcx
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  _DWORD *v33; // rcx
  unsigned __int64 v34; // rdx
  char v35; // al
  unsigned __int64 v36; // rdx
  int v37; // ecx
  unsigned __int64 v38; // rdx
  __int16 v39; // di
  __int64 v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  unsigned __int64 v44; // rdx
  unsigned __int64 v46; // rdx
  _BYTE *v47; // [rsp+90h] [rbp+38h]

  v7 = a3;
  if ( !a7 )
    return 3221225704LL;
  v9 = (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = a1;
  v11 = (unsigned __int64)&a3[a4];
  v12 = (unsigned __int64)&a1[a2];
  v47 = (_BYTE *)v12;
LABEL_3:
  if ( (__int64)(v11 - (_QWORD)v7) < 260 )
  {
    if ( v10 != (_BYTE *)v12 )
      return 3221226050LL;
    goto LABEL_79;
  }
  if ( (unsigned int)XpressBuildHuffmanDecodingTable(v9, v7) )
    return 3221226050LL;
  v13 = (_BYTE *)v12;
  v14 = *((unsigned __int16 *)v7 + 128);
  v15 = (unsigned __int16 *)(v7 + 258);
  v16 = *v15;
  v17 = 16LL;
  v7 = (unsigned __int8 *)(v15 + 1);
  v18 = v16 + (v14 << 16);
  if ( (unsigned __int64)(v10 + 0x10000) <= v12 )
    v13 = v10 + 0x10000;
  v19 = (unsigned __int64)(v13 - 188);
  if ( v10 < v13 - 188 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v20 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
          if ( v20 <= 0 )
          {
            v18 <<= 10;
            v17 -= 10LL;
            do
            {
              --v17;
              v32 = (unsigned __int64)v18 >> 31;
              v18 *= 2;
              v20 = *(_WORD *)(v9 + 2LL * (__int16)(v32 - v20) + 3104);
            }
            while ( v20 <= 0 );
          }
          else
          {
            v21 = v20 & 0xF;
            v18 <<= v21;
            v17 -= v21;
          }
          v22 = (unsigned __int16)v20 >> 4;
          v23 = v22 - 256;
          if ( v17 < 0 )
          {
            if ( (unsigned __int64)v10 >= v19 )
              goto LABEL_65;
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v30 = *(unsigned __int16 *)v7;
            v7 += 2;
            v18 += v30 << -(char)v17;
            v17 += 16LL;
          }
          if ( v23 >= 0 )
            break;
          *v10++ = v22;
        }
        if ( v22 == 256 && (unsigned __int64)v7 >= v11 && v10 == v47 )
          goto LABEL_79;
        v24 = (v22 - 256) / 16;
        v25 = (v22 - 256) % 16;
        if ( v25 == 15 )
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v34 = *v7++;
          if ( v34 == 255 )
          {
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v36 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v36 )
            {
              if ( (unsigned __int64)(v7 + 3) >= v11 )
                return 3221226050LL;
              v36 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v36 < 0xF || &v10[v36 + 3] < v10 )
              return 3221226050LL;
            v34 = v36 - 15;
          }
          v25 = v34 + 15;
        }
        v26 = v25;
        v27 = v25 + 3;
        v28 = (1LL << v24) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v24) >> 1);
        v18 <<= v24;
        v17 -= v24;
        if ( v17 < 0 )
        {
          if ( (unsigned __int64)v10 >= v19 )
            goto LABEL_67;
          if ( (unsigned __int64)(v7 + 1) >= v11 )
            return 3221226050LL;
          v31 = *(unsigned __int16 *)v7;
          v7 += 2;
          v18 += v31 << -(char)v17;
          v17 += 16LL;
        }
        v29 = &v10[-v28];
        if ( &v10[-v28] < a1 )
          return 3221226050LL;
        if ( v28 < 4 )
          break;
LABEL_17:
        *(_DWORD *)v10 = *(_DWORD *)v29;
        *((_DWORD *)v10 + 1) = *((_DWORD *)v29 + 1);
        if ( v27 >= 9 )
        {
          v10 += 8;
          v33 = v29 + 8;
          v27 -= 8LL;
          while ( (unsigned __int64)v10 < v19 )
          {
            *(_DWORD *)v10 = *v33;
            *((_DWORD *)v10 + 1) = v33[1];
            *((_DWORD *)v10 + 2) = v33[2];
            *((_DWORD *)v10 + 3) = v33[3];
            if ( v27 < 0x11 )
              goto LABEL_18;
            v10 += 16;
            v33 += 4;
            v27 -= 16LL;
          }
          if ( &v10[v27] <= v47 )
          {
            qmemcpy(v10, v33, v27);
            v10 += v27;
            goto LABEL_59;
          }
          return 3221226050LL;
        }
LABEL_18:
        v10 += v27;
      }
      *v10 = *v29;
      if ( v28 == 1 )
      {
        v10[1] = *v29;
        v35 = *v29;
      }
      else
      {
        v10[1] = v29[1];
        if ( v28 == 2 )
        {
          v27 -= 2LL;
          v10 += 2;
          goto LABEL_39;
        }
        v35 = v29[2];
      }
      v10[2] = v35;
      v27 = v26;
      v10 += 3;
LABEL_39:
      if ( v27 )
        goto LABEL_17;
    }
  }
  while ( 1 )
  {
LABEL_59:
    if ( v10 >= v13 )
    {
      v12 = (unsigned __int64)v47;
      goto LABEL_3;
    }
    v39 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
    if ( v39 <= 0 )
    {
      v18 <<= 10;
      v17 -= 10LL;
      do
      {
        --v17;
        v43 = (unsigned __int64)v18 >> 31;
        v18 *= 2;
        v39 = *(_WORD *)(v9 + 2LL * (__int16)(v43 - v39) + 3104);
      }
      while ( v39 <= 0 );
    }
    else
    {
      v40 = v39 & 0xF;
      v18 <<= v40;
      v17 -= v40;
    }
    v23 = ((unsigned __int16)v39 >> 4) - 256;
    if ( v17 < 0 )
    {
LABEL_65:
      if ( (unsigned __int64)(v7 + 1) < v11 )
      {
        v41 = *(unsigned __int16 *)v7;
        v7 += 2;
        v18 += v41 << -(char)v17;
        v17 += 16LL;
        goto LABEL_63;
      }
      return 3221226050LL;
    }
LABEL_63:
    if ( v23 >= 0 )
      break;
    *v10++ = v23;
  }
  if ( !v23 && v10 == v47 && (unsigned __int64)v7 >= v11 )
  {
LABEL_79:
    *a6 = (_DWORD)v10 - (_DWORD)a1;
    return 0LL;
  }
  v37 = v23 / 16;
  v38 = v23 % 16;
  if ( v38 != 15 )
    goto LABEL_55;
  if ( (unsigned __int64)v7 >= v11 )
    return 3221226050LL;
  v44 = *v7++;
  if ( v44 == 255 )
  {
    if ( (unsigned __int64)(v7 + 1) >= v11 )
      return 3221226050LL;
    v46 = *(unsigned __int16 *)v7;
    v7 += 2;
    if ( !v46 )
    {
      if ( (unsigned __int64)(v7 + 3) >= v11 )
        return 3221226050LL;
      v46 = *(unsigned int *)v7;
      v7 += 4;
    }
    if ( v46 >= 0xF && &v10[v46 + 3] >= v10 )
    {
      v44 = v46 - 15;
      goto LABEL_74;
    }
  }
  else
  {
LABEL_74:
    v38 = v44 + 15;
LABEL_55:
    v27 = v38 + 3;
    v28 = (1LL << v37) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v37) >> 1);
    v18 <<= v37;
    v17 -= v37;
    if ( v17 < 0 )
    {
LABEL_67:
      if ( (unsigned __int64)(v7 + 1) >= v11 )
        return 3221226050LL;
      v42 = *(unsigned __int16 *)v7;
      v7 += 2;
      v18 += v42 << -(char)v17;
      v17 += 16LL;
    }
    if ( &v10[-v28] >= a1 && &v10[v27] <= v47 )
    {
      qmemcpy(v10, &v10[-v28], v27);
      v10 += v27;
      goto LABEL_59;
    }
  }
  return 3221226050LL;
}
