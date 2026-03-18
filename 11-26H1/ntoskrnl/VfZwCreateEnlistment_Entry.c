/*
 * XREFs of VfZwCreateEnlistment_Entry @ 0x140C325A0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C20574 (ViZwCheckVirtualAddress.c)
 *     ViZwCheckObjectAttributes @ 0x140C33120 (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x140C47B84 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCreateEnlistment_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[7], *a1);
    return ViZwCheckObjectAttributes(a1[3], *a1);
  }
  return result;
}
