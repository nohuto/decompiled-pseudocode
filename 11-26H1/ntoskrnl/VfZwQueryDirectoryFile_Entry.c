/*
 * XREFs of VfZwQueryDirectoryFile_Entry @ 0x140C32D50
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C20574 (ViZwCheckVirtualAddress.c)
 *     ViZwCheckApcRequirement @ 0x140C330B8 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140C33170 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x140C47B84 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDirectoryFile_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[8], *a1);
    ViZwCheckVirtualAddress(a1[7], *a1);
    ViZwCheckVirtualAddress(a1[6], *a1);
    ViZwCheckVirtualAddress(a1[5], *a1);
    ViZwCheckUnicodeString(a1[2], *a1);
    return ViZwCheckApcRequirement(*a1);
  }
  return result;
}
