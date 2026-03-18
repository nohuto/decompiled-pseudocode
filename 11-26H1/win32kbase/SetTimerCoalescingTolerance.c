/*
 * XREFs of SetTimerCoalescingTolerance @ 0x140156610
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PostWinlogonMessage @ 0x1401D97F0 (PostWinlogonMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall SetTimerCoalescingTolerance(__int64 a1))(_QWORD)
{
  unsigned int v1; // ebx
  __int64 (__fastcall *result)(_QWORD); // rax

  v1 = a1;
  result = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 1936LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD))result(v1);
  return result;
}
