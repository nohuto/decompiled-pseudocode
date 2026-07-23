/*
 * XREFs of PspEmptyPropertySet @ 0x14094BFA0
 * Callers:
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x1404594F0 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
