/*
 * XREFs of VfZwOpenFile_Entry @ 0x140C38B60
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C26580 (ViZwCheckVirtualAddress.c)
 *     ViZwCheckObjectAttributes @ 0x140C39130 (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x140C4DB94 (ViZwShouldCheck.c)
 */

void __fastcall VfZwOpenFile_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ViZwShouldCheck(a1, a2, a3) )
  {
    ViZwCheckVirtualAddress(a1[5], *a1);
    ViZwCheckObjectAttributes(a1[3], *a1);
    ViZwCheckVirtualAddress(a1[2], *a1);
  }
}
