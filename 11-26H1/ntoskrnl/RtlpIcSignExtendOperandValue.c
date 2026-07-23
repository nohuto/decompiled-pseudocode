/*
 * XREFs of RtlpIcSignExtendOperandValue @ 0x140C5D910
 * Callers:
 *     RtlpIcEmulateGroup0Instruction @ 0x140C5C4D4 (RtlpIcEmulateGroup0Instruction.c)
 *     RtlpIcEmulateInstruction @ 0x140C5C9F8 (RtlpIcEmulateInstruction.c)
 *     RtlpIcReadOperandValue @ 0x140C5D63C (RtlpIcReadOperandValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpIcSignExtendOperandValue(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a1 + 1);
  switch ( v2 )
  {
    case 8:
      return (char)a2;
    case 16:
      return (__int16)a2;
    case 32:
      return (int)a2;
  }
  return a2;
}
