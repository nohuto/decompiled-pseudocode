/*
 * XREFs of ?RestoreArrangedState@@YAXPEAUtagWND@@PEBUCHECKPOINT@@@Z @ 0x1402A7F54
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x14021E738 (-UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RestoreArrangedState(struct tagWND *a1, const struct CHECKPOINT *a2)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rdx

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 513);
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( a2 != (const struct CHECKPOINT *)GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41334), 1u) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 514);
  if ( (*((_DWORD *)a2 + 4) & 8) != 0 )
    *((_DWORD *)a1 + 95) |= 0x4000000u;
  if ( !IsArranged(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 521);
  UpdateDwmSnapArrangedInitiated(a1, v5);
}
