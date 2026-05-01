/*
 * XREFs of ?WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180140BA4
 * Callers:
 *     ?OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@45678@@Z @ 0x180140930 (-OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@T.c)
 *     _lambda_76f340d5d82a2ae937276f5837d7f307_::operator() @ 0x18046A598 (_lambda_76f340d5d82a2ae937276f5837d7f307_--operator().c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1Completer@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ @ 0x180140C84 (--1Completer@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceTelemetryLogger::WatchCurrentThread(__int64 a1, __int64 a2)
{
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  WINBOOL v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0LL;
  v7 = 0;
  if ( __std_init_once_begin_initialize(
         &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper,
         0,
         &v7,
         (LPVOID *)&v8)
    && v7 )
  {
    v5 = &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper;
    v8 = &qword_1808DCCF8;
    qword_1808DCD00 = 0LL;
    byte_1808DCD08 = 0;
    dword_1808DCD0C = 0;
    qword_1808DCCF8 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    v6 = 0;
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::Completer::~Completer(&v5);
  }
  *(_BYTE *)(a1 + 24) = 0;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = v8;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = a1;
  wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 32));
  return a1;
}
