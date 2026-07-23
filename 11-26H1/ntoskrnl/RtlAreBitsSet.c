/*
 * XREFs of RtlAreBitsSet @ 0x14046FAA0
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x14087994C (MiPrepareToHotPatchImage.c)
 *     MiReleaseDriverPtes @ 0x140A85EA8 (MiReleaseDriverPtes.c)
 *     MiReserveExistingDriverPtes @ 0x140B0C144 (MiReserveExistingDriverPtes.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsSet(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  unsigned int *Buffer; // rcx
  char v5; // r11
  unsigned int *v6; // r9
  unsigned int v7; // edi
  unsigned int *v8; // rbx
  int v9; // edx
  unsigned int v10; // r8d
  int v11; // eax

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return _bittest(
               (const signed __int32 *)&BitMapHeader->Buffer[(unsigned __int64)StartingIndex >> 5],
               StartingIndex & 0x1F);
    return 0;
  }
  if ( BitMapHeader->SizeOfBitMap - StartingIndex < Length )
    return 0;
  Buffer = BitMapHeader->Buffer;
  v5 = StartingIndex + Length - 1;
  v6 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v7 = *v6;
  v8 = &Buffer[(unsigned __int64)(StartingIndex + Length - 1) >> 5];
  if ( v6 != v8 )
  {
    if ( (v7 & (-1 << StartingIndex)) == -1 << StartingIndex )
    {
      while ( 1 )
      {
        v9 = *++v6;
        if ( v6 == v8 )
          break;
        if ( v9 != -1 )
          return 0;
      }
      v10 = 0xFFFFFFFF >> ~v5;
      v11 = v9 & v10;
      return v11 == v10;
    }
    return 0;
  }
  v10 = 0xFFFFFFFF >> (32 - Length) << StartingIndex;
  v11 = v7 & v10;
  return v11 == v10;
}
