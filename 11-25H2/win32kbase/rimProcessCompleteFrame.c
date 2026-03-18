/*
 * XREFs of rimProcessCompleteFrame @ 0x140183590
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1400315B8 (RIMCompletePointerDeviceFrame.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A900 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1400EE000 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     rimDispatchCompleteFrame @ 0x140134290 (rimDispatchCompleteFrame.c)
 *     rimQueueCompleteFrame @ 0x1401836BC (rimQueueCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_RIMPointerReliability__private_IsEnabledDeviceUsageNoInline @ 0x1401D7B64 (Feature_RIMPointerReliability__private_IsEnabledDeviceUsageNoInline.c)
 */

NTSTATUS __fastcall rimProcessCompleteFrame(__int64 a1, __int64 a2, int *a3)
{
  int v6; // eax
  NTSTATUS result; // eax
  bool v8; // bp

  if ( (*(_DWORD *)(a2 + 168) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1109LL);
  if ( !*(_QWORD *)(a1 + 832) && !*(_DWORD *)(a1 + 1056)
    || (v6 = *(_DWORD *)(a2 + 168), (v6 & 0x2000) == 0)
    || (v6 & 0x80000) == 0
    || (v6 & 0x1000000) != 0 )
  {
    v8 = *(_BYTE *)(a1 + 776) != 0;
    if ( (unsigned int)Feature_RIMPointerReliability__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !*(_BYTE *)(a1 + 776) || *(_QWORD *)(a1 + 744) != a1 + 744 )
        return rimQueueCompleteFrame(a1, a2, a3);
    }
    else if ( !v8 )
    {
      return rimQueueCompleteFrame(a1, a2, a3);
    }
    *(_BYTE *)(a1 + 776) = 0;
    InputTraceLogging::RIM::DispatchFrame(a2, a3, 0);
    return rimDispatchCompleteFrame((struct RawInputManagerObject *)a1, (struct RIMDEV *)a2, a3);
  }
  rimQueueCompleteFrame(a1, a2, a3);
  result = *(_DWORD *)(a2 + 168);
  if ( (result & 0x400000) == 0 )
  {
    *(_DWORD *)(a2 + 168) = result | 0x400000;
    return ZwSetEvent(*(HANDLE *)(a1 + 344), 0LL);
  }
  return result;
}
