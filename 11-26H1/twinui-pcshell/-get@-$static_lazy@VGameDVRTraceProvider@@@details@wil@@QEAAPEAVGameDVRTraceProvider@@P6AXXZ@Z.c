/*
 * XREFs of ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x180034428
 * Callers:
 *     ??$Shell_IsGameManager_DirChangeCallback@AEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG@Z @ 0x180034308 (--$Shell_IsGameManager_DirChangeCallback@AEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG@Z.c)
 *     ?BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z @ 0x1800358E0 (-BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z.c)
 *     ?Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800C79C8 (-Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800BD85C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<GameDVRTraceProvider>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]
  LPVOID v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = HIDWORD(a1);
  v7 = 0LL;
  v5 = 0;
  if ( __std_init_once_begin_initialize(&`GameDVRTraceProvider::Instance'::`2'::wrapper, 0, &v5, &v7) && v5 )
  {
    qword_1808DB188 = 0LL;
    v7 = &qword_1808DB180;
    qword_1808DB180 = &ShellScreenClippingLogging::`vftable';
    byte_1808DB190 = 0;
    dword_1808DB194 = 0;
    qword_1808DB198 = (struct _tlgProvider_t *)&`GameDVRTraceProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DB180, qword_1808DB198, v4);
    InitOnceComplete(&`GameDVRTraceProvider::Instance'::`2'::wrapper, 0, &qword_1808DB180);
  }
  return v7;
}
