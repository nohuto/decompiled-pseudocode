/*
 * XREFs of EditionProcessPointerInputAsMouse @ 0x140127C90
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionProcessPointerInputAsMouse(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3))(__int64, _QWORD, _QWORD)
{
  unsigned __int16 v4; // di
  __int64 (__fastcall *result)(__int64, _QWORD, _QWORD); // rax

  v4 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                             + 6320LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))result(a1, v4, a3);
  return result;
}
