/*
 * XREFs of unsafe_cast_class_to_PIMEWND @ 0x140285D1C
 * Callers:
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x140035D3C (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140168DC8 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall unsafe_cast_class_to_PIMEWND(_QWORD *a1, __int64 a2)
{
  __int16 *v3; // rcx
  __int16 v4; // bx
  __int64 v5; // rax

  if ( !a1 )
    return 0LL;
  if ( _bittest16((const signed __int16 *)(a1[5] + 42LL), 0xCu) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 911);
  if ( _bittest16((const signed __int16 *)(a1[5] + 42LL), 0xCu) )
    return 0LL;
  v3 = *(__int16 **)(a1[17] + 8LL);
  v4 = *v3;
  if ( v4 != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v3, a2) + 19872) + 898LL) )
    return 0LL;
  v5 = a1[5];
  if ( *(_DWORD *)(v5 + 248) )
    return a1[35];
  else
    return *(_QWORD *)(v5 + 296);
}
