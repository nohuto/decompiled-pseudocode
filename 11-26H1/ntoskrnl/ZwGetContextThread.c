/*
 * XREFs of ZwGetContextThread @ 0x140729F20
 * Callers:
 *     DifZwGetContextThreadWrapper @ 0x1406AB0E0 (DifZwGetContextThreadWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
