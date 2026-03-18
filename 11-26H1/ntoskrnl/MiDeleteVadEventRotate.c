/*
 * XREFs of MiDeleteVadEventRotate @ 0x14086ABE0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14031D5D8 (MiFreeInPageSupportBlock.c)
 */

void __fastcall MiDeleteVadEventRotate(__int64 a1)
{
  struct _SLIST_ENTRY *v2; // rcx

  v2 = *(struct _SLIST_ENTRY **)(a1 + 24);
  if ( v2 )
  {
    MiFreeInPageSupportBlock(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
