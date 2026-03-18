/*
 * XREFs of VfZwQueryDriverEntryOrder_Entry @ 0x140C32180
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C20574 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140C47B84 (ViZwShouldCheck.c)
 */

void __fastcall VfZwQueryDriverEntryOrder_Entry(ULONG_PTR *a1)
{
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1[2], *a1);
    ViZwCheckVirtualAddress(a1[1], *a1);
  }
}
