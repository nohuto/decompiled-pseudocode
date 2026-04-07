/*
 * XREFs of ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18004DA3C
 * Callers:
 *     ?Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18004DA1C (-Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180078030 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18009ABC4 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<WindowFrameLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]
  LPVOID v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = HIDWORD(a1);
  v7 = 0LL;
  v5 = 0;
  if ( InitOnceBeginInitialize(&`WindowFrameLogging::Instance'::`2'::wrapper, 0, &v5, &v7) && v5 )
  {
    qword_1801199E0 = 0LL;
    dword_1801199EC = 0;
    v7 = &qword_1801199D8;
    qword_1801199D8 = &WindowFrameLogging::`vftable';
    byte_1801199E8 = 0;
    qword_1801199F0 = (struct _tlgProvider_t *)&`WindowFrameLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801199D8, qword_1801199F0, v4);
    InitOnceComplete(&`WindowFrameLogging::Instance'::`2'::wrapper, 0, &qword_1801199D8);
  }
  return v7;
}
