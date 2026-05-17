/*
 * XREFs of ZwCreateEvent @ 0x18015F840
 * Callers:
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x1800476B0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     EtwpRegisterTpNotificationOnce @ 0x1800700DC (EtwpRegisterTpNotificationOnce.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800701C0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWnfRegisterTpNotification @ 0x180070714 (RtlpWnfRegisterTpNotification.c)
 *     EtwpInitLoggerContext @ 0x180077550 (EtwpInitLoggerContext.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18007AE40 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlReportExceptionHelper @ 0x180088060 (RtlReportExceptionHelper.c)
 *     LdrpInitializeInternal @ 0x1800CEA78 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DBCCC (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpCreateLoaderEvents @ 0x1800FBB94 (LdrpCreateLoaderEvents.c)
 *     WerpCreateCompletionEvent @ 0x1801103B8 (WerpCreateCompletionEvent.c)
 *     RtlCreateProcessReflection @ 0x1801397C0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180139D90 (RtlpProcessReflectionStartup.c)
 *     RtlpCtContextInit @ 0x18014969C (RtlpCtContextInit.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateEvent()
{
  __int64 result; // rax

  result = 72LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
