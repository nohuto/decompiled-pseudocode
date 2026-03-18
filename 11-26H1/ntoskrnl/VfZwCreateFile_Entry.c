/*
 * XREFs of VfZwCreateFile_Entry @ 0x140C32620
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C20574 (ViZwCheckVirtualAddress.c)
 *     ViZwCheckObjectAttributes @ 0x140C33120 (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x140C47B84 (ViZwShouldCheck.c)
 */

void __fastcall VfZwCreateFile_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ViZwShouldCheck(a1, a2, a3) )
  {
    ViZwCheckVirtualAddress(a1[9], *a1);
    ViZwCheckObjectAttributes(a1[7], *a1);
    ViZwCheckVirtualAddress(a1[6], *a1);
    ViZwCheckVirtualAddress(a1[5], *a1);
    ViZwCheckVirtualAddress(a1[2], *a1);
  }
}
