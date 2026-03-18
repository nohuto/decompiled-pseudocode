/*
 * XREFs of VfZwTranslateFilePath_Entry @ 0x140B83D30
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140B84D98 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140B84DE4 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwTranslateFilePath_Entry(__int64 a1)
{
  __int64 result; // rax

  result = ViZwShouldCheck();
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 32), *(_QWORD *)a1);
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
    return ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
  }
  return result;
}
