/*
 * XREFs of VfZwOpenThread_Entry @ 0x140C32BA0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C20574 (ViZwCheckVirtualAddress.c)
 *     ViZwCheckObjectAttributes @ 0x140C33120 (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x140C47B84 (ViZwShouldCheck.c)
 */

void __fastcall VfZwOpenThread_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ViZwShouldCheck(a1, a2, a3) )
  {
    ViZwCheckVirtualAddress(a1[4], *a1);
    ViZwCheckObjectAttributes(a1[2], *a1);
    ViZwCheckVirtualAddress(a1[1], *a1);
  }
}
