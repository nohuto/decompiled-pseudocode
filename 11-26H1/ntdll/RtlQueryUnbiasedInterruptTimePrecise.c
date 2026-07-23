/*
 * XREFs of RtlQueryUnbiasedInterruptTimePrecise @ 0x1800BEEA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1800BEF10 (RtlGetInterruptTimePrecise.c)
 */

__int64 __fastcall RtlQueryUnbiasedInterruptTimePrecise(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  LARGE_INTEGER InterruptTimePrecise; // rax
  __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  do
  {
    do
    {
      v2 = RtlpFreezeTimeBias;
      v3 = MEMORY[0x7FFE03B0];
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    }
    while ( v3 != MEMORY[0x7FFE03B0] );
  }
  while ( v2 != RtlpFreezeTimeBias );
  result = InterruptTimePrecise.QuadPart - v2 - MEMORY[0x7FFE03B0];
  *a1 = result;
  return result;
}
