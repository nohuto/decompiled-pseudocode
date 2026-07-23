/*
 * XREFs of RtlFindSetBitsAndClearEx @ 0x180121BD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBitsEx @ 0x180140840 (RtlClearBitsEx.c)
 */

ULONG64 __cdecl RtlFindSetBitsAndClearEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  unsigned __int64 SizeOfBitMap; // rbp
  unsigned __int64 *Buffer; // r14
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rbx
  ULONG64 i; // r15
  ULONG64 v12; // rsi
  unsigned __int64 *v13; // rdi
  unsigned __int64 *v14; // rdx
  signed __int64 v15; // r8
  unsigned int v16; // ecx
  bool v17; // zf
  __int64 v18; // rax
  unsigned __int64 *v19; // rcx
  __int64 v20; // r8
  unsigned __int64 *v21; // r8
  unsigned int v22; // r8d
  __int64 v23; // rcx
  unsigned int v24; // r10d
  unsigned __int64 *v25; // rbx
  __int64 v26; // rax
  unsigned int v27; // r10d
  __int64 v28; // rbx
  __int64 v29; // rcx
  unsigned int v30; // eax
  ULONG64 v31; // rcx
  unsigned __int64 v32; // rax
  ULONG64 v33; // r9
  __int64 v34; // rax
  unsigned __int64 v35; // rbx

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v9 = HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap) & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_3;
  }
  for ( i = HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap); ; i = 0LL )
  {
    if ( v8 - i + 1 < NumberToFind )
    {
LABEL_8:
      v9 = -1LL;
      goto LABEL_62;
    }
    v12 = v8 - NumberToFind + 1;
    v13 = &Buffer[v12 >> 6];
    v14 = &Buffer[i >> 6];
    v15 = ~*v14 | ((1LL << i) - 1);
    if ( NumberToFind <= 0x7F )
    {
      if ( NumberToFind < 0x40 )
      {
        if ( NumberToFind > 1 )
        {
          v24 = 0;
          v8 >>= 6;
          v25 = &Buffer[v8];
          while ( v15 != -1 )
          {
LABEL_39:
            v17 = !_BitScanForward64((unsigned __int64 *)&v26, v15);
            if ( v17 )
              LODWORD(v26) = 64;
            if ( v24 + (unsigned int)v26 >= NumberToFind )
            {
              v28 = -(__int64)v24;
LABEL_73:
              v9 = ((v14 - Buffer) << 6) + v28;
              goto LABEL_74;
            }
            v27 = NumberToFind;
            v8 = ~v15;
            while ( 1 )
            {
              v8 &= v8 >> (v27 >> 1);
              if ( !v8 )
                break;
              v27 -= v27 >> 1;
              if ( v27 <= 1 )
              {
                _BitScanForward64((unsigned __int64 *)&v28, v8);
                goto LABEL_73;
              }
            }
            if ( v14 == v25 )
              goto LABEL_8;
            v17 = !_BitScanReverse64((unsigned __int64 *)&v34, v15);
            if ( v17 )
              v24 = 64;
            else
              v24 = 63 - v34;
            v15 = ~*++v14;
          }
          while ( 1 )
          {
            if ( ++v14 > v13 )
              goto LABEL_8;
            v15 = ~*v14;
            if ( v15 != -1 )
            {
              v24 = 0;
              goto LABEL_39;
            }
          }
        }
        while ( v15 == -1 )
        {
          if ( ++v14 > v13 )
            goto LABEL_8;
          v15 = ~*v14;
        }
        _BitScanForward64(&v35, ~v15);
        v9 = ((v14 - Buffer) << 6) + v35;
LABEL_74:
        if ( v9 > v12 )
          goto LABEL_8;
        goto LABEL_61;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v15 < 0 )
          {
            if ( ++v14 > v13 )
              goto LABEL_8;
            v15 = ~*v14;
          }
          v17 = !_BitScanReverse64((unsigned __int64 *)&v29, v15);
          if ( v17 )
            v30 = 64;
          else
            v30 = 63 - v29;
          v9 = ((v14 - Buffer + 1) << 6) - v30;
          if ( v9 > v12 )
            goto LABEL_8;
          v31 = NumberToFind - v30;
          if ( NumberToFind == v30 )
            goto LABEL_61;
          ++v14;
          v8 = 64LL;
          v15 = ~*v14;
          if ( v31 >= 0x40 )
            break;
LABEL_58:
          v17 = !_BitScanForward64(&v32, v15);
          if ( v17 )
            v32 = 64LL;
          if ( v32 >= v31 )
            goto LABEL_61;
        }
        if ( *v14 == -1LL )
        {
          v31 -= 64LL;
          if ( !v31 )
            goto LABEL_61;
          v15 = ~*++v14;
          goto LABEL_58;
        }
      }
    }
    v8 = (unsigned __int64)(v13 + 1);
    if ( (v12 & 0x3F) == 0 )
      v8 = (unsigned __int64)&Buffer[v12 >> 6];
    if ( v15 )
    {
      if ( *++v14 != -1LL )
        goto LABEL_18;
      v17 = !_BitScanReverse64((unsigned __int64 *)&v18, v15);
      if ( v17 )
LABEL_16:
        v16 = 64;
      else
        v16 = 63 - v18;
    }
    else
    {
      v16 = 0;
    }
LABEL_22:
    v9 = ((v14 - Buffer) << 6) - v16;
    if ( v9 > v12 )
      goto LABEL_8;
    v21 = &v14[(NumberToFind - v16) >> 6];
    while ( ++v14 != v21 )
    {
      if ( *v14 != -1LL )
        goto LABEL_18;
    }
    v22 = ((_BYTE)NumberToFind - (_BYTE)v16) & 0x3F;
    if ( (((_BYTE)NumberToFind - (_BYTE)v16) & 0x3F) != 0 )
    {
      v17 = !_BitScanForward64((unsigned __int64 *)&v23, ~*v14);
      if ( v17 )
        LODWORD(v23) = 64;
      if ( (unsigned int)v23 < v22 )
      {
LABEL_18:
        while ( 1 )
        {
          v19 = v14;
          if ( (unsigned __int64)v14 > v8 )
            goto LABEL_8;
          if ( *++v14 == -1LL )
          {
            v17 = !_BitScanReverse64((unsigned __int64 *)&v20, ~*v19);
            if ( v17 )
              goto LABEL_16;
            v16 = 63 - v20;
            goto LABEL_22;
          }
        }
      }
    }
LABEL_61:
    if ( v9 != -1LL )
      goto LABEL_4;
LABEL_62:
    if ( !i )
      break;
    v33 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v33 = SizeOfBitMap;
    v8 = v33 - 1;
  }
LABEL_3:
  if ( v9 != -1LL )
LABEL_4:
    RtlClearBitsEx(BitMapHeader, v9, NumberToFind, v8);
  return v9;
}
