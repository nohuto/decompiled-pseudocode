/*
 * XREFs of ZwCreateEvent @ 0x18015F740
 * Callers:
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180031C30 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     EtwpInitLoggerContext @ 0x180065D70 (EtwpInitLoggerContext.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180069660 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlReportExceptionHelper @ 0x18007F3E0 (RtlReportExceptionHelper.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18009052C (EtwpRegisterTpNotificationOnce.c)
 *     RtlWaitForWnfMetaNotification @ 0x180090610 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWnfRegisterTpNotification @ 0x180090B64 (RtlpWnfRegisterTpNotification.c)
 *     LdrpInitializeInternal @ 0x1800CC1E8 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x1800CC6B8 (_LdrpInitialize.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D8C3C (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpCreateLoaderEvents @ 0x1800FB2E4 (LdrpCreateLoaderEvents.c)
 *     WerpCreateCompletionEvent @ 0x18010FF48 (WerpCreateCompletionEvent.c)
 *     RtlCreateProcessReflection @ 0x180139530 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180139B00 (RtlpProcessReflectionStartup.c)
 *     RtlpCtContextInit @ 0x18014954C (RtlpCtContextInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  NTSTATUS result; // eax

  result = 72;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
