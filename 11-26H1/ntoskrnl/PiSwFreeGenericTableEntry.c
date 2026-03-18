/*
 * XREFs of PiSwFreeGenericTableEntry @ 0x140B46050
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwFreeGenericTableEntry(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x57706E50u);
}
