/*
 * XREFs of _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1401D9420
 * Callers:
 *     CleanupInputDelegation @ 0x1400B8D00 (CleanupInputDelegation.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400B8D3C (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     IsClearDelegationCaptureSupported @ 0x1400B93EC (IsClearDelegationCaptureSupported.c)
 *     ClearDelegationCapture @ 0x1400B952C (ClearDelegationCapture.c)
 *     _anonymous_namespace_::ScrubDelegateThread @ 0x1400B9694 (_anonymous_namespace_--ScrubDelegateThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall anonymous_namespace_::ScrubDelegatedWindow_tagBWND___(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTellMeIf", 0x20000, 39);
    return 0;
  }
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  --*(_DWORD *)(v4 + 1504);
  --*(_DWORD *)(v1 + 1504);
  if ( (int)IsClearDelegationCaptureSupported(0xFFFFFFFFLL) >= 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL);
    if ( *(_QWORD *)(v5 + 144) == a1 )
      ClearDelegationCapture(v5);
  }
  if ( *(_DWORD *)(v1 + 1504) )
    return 0;
  anonymous_namespace_::ScrubDelegateThread(v1);
  return 1;
}
