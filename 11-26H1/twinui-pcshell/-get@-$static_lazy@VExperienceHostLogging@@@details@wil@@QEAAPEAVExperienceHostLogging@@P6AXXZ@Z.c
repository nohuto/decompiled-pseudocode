/*
 * XREFs of ?get@?$static_lazy@VExperienceHostLogging@@@details@wil@@QEAAPEAVExperienceHostLogging@@P6AXXZ@Z @ 0x1801921C8
 * Callers:
 *     ??$OnPriorityBoostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z @ 0x180191F84 (--$OnPriorityBoostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z.c)
 *     ??$OnPriorityUnboostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z @ 0x18019214C (--$OnPriorityUnboostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x1802151A0 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<ExperienceHostLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`ExperienceHostLogging::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    v4 = &`ExperienceHostLogging::Instance'::`2'::wrapper;
    v8 = &qword_1808DC2C0;
    qword_1808DC2C0 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1808DC2C8 = 0LL;
    byte_1808DC2D0 = 0;
    dword_1808DC2D4 = 0;
    qword_1808DC2D8 = (__int64)&`ExperienceHostLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v4);
  }
  return v8;
}
