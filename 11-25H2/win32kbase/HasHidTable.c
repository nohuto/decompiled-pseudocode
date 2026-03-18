/*
 * XREFs of HasHidTable @ 0x1400E6884
 * Callers:
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x140038784 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1400E66F8 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x14018D324 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2@Z @ 0x140221A60 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall HasHidTable(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 1144LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
