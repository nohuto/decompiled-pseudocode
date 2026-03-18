/*
 * XREFs of HvMarkDirtyForFlush @ 0x1404BBB40
 * Callers:
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     HvFoldBackDirtyData @ 0x140AB20F0 (HvFoldBackDirtyData.c)
 * Callees:
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 */

__int64 __fastcall HvMarkDirtyForFlush(ULONG_PTR a1)
{
  return HvpMarkDirty(a1);
}
