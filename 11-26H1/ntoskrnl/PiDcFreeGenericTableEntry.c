/*
 * XREFs of PiDcFreeGenericTableEntry @ 0x1407A7AC0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDcFreeGenericTableEntry(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x47706E50u);
}
