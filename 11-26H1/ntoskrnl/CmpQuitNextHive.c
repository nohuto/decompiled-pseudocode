/*
 * XREFs of CmpQuitNextHive @ 0x140AFF4BC
 * Callers:
 *     CmpDoFlushAll @ 0x1404A2354 (CmpDoFlushAll.c)
 * Callees:
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 */

void __fastcall CmpQuitNextHive(char *a1)
{
  CmpDereferenceHive(a1);
}
