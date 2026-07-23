/*
 * XREFs of RtlFindSetBitsEx @ 0x1800E3BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG64 __cdecl RtlFindSetBitsEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  unsigned __int64 SizeOfBitMap; // rbp
  unsigned __int64 *Buffer; // r14
  unsigned __int64 v7; // r10
  ULONG64 i; // r15
  ULONG64 v9; // rsi
  unsigned __int64 *v10; // rbx
  unsigned __int64 *v11; // rdx
  signed __int64 v12; // r8
  unsigned __int64 v13; // r9
  ULONG64 v14; // r9
  ULONG64 v16; // r10
  __int64 v17; // r9
  unsigned __int64 *v18; // rdi
  bool v19; // zf
  __int64 v20; // rax
  unsigned int v21; // r10d
  unsigned __int64 v22; // r9
  unsigned __int64 *v23; // r10
  unsigned int v24; // ecx
  unsigned __int64 *v25; // r8
  unsigned int v26; // r8d
  __int64 v27; // rcx
  unsigned __int64 *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  ULONG64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // eax

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
    return HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap) & 0xFFFFFFFFFFFFFFF8uLL;
  for ( i = HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap); ; i = 0LL )
  {
    if ( v7 - i + 1 < NumberToFind )
      goto LABEL_12;
    v9 = v7 - NumberToFind + 1;
    v10 = &Buffer[v9 >> 6];
    v11 = &Buffer[i >> 6];
    v12 = ~*v11 | ((1LL << i) - 1);
    if ( NumberToFind > 0x7F )
    {
      v23 = v10 + 1;
      if ( (v9 & 0x3F) == 0 )
        v23 = &Buffer[v9 >> 6];
      if ( !v12 )
      {
        v24 = 0;
        goto LABEL_37;
      }
      if ( *++v11 != -1LL )
        goto LABEL_44;
      v19 = !_BitScanReverse64((unsigned __int64 *)&v30, v12);
      if ( !v19 )
      {
        v24 = 63 - v30;
        goto LABEL_37;
      }
LABEL_57:
      v24 = 64;
LABEL_37:
      while ( 1 )
      {
        v14 = ((v11 - Buffer) << 6) - v24;
        if ( v14 > v9 )
          goto LABEL_12;
        v25 = &v11[(NumberToFind - v24) >> 6];
        while ( ++v11 != v25 )
        {
          if ( *v11 != -1LL )
            goto LABEL_44;
        }
        v26 = ((_BYTE)NumberToFind - (_BYTE)v24) & 0x3F;
        if ( (((_BYTE)NumberToFind - (_BYTE)v24) & 0x3F) == 0 )
          goto LABEL_10;
        v19 = !_BitScanForward64((unsigned __int64 *)&v27, ~*v11);
        if ( v19 )
          LODWORD(v27) = 64;
        if ( (unsigned int)v27 >= v26 )
          goto LABEL_10;
        do
        {
LABEL_44:
          v28 = v11;
          if ( v11 > v23 )
            goto LABEL_12;
          ++v11;
        }
        while ( *v11 != -1LL );
        v19 = !_BitScanReverse64((unsigned __int64 *)&v29, ~*v28);
        if ( v19 )
          goto LABEL_57;
        v24 = 63 - v29;
      }
    }
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v12 < 0 )
          {
            if ( ++v11 > v10 )
              goto LABEL_12;
            v12 = ~*v11;
          }
          v19 = !_BitScanReverse64((unsigned __int64 *)&v34, v12);
          if ( v19 )
            v35 = 64;
          else
            v35 = 63 - v34;
          v14 = ((v11 - Buffer + 1) << 6) - v35;
          if ( v14 > v9 )
            goto LABEL_12;
          v31 = NumberToFind - v35;
          if ( NumberToFind == v35 )
            goto LABEL_10;
          v12 = ~*++v11;
          if ( v31 >= 0x40 )
            break;
LABEL_65:
          v19 = !_BitScanForward64(&v32, v12);
          if ( v19 )
            v32 = 64LL;
          if ( v32 >= v31 )
            goto LABEL_10;
        }
        if ( *v11 == -1LL )
        {
          v31 -= 64LL;
          if ( !v31 )
            goto LABEL_10;
          v12 = ~*++v11;
          goto LABEL_65;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v17 = 0LL;
      v18 = &Buffer[v7 >> 6];
      while ( v12 != -1 )
      {
LABEL_25:
        v19 = !_BitScanForward64((unsigned __int64 *)&v20, v12);
        if ( v19 )
          LODWORD(v20) = 64;
        if ( (unsigned int)(v17 + v20) >= NumberToFind )
        {
          v22 = -v17;
LABEL_32:
          v14 = ((v11 - Buffer) << 6) + v22;
          goto LABEL_9;
        }
        v21 = NumberToFind;
        v22 = ~v12;
        while ( 1 )
        {
          v22 &= v22 >> (v21 >> 1);
          if ( !v22 )
            break;
          v21 -= v21 >> 1;
          if ( v21 <= 1 )
          {
            _BitScanForward64(&v22, v22);
            goto LABEL_32;
          }
        }
        if ( v11 == v18 )
          goto LABEL_12;
        v19 = !_BitScanReverse64((unsigned __int64 *)&v33, v12);
        if ( v19 )
          v17 = 64LL;
        else
          v17 = (unsigned int)(63 - v33);
        v12 = ~*++v11;
      }
      while ( 1 )
      {
        if ( ++v11 > v10 )
          goto LABEL_12;
        v12 = ~*v11;
        if ( *v11 )
        {
          v17 = 0LL;
          goto LABEL_25;
        }
      }
    }
    while ( v12 == -1 )
    {
      if ( ++v11 > v10 )
        goto LABEL_12;
      v12 = ~*v11;
    }
    _BitScanForward64(&v13, ~v12);
    v14 = ((v11 - Buffer) << 6) + v13;
LABEL_9:
    if ( v14 <= v9 )
      break;
LABEL_12:
    v14 = -1LL;
LABEL_13:
    if ( !i )
      return v14;
    v16 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v16 = SizeOfBitMap;
    v7 = v16 - 1;
  }
LABEL_10:
  if ( v14 == -1LL )
    goto LABEL_13;
  return v14;
}
