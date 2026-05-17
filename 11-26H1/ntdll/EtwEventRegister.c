/*
 * XREFs of EtwEventRegister @ 0x180057A10
 * Callers:
 *     RtlInitializeHeapLogging @ 0x1800598A0 (RtlInitializeHeapLogging.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800DBE78 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x180137A98 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x180137B40 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x18015D5C0 (LdrpLogFatalUserCallbackException.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016F69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180056610 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x1800571C0 (EtwNotificationRegister.c)
 */

__int64 __fastcall EtwEventRegister(struct _SLIST_ENTRY *a1, _SLIST_ENTRY *a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( !a2 && a3 )
    return 87LL;
  v4 = EtwNotificationRegister(a1, 3, a2, a3, a4);
  v5 = v4;
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v5;
}
