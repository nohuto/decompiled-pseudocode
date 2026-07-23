/*
 * XREFs of ZwSetContextThread @ 0x14072B320
 * Callers:
 *     DifZwSetContextThreadWrapper @ 0x1406BCC30 (DifZwSetContextThreadWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
