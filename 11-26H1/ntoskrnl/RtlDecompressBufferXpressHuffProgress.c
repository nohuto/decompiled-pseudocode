/*
 * XREFs of RtlDecompressBufferXpressHuffProgress @ 0x140626920
 * Callers:
 *     RtlDecompressBufferProgress @ 0x14061AD08 (RtlDecompressBufferProgress.c)
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x1403C8A30 (XpressBuildHuffmanDecodingTable.c)
 *     RtlpMakeXpressCallback @ 0x1403F38F0 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlDecompressBufferXpressHuffProgress(
        _DWORD *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  unsigned __int8 *v9; // rbp
  _DWORD *v10; // r11
  unsigned __int64 v12; // rsi
  _DWORD *v13; // rdi
  unsigned __int64 v14; // r12
  _DWORD *v15; // r10
  int v16; // r14d
  unsigned __int16 *v17; // rbp
  int v18; // eax
  _DWORD *v19; // rcx
  unsigned int v20; // r14d
  __int64 v21; // r15
  unsigned __int64 v22; // r13
  unsigned __int64 XpressCallback; // r9
  __int16 v24; // bx
  int v25; // eax
  __int64 v26; // rcx
  unsigned __int16 v27; // bx
  __int16 v28; // si
  int v29; // edx
  __int64 v30; // rsi
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rdx
  int v37; // eax
  char *v38; // rsi
  unsigned __int64 v39; // rdx
  char v40; // al
  _DWORD *v41; // rsi
  __int16 v42; // si
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  int v46; // ecx
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rbx
  int v50; // eax
  unsigned __int64 v51; // [rsp+20h] [rbp-58h]
  _DWORD *v52; // [rsp+28h] [rbp-50h]
  _QWORD v53[2]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v54; // [rsp+48h] [rbp-30h]
  int v55; // [rsp+4Ch] [rbp-2Ch]
  unsigned __int64 v57; // [rsp+A8h] [rbp+30h]
  int v59; // [rsp+C0h] [rbp+48h]

  v8 = 4096;
  v59 = 4096;
  v9 = a3;
  v55 = 0;
  LODWORD(v10) = (_DWORD)a1;
  if ( !a6 )
    return 3221225704LL;
  v12 = (a6 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v13 = a1;
  v14 = (unsigned __int64)&a3[a4];
  v15 = (_DWORD *)((char *)a1 + a2);
  v57 = v12;
  v51 = (unsigned __int64)v15;
  if ( !a7 || a2 < 0x1000 )
  {
    v8 = a2;
    v59 = a2;
  }
  v53[0] = a7;
  v53[1] = a8;
  v54 = v8;
LABEL_7:
  if ( (__int64)(v14 - (_QWORD)v9) < 260 )
  {
    if ( v13 != v15 )
      return 3221226050LL;
    goto LABEL_106;
  }
  if ( (unsigned int)XpressBuildHuffmanDecodingTable(v12, (__int64)v9) )
    return 3221226050LL;
  v15 = (_DWORD *)v51;
  v16 = *((unsigned __int16 *)v9 + 128);
  v17 = (unsigned __int16 *)(v9 + 258);
  v18 = *v17;
  v19 = (_DWORD *)v51;
  v9 = (unsigned __int8 *)(v17 + 1);
  v20 = v18 + (v16 << 16);
  v21 = 16LL;
  if ( (unsigned __int64)(v13 + 0x4000) <= v51 )
    v19 = v13 + 0x4000;
  v52 = v19;
  v22 = (unsigned __int64)(v19 - 47);
  if ( v13 >= v19 - 47 )
    goto LABEL_66;
  XpressCallback = (unsigned __int64)v13 + v8;
  if ( v22 < XpressCallback )
    XpressCallback = (unsigned __int64)(v19 - 47);
  while ( 1 )
  {
    v24 = *(_WORD *)(v12 + 2 * ((unsigned __int64)v20 >> 22) + 1056);
    if ( v24 > 0 )
    {
      v26 = v24 & 0xF;
      v20 <<= v26;
      v21 -= v26;
    }
    else
    {
      v20 <<= 10;
      v21 -= 10LL;
      do
      {
        --v21;
        v25 = (unsigned __int64)v20 >> 31;
        v20 *= 2;
        v24 = *(_WORD *)(v12 + 2LL * (__int16)(v25 - v24) + 3104);
      }
      while ( v24 <= 0 );
    }
    v27 = (unsigned __int16)v24 >> 4;
    v28 = v27 - 256;
    if ( v21 < 0 )
      break;
LABEL_27:
    if ( v28 >= 0 )
    {
      v15 = (_DWORD *)v51;
      if ( v27 == 256 && (unsigned __int64)v9 >= v14 && v13 == (_DWORD *)v51 )
      {
        LODWORD(v10) = (_DWORD)a1;
        goto LABEL_106;
      }
      v30 = (v27 - 256) / 16;
      v31 = (v27 - 256) % 16;
      if ( v31 == 15 )
      {
        if ( (unsigned __int64)v9 >= v14 )
          return 3221226050LL;
        v32 = *v9++;
        if ( v32 == 255 )
        {
          if ( (unsigned __int64)(v9 + 1) >= v14 )
            return 3221226050LL;
          v33 = *(unsigned __int16 *)v9;
          v9 += 2;
          if ( !v33 )
          {
            if ( (unsigned __int64)(v9 + 3) >= v14 )
              return 3221226050LL;
            v33 = *(unsigned int *)v9;
            v9 += 4;
          }
          if ( v33 < 0xF || (_DWORD *)((char *)v13 + v33 + 3) < v13 )
            return 3221226050LL;
          v32 = v33 - 15;
        }
        v31 = v32 + 15;
      }
      v34 = v31;
      v35 = v31 + 3;
      v36 = (1LL << v30) + ((unsigned __int64)v20 >> (31 - (unsigned __int8)v30) >> 1);
      v20 <<= v30;
      v21 -= v30;
      if ( v21 < 0 )
      {
        if ( (unsigned __int64)v13 >= v22 )
        {
          v10 = a1;
          goto LABEL_97;
        }
        if ( (unsigned __int64)(v9 + 1) >= v14 )
          return 3221226050LL;
        v37 = *(unsigned __int16 *)v9;
        v9 += 2;
        v20 += v37 << -(char)v21;
        v21 += 16LL;
      }
      v38 = (char *)v13 - v36;
      if ( (_DWORD *)((char *)v13 - v36) < a1 )
        return 3221226050LL;
      if ( v36 < 4 )
      {
        *(_BYTE *)v13 = *v38;
        v39 = v36 - 1;
        if ( v39 )
        {
          *((_BYTE *)v13 + 1) = v38[1];
          if ( v39 != 1 )
          {
            v40 = v38[2];
            goto LABEL_54;
          }
          v35 -= 2LL;
          v13 = (_DWORD *)((char *)v13 + 2);
        }
        else
        {
          *((_BYTE *)v13 + 1) = *v38;
          v40 = *v38;
LABEL_54:
          *((_BYTE *)v13 + 2) = v40;
          v35 = v34;
          v13 = (_DWORD *)((char *)v13 + 3);
        }
        if ( !v35 )
          goto LABEL_15;
      }
      *v13 = *(_DWORD *)v38;
      v13[1] = *((_DWORD *)v38 + 1);
      if ( v35 >= 9 )
      {
        v13 += 2;
        v41 = v38 + 8;
        for ( v35 -= 8LL; ; v35 -= 16LL )
        {
          if ( (unsigned __int64)v13 >= XpressCallback )
          {
            if ( (unsigned __int64)v13 >= v22 )
            {
              v15 = (_DWORD *)v51;
              if ( (unsigned __int64)v13 + v35 <= v51 )
              {
                qmemcpy(v13, v41, v35);
                v12 = v57;
                v13 = (_DWORD *)((char *)v13 + v35);
                v19 = v52;
LABEL_66:
                v10 = a1;
                goto LABEL_67;
              }
              return 3221226050LL;
            }
            XpressCallback = RtlpMakeXpressCallback((__int64)v53, v22, (__int64)v13);
          }
          *v13 = *v41;
          v13[1] = v41[1];
          v13[2] = v41[2];
          v13[3] = v41[3];
          if ( v35 < 0x11 )
            break;
          v13 += 4;
          v41 += 4;
        }
      }
      v13 = (_DWORD *)((char *)v13 + v35);
LABEL_15:
      v12 = v57;
    }
    else
    {
      *(_BYTE *)v13 = v27;
      v13 = (_DWORD *)((char *)v13 + 1);
      v12 = v57;
    }
  }
  if ( (unsigned __int64)v13 < XpressCallback )
  {
LABEL_25:
    if ( (unsigned __int64)(v9 + 1) >= v14 )
      return 3221226050LL;
    v29 = *(unsigned __int16 *)v9;
    v9 += 2;
    v20 += v29 << -(char)v21;
    v21 += 16LL;
    goto LABEL_27;
  }
  if ( (unsigned __int64)v13 < v22 )
  {
    XpressCallback = RtlpMakeXpressCallback((__int64)v53, v22, (__int64)v13);
    goto LABEL_25;
  }
  v15 = (_DWORD *)v51;
  v10 = a1;
LABEL_76:
  if ( (unsigned __int64)(v9 + 1) >= v14 )
    return 3221226050LL;
  v45 = *(unsigned __int16 *)v9;
  v9 += 2;
  v20 += v45 << -(char)v21;
  v21 += 16LL;
  while ( v28 < 0 )
  {
    v19 = v52;
    *(_BYTE *)v13 = v28;
    v13 = (_DWORD *)((char *)v13 + 1);
    v12 = v57;
LABEL_67:
    if ( v13 >= v19 )
    {
      v8 = v59;
      goto LABEL_7;
    }
    v42 = *(_WORD *)(v12 + 2 * ((unsigned __int64)v20 >> 22) + 1056);
    if ( v42 > 0 )
    {
      v44 = v42 & 0xF;
      v20 <<= v44;
      v21 -= v44;
    }
    else
    {
      v20 <<= 10;
      v21 -= 10LL;
      do
      {
        --v21;
        v43 = (unsigned __int64)v20 >> 31;
        v20 *= 2;
        v42 = *(_WORD *)(v57 + 2LL * (__int16)(v43 - v42) + 3104);
      }
      while ( v42 <= 0 );
    }
    v28 = ((unsigned __int16)v42 >> 4) - 256;
    if ( v21 < 0 )
      goto LABEL_76;
  }
  if ( !v28 && (unsigned __int64)v9 >= v14 && v13 == v15 )
  {
LABEL_106:
    *a5 = (_DWORD)v13 - (_DWORD)v10;
    return 0LL;
  }
  v46 = v28 / 16;
  v47 = v28 % 16;
  if ( v47 != 15 )
    goto LABEL_94;
  if ( (unsigned __int64)v9 >= v14 )
    return 3221226050LL;
  v48 = *v9++;
  if ( v48 != 255 )
  {
LABEL_93:
    v47 = v48 + 15;
LABEL_94:
    v35 = v47 + 3;
    v36 = (1LL << v46) + ((unsigned __int64)v20 >> (31 - (unsigned __int8)v46) >> 1);
    v20 <<= v46;
    v21 -= v46;
    if ( v21 < 0 )
    {
LABEL_97:
      if ( (unsigned __int64)(v9 + 1) >= v14 )
        return 3221226050LL;
      v50 = *(unsigned __int16 *)v9;
      v9 += 2;
      v20 += v50 << -(char)v21;
      v21 += 16LL;
    }
    if ( (_DWORD *)((char *)v13 - v36) < v10 || (_DWORD *)((char *)v13 + v35) > v15 )
      return 3221226050LL;
    qmemcpy(v13, (char *)v13 - v36, v35);
    v12 = v57;
    v13 = (_DWORD *)((char *)v13 + v35);
    v19 = v52;
    goto LABEL_67;
  }
  if ( (unsigned __int64)(v9 + 1) >= v14 )
    return 3221226050LL;
  v49 = *(unsigned __int16 *)v9;
  v9 += 2;
  if ( !v49 )
  {
    if ( (unsigned __int64)(v9 + 3) >= v14 )
      return 3221226050LL;
    v49 = *(unsigned int *)v9;
    v9 += 4;
  }
  if ( v49 >= 0xF && (_DWORD *)((char *)v13 + v49 + 3) >= v13 )
  {
    v48 = v49 - 15;
    goto LABEL_93;
  }
  return 3221226050LL;
}
