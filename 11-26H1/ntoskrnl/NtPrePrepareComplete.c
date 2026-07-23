/*
 * XREFs of NtPrePrepareComplete @ 0x140536630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPrePrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtPrePrepareComplete(EnlistmentHandle, TmVirtualClock);
}
