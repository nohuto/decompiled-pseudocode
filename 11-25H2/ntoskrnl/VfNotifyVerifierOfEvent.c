/*
 * XREFs of VfNotifyVerifierOfEvent @ 0x140B72EC0
 * Callers:
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     IoShutdownSystem @ 0x140B4374C (IoShutdownSystem.c)
 *     KdExitDebugger @ 0x140B65008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B6A96C (KdEnterDebugger.c)
 *     IoInitSystem @ 0x140C098E8 (IoInitSystem.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     VfClearVerifierSettings @ 0x140603DE0 (VfClearVerifierSettings.c)
 *     VfUtilDbgPrint @ 0x1406042DC (VfUtilDbgPrint.c)
 *     DifNotifyPluginSystemEvent @ 0x14060C9E8 (DifNotifyPluginSystemEvent.c)
 *     DifUpdatePluginState @ 0x14060CFB4 (DifUpdatePluginState.c)
 *     VfBranchTracingPluginEntry @ 0x140B83800 (VfBranchTracingPluginEntry.c)
 *     VfStartBranchTracing @ 0x140B83978 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140B83A04 (VfStopBranchTracing.c)
 */

void __fastcall VfNotifyVerifierOfEvent(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int started; // eax
  __int32 v6; // r9d
  int v7; // eax

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( !v2 )
      {
        _InterlockedAdd(&dword_140F041A8, 1u);
        _InterlockedExchange(&ViKeTrackIrqlDisabled, 1);
        VfStopBranchTracing();
        _InterlockedExchange(&ViFaultsDisabled, v6);
        return;
      }
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 == 1 )
          {
            _InterlockedAdd(&dword_140F041B4, 1u);
            started = VfStartBranchTracing();
            if ( started < 0 && (MmVerifierData & 0x8000000) != 0 )
              VfUtilDbgPrint("Failed to start branch tracing. <Status == 0x%08X>\n", started);
            if ( (VfOptionFlags & 0x10) != 0 )
            {
              VfUtilDbgPrint("Driver Verifier: VERIFIER_OPTION_ONEBOOT set before boot. Clearing Verifier options from Registry.\n");
              VfClearVerifierSettings();
            }
            DifUpdatePluginState();
            DifNotifyPluginSystemEvent(0, 0LL);
          }
        }
        else
        {
          _InterlockedAdd(&dword_140F041B0, 1u);
          VfStartBranchTracing();
        }
        return;
      }
      _InterlockedAdd(&dword_140F041AC, 1u);
    }
    else
    {
      _InterlockedAdd(&dword_140F041A4, 1u);
    }
    VfStopBranchTracing();
    return;
  }
  _InterlockedAdd(&ViNotifyEvent, 1u);
  v7 = VfBranchTracingPluginEntry();
  if ( v7 < 0 && (MmVerifierData & 0x8000000) != 0 )
    VfUtilDbgPrint("Failed to initialize branch tracing. <Status == 0x%08X>\n", v7);
}
