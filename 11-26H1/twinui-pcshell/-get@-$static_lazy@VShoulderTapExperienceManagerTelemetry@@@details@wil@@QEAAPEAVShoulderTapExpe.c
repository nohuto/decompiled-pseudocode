/*
 * XREFs of ?get@?$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAAPEAVShoulderTapExperienceManagerTelemetry@@P6AXXZ@Z @ 0x1803862C4
 * Callers:
 *     ??$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG$$QEAHAEAJ22222222222@Z @ 0x180384700 (--$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExper.c)
 *     ?IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z @ 0x180384FD8 (-IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x180385338 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x180385F90 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z.c)
 * Callees:
 *     atexit @ 0x1802C9288 (atexit.c)
 *     ??1Completer@?$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x180384B6C (--1Completer@-$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<ShoulderTapExperienceManagerTelemetry>::get(
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
         &`ShoulderTapExperienceManagerTelemetry::Instance'::`2'::wrapper,
         0,
         &v6,
         (LPVOID *)&v8)
    && v6 )
  {
    v4 = &`ShoulderTapExperienceManagerTelemetry::Instance'::`2'::wrapper;
    v8 = &qword_1808DE1D8;
    qword_1808DE1E0 = 0LL;
    qword_1808DE1D8 = (__int64)&IamTraceLogging::`vftable';
    byte_1808DE1E8 = 0;
    dword_1808DE1EC = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<ShoulderTapExperienceManagerTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
