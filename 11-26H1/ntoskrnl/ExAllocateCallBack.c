/*
 * XREFs of ExAllocateCallBack @ 0x140B32EE4
 * Callers:
 *     KeRegisterBoundCallback @ 0x1405E7740 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x14078E000 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x1407F6750 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x1408027F8 (PspSetCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140B2F01C (PspSetCreateProcessNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140B32DB0 (PsSetLoadImageNotifyRoutineEx.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall ExAllocateCallBack(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( result )
  {
    result[1] = a1;
    result[2] = a2;
    *result = 0LL;
  }
  return result;
}
