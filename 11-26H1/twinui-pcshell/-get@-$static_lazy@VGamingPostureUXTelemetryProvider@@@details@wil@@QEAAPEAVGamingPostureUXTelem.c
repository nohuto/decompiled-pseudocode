/*
 * XREFs of ?get@?$static_lazy@VGamingPostureUXTelemetryProvider@@@details@wil@@QEAAPEAVGamingPostureUXTelemetryProvider@@P6AXXZ@Z @ 0x180359554
 * Callers:
 *     ?Provider@GamingPostureUXTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180350F68 (-Provider@GamingPostureUXTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x1802151A0 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<GamingPostureUXTelemetryProvider>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+28h] [rbp-30h]
  __int64 *v8; // [rsp+30h] [rbp-28h] BYREF
  WINBOOL v9; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0LL;
  v9 = 0;
  if ( __std_init_once_begin_initialize(
         &`GamingPostureUXTelemetryProvider::Instance'::`2'::wrapper,
         0,
         &v9,
         (LPVOID *)&v8)
    && v9 )
  {
    v6 = &`GamingPostureUXTelemetryProvider::Instance'::`2'::wrapper;
    v8 = &qword_1808DE070;
    qword_1808DE070 = (__int64)&GamingPostureUXTelemetryProvider::`vftable';
    qword_1808DE078 = 0LL;
    byte_1808DE080 = 0;
    dword_1808DE084 = 0;
    qword_1808DE088 = (__int64)&`GamingPostureUXTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v8;
}
