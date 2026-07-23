/*
 * XREFs of RtlpHpLfhSubsegmentCountAllocatedBlocks @ 0x14034C00C
 * Callers:
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x14034BE98 (RtlpHpLfhSubsegmentReformatCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentCountAllocatedBlocks(__int64 a1)
{
  unsigned __int64 *v1; // rdx
  int v2; // r8d

  v1 = (unsigned __int64 *)(a1 + 64);
  v2 = 0;
  while ( (unsigned __int64)v1 < a1 + 64 + 8 * (unsigned __int64)((unsigned int)*(unsigned __int8 *)(a1 + 24) - 8) )
    v2 += __popcnt(*v1++);
  return v2
       - (-(*(unsigned __int8 *)(a1 + 37) + *(unsigned __int16 *)(a1 + 34)) & 0x3F)
       - (unsigned int)*(unsigned __int8 *)(a1 + 37);
}
