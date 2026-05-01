/*
 * XREFs of ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18035C9B8
 * Callers:
 *     ?WindowType@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBW4GameBarWindowType@3456@@Z @ 0x18035CBC0 (-WindowType@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXA.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18035A75C (--$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

bool wil::details::in1diag3::Throw_HrIfMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        char a5,
        __int64 a6,
        const char *a7,
        ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  wil::details *v9; // [rsp+30h] [rbp-38h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  if ( a5 )
  {
    LODWORD(v9) = (_DWORD)a4;
    wil::details::ReportFailure_HrMsg<0>(
      (__int64)this,
      (unsigned int)a2,
      a3,
      retaddr,
      v8,
      retaddr,
      v9,
      a6,
      (__int64)&a7);
  }
  return 0;
}
