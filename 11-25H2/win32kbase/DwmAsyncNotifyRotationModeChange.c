/*
 * XREFs of DwmAsyncNotifyRotationModeChange @ 0x14023E780
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DwmAsyncNotifyRotationModeChange(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *v4)(__int64, _QWORD); // rax

  v2 = a2;
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4256LL);
  if ( v4 )
    return v4(a1, v2);
  else
    return 3221225659LL;
}
