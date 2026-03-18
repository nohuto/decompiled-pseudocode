/*
 * XREFs of EditionSetAccessibilityTimer @ 0x14018A1BC
 * Callers:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1401BB43C (ApiSetEditionSetAccessibilityTimer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionSetAccessibilityTimer(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4))(__int64, _QWORD, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD, __int64, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                                      + 4488LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD))result(a1, a2, a3, a4);
  return result;
}
