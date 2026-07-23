/*
 * XREFs of PnpFreeGenericTableEntryNonPaged @ 0x1404F1100
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeGenericTableEntryNonPaged(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0);
}
