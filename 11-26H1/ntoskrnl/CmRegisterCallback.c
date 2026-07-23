/*
 * XREFs of CmRegisterCallback @ 0x1408568B0
 * Callers:
 *     DifCmRegisterCallbackWrapper @ 0x140651890 (DifCmRegisterCallbackWrapper.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x1409F085C (CmpRegisterCallbackInternal.c)
 */

NTSTATUS __stdcall CmRegisterCallback(PEX_CALLBACK_FUNCTION Function, PVOID Context, PLARGE_INTEGER Cookie)
{
  return CmpRegisterCallbackInternal(
           (_DWORD)Function,
           (_DWORD)Context,
           (unsigned int)&WheapPfaLock.SchedulingGroup,
           1,
           0,
           (__int64)Cookie);
}
