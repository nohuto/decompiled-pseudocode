/*
 * XREFs of SshpCacheDatabaseFree @ 0x140AE0990
 * Callers:
 *     <none>
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 */

void __fastcall SshpCacheDatabaseFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  CmpFreeTransientPoolWithTag(Buffer, *((_DWORD *)Table->TableContext + 6));
}
