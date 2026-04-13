/*
 * XREFs of ?get@?$static_lazy@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@@details@wil@@QEAAPEAVContentDeliveryManagerLogging@Background@ContentDeliveryManager@@P6AXXZ@Z @ 0x1800456DC
 * Callers:
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044AC0 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 * Callees:
 *     atexit @ 0x180021B40 (atexit.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180029F0C (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<ContentDeliveryManager::Background::ContentDeliveryManagerLogging>::get(
        __int64 a1,
        void (__cdecl *a2)())
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
  if ( InitOnceBeginInitialize(
         &`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Instance'::`2'::wrapper,
         0,
         &v8,
         (LPVOID *)&v10)
    && v8 )
  {
    v6 = &`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Instance'::`2'::wrapper;
    v10 = &qword_180180150;
    qword_180180150 = (__int64)&ContentDeliveryManager::Background::ContentDeliveryManagerLogging::`vftable';
    qword_180180158 = 0LL;
    byte_180180160 = 0;
    dword_180180164 = 0;
    qword_180180168 = (__int64)&`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v10;
}
