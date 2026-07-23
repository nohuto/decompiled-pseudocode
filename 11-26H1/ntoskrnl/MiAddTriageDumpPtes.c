/*
 * XREFs of MiAddTriageDumpPtes @ 0x1404428D4
 * Callers:
 *     MmSnapTriageDumpInformation @ 0x140442788 (MmSnapTriageDumpInformation.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 */

__int64 __fastcall MiAddTriageDumpPtes(unsigned __int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned int i; // edi
  __int64 result; // rax

  v2 = a1;
  for ( i = 0; i < 4; ++i )
  {
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !i )
    {
      result = MI_IS_PHYSICAL_ADDRESS(a1);
      if ( (_DWORD)result )
        continue;
    }
    result = IoAddTriageDumpDataBlock(v2, (PVOID)8);
  }
  return result;
}
