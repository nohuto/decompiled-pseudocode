/*
 * XREFs of rimAbRemoveGlobalPenDeadzone @ 0x140203128
 * Callers:
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x140075184 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1400752B0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void *__fastcall rimAbRemoveGlobalPenDeadzone(__int64 a1, int a2, int a3)
{
  void *result; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _OWORD v10[6]; // [rsp+20h] [rbp-68h] BYREF

  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 133);
  *(_DWORD *)(a1 + 492) = 0;
  *(_DWORD *)(a1 + 704) = 0;
  result = memset(v10, 0, sizeof(v10));
  v5 = v10[1];
  *(_OWORD *)(a1 + 608) = v10[0];
  v6 = v10[2];
  *(_OWORD *)(a1 + 624) = v5;
  v7 = v10[3];
  *(_OWORD *)(a1 + 640) = v6;
  v8 = v10[4];
  *(_OWORD *)(a1 + 656) = v7;
  v9 = v10[5];
  *(_OWORD *)(a1 + 672) = v8;
  *(_OWORD *)(a1 + 688) = v9;
  return result;
}
