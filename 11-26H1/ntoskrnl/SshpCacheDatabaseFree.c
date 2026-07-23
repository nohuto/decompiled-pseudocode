/*
 * XREFs of SshpCacheDatabaseFree @ 0x140ADDFC0
 * Callers:
 *     <none>
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 */

void __fastcall SshpCacheDatabaseFree(_RTL_AVL_TABLE *a1, PVOID a2)
{
  CmpFreeTransientPoolWithTag(a2, *((_DWORD *)a1->TableContext + 6));
}
