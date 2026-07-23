/*
 * XREFs of RtlpHpVsSubsegmentComputeSize @ 0x18005FCA8
 * Callers:
 *     RtlpHpVsSubsegmentCreate @ 0x18005E8D4 (RtlpHpVsSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsSubsegmentComputeSize(__int64 a1, int a2, unsigned int *a3)
{
  int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // ecx
  __int64 result; // rax

  v3 = 16 * a2 + 4143;
  v4 = 32 * a2 + 48;
  *a3 = v3 & 0xFFFFF000;
  if ( ((v4 - 1) & v4) != 0 )
  {
    _BitScanReverse(&v5, v4);
    v4 = 1 << (v5 + 1);
  }
  result = 0x10000LL;
  if ( v4 > 0x10000 )
  {
    result = v4;
    if ( v4 >= 0x40000 )
      return 0x40000LL;
  }
  return result;
}
