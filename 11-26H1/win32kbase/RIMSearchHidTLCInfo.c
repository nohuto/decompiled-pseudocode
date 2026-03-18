/*
 * XREFs of RIMSearchHidTLCInfo @ 0x140130948
 * Callers:
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x140130784 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMIDECreateHIDDesc @ 0x14020749C (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1402102A4 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 *__fastcall RIMSearchHidTLCInfo(int a1, int a2, int a3)
{
  __int16 v3; // si
  __int16 v4; // bp
  int v5; // edx
  int v6; // ecx
  __int64 *i; // rbx
  int v8; // r8d
  int v9; // edi
  int v10; // eax

  v3 = a2;
  v4 = a1;
  for ( i = *(__int64 **)(W32GetUserSessionState(a1, a2, a3) + 192);
        i != (__int64 *)(W32GetUserSessionState(v6, v5, v8) + 192);
        i = (__int64 *)*i )
  {
    v8 = *((unsigned __int16 *)i + 8);
    v9 = 0;
    v5 = *((unsigned __int16 *)i + 9);
    if ( v8 == 1 && ((_WORD)v5 == 2 || (_WORD)v5 == 6) )
      v9 = 1;
    v10 = (_WORD)v8 == 1 && ((_WORD)v5 == 6 || (_WORD)v5 == 2);
    if ( v9 != v10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 43LL);
    if ( v9 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 124LL);
    if ( *((_WORD *)i + 8) == v4 && *((_WORD *)i + 9) == v3 )
      return i;
  }
  return 0LL;
}
