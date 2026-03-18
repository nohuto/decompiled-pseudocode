/*
 * XREFs of SetTimerCoalescingTolerance @ 0x140115E34
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PostWinlogonMessage @ 0x14016BE20 (PostWinlogonMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall SetTimerCoalescingTolerance(__int64 a1, __int64 a2))(_QWORD)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *result)(_QWORD); // rax

  v2 = a1;
  result = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2208LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD))result(v2);
  return result;
}
