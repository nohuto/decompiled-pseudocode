/*
 * XREFs of IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1400AC868
 * Callers:
 *     xxxResetDisplayDevice @ 0x1400AB7F0 (xxxResetDisplayDevice.c)
 *     UserNotifyDisplayChange @ 0x1400AC800 (UserNotifyDisplayChange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsDwmAsyncNotifyDisplayModeChangeSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4232LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
