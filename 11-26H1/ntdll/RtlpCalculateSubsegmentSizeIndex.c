/*
 * XREFs of RtlpCalculateSubsegmentSizeIndex @ 0x1800BE840
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x1800BE5AC (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCalculateSubsegmentSizeIndex(unsigned int a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = 983040;
  if ( a1 < 0xF0000 )
    v1 = a1;
  _BitScanReverse((unsigned int *)&v1, v1 - 1);
  result = (unsigned int)(v1 + 1);
  if ( (unsigned int)result <= 7 )
    return 7LL;
  if ( (unsigned int)result >= 0x12 )
    return 18LL;
  return result;
}
