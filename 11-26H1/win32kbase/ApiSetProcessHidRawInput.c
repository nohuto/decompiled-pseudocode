/*
 * XREFs of ApiSetProcessHidRawInput @ 0x1400A1C74
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400477E4 (RIMProcessAnyPointerDeviceInput.c)
 *     rimProcessHidInput @ 0x1400A19E0 (rimProcessHidInput.c)
 * Callees:
 *     IsProcessHidRawInputSupported @ 0x140079B40 (IsProcessHidRawInputSupported.c)
 *     ProcessHidRawInput @ 0x140079B78 (ProcessHidRawInput.c)
 */

__int64 (__fastcall *__fastcall ApiSetProcessHidRawInput(
        __int64 a1,
        __int64 a2,
        unsigned int a3))(__int64, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD); // rax

  result = (__int64 (__fastcall *)(__int64, __int64, _QWORD))IsProcessHidRawInputSupported(a1);
  if ( (int)result >= 0 )
    return ProcessHidRawInput(a1, a2, a3);
  return result;
}
