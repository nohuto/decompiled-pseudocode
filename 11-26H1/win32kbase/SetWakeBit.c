/*
 * XREFs of SetWakeBit @ 0x1400B9C7C
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x1400419B0 (PostUpdateKeyStateEvent.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14009C52C (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     zzzDestroyQueue @ 0x1400B8EC0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall SetWakeBit(__int64 a1, unsigned int a2))(__int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 1120LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD))result(a1, a2);
  return result;
}
