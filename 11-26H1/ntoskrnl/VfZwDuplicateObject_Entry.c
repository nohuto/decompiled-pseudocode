/*
 * XREFs of VfZwDuplicateObject_Entry @ 0x140C328F0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C20574 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140C47B84 (ViZwShouldCheck.c)
 */

void __fastcall VfZwDuplicateObject_Entry(__int64 a1, __int64 a2)
{
  ULONG_PTR *v2; // r8

  if ( (unsigned int)ViZwShouldCheck(a1, a2, a1) )
    ViZwCheckVirtualAddress(v2[3], *v2);
}
