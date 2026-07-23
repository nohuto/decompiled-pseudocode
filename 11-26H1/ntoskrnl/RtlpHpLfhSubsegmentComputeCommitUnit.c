/*
 * XREFs of RtlpHpLfhSubsegmentComputeCommitUnit @ 0x14034D52C
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x14034D570 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1405194B4 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentComputeCommitUnit(unsigned int a1, int a2)
{
  unsigned int v2; // edx
  unsigned int v4; // ecx
  __int64 result; // rax

  v2 = 2 * a2;
  if ( ((v2 - 1) & v2) != 0 )
  {
    _BitScanReverse(&v4, v2);
    v2 = 1 << (v4 + 1);
  }
  if ( v2 <= 0x1000 )
    v2 = 4096;
  result = a1 >> 6;
  if ( v2 > (unsigned int)result )
    result = v2;
  if ( (unsigned int)result >= a1 )
    return a1;
  return result;
}
