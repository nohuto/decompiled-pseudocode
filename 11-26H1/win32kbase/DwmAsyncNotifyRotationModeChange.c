/*
 * XREFs of DwmAsyncNotifyRotationModeChange @ 0x140248DE4
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DwmAsyncNotifyRotationModeChange(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall *v4)(__int64, _QWORD); // rax

  v4 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3808LL);
  if ( v4 )
    return v4(a1, a2);
  else
    return 3221225659LL;
}
