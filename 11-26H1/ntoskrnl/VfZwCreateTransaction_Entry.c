/*
 * XREFs of VfZwCreateTransaction_Entry @ 0x140C327C0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C20574 (ViZwCheckVirtualAddress.c)
 *     ViZwCheckObjectAttributes @ 0x140C33120 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x140C33170 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x140C47B84 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCreateTransaction_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[9], *a1);
    ViZwCheckVirtualAddress(a1[6], *a1);
    ViZwCheckVirtualAddress(a1[2], *a1);
    ViZwCheckObjectAttributes(a1[7], *a1);
    return ViZwCheckUnicodeString(a1[1], *a1);
  }
  return result;
}
