/*
 * XREFs of WdipSemWriteScenarioLimitExceededEvent @ 0x14082760C
 * Callers:
 *     WdipSemLoadNextScenario @ 0x140825F5C (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x140826454 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140AD7E84 (WdipSemWriteEvent.c)
 */

__int64 __fastcall WdipSemWriteScenarioLimitExceededEvent(__int64 a1, __int64 a2, __int16 a3)
{
  _QWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v5; // [rsp+80h] [rbp+18h] BYREF

  v5 = a3;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v4[0] = a2;
  v4[2] = &v5;
  v4[1] = 16LL;
  v4[3] = 2LL;
  return WdipSemWriteEvent(a1, a1, 0LL, 2LL, v4);
}
