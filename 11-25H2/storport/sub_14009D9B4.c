/*
 * XREFs of sub_14009D9B4 @ 0x14009D9B4
 * Callers:
 *     sub_14002B390 @ 0x14002B390 (sub_14002B390.c)
 *     sub_1400A10B8 @ 0x1400A10B8 (sub_1400A10B8.c)
 * Callees:
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 *     sub_140028D00 @ 0x140028D00 (sub_140028D00.c)
 */

void __fastcall sub_14009D9B4(__int64 a1)
{
  __int64 v2; // rcx

  v2 = a1 + 720;
  *(_BYTE *)(v2 + 36) = 1;
  sub_140028D00((struct _EX_RUNDOWN_REF *)v2, 0);
  sub_140021810(a1, 3);
}
