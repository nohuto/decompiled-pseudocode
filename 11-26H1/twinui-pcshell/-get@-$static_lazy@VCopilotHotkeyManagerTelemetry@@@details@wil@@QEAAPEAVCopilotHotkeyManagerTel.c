/*
 * XREFs of ?get@?$static_lazy@VCopilotHotkeyManagerTelemetry@@@details@wil@@QEAAPEAVCopilotHotkeyManagerTelemetry@@P6AXXZ@Z @ 0x180637140
 * Callers:
 *     ?Provider@CopilotHotkeyManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180633BCC (-Provider@CopilotHotkeyManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x1802151A0 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<CopilotHotkeyManagerTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  WINBOOL v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+44h] [rbp+Ch]
  __int64 *v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = HIDWORD(a1);
  v10 = 0LL;
  v8 = 0;
  if ( __std_init_once_begin_initialize(
         &`CopilotHotkeyManagerTelemetry::Instance'::`2'::wrapper,
         0,
         &v8,
         (LPVOID *)&v10)
    && v8 )
  {
    v6 = &`CopilotHotkeyManagerTelemetry::Instance'::`2'::wrapper;
    v10 = &qword_1808DF000;
    qword_1808DF000 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1808DF008 = 0LL;
    byte_1808DF010 = 0;
    dword_1808DF014 = 0;
    qword_1808DF018 = (__int64)&`CopilotHotkeyManagerTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v10;
}
