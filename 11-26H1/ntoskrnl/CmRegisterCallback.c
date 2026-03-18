/*
 * XREFs of CmRegisterCallback @ 0x1408505A0
 * Callers:
 *     DifCmRegisterCallbackWrapper @ 0x14064DCB0 (DifCmRegisterCallbackWrapper.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x140A0506C (CmpRegisterCallbackInternal.c)
 */

NTSTATUS __stdcall CmRegisterCallback(PEX_CALLBACK_FUNCTION Function, PVOID Context, PLARGE_INTEGER Cookie)
{
  return CmpRegisterCallbackInternal(
           (_DWORD)Function,
           (_DWORD)Context,
           (unsigned int)&WheapPfaLock.KernelStack,
           1,
           0,
           (__int64)Cookie);
}
