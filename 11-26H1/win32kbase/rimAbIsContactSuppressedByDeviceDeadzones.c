/*
 * XREFs of rimAbIsContactSuppressedByDeviceDeadzones @ 0x1401417DC
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140075964 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x14020C704 (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 */

__int64 __fastcall rimAbIsContactSuppressedByDeviceDeadzones(__int64 a1, struct tagHPD_CONTACT *a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rsi
  unsigned int i; // edi
  RIMDeadzone *v9; // rcx

  v5 = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, a3) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 456LL);
  v6 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v6 + 432) )
  {
    for ( i = 0; i < 5; ++i )
    {
      v9 = *(RIMDeadzone **)(v6 + 8LL * i + 392);
      if ( v9 && (unsigned int)RIMDeadzone::IsInDeadzone(v9, a2) )
        return 1;
    }
  }
  return v5;
}
