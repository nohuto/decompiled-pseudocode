/*
 * XREFs of ProcessSystemSleepStateNotify @ 0x14000B610
 * Callers:
 *     <none>
 * Callees:
 *     AcquireBiosPpmControl @ 0x140005EEC (AcquireBiosPpmControl.c)
 */

__int64 __fastcall ProcessSystemSleepStateNotify(int a1, __int64 a2, char a3)
{
  if ( (a1 == 3 || a1 == 6) && !a3 && (__int64 *)qword_1400191E8 != &qword_1400191E8 && qword_1400191E8 != 32 )
    AcquireBiosPpmControl(qword_1400191E8 - 32);
  return 0LL;
}
