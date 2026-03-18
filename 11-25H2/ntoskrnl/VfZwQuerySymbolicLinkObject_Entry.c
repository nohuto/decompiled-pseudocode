/*
 * XREFs of VfZwQuerySymbolicLinkObject_Entry @ 0x140B84A30
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140B84D00 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140B84D98 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140B84DE4 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQuerySymbolicLinkObject_Entry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckUnicodeString(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
    return ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
  }
  return result;
}
