/*
 * XREFs of ?get@?$static_lazy@VCAppBackupListenerLogging@@@details@wil@@QEAAPEAVCAppBackupListenerLogging@@P6AXXZ@Z @ 0x1801EEE14
 * Callers:
 *     ?Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1801EEDF4 (-Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800384BC (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<CAppBackupListenerLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]
  LPVOID v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = HIDWORD(a1);
  v7 = 0LL;
  v5 = 0;
  if ( __std_init_once_begin_initialize(&`CAppBackupListenerLogging::Instance'::`2'::wrapper, 0, &v5, &v7) && v5 )
  {
    qword_18089E758 = 0LL;
    dword_18089E764 = 0;
    v7 = &qword_18089E750;
    qword_18089E750 = &ShellScreenClippingLogging::`vftable';
    byte_18089E760 = 0;
    qword_18089E768 = (struct _tlgProvider_t *)&`CAppBackupListenerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18089E750, qword_18089E768, v3);
    InitOnceComplete(&`CAppBackupListenerLogging::Instance'::`2'::wrapper, 0, &qword_18089E750);
  }
  return v7;
}
