/*
 * XREFs of ZwSetIoCompletion @ 0x14069E7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetIoCompletion(
        HANDLE IoCompletionHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}
