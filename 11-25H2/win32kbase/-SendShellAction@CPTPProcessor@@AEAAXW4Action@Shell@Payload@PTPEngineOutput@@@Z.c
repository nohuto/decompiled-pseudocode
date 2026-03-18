/*
 * XREFs of ?SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x140211630
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x14018ADE0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     SendMessageTo @ 0x1400675F0 (SendMessageTo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline @ 0x1401A988C (Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CPTPProcessor::SendShellAction(__int64 a1, int a2)
{
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( (unsigned int)Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !*(_QWORD *)(a1 + 528) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074, 1448);
    *(_QWORD *)&v5 = *(_QWORD *)(a1 + 528);
  }
  DWORD2(v5) = a2;
  return SendMessageTo(21LL, &v5, 16LL);
}
