/*
 * XREFs of ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14020EC30
 * Callers:
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x140067380 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140067640 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1401F74B4 (-Broadcast@InputConfig@@SAXXZ.c)
 * Callees:
 *     isRootPartition @ 0x14005E028 (isRootPartition.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     IsInputProcessingActivated @ 0x140067500 (IsInputProcessingActivated.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall InputExtensibilityCallout::_CanSendMessageToDestinationInternal(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  char v5; // bl
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rdx

  v2 = a2;
  if ( a2 >= 22 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 407);
  v4 = 5 * v2;
  if ( !*(_QWORD *)(a1 + 40 * v2 + 24) )
    return 0;
  v5 = 1;
  if ( !*(_QWORD *)(a1 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 413);
  v6 = *(_DWORD *)(a1 + 8 * v4 + 32);
  if ( v6 )
  {
    v7 = (unsigned int)(v6 - 1);
    if ( !(_DWORD)v7 )
      return IsInputProcessingActivated(a1, v7);
    v8 = (unsigned int)(v7 - 1);
    if ( !(_DWORD)v8 )
      return isRootPartition(a1, v8);
    if ( (_DWORD)v8 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 434);
      return v5;
    }
    return isChildPartition(a1, v8);
  }
  return v5;
}
