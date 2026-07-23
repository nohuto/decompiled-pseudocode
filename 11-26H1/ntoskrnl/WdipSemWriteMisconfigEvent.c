/*
 * XREFs of WdipSemWriteMisconfigEvent @ 0x140827514
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140826454 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140AD7E84 (WdipSemWriteEvent.c)
 */

__int64 __fastcall WdipSemWriteMisconfigEvent(__int64 a1, __int16 a2, int a3)
{
  _QWORD v4[6]; // [rsp+30h] [rbp-40h] BYREF
  __int16 v5; // [rsp+88h] [rbp+18h] BYREF
  int v6; // [rsp+90h] [rbp+20h] BYREF

  v6 = a3;
  v5 = a2;
  if ( !a1 )
    return 3221225485LL;
  v4[0] = a1;
  v4[2] = &v5;
  v4[1] = 16LL;
  v4[4] = &v6;
  v4[3] = 2LL;
  v4[5] = 4LL;
  return WdipSemWriteEvent(a1, &WDI_SEM_EVENT_INIT_MISCONFIG, 0LL, 3LL, v4);
}
