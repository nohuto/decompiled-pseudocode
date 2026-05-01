/*
 * XREFs of ?get@?$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLogging@@P6AXXZ@Z @ 0x180207E40
 * Callers:
 *     ?Provider@MeetAndChatTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1802A9E68 (-Provider@MeetAndChatTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800BD85C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<MeetAndChatTelemetryLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]
  LPVOID v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = HIDWORD(a1);
  v7 = 0LL;
  v5 = 0;
  if ( __std_init_once_begin_initialize(&`MeetAndChatTelemetryLogging::Instance'::`2'::wrapper, 0, &v5, &v7) && v5 )
  {
    qword_1808DD8C0 = 0LL;
    v7 = &qword_1808DD8B8;
    qword_1808DD8B8 = &ShellScreenClippingLogging::`vftable';
    byte_1808DD8C8 = 0;
    dword_1808DD8CC = 0;
    qword_1808DD8D0 = (struct _tlgProvider_t *)&`MeetAndChatTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DD8B8, qword_1808DD8D0, v3);
    InitOnceComplete(&`MeetAndChatTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_1808DD8B8);
  }
  return v7;
}
