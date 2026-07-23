/*
 * XREFs of RtlpIcSetFlagsSub @ 0x140C5D78C
 * Callers:
 *     RtlpIcEmulateGroup0Instruction @ 0x140C5C4D4 (RtlpIcEmulateGroup0Instruction.c)
 *     RtlpIcEmulateGroup1Instruction @ 0x140C5C800 (RtlpIcEmulateGroup1Instruction.c)
 * Callees:
 *     RtlpIcSetFlagsZeroSignParity @ 0x140C5D870 (RtlpIcSetFlagsZeroSignParity.c)
 */

__int64 __fastcall RtlpIcSetFlagsSub(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v6; // cl
  __int64 v7; // r11

  v6 = *(_BYTE *)(a1 + 1) - 1;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFF7EF;
  v7 = ~a4 & (a5 | a3);
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) |= 16
                                           * ((((((a5 ^ a4) & ~(a5 ^ a3)) >> v6) & 1) << 7) | ((unsigned __int8)(v7 >> 3) | (unsigned __int8)((a5 >> 3) & (a4 >> 3) & (a3 >> 3))) & 1);
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= ~1u;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) |= ((v7 | a5 & a4 & a3) >> v6) & 1;
  return RtlpIcSetFlagsZeroSignParity(a1, a2, a3);
}
