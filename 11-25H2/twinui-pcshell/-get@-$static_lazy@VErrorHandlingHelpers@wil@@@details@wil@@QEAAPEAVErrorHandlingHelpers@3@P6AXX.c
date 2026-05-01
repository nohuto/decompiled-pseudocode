/*
 * XREFs of ?get@?$static_lazy@VErrorHandlingHelpers@wil@@@details@wil@@QEAAPEAVErrorHandlingHelpers@3@P6AXXZ@Z @ 0x1801BB614
 * Callers:
 *     ?FallbackTelemetryCallback@ErrorHandlingHelpers@wil@@SAX_NAEBUFailureInfo@2@@Z @ 0x1801BB5D0 (-FallbackTelemetryCallback@ErrorHandlingHelpers@wil@@SAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x1802244B8 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<wil::ErrorHandlingHelpers>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h]
  __int64 *v6; // [rsp+30h] [rbp-28h] BYREF
  WINBOOL v7; // [rsp+38h] [rbp-20h] BYREF

  v6 = 0LL;
  v7 = 0;
  if ( __std_init_once_begin_initialize(&`wil::ErrorHandlingHelpers::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v6)
    && v7 )
  {
    qword_18089B090 = 0LL;
    dword_18089B09C = 0;
    v6 = &qword_18089B088;
    qword_18089B088 = (__int64)&ImmersiveIconsLogging::`vftable';
    v4 = &`wil::ErrorHandlingHelpers::Instance'::`2'::wrapper;
    byte_18089B098 = 0;
    qword_18089B0A0 = (__int64)&`wil::ErrorHandlingHelpers::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v4);
  }
  return v6;
}
