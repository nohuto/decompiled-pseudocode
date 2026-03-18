/*
 * XREFs of VfNotifyVerifierOfEvent @ 0x140C21340
 * Callers:
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     IoShutdownSystem @ 0x140C0C858 (IoShutdownSystem.c)
 *     KdExitDebugger @ 0x140C12008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140C17858 (KdEnterDebugger.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x140CBAC00 (IoInitSystem.c)
 * Callees:
 *     DifNotifyPluginSystemEvent @ 0x1404D66B0 (DifNotifyPluginSystemEvent.c)
 *     VfUtilDbgPrint @ 0x14052FE80 (VfUtilDbgPrint.c)
 *     VfClearVerifierSettings @ 0x140640270 (VfClearVerifierSettings.c)
 *     DifUpdatePluginState @ 0x14064BFA4 (DifUpdatePluginState.c)
 *     VfBranchTracingPluginEntry @ 0x140C31C8C (VfBranchTracingPluginEntry.c)
 *     VfStartBranchTracing @ 0x140C31E10 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140C31E9C (VfStopBranchTracing.c)
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
        _InterlockedAdd(&dword_140F08D48, 1u);
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
            _InterlockedAdd(&dword_140F08D54, 1u);
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
          _InterlockedAdd(&dword_140F08D50, 1u);
          VfStartBranchTracing();
        }
        return;
      }
      _InterlockedAdd(&dword_140F08D4C, 1u);
    }
    else
    {
      _InterlockedAdd(&dword_140F08D44, 1u);
    }
    VfStopBranchTracing();
    return;
  }
  _InterlockedAdd(&ViNotifyEvent, 1u);
  v7 = VfBranchTracingPluginEntry();
  if ( v7 < 0 && (MmVerifierData & 0x8000000) != 0 )
    VfUtilDbgPrint("Failed to initialize branch tracing. <Status == 0x%08X>\n", v7);
}
