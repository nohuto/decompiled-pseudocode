/*
 * XREFs of RtlDecompressBufferXpressHuff @ 0x1403C8480
 * Callers:
 *     <none>
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x1403C8A30 (XpressBuildHuffmanDecodingTable.c)
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
  unsigned __int8 *v7; // rbx
  unsigned __int64 v9; // rbp
  _BYTE *v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  _BYTE *v13; // r13
  int v14; // r8d
  unsigned __int16 *v15; // rbx
  int v16; // eax
  __int64 v17; // r9
  unsigned int v18; // r8d
  unsigned __int64 v19; // r14
  __int16 v20; // si
  __int64 v21; // rcx
  unsigned __int16 v22; // si
  __int16 v23; // ax
  int v24; // ecx
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r10
  int v30; // eax
  _BYTE *v31; // rsi
  int v32; // eax
  _DWORD *v33; // rsi
  unsigned __int64 v34; // rdx
  int v35; // edx
  char v36; // al
  _BYTE *v38; // r11
  int v39; // eax
  int v40; // ecx
  unsigned __int64 v41; // rdx
  __int16 v42; // ax
  __int64 v43; // rcx
  int v44; // edx
  int v45; // ecx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  _BYTE *v49; // [rsp+90h] [rbp+38h]

  v7 = a3;
  if ( !a7 )
    return 3221225704LL;
  v9 = (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = a1;
  v11 = (unsigned __int64)&a3[a4];
  v12 = (unsigned __int64)&a1[a2];
  v49 = (_BYTE *)v12;
LABEL_3:
  if ( (__int64)(v11 - (_QWORD)v7) < 260 )
  {
    if ( v10 != (_BYTE *)v12 )
      return 3221226050LL;
    goto LABEL_45;
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
            {
              v38 = v49;
              goto LABEL_62;
            }
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v35 = *(unsigned __int16 *)v7;
            v7 += 2;
            v18 += v35 << -(char)v17;
            v17 += 16LL;
          }
          if ( v23 >= 0 )
            break;
          *v10++ = v22;
        }
        if ( v22 == 256 && v10 == v49 && (unsigned __int64)v7 >= v11 )
          goto LABEL_45;
        v24 = v22 - 256;
        v25 = v24 / 16;
        v26 = v24 % 16;
        if ( v26 == 15 )
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v34 = *v7++;
          if ( v34 == 255 )
          {
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v47 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v47 )
            {
              if ( (unsigned __int64)(v7 + 3) >= v11 )
                return 3221226050LL;
              v47 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v47 < 0xF || &v10[v47 + 3] < v10 )
              return 3221226050LL;
            v34 = v47 - 15;
          }
          v26 = v34 + 15;
        }
        v27 = v26;
        v28 = v26 + 3;
        v29 = (1LL << v25) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v25) >> 1);
        v18 <<= v25;
        v17 -= v25;
        if ( v17 < 0 )
        {
          if ( (unsigned __int64)v10 >= v19 )
          {
            v38 = v49;
            goto LABEL_47;
          }
          if ( (unsigned __int64)(v7 + 1) >= v11 )
            return 3221226050LL;
          v30 = *(unsigned __int16 *)v7;
          v7 += 2;
          v18 += v30 << -(char)v17;
          v17 += 16LL;
        }
        v31 = &v10[-v29];
        if ( &v10[-v29] < a1 )
          return 3221226050LL;
        if ( v29 < 4 )
          break;
LABEL_20:
        *(_DWORD *)v10 = *(_DWORD *)v31;
        *((_DWORD *)v10 + 1) = *((_DWORD *)v31 + 1);
        if ( v28 >= 9 )
        {
          v10 += 8;
          v33 = v31 + 8;
          v28 -= 8LL;
          while ( (unsigned __int64)v10 < v19 )
          {
            *(_DWORD *)v10 = *v33;
            *((_DWORD *)v10 + 1) = v33[1];
            *((_DWORD *)v10 + 2) = v33[2];
            *((_DWORD *)v10 + 3) = v33[3];
            if ( v28 < 0x11 )
              goto LABEL_21;
            v10 += 16;
            v33 += 4;
            v28 -= 16LL;
          }
          v38 = v49;
LABEL_53:
          if ( &v10[v28] <= v38 )
          {
            qmemcpy(v10, v33, v28);
            v10 += v28;
            goto LABEL_55;
          }
          return 3221226050LL;
        }
LABEL_21:
        v10 += v28;
      }
      *v10 = *v31;
      if ( v29 == 1 )
      {
        v10[1] = *v31;
        v36 = *v31;
      }
      else
      {
        v10[1] = v31[1];
        if ( v29 == 2 )
        {
          v28 -= 2LL;
          v10 += 2;
          goto LABEL_39;
        }
        v36 = v31[2];
      }
      v10[2] = v36;
      v28 = v27;
      v10 += 3;
LABEL_39:
      if ( v28 )
        goto LABEL_20;
    }
  }
  v38 = v49;
  while ( 1 )
  {
LABEL_55:
    if ( v10 >= v13 )
    {
      v12 = (unsigned __int64)v49;
      goto LABEL_3;
    }
    v42 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
    if ( v42 <= 0 )
    {
      v18 <<= 10;
      v17 -= 10LL;
      do
      {
        --v17;
        v45 = (unsigned __int64)v18 >> 31;
        v18 *= 2;
        v42 = *(_WORD *)(v9 + 2LL * (__int16)(v45 - v42) + 3104);
      }
      while ( v42 <= 0 );
    }
    else
    {
      v43 = v42 & 0xF;
      v18 <<= v43;
      v17 -= v43;
    }
    v23 = ((unsigned __int16)v42 >> 4) - 256;
    if ( v17 < 0 )
    {
LABEL_62:
      if ( (unsigned __int64)(v7 + 1) < v11 )
      {
        v44 = *(unsigned __int16 *)v7;
        v7 += 2;
        v18 += v44 << -(char)v17;
        v17 += 16LL;
        goto LABEL_59;
      }
      return 3221226050LL;
    }
LABEL_59:
    if ( v23 >= 0 )
      break;
    *v10++ = v23;
  }
  if ( !v23 && v10 == v38 && (unsigned __int64)v7 >= v11 )
  {
LABEL_45:
    *a6 = (_DWORD)v10 - (_DWORD)a1;
    return 0LL;
  }
  v40 = v23 / 16;
  v41 = v23 % 16;
  if ( v41 != 15 )
    goto LABEL_51;
  if ( (unsigned __int64)v7 >= v11 )
    return 3221226050LL;
  v46 = *v7++;
  if ( v46 == 255 )
  {
    if ( (unsigned __int64)(v7 + 1) >= v11 )
      return 3221226050LL;
    v48 = *(unsigned __int16 *)v7;
    v7 += 2;
    if ( !v48 )
    {
      if ( (unsigned __int64)(v7 + 3) >= v11 )
        return 3221226050LL;
      v48 = *(unsigned int *)v7;
      v7 += 4;
    }
    if ( v48 >= 0xF && &v10[v48 + 3] >= v10 )
    {
      v46 = v48 - 15;
      goto LABEL_70;
    }
  }
  else
  {
LABEL_70:
    v41 = v46 + 15;
LABEL_51:
    v28 = v41 + 3;
    v29 = (1LL << v40) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v40) >> 1);
    v18 <<= v40;
    v17 -= v40;
    if ( v17 < 0 )
    {
LABEL_47:
      if ( (unsigned __int64)(v7 + 1) >= v11 )
        return 3221226050LL;
      v39 = *(unsigned __int16 *)v7;
      v7 += 2;
      v18 += v39 << -(char)v17;
      v17 += 16LL;
    }
    v33 = &v10[-v29];
    if ( &v10[-v29] >= a1 )
      goto LABEL_53;
  }
  return 3221226050LL;
}
