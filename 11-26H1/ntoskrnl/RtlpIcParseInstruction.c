/*
 * XREFs of RtlpIcParseInstruction @ 0x140C574F8
 * Callers:
 *     RtlIcParseInstruction @ 0x140C560E8 (RtlIcParseInstruction.c)
 * Callees:
 *     RtlpIcEmulateInstruction @ 0x140C569F8 (RtlpIcEmulateInstruction.c)
 *     RtlpIcParseInstructionPrefix @ 0x140C57524 (RtlpIcParseInstructionPrefix.c)
 */

__int64 __fastcall RtlpIcParseInstruction(__int64 a1)
{
  __int64 result; // rax

  result = RtlpIcParseInstructionPrefix();
  if ( (int)result >= 0 )
    return RtlpIcEmulateInstruction(a1, 0LL);
  return result;
}
