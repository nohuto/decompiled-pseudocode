/*
 * XREFs of PsRegisterSystemAvailableCpusChangeNotification @ 0x1407F67C0
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterAvailableCpusChangeNotification @ 0x1407BBE24 (KeRegisterAvailableCpusChangeNotification.c)
 */

__int64 __fastcall PsRegisterSystemAvailableCpusChangeNotification(
        __int64 a1,
        __int64 a2,
        struct _LIST_ENTRY **a3,
        _QWORD *a4)
{
  return KeRegisterAvailableCpusChangeNotification(0LL, a1, a2, a3, a4);
}
