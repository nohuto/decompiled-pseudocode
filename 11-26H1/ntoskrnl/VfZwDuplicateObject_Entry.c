/*
 * XREFs of VfZwDuplicateObject_Entry @ 0x140C38900
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C26580 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140C4DB94 (ViZwShouldCheck.c)
 */

void __fastcall VfZwDuplicateObject_Entry(__int64 a1, __int64 a2)
{
  ULONG_PTR *v2; // r8

  if ( (unsigned int)ViZwShouldCheck(a1, a2, a1) )
    ViZwCheckVirtualAddress(v2[3], *v2);
}
