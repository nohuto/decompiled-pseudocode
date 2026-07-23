/*
 * XREFs of RtlpIcSetFlagsAdd @ 0x140C5D6A0
 * Callers:
 *     RtlpIcEmulateGroup0Instruction @ 0x140C5C4D4 (RtlpIcEmulateGroup0Instruction.c)
 *     RtlpIcEmulateGroup1Instruction @ 0x140C5C800 (RtlpIcEmulateGroup1Instruction.c)
 * Callees:
 *     RtlpIcSetFlagsZeroSignParity @ 0x140C5D870 (RtlpIcSetFlagsZeroSignParity.c)
 */

__int64 __fastcall RtlpIcSetFlagsAdd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // di

  v5 = *(_BYTE *)(a1 + 1) - 1;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFF7EF;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) |= 16
                                           * (((((~(a5 ^ a4) & (a4 ^ a3)) >> v5) & 1) << 7) | ((unsigned __int8)((a4 >> 3) & (~(a5 ^ a4) >> 3)) | (unsigned __int8)((~a3 >> 3) & ((a4 >> 3) ^ (a5 >> 3)))) & 1);
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= ~1u;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) |= (((a5 ^ a4) & ~a3 | a4 & ~(a5 ^ a4)) >> v5) & 1;
  return RtlpIcSetFlagsZeroSignParity(a1, a2, a3);
}
