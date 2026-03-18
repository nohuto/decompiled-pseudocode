/*
 * XREFs of xxxSendNotifyMessage @ 0x140194BD0
 * Callers:
 *     xxxSetSysColors @ 0x1401B7328 (xxxSetSysColors.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1401EA874 (UserNotifyUniversalScaleFactorChanged.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall xxxSendNotifyMessage(
        __int64 a1,
        unsigned int a2,
        __int64 a3))(__int64, _QWORD, __int64, _QWORD, int)
{
  __int64 (__fastcall *result)(__int64, _QWORD, __int64, _QWORD, int); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                       + 48)
                                                                           + 3176LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, int))result(-1LL, a2, a3, 0LL, 1);
  return result;
}
