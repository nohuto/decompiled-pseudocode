/*
 * XREFs of ?get@?$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAAPEAVSearchAppExperienceManagerTelemetry@@P6AXXZ@Z @ 0x1802B80F0
 * Callers:
 *     ?ResetAppRectClip@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18023EA1C (-ResetAppRectClip@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x18008A798 (--1Completer@-$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<SearchAppExperienceManagerTelemetry>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(
         &`SearchAppExperienceManagerTelemetry::Instance'::`2'::wrapper,
         0,
         &v6,
         (LPVOID *)&v8)
    && v6 )
  {
    v4 = &`SearchAppExperienceManagerTelemetry::Instance'::`2'::wrapper;
    v8 = &qword_1808DE340;
    qword_1808DE348 = 0LL;
    qword_1808DE340 = (__int64)&IamTraceLogging::`vftable';
    byte_1808DE350 = 0;
    dword_1808DE354 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<SearchAppExperienceManagerTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
