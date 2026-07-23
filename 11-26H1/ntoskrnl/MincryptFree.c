/*
 * XREFs of MincryptFree @ 0x1408AB1CC
 * Callers:
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MincryptFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x72634943u);
}
