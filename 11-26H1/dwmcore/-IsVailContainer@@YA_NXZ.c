/*
 * XREFs of ?IsVailContainer@@YA_NXZ @ 0x1801261F8
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x180112DE4 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     IsSuperWetInkCompatibleVailContainer @ 0x1801260AC (IsSuperWetInkCompatibleVailContainer.c)
 *     ?QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1801260E0 (-QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME.c)
 *     ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x180255A00 (-CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z.c)
 *     _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x180296BD0 (_anonymous_namespace_--CreateD3D12ResourcesInternal.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x180217420 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

bool IsVailContainer(void)
{
  bool v0; // bl
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( HIBYTE(word_1803E2594) )
    return word_1803E2594;
  v2 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", L"IsVailContainer", &v2) )
  {
    HIBYTE(word_1803E2594) = 1;
    v0 = v2 != 0;
    LOBYTE(word_1803E2594) = v2 != 0;
  }
  else
  {
    word_1803E2594 = 256;
  }
  return v0;
}
