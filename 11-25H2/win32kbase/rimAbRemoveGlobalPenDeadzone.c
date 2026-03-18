/*
 * XREFs of rimAbRemoveGlobalPenDeadzone @ 0x1401DD3E0
 * Callers:
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x140030980 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140030AA8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x140243000 (memset.c)
 */

void *__fastcall rimAbRemoveGlobalPenDeadzone(__int64 a1, __int64 a2)
{
  void *result; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD v9[6]; // [rsp+20h] [rbp-68h] BYREF

  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 133);
  *(_DWORD *)(a1 + 492) = 0;
  *(_DWORD *)(a1 + 704) = 0;
  result = memset(v9, 0, sizeof(v9));
  v4 = v9[1];
  *(_OWORD *)(a1 + 608) = v9[0];
  v5 = v9[2];
  *(_OWORD *)(a1 + 624) = v4;
  v6 = v9[3];
  *(_OWORD *)(a1 + 640) = v5;
  v7 = v9[4];
  *(_OWORD *)(a1 + 656) = v6;
  v8 = v9[5];
  *(_OWORD *)(a1 + 672) = v7;
  *(_OWORD *)(a1 + 688) = v8;
  return result;
}
