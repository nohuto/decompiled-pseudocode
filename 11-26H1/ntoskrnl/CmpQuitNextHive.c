/*
 * XREFs of CmpQuitNextHive @ 0x140B0123C
 * Callers:
 *     CmpDoFlushAll @ 0x14049BE84 (CmpDoFlushAll.c)
 * Callees:
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 */

void __fastcall CmpQuitNextHive(char *a1)
{
  CmpDereferenceHive(a1);
}
