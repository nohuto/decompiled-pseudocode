/*
 * XREFs of EditionSynthesizeMouseWheel @ 0x140131FA0
 * Callers:
 *     ApiSetEditionSynthesizeMouseWheel @ 0x140196B7C (ApiSetEditionSynthesizeMouseWheel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionSynthesizeMouseWheel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5))(__int64, __int64, __int64, __int64, int)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __int64, int); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                             a1,
                                                                                             a2)
                                                                                         + 48)
                                                                             + 7096LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int))result(a1, a2, a3, a4, a5);
  return result;
}
