/*
 * XREFs of HvMarkDirtyForFlush @ 0x1404B5320
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     HvFoldBackDirtyData @ 0x140AAFDC4 (HvFoldBackDirtyData.c)
 * Callees:
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 */

__int64 __fastcall HvMarkDirtyForFlush(ULONG_PTR a1)
{
  return HvpMarkDirty(a1);
}
