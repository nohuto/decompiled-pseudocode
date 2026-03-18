/*
 * XREFs of EditionProcessPointerInputAsMouse @ 0x140160C70
 * Callers:
 *     ApiSetEditionProcessPointerInputAsMouse @ 0x1401BEE30 (ApiSetEditionProcessPointerInputAsMouse.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionProcessPointerInputAsMouse(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3))(__int64, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5880LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))result(a1, a2, a3);
  return result;
}
