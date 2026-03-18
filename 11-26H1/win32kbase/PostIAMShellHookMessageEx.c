/*
 * XREFs of PostIAMShellHookMessageEx @ 0x14007F2C0
 * Callers:
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14009C52C (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PostIAMShellHookMessageEx(
        __int64 a1,
        unsigned int a2,
        __int64 a3))(__int64, _QWORD, __int64)
{
  __int64 (__fastcall *result)(__int64, _QWORD, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                              + 3368LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64))result(a1, a2, a3);
  return result;
}
