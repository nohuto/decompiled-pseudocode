/*
 * XREFs of RtlpHpLfhSubsegmentComputeCommitUnit @ 0x1800BEE10
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x1800BE5AC (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x1800BE93C (RtlpHpLfhSubsegmentInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentComputeCommitUnit(unsigned int a1, int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ecx

  if ( (RtlpHpAppCompatFlags & 2) != 0 )
    return a1;
  v3 = 2 * a2;
  if ( ((2 * a2 - 1) & (2 * a2)) != 0 )
  {
    _BitScanReverse(&v4, v3);
    v3 = 1 << (v4 + 1);
  }
  if ( v3 <= 0x1000 )
    v3 = 4096;
  v5 = a1 >> 6;
  if ( v3 > a1 >> 6 )
    v5 = v3;
  if ( v5 >= a1 )
    return a1;
  return v5;
}
