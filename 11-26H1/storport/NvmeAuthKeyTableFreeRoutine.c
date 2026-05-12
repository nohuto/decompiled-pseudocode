/*
 * XREFs of NvmeAuthKeyTableFreeRoutine @ 0x140075E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NvmeAuthKeyTableFreeRoutine(struct _RTL_GENERIC_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x414E6152u);
}
