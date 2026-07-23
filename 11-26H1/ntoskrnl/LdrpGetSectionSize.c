/*
 * XREFs of LdrpGetSectionSize @ 0x14050D6C4
 * Callers:
 *     LdrpSectionTableFromVirtualAddress @ 0x14077EC74 (LdrpSectionTableFromVirtualAddress.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x140A9807C (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpGetSectionSize(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( !a2 )
    return *(unsigned int *)(a1 + 16);
  result = *(unsigned int *)(a1 + 8);
  if ( !(_DWORD)result )
    return *(unsigned int *)(a1 + 16);
  return result;
}
