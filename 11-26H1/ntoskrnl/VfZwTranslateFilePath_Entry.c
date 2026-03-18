/*
 * XREFs of VfZwTranslateFilePath_Entry @ 0x140C321C0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C20574 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140C47B84 (ViZwShouldCheck.c)
 */

void __fastcall VfZwTranslateFilePath_Entry(ULONG_PTR *a1)
{
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1[4], *a1);
    ViZwCheckVirtualAddress(a1[2], *a1);
    ViZwCheckVirtualAddress(a1[1], *a1);
  }
}
