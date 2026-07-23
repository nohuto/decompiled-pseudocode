/*
 * XREFs of RtlpIcSetFlagsZeroSignParity @ 0x140C5D870
 * Callers:
 *     RtlpIcEmulateGroup0Instruction @ 0x140C5C4D4 (RtlpIcEmulateGroup0Instruction.c)
 *     RtlpIcEmulateGroup1Instruction @ 0x140C5C800 (RtlpIcEmulateGroup1Instruction.c)
 *     RtlpIcEmulateInstruction @ 0x140C5C9F8 (RtlpIcEmulateInstruction.c)
 *     RtlpIcSetFlagsAdd @ 0x140C5D6A0 (RtlpIcSetFlagsAdd.c)
 *     RtlpIcSetFlagsSub @ 0x140C5D78C (RtlpIcSetFlagsSub.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpIcSetFlagsZeroSignParity(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // r10
  int v4; // r11d
  __int64 v5; // r9
  __int64 result; // rax

  v3 = *(_BYTE *)(a1 + 1);
  v4 = *((unsigned __int8 *)RtlpIcParityLookupTable + (unsigned __int8)a3);
  v5 = a3 >> (v3 - 1);
  if ( v3 < 0x40u )
    a3 &= (1LL << v3) - 1;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFFF3B;
  result = a3 == 0 ? 0x10 : 0;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) |= 4 * (v4 | result | (32 * (v5 & 1)));
  return result;
}
