/*
 * XREFs of FreeRoutine @ 0x14006EF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FreeRoutine(struct _RTL_GENERIC_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x414E6152u);
}
