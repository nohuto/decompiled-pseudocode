/*
 * XREFs of RtlQueryUnbiasedInterruptTimePrecise @ 0x1800C1710
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1800C1780 (RtlGetInterruptTimePrecise.c)
 */

__int64 __fastcall RtlQueryUnbiasedInterruptTimePrecise(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 InterruptTimePrecise; // rax
  __int64 result; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  do
  {
    do
    {
      v2 = RtlpFreezeTimeBias;
      v3 = MEMORY[0x7FFE03B0];
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v6);
    }
    while ( v3 != MEMORY[0x7FFE03B0] );
  }
  while ( v2 != RtlpFreezeTimeBias );
  result = InterruptTimePrecise - v2 - MEMORY[0x7FFE03B0];
  *a1 = result;
  return result;
}
