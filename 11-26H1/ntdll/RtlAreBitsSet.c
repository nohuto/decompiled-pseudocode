/*
 * XREFs of RtlAreBitsSet @ 0x1800E7F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlAreBitsSet(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  unsigned int *Buffer; // rcx
  char v5; // r11
  unsigned int *v6; // r9
  unsigned int v7; // edi
  unsigned int *v8; // rbx
  unsigned int v9; // r8d
  int v10; // eax
  int v11; // edx

  if ( StartingIndex < BitMapHeader->SizeOfBitMap )
  {
    if ( Length <= 1 )
    {
      if ( Length == 1 )
        return _bittest(
                 (const signed __int32 *)&BitMapHeader->Buffer[(unsigned __int64)StartingIndex >> 5],
                 StartingIndex & 0x1F);
      return 0;
    }
    if ( BitMapHeader->SizeOfBitMap - StartingIndex >= Length )
    {
      Buffer = BitMapHeader->Buffer;
      v5 = StartingIndex + Length - 1;
      v6 = &Buffer[(unsigned __int64)StartingIndex >> 5];
      v7 = *v6;
      v8 = &Buffer[(unsigned __int64)(StartingIndex + Length - 1) >> 5];
      if ( v6 == v8 )
      {
        v9 = 0xFFFFFFFF >> (32 - Length) << StartingIndex;
        v10 = v7 & v9;
        return v10 == v9;
      }
      if ( (v7 & (-1 << StartingIndex)) == -1 << StartingIndex )
      {
        while ( 1 )
        {
          v11 = *++v6;
          if ( v6 == v8 )
            break;
          if ( v11 != -1 )
            return 0;
        }
        v9 = 0xFFFFFFFF >> ~v5;
        v10 = v11 & v9;
        return v10 == v9;
      }
    }
  }
  return 0;
}
