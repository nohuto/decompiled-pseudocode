/*
 * XREFs of ProcessSystemSleepStateNotify @ 0x140008B90
 * Callers:
 *     <none>
 * Callees:
 *     AcquireBiosPpmControl @ 0x140008B04 (AcquireBiosPpmControl.c)
 */

__int64 __fastcall ProcessSystemSleepStateNotify(int a1, __int64 a2, char a3)
{
  if ( (a1 == 3 || a1 == 6) && !a3 && (__int64 *)qword_140015618 != &qword_140015618 && qword_140015618 != 32 )
    AcquireBiosPpmControl(qword_140015618 - 32);
  return 0LL;
}
