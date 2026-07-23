/*
 * XREFs of VfZwQueryDriverEntryOrder_Entry @ 0x140C38190
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C26580 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140C4DB94 (ViZwShouldCheck.c)
 */

void __fastcall VfZwQueryDriverEntryOrder_Entry(ULONG_PTR *a1)
{
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1[2], *a1);
    ViZwCheckVirtualAddress(a1[1], *a1);
  }
}
