/*
 * XREFs of UserIsCurrentProcessDwm @ 0x14006F430
 * Callers:
 *     ?DrvCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x140028CD8 (-DrvCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     DrvEnumDisplayDevices @ 0x140046490 (DrvEnumDisplayDevices.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x140058A80 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     NtUpdateInputSinkTransforms @ 0x14006E9A0 (NtUpdateInputSinkTransforms.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x14006F0B0 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtQueryCompositionInputSink @ 0x1400A4290 (NtQueryCompositionInputSink.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1400B13A0 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     GreSfmOpenTokenEvent @ 0x1400B1D10 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1400B2E90 (GreSfmGetNotificationTokens.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1400C6780 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400D5A60 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1401659D0 (NtDCompositionUpdatePointerCapture.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14017BA40 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     NtDCompositionBeginFrame @ 0x1401B2540 (NtDCompositionBeginFrame.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1401B2890 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     NtUserCheckProcessSession @ 0x1401E2390 (NtUserCheckProcessSession.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x140228A40 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x140228F60 (NtDCompositionDuplicateHandleToProcess.c)
 *     ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140229ED8 (-Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessDwm(int a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 70544);
  return PsGetCurrentProcess(v4) == v3;
}
