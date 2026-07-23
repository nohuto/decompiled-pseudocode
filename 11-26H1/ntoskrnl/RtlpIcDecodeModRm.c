/*
 * XREFs of RtlpIcDecodeModRm @ 0x140C5C290
 * Callers:
 *     RtlpIcEmulateGroup0Instruction @ 0x140C5C4D4 (RtlpIcEmulateGroup0Instruction.c)
 *     RtlpIcEmulateGroup11Instruction @ 0x140C5C734 (RtlpIcEmulateGroup11Instruction.c)
 *     RtlpIcEmulateGroup1Instruction @ 0x140C5C800 (RtlpIcEmulateGroup1Instruction.c)
 *     RtlpIcEmulateInstruction @ 0x140C5C9F8 (RtlpIcEmulateInstruction.c)
 *     RtlpIcEmulateMovzx @ 0x140C5D1FC (RtlpIcEmulateMovzx.c)
 * Callees:
 *     RtlpIcFetchInstructionBytes @ 0x140C5D45C (RtlpIcFetchInstructionBytes.c)
 */

__int64 __fastcall RtlpIcDecodeModRm(__int64 a1, __int64 a2, int *a3)
{
  int v3; // esi
  _BYTE *v5; // rdi
  __int64 result; // rax
  _BYTE *v7; // r9
  char v8; // cl

  v3 = *a3;
  if ( a2 )
  {
    *a3 = v3 + *(unsigned __int8 *)(a1 + 22);
    return 0LL;
  }
  v5 = (_BYTE *)(a1 + 26);
  result = RtlpIcFetchInstructionBytes(a1, a1 + 26, 1LL, a3);
  if ( (int)result >= 0 )
  {
    if ( (*v5 & 0xC0) == 0xC0
      || (*v5 & 7) != 4
      || (result = RtlpIcFetchInstructionBytes(a1, a1 + 27, 1LL, v7), (int)result >= 0) )
    {
      v8 = *v5 >> 6;
      if ( !v8 && ((*v5 & 7) == 5 || (*(_BYTE *)(a1 + 27) & 7) == 5) || v8 == 2 )
      {
        result = RtlpIcFetchInstructionBytes(a1, a1 + 28, 4LL, v7);
        if ( (int)result < 0 )
          return result;
      }
      else if ( v8 == 1 )
      {
        result = RtlpIcFetchInstructionBytes(a1, a1 + 28, 1LL, v7);
        if ( (int)result < 0 )
          return result;
        *(_DWORD *)(a1 + 28) = *(char *)(a1 + 28);
      }
      *(_BYTE *)(a1 + 22) = *v7 - v3;
      return 0LL;
    }
  }
  return result;
}
