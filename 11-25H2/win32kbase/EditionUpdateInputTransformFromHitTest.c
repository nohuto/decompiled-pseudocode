/*
 * XREFs of EditionUpdateInputTransformFromHitTest @ 0x1400F3490
 * Callers:
 *     ApiSetEditionUpdateInputTransformFromHitTest @ 0x140196DF8 (ApiSetEditionUpdateInputTransformFromHitTest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionUpdateInputTransformFromHitTest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6))(__int64, __int64, __int64, _QWORD, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, _QWORD, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                                                         + 5472LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, __int64))result(a1, a2, a3, a4, a5, a6);
  return result;
}
