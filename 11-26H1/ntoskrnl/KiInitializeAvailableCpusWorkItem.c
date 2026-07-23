/*
 * XREFs of KiInitializeAvailableCpusWorkItem @ 0x1404D7AA8
 * Callers:
 *     KeRegisterAvailableCpusChangeNotification @ 0x1407BBE24 (KeRegisterAvailableCpusChangeNotification.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall KiInitializeAvailableCpusWorkItem(_QWORD *a1, __int64 a2, __int64 a3))()
{
  __int64 (__fastcall *result)(); // rax

  result = KiAvailableCpusWorkItemCallbackWrapper;
  a1[1] = 0LL;
  a1[5] = 0LL;
  a1[2] = KiAvailableCpusWorkItemCallbackWrapper;
  a1[3] = a1;
  *a1 = 0LL;
  a1[4] = 0LL;
  a1[6] = a2;
  a1[7] = a3;
  return result;
}
