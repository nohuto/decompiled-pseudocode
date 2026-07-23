/*
 * XREFs of HvpAdjustHiveFreeDisplay @ 0x140A88570
 * Callers:
 *     HvFreeHivePartial @ 0x1408BE014 (HvFreeHivePartial.c)
 *     HvLoadHive @ 0x140AC4740 (HvLoadHive.c)
 *     HvpPerformLogFileRecovery @ 0x140AEE1B4 (HvpPerformLogFileRecovery.c)
 *     HvHiveStartMemoryBacked @ 0x140B4A534 (HvHiveStartMemoryBacked.c)
 *     HvpAddBin @ 0x140B87980 (HvpAddBin.c)
 * Callees:
 *     HvpAdjustBitmap @ 0x140A885EC (HvpAdjustBitmap.c)
 */

__int64 __fastcall HvpAdjustHiveFreeDisplay(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbp
  unsigned int i; // ebx
  __int64 result; // rax

  v3 = a3;
  if ( a2 > 0x7FFFE000 )
    return 3221225804LL;
  for ( i = 0; i < 0x18; ++i )
  {
    result = HvpAdjustBitmap(a1, a2, a1 + 632 * v3 + 24 * (i + 13LL));
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
