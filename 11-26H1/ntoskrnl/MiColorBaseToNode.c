/*
 * XREFs of MiColorBaseToNode @ 0x14046F580
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiColorBaseToNode(__int64 a1)
{
  return (*(_DWORD *)(a1 + 8) >> 9) & 0x3F;
}
