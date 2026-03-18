/*
 * XREFs of WdHwDestroyHardwareRegister @ 0x1405697CC
 * Callers:
 *     HalpWdatProcessWdrtInternalData @ 0x14055D040 (HalpWdatProcessWdrtInternalData.c)
 *     WdInstrDestroyInstruction @ 0x140569894 (WdInstrDestroyInstruction.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x140411990 (HalpUnmapVirtualAddress.c)
 */

__int64 __fastcall WdHwDestroyHardwareRegister(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 8) )
    HalpUnmapVirtualAddress(*(_QWORD *)(a1 + 16), ((unsigned int)*(unsigned __int8 *)(a1 + 9) + 4095) >> 12, 0);
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
