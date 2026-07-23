/*
 * XREFs of RtlpComputeFraction @ 0x140535570
 * Callers:
 *     RtlGenerateQpcToIncrementConstants @ 0x1404EDE40 (RtlGenerateQpcToIncrementConstants.c)
 *     KiInitializeProcessorCycleAccumulation @ 0x1405E7B14 (KiInitializeProcessorCycleAccumulation.c)
 *     KiSetupTimeIncrement @ 0x1405E7D38 (KiSetupTimeIncrement.c)
 * Callees:
 *     RtlpCountLeadingZeroes64 @ 0x1406231E8 (RtlpCountLeadingZeroes64.c)
 */

unsigned __int64 __fastcall RtlpComputeFraction(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned __int64 result; // rax
  char v4; // bl
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  char v7; // di
  _BYTE *v8; // r11
  __int64 v9; // r8
  unsigned __int64 v10; // r8
  __int64 v11; // r10
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10

  *a3 = 0;
  if ( !a1 && (_DWORD)a2 )
    return 0LL;
  v4 = RtlpCountLeadingZeroes64(a1, a2, a1, (unsigned int)a2);
  v7 = RtlpCountLeadingZeroes64((v5 << v4) / v6, (v5 << v4) % v6, (v5 << v4) % v6, v6);
  v10 = v9 << v7;
  v13 = v10 / v12 + (v11 << v7);
  if ( 2 * (v10 % v12) > v12 && v13 + 1 >= v13 )
    ++v13;
  result = v13;
  *v8 = 64 - v4 - v7;
  return result;
}
