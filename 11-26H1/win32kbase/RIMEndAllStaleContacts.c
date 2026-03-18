/*
 * XREFs of RIMEndAllStaleContacts @ 0x14005AA78
 * Callers:
 *     RIMOnTimerNotification @ 0x140059D20 (RIMOnTimerNotification.c)
 * Callees:
 *     rimEndPointerDeviceStaleContacts @ 0x14005AAE4 (rimEndPointerDeviceStaleContacts.c)
 */

LARGE_INTEGER __fastcall RIMEndAllStaleContacts(__int64 a1)
{
  LARGE_INTEGER result; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rax

  result = KeQueryPerformanceCounter(0LL);
  v3 = *(_QWORD **)(a1 + 448);
  while ( v3 != (_QWORD *)(a1 + 448) )
  {
    v4 = *(v3 - 1);
    v3 = (_QWORD *)*v3;
    result.QuadPart = rimEndPointerDeviceStaleContacts((struct RawInputManagerObject *)a1, *(struct RIMDEV **)(v4 + 16));
  }
  return result;
}
