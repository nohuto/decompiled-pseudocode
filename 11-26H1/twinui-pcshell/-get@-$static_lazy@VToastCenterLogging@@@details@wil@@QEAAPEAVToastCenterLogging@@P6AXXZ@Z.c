/*
 * XREFs of ?get@?$static_lazy@VToastCenterLogging@@@details@wil@@QEAAPEAVToastCenterLogging@@P6AXXZ@Z @ 0x18001D71C
 * Callers:
 *     ?Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001D6FC (-Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800BD85C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<ToastCenterLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]
  LPVOID v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = HIDWORD(a1);
  v7 = 0LL;
  v5 = 0;
  if ( __std_init_once_begin_initialize(&`ToastCenterLogging::Instance'::`2'::wrapper, 0, &v5, &v7) && v5 )
  {
    qword_1808DE190 = 0LL;
    v7 = &qword_1808DE188;
    qword_1808DE188 = &ShellScreenClippingLogging::`vftable';
    byte_1808DE198 = 0;
    dword_1808DE19C = 0;
    qword_1808DE1A0 = (struct _tlgProvider_t *)&`ToastCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DE188, qword_1808DE1A0, v4);
    InitOnceComplete(&`ToastCenterLogging::Instance'::`2'::wrapper, 0, &qword_1808DE188);
  }
  return v7;
}
