/*
 * XREFs of RtlpHpVsChunkSetExtraPresent @ 0x180005674
 * Callers:
 *     RtlpHpExtrasAppend @ 0x180005470 (RtlpHpExtrasAppend.c)
 *     RtlpHpExtrasSetPresent @ 0x1800056F0 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpVsChunkSetExtraPresent(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 result; // rax
  __int64 v5; // rdx

  v2 = a2 - 16;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && (a2 & 0xFFF) == 0 )
    v2 = a2 - 32;
  result = v2 >> 16;
  v5 = 16 * (WORD1(v2) ^ WORD1(*(_QWORD *)v2) ^ WORD1(RtlpHpHeapGlobals)) - 16;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
    result = v2 + 32;
    if ( ((v2 + 32) & 0xFFF) == 0 )
      v5 = 16 * (WORD1(v2) ^ WORD1(*(_QWORD *)v2) ^ WORD1(RtlpHpHeapGlobals)) - 32;
  }
  *(_WORD *)(v5 + a2 - 2) |= 0x4000u;
  return result;
}
