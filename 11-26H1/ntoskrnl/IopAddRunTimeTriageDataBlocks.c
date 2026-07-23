/*
 * XREFs of IopAddRunTimeTriageDataBlocks @ 0x1405CB11C
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1405C9264 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     IopAddTriageDumpDataBlock @ 0x140442DE0 (IopAddTriageDumpDataBlock.c)
 *     IopGetMaxValidMemorySize @ 0x1405CC08C (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidMemorySizeDown @ 0x1405CC104 (IopGetMaxValidMemorySizeDown.c)
 */

__int64 __fastcall IopAddRunTimeTriageDataBlocks(
        unsigned int a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 MaxValidMemorySizeDown; // rbx
  __int64 v11; // r8
  int MaxValidMemorySize; // eax
  unsigned __int16 v13; // cx
  char *v14; // rbx
  unsigned __int64 v15; // r9
  __int64 result; // rax

  MaxValidMemorySizeDown = (unsigned int)IopGetMaxValidMemorySizeDown(*(_QWORD *)(a4 + 248));
  MaxValidMemorySize = IopGetMaxValidMemorySize(*(_QWORD *)(a4 + 248), 256LL, v11);
  IopAddTriageDumpDataBlock(
    a1,
    a2,
    a3,
    *(_QWORD *)(a4 + 248) - MaxValidMemorySizeDown,
    MaxValidMemorySize + MaxValidMemorySizeDown);
  v13 = 144;
  v14 = &IopRunTimeContextOffsets;
  do
  {
    v15 = *(_QWORD *)(v13 + a4);
    if ( v15 < a5 || v15 >= a6 )
      IopAddTriageDumpDataBlock(a1, a2, a3, v15 & 0xFFFFFFFFFFFFF000uLL, 0x1000u);
    v14 += 2;
    result = *(unsigned __int16 *)v14;
    v13 = result;
  }
  while ( (_WORD)result != 0xFFFF );
  return result;
}
