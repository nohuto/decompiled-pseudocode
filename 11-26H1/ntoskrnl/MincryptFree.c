/*
 * XREFs of MincryptFree @ 0x1408A4DBC
 * Callers:
 *     SymCryptCallbackFree @ 0x1407228C8 (SymCryptCallbackFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MincryptFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x72634943u);
}
