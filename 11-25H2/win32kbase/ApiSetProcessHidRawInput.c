/*
 * XREFs of ApiSetProcessHidRawInput @ 0x14013F2A0
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400D6900 (RIMProcessAnyPointerDeviceInput.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 *     rimProcessHidInput @ 0x1401F11FC (rimProcessHidInput.c)
 * Callees:
 *     IsProcessHidRawInputSupported @ 0x14002A95C (IsProcessHidRawInputSupported.c)
 *     ProcessHidRawInput @ 0x1400F8594 (ProcessHidRawInput.c)
 */

__int64 (__fastcall *__fastcall ApiSetProcessHidRawInput(
        __int64 a1,
        __int64 a2,
        unsigned int a3))(__int64, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD); // rax

  result = (__int64 (__fastcall *)(__int64, __int64, _QWORD))IsProcessHidRawInputSupported();
  if ( (int)result >= 0 )
    return ProcessHidRawInput(a1, a2, a3);
  return result;
}
