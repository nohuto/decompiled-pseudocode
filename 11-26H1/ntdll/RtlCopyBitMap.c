/*
 * XREFs of RtlCopyBitMap @ 0x180140900
 * Callers:
 *     Xp10ExecuteHuffmanEncode @ 0x180151FCC (Xp10ExecuteHuffmanEncode.c)
 * Callees:
 *     RtlpCopyBitMapTailToHead @ 0x180108A40 (RtlpCopyBitMapTailToHead.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

void __cdecl RtlCopyBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit)
{
  unsigned __int64 SizeOfBitMap; // rbx
  unsigned int *Buffer; // rcx
  unsigned int *v8; // r11
  unsigned int *v9; // r8
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  size_t v13; // rdi
  char *v14; // r8
  __int64 v15; // r10
  unsigned __int64 v16; // r14
  int v17; // ebp
  int v18; // esi
  int v19; // r12d
  int v20; // ebp
  unsigned __int64 v21; // r15
  int v22; // esi
  unsigned __int64 v23; // rdi
  unsigned int v24; // r12d
  unsigned int v25; // ebx

  SizeOfBitMap = Destination->SizeOfBitMap - TargetBit;
  if ( Source->SizeOfBitMap <= (unsigned int)SizeOfBitMap )
    SizeOfBitMap = Source->SizeOfBitMap;
  if ( SizeOfBitMap )
  {
    Buffer = Destination->Buffer;
    v8 = Source->Buffer;
    v9 = &Buffer[(unsigned __int64)TargetBit >> 5];
    if ( v8 <= v9 && v9 <= &v8[(SizeOfBitMap - 1) >> 5] )
    {
      RtlpCopyBitMapTailToHead((__int64)Source, (__int64)Destination, TargetBit, SizeOfBitMap);
      return;
    }
    v10 = (unsigned __int64)TargetBit >> 3;
    if ( (TargetBit & 7) != 0 )
    {
      v15 = TargetBit & 0x1F;
      v16 = 32 - v15;
      v17 = 1 << (32 - v15);
      v18 = 1 << v15;
      if ( SizeOfBitMap < 0x20 )
      {
        v23 = SizeOfBitMap;
      }
      else
      {
        v19 = *v9;
        v20 = v17 - 1;
        v21 = SizeOfBitMap >> 5;
        v22 = v18 - 1;
        v23 = SizeOfBitMap - 32 * (SizeOfBitMap >> 5);
        do
        {
          *v9++ = v19 & v22 | ((*v8 & v20) << v15);
          v24 = (*v8++ & ~v20) >> v16;
          v19 = *v9 & -(1 << v15) | v24;
          *v9 = v19;
          --v21;
        }
        while ( v21 );
        v18 = 1 << v15;
        v17 = 1 << (32 - v15);
        if ( !v23 )
          return;
      }
      v25 = *v8;
      if ( v23 > v16 )
      {
        *v9 = *v9 & (v18 - 1) | ((v25 & (v17 - 1)) << v15);
        v9[1] = v9[1] & ~((1 << (v23 + v15 - 32)) - 1) | ((*v8 & (((1 << (v23 + v15 - 32)) - 1) << v16)) >> v16);
      }
      else
      {
        *v9 = ((v25 & ((1 << v23) - 1)) << v15) | *v9 & ~(((1 << v23) - 1) << v15);
      }
      return;
    }
    v11 = SizeOfBitMap;
    v12 = SizeOfBitMap & 7;
    v13 = v11 >> 3;
    if ( v13 )
      memmove((char *)Buffer + v10, Source->Buffer, v13);
    if ( v12 )
    {
      v14 = (char *)Destination->Buffer + v10;
      v14[v13] &= ~((1 << v12) - 1);
      v14[v13] |= ((1 << v12) - 1) & *((_BYTE *)Source->Buffer + v13);
    }
  }
}
