/*
 * XREFs of _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1400B8E08
 * Callers:
 *     CleanupInputDelegation @ 0x1400B8D00 (CleanupInputDelegation.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400B8D3C (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     IsClearDelegationCaptureSupported @ 0x1400B93EC (IsClearDelegationCaptureSupported.c)
 *     ClearDelegationCapture @ 0x1400B952C (ClearDelegationCapture.c)
 *     _anonymous_namespace_::ScrubDelegateThread @ 0x1400B9694 (_anonymous_namespace_--ScrubDelegateThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall anonymous_namespace_::ScrubDelegatedWindow_tagWND___(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 264);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 264) = 0LL;
    *(_DWORD *)(a1 + 260) = 0;
    --*(_DWORD *)(v3 + 1504);
    --*(_DWORD *)(v1 + 1504);
    if ( (int)IsClearDelegationCaptureSupported() >= 0
      && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) + 144LL) == a1 )
    {
      ClearDelegationCapture();
    }
    if ( !*(_DWORD *)(v1 + 1504) )
    {
      anonymous_namespace_::ScrubDelegateThread(v1);
      return 1;
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 39LL);
  }
  return 0;
}
