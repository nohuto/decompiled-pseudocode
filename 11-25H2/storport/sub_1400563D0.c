/*
 * XREFs of sub_1400563D0 @ 0x1400563D0
 * Callers:
 *     sub_1400287D0 @ 0x1400287D0 (sub_1400287D0.c)
 *     sub_1400A6008 @ 0x1400A6008 (sub_1400A6008.c)
 * Callees:
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_14009210C @ 0x14009210C (sub_14009210C.c)
 */

__int64 __fastcall sub_1400563D0(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 32) || !sub_1400215B0(a1, 31) )
    return 0LL;
  v5 = 10LL;
  Interval.QuadPart = -100000LL;
  while ( (unsigned __int8)sub_14009210C(a1) )
  {
    if ( a2 && a2 <= v5 )
      return 258;
    KeDelayExecutionThread(0, 0, &Interval);
    Interval.QuadPart = -1000000LL;
    v6 = a2 - v5;
    v5 = 100LL;
    if ( !a2 )
      v6 = 0LL;
    a2 = v6;
  }
  return v2;
}
