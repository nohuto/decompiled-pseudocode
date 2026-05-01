/*
 * XREFs of ?get@?$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAAPEAVTaskbarPinningTelemetry@@P6AXXZ@Z @ 0x18069AB68
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 *     ??1Completer@?$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAA@XZ @ 0x180480E68 (--1Completer@-$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<TaskbarPinningTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h]
  __int64 *v6; // [rsp+30h] [rbp-28h] BYREF
  WINBOOL v7; // [rsp+38h] [rbp-20h] BYREF

  v6 = 0LL;
  v7 = 0;
  if ( __std_init_once_begin_initialize(&`TaskbarPinningTelemetry::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v6) && v7 )
  {
    v4 = &`TaskbarPinningTelemetry::Instance'::`2'::wrapper;
    v6 = &qword_1808DF320;
    qword_1808DF328 = 0LL;
    qword_1808DF320 = (__int64)&GamingPostureUXTelemetryProvider::`vftable';
    byte_1808DF330 = 0;
    dword_1808DF334 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<TaskbarPinningTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v6;
}
