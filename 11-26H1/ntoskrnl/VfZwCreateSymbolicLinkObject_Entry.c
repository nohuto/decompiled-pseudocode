/*
 * XREFs of VfZwCreateSymbolicLinkObject_Entry @ 0x140C38730
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C26580 (ViZwCheckVirtualAddress.c)
 *     ViZwCheckObjectAttributes @ 0x140C39130 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x140C39180 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x140C4DB94 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCreateSymbolicLinkObject_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[4], *a1);
    ViZwCheckObjectAttributes(a1[2], *a1);
    return ViZwCheckUnicodeString(a1[1], *a1);
  }
  return result;
}
