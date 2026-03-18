/*
 * XREFs of PspEmptyPropertySet @ 0x140955BE8
 * Callers:
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x1404610F0 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
