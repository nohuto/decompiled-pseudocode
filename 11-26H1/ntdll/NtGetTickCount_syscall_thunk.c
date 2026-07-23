/*
 * XREFs of NtGetTickCount_syscall_thunk @ 0x180162B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 NtGetTickCount_syscall_thunk()
{
  return RtlGetTickCount();
}
