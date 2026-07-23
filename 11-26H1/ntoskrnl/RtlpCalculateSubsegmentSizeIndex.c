/*
 * XREFs of RtlpCalculateSubsegmentSizeIndex @ 0x1404B24BC
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x1405194B4 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCalculateSubsegmentSizeIndex(unsigned int a1)
{
  int v1; // eax
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  __int64 result; // rax

  v1 = 983040;
  if ( a1 < 0xF0000 )
    v1 = a1;
  _BitScanReverse(&v2, v1 - 1);
  v3 = v2 + 1;
  if ( v3 <= 7 )
  {
    return 7;
  }
  else
  {
    result = 18LL;
    if ( v3 >= 0x12 )
      return result;
  }
  return v3;
}
