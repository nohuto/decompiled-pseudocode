/*
 * XREFs of DwmAsyncNotifyDisplayModeChange @ 0x14007F244
 * Callers:
 *     UserNotifyDisplayChange @ 0x14007F1A0 (UserNotifyDisplayChange.c)
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DwmAsyncNotifyDisplayModeChange(__int64 a1)
{
  __int64 (__fastcall *v2)(__int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3792LL);
  if ( v2 )
    return v2(a1);
  else
    return 3221225659LL;
}
