/*
 * XREFs of sub_180099164 @ 0x180099164
 * Callers:
 *     sub_180098584 @ 0x180098584 (sub_180098584.c)
 *     sub_1800987DC @ 0x1800987DC (sub_1800987DC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180099164(__int64 a1)
{
  if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
    *(_QWORD *)(a1 + 24) = 0LL;
  else
    ++*(_QWORD *)(a1 + 24);
}
