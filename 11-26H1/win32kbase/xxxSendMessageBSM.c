/*
 * XREFs of xxxSendMessageBSM @ 0x14017AE70
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall xxxSendMessageBSM(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5))(_QWORD, _QWORD, __int64, _QWORD, __int64, int)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, __int64, _QWORD, __int64, int); // rax

  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, __int64, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                               + 48)
                                                                                   + 1920LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, __int64, int))result(0LL, a2, a3, 0LL, a5, 1);
  return result;
}
