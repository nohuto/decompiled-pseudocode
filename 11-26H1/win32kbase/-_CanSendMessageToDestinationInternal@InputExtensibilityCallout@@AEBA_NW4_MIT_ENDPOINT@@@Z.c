/*
 * XREFs of ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14008B63C
 * Callers:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x14008D1D8 (-Broadcast@InputConfig@@SAXXZ.c)
 * Callees:
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     IsInputProcessingActivated @ 0x1400D10D0 (IsInputProcessingActivated.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall InputExtensibilityCallout::_CanSendMessageToDestinationInternal(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  char v6; // bl
  int v7; // edx
  int v9; // edx
  __int64 v11; // rdx

  v3 = a2;
  if ( a2 >= 23 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 407LL);
  v5 = 5 * v3;
  if ( !*(_QWORD *)(a1 + 40 * v3 + 24) )
    return 0;
  v6 = 1;
  if ( !*(_QWORD *)(a1 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 413LL);
  v7 = *(_DWORD *)(a1 + 8 * v5 + 32);
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( !v9 )
      return IsInputProcessingActivated();
    v11 = (unsigned int)(v9 - 1);
    if ( !(_DWORD)v11 )
      return isRootPartition();
    if ( (_DWORD)v11 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 434LL);
      return v6;
    }
    return isChildPartition(a1, v11, a3);
  }
  return v6;
}
