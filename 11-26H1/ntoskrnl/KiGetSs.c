/*
 * XREFs of KiGetSs @ 0x140C81340
 * Callers:
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C68010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetSs()
{
  return __SS__;
}
