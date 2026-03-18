/*
 * XREFs of IsSetTimerCoalescingToleranceSupported @ 0x140116A64
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PostWinlogonMessage @ 0x14016BE20 (PostWinlogonMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsSetTimerCoalescingToleranceSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2200LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
