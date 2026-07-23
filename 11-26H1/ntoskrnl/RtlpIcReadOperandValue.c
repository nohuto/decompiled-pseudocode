/*
 * XREFs of RtlpIcReadOperandValue @ 0x140C5D63C
 * Callers:
 *     RtlpIcEmulateGroup0Instruction @ 0x140C5C4D4 (RtlpIcEmulateGroup0Instruction.c)
 *     RtlpIcEmulateGroup1Instruction @ 0x140C5C800 (RtlpIcEmulateGroup1Instruction.c)
 *     RtlpIcEmulateInstruction @ 0x140C5C9F8 (RtlpIcEmulateInstruction.c)
 * Callees:
 *     RtlpIcAccessMemory @ 0x140C5C198 (RtlpIcAccessMemory.c)
 *     RtlpIcSignExtendOperandValue @ 0x140C5D910 (RtlpIcSignExtendOperandValue.c)
 */

__int64 __fastcall RtlpIcReadOperandValue(__int64 a1, __int64 a2, volatile void *a3, char a4, char a5, _BYTE *a6)
{
  int v7; // r8d

  v7 = RtlpIcAccessMemory(a2, a6, a3, a4, a5, *(_BYTE *)(a1 + 1) >> 3, 0);
  if ( v7 >= 0 )
    *(_QWORD *)a6 = RtlpIcSignExtendOperandValue(a1, *(_QWORD *)a6);
  return (unsigned int)v7;
}
