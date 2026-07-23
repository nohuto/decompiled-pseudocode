/*
 * XREFs of RtlWow64GetThreadContext @ 0x1801383B0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18015F2E0 (ZwQueryInformationThread.c)
 */

NTSTATUS __cdecl RtlWow64GetThreadContext(HANDLE ThreadHandle, PWOW64_CONTEXT ThreadContext)
{
  return ZwQueryInformationThread(ThreadHandle, ThreadWow64Context, ThreadContext, 0x2CCu, 0LL);
}
