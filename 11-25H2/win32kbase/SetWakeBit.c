/*
 * XREFs of SetWakeBit @ 0x1400948E8
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14003B130 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     PostUpdateKeyStateEvent @ 0x1400943F0 (PostUpdateKeyStateEvent.c)
 *     zzzDestroyQueue @ 0x1401667F0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall SetWakeBit(__int64 a1, unsigned int a2))(__int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 1344LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD))result(a1, a2);
  return result;
}
