/*
 * XREFs of RtlExtractBitMap @ 0x18010D010
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 */

void __cdecl RtlExtractBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit, ULONG NumberOfBits)
{
  unsigned __int64 SizeOfBitMap; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  size_t v11; // rdi
  unsigned int *Buffer; // r9
  __int64 v13; // r8
  unsigned __int64 v14; // r11
  unsigned int *v15; // rsi
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rdi
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // ebx
  int v21; // r10d

  SizeOfBitMap = Destination->SizeOfBitMap;
  if ( NumberOfBits > Source->SizeOfBitMap - TargetBit )
    NumberOfBits = Source->SizeOfBitMap - TargetBit;
  if ( NumberOfBits <= SizeOfBitMap )
    SizeOfBitMap = NumberOfBits;
  if ( SizeOfBitMap )
  {
    v7 = (unsigned __int64)TargetBit >> 3;
    v8 = TargetBit;
    if ( (TargetBit & 7) != 0 )
    {
      Buffer = Destination->Buffer;
      v13 = TargetBit & 0x1F;
      v14 = 32 - v13;
      v15 = &Source->Buffer[v8 >> 5];
      if ( SizeOfBitMap < 0x20 )
      {
        v17 = SizeOfBitMap;
      }
      else
      {
        v16 = SizeOfBitMap >> 5;
        v17 = SizeOfBitMap - 32 * (SizeOfBitMap >> 5);
        do
        {
          v18 = ~((1 << v13) - 1) & *v15++;
          v19 = v18 >> v13;
          *Buffer = v19;
          *Buffer++ = v19 | ((((1 << v13) - 1) & *v15) << v14);
          --v16;
        }
        while ( v16 );
        if ( !v17 )
          return;
      }
      v20 = *v15;
      v21 = *Buffer & ~((1 << v17) - 1);
      if ( v17 > v14 )
        *Buffer = v21 | ((v20 & (-1 << v13)) >> v13) | ((v15[1] & ((1 << (v17 + v13 - 32)) - 1)) << v14);
      else
        *Buffer = v21 | ((v20 & (((1 << v17) - 1) << v13)) >> v13);
      return;
    }
    v9 = (unsigned int)SizeOfBitMap;
    v10 = SizeOfBitMap & 7;
    v11 = v9 >> 3;
    if ( v11 )
      memmove(Destination->Buffer, (char *)Source->Buffer + v7, v11);
    if ( v10 )
      *((_BYTE *)Destination->Buffer + v11) = *((_BYTE *)Destination->Buffer + v11) & ~((1 << v10) - 1) | ((1 << v10) - 1) & *((_BYTE *)Source->Buffer + v7 + v11);
  }
}
