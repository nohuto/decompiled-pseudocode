/*
 * XREFs of PpmHeteroHgsHwFeedbackTableOffsetInit @ 0x14060E148
 * Callers:
 *     PpmHeteroHgsProcessorInit @ 0x14060E1CC (PpmHeteroHgsProcessorInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmHeteroHgsHwFeedbackTableOffsetInit(__int64 a1)
{
  __int64 result; // rax
  bool v7; // zf
  __int16 v8; // r8

  _RAX = 6LL;
  __asm { cpuid }
  v7 = PpmHeteroHgsThreadEnabled == 0;
  *(_WORD *)(a1 + 35422) = WORD1(_RDX);
  if ( v7 )
  {
    v8 = 8 * (WORD1(_RDX) + 2);
  }
  else
  {
    result = WORD1(_RDX);
    v8 = ((PpmHeteroHgsCapabilityBits * *(_WORD *)(PpmHeteroCapability + 4) + 15) & 0xFFF8)
       + WORD1(_RDX) * ((PpmHeteroHgsCapabilityBits * *(_WORD *)(PpmHeteroCapability + 4) + 7) & 0xFFF8);
  }
  *(_WORD *)(a1 + 35418) = v8;
  return result;
}
