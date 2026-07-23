/*
 * XREFs of MiColorBaseToNode @ 0x140468D00
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiColorBaseToNode(__int64 a1)
{
  return (*(_DWORD *)(a1 + 8) >> 9) & 0x3F;
}
