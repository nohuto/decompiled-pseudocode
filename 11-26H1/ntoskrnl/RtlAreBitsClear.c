/*
 * XREFs of RtlAreBitsClear @ 0x140471FA0
 * Callers:
 *     HvIsRangeDirty @ 0x14077E264 (HvIsRangeDirty.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     HvGetHiveLogFileStatus @ 0x1408BD598 (HvGetHiveLogFileStatus.c)
 *     MiReleaseDriverPtes @ 0x140A85EA8 (MiReleaseDriverPtes.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140BF0664 (HalpMmAllocCtxMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  BOOLEAN result; // al
  unsigned int *Buffer; // rcx
  char v6; // r10
  unsigned int *v7; // rdx
  unsigned int v8; // r11d
  unsigned int *v9; // rbx
  unsigned int *v10; // rdx
  unsigned int v11; // r9d

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length > 1 )
  {
    if ( BitMapHeader->SizeOfBitMap - StartingIndex >= Length )
    {
      Buffer = BitMapHeader->Buffer;
      v6 = StartingIndex + Length - 1;
      v7 = &Buffer[(unsigned __int64)StartingIndex >> 5];
      v8 = *v7;
      v9 = &Buffer[(unsigned __int64)(StartingIndex + Length - 1) >> 5];
      if ( v7 == v9 )
        return ((0xFFFFFFFF >> (32 - Length) << StartingIndex) & v8) == 0;
      if ( ((-1 << StartingIndex) & v8) != 0 )
        return 0;
      v10 = v7 + 1;
      result = 0;
      while ( 1 )
      {
        v11 = *v10;
        if ( v10 == v9 )
          break;
        if ( v11 )
          return result;
        ++v10;
      }
      return ((0xFFFFFFFF >> ~v6) & v11) == 0;
    }
    return 0;
  }
  if ( Length != 1 )
    return 0;
  return !_bittest(
            (const signed __int32 *)&BitMapHeader->Buffer[(unsigned __int64)StartingIndex >> 5],
            StartingIndex & 0x1F);
}
