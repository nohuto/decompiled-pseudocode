/*
 * XREFs of ?get@?$static_lazy@VBroadcastDVRTraceProvider@@@details@wil@@QEAAPEAVBroadcastDVRTraceProvider@@P6AXXZ@Z @ 0x1801F8E4C
 * Callers:
 *     ??$KGLLoaded@AEAKAEAJ@BroadcastDVRTraceProvider@@SAXAEAKAEAJ@Z @ 0x1801F8D7C (--$KGLLoaded@AEAKAEAJ@BroadcastDVRTraceProvider@@SAXAEAKAEAJ@Z.c)
 *     ?GameExit@BroadcastDVRTraceProvider@@SAXXZ @ 0x1801F8DF8 (-GameExit@BroadcastDVRTraceProvider@@SAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800BD85C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<BroadcastDVRTraceProvider>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]
  LPVOID v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = HIDWORD(a1);
  v7 = 0LL;
  v5 = 0;
  if ( __std_init_once_begin_initialize(&`BroadcastDVRTraceProvider::Instance'::`2'::wrapper, 0, &v5, &v7) && v5 )
  {
    qword_1808DB160 = 0LL;
    v7 = &qword_1808DB158;
    qword_1808DB158 = &ShellScreenClippingLogging::`vftable';
    byte_1808DB168 = 0;
    dword_1808DB16C = 0;
    qword_1808DB170 = (struct _tlgProvider_t *)&`BroadcastDVRTraceProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DB158, qword_1808DB170, v3);
    InitOnceComplete(&`BroadcastDVRTraceProvider::Instance'::`2'::wrapper, 0, &qword_1808DB158);
  }
  return v7;
}
