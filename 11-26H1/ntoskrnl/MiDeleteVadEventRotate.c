/*
 * XREFs of MiDeleteVadEventRotate @ 0x140870FC0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 */

void __fastcall MiDeleteVadEventRotate(__int64 a1)
{
  _SLIST_ENTRY *v2; // rcx

  v2 = *(_SLIST_ENTRY **)(a1 + 24);
  if ( v2 )
  {
    MiFreeInPageSupportBlock(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
