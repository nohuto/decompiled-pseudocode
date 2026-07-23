/*
 * XREFs of RtlpIcFetchImmediateOperand @ 0x140C5D3E0
 * Callers:
 *     RtlpIcEmulateGroup11Instruction @ 0x140C5C734 (RtlpIcEmulateGroup11Instruction.c)
 *     RtlpIcEmulateGroup1Instruction @ 0x140C5C800 (RtlpIcEmulateGroup1Instruction.c)
 *     RtlpIcEmulateInstruction @ 0x140C5C9F8 (RtlpIcEmulateInstruction.c)
 * Callees:
 *     RtlpIcFetchInstructionBytes @ 0x140C5D45C (RtlpIcFetchInstructionBytes.c)
 */

__int64 __fastcall RtlpIcFetchImmediateOperand(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // eax
  int InstructionBytes; // edx
  char v6; // cl
  __int64 v7; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(unsigned __int8 *)(a1 + 23) >> 3;
  v9 = 0LL;
  if ( a2 )
  {
    *a3 += v4;
    return 0;
  }
  else
  {
    InstructionBytes = RtlpIcFetchInstructionBytes(a1, &v9, v4, a3);
    if ( InstructionBytes >= 0 )
    {
      v6 = *(_BYTE *)(a1 + 23);
      switch ( v6 )
      {
        case 8:
          v7 = (char)v9;
          break;
        case 16:
          v7 = (__int16)v9;
          break;
        case 32:
          v7 = (int)v9;
          break;
        default:
          v7 = v9;
          break;
      }
      *(_QWORD *)(a1 + 32) = v7;
    }
  }
  return (unsigned int)InstructionBytes;
}
