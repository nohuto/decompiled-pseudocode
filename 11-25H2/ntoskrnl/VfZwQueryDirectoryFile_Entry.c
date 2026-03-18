/*
 * XREFs of VfZwQueryDirectoryFile_Entry @ 0x140B848E0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckApcRequirement @ 0x140B84C48 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140B84D00 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140B84D98 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140B84DE4 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDirectoryFile_Entry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 64), *(_QWORD *)a1);
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 56), *(_QWORD *)a1);
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 48), *(_QWORD *)a1);
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 40), *(_QWORD *)a1);
    ViZwCheckUnicodeString(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
    return ViZwCheckApcRequirement(*(_QWORD *)a1);
  }
  return result;
}
