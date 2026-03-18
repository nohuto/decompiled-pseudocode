/*
 * XREFs of rimProcessCompleteFrame @ 0x140074484
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021F270 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     rimQueueCompleteFrame @ 0x140095460 (rimQueueCompleteFrame.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1400958DC (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     rimDispatchCompleteFrame @ 0x140096810 (rimDispatchCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

NTSTATUS __fastcall rimProcessCompleteFrame(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  NTSTATUS result; // eax

  if ( (*(_DWORD *)(a2 + 168) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1059LL);
  if ( (*(_QWORD *)(a1 + 832) || *(_DWORD *)(a1 + 1056))
    && (v6 = *(_DWORD *)(a2 + 168), (v6 & 0x2000) != 0)
    && (v6 & 0x80000) != 0
    && (v6 & 0x1000000) == 0 )
  {
    rimQueueCompleteFrame(a1, a2, a3);
    result = *(_DWORD *)(a2 + 168);
    if ( (result & 0x400000) == 0 )
    {
      *(_DWORD *)(a2 + 168) = result | 0x400000;
      return ZwSetEvent(*(HANDLE *)(a1 + 344), 0LL);
    }
  }
  else if ( *(_BYTE *)(a1 + 776) && *(_QWORD *)(a1 + 744) == a1 + 744 )
  {
    *(_BYTE *)(a1 + 776) = 0;
    InputTraceLogging::RIM::DispatchFrame(a2, a3, 0LL);
    return rimDispatchCompleteFrame(a1, a2, a3);
  }
  else
  {
    return rimQueueCompleteFrame(a1, a2, a3);
  }
  return result;
}
