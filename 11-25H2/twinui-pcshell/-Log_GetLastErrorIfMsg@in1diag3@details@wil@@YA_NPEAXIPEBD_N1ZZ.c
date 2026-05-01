/*
 * XREFs of ?Log_GetLastErrorIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x18034A42C
 * Callers:
 *     ?StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x1803506EC (-StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$ReportFailure_GetLastErrorMsg@$01@details@wil@@YAKPEAXIPEBD1101PEAD@Z @ 0x18033D294 (--$ReportFailure_GetLastErrorMsg@$01@details@wil@@YAKPEAXIPEBD1101PEAD@Z.c)
 */

// Hidden C++ exception states: #wind=1
char wil::details::in1diag3::Log_GetLastErrorIfMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        unsigned __int64 a5,
        const char *a6,
        ...)
{
  char v6; // bl
  int v8; // [rsp+20h] [rbp-38h]
  const char *retaddr; // [rsp+58h] [rbp+0h]

  v6 = (char)a4;
  if ( (_BYTE)a4 )
    wil::details::ReportFailure_GetLastErrorMsg<2>(this, a2, a3, retaddr, v8, retaddr, a5, (char *)&a6);
  return v6;
}
