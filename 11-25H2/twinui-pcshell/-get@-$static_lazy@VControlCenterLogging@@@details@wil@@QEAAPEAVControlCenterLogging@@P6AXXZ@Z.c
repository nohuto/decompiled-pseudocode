/*
 * XREFs of ?get@?$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z @ 0x180044858
 * Callers:
 *     ?Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180044838 (-Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x1802244B8 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<ControlCenterLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`ControlCenterLogging::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_18089DAF8 = 0LL;
    dword_18089DB04 = 0;
    v8 = &qword_18089DAF0;
    qword_18089DAF0 = (__int64)&ShellScreenClippingLogging::`vftable';
    v4 = &`ControlCenterLogging::Instance'::`2'::wrapper;
    byte_18089DB00 = 0;
    qword_18089DB08 = (__int64)&`ControlCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v4);
  }
  return v8;
}
