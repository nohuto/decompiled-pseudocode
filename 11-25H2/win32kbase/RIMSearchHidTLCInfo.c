/*
 * XREFs of RIMSearchHidTLCInfo @ 0x14002A7D0
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x14002A1AC (RIMIDECreateHIDDesc.c)
 *     RIMCreateHidDesc @ 0x1401DF458 (RIMCreateHidDesc.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1401E68A4 (RIMAllocateAndLinkHidTLCInfo.c)
 *     rimObsStartStopDeviceRead @ 0x1401F4828 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 *__fastcall RIMSearchHidTLCInfo(__int64 a1, __int64 a2)
{
  __int16 v2; // si
  __int16 v3; // bp
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // rdx
  int v10; // eax

  v2 = a2;
  v3 = a1;
  v4 = *(__int64 **)(W32GetUserSessionState(a1, a2) + 192);
  if ( v4 == (__int64 *)(W32GetUserSessionState(v6, v5) + 192) )
    return 0LL;
  while ( 1 )
  {
    v8 = 0;
    v9 = *((unsigned __int16 *)v4 + 9);
    if ( *((_WORD *)v4 + 8) != 1 )
      goto LABEL_7;
    if ( (_WORD)v9 == 2 || (_WORD)v9 == 6 )
      v8 = 1;
    LOWORD(v9) = v9 - 2;
    v10 = 1;
    if ( (v9 & 0xFFFB) != 0 )
LABEL_7:
      v10 = 0;
    if ( v8 != v10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 43LL);
    if ( v8 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 124LL);
    if ( *((_WORD *)v4 + 8) == v3 && *((_WORD *)v4 + 9) == v2 )
      return v4;
    v4 = (__int64 *)*v4;
    if ( v4 == (__int64 *)(W32GetUserSessionState(v7, v9) + 192) )
      return 0LL;
  }
}
