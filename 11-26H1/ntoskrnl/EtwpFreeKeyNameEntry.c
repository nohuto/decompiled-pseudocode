/*
 * XREFs of EtwpFreeKeyNameEntry @ 0x1406C7510
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeKeyNameEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x74777445u);
}
