/*
 * XREFs of WdHwDestroyHardwareRegister @ 0x1405A4FCC
 * Callers:
 *     HalpWdatProcessWdrtInternalData @ 0x140597AA4 (HalpWdatProcessWdrtInternalData.c)
 *     WdInstrDestroyInstruction @ 0x1405A5094 (WdInstrDestroyInstruction.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x140509DE0 (HalpUnmapVirtualAddress.c)
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
