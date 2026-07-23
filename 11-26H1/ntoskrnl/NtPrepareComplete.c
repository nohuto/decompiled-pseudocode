/*
 * XREFs of NtPrepareComplete @ 0x140536670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtPrepareComplete(EnlistmentHandle, TmVirtualClock);
}
