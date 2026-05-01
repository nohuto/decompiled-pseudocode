/*
 * XREFs of ?get@?$static_lazy@VSearchBoxOnTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVSearchBoxOnTaskbarSearchAppPositionerTelemetry@@P6AXXZ@Z @ 0x180089F04
 * Callers:
 *     ?IsEnabled@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SA_NE_K@Z @ 0x180089EC4 (-IsEnabled@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SA_NE_K@Z.c)
 *     ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x180240400 (-GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorde.c)
 *     ??$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagRECT@@@Z @ 0x1803CEEC0 (--$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagREC.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x18008A798 (--1Completer@-$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<SearchBoxOnTaskbarSearchAppPositionerTelemetry>::get(
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
         &`SearchBoxOnTaskbarSearchAppPositionerTelemetry::Instance'::`2'::wrapper,
         0,
         &v6,
         (LPVOID *)&v8)
    && v6 )
  {
    v4 = &`SearchBoxOnTaskbarSearchAppPositionerTelemetry::Instance'::`2'::wrapper;
    v8 = &qword_1808DE408;
    qword_1808DE410 = 0LL;
    qword_1808DE408 = (__int64)&IamTraceLogging::`vftable';
    byte_1808DE418 = 0;
    dword_1808DE41C = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<SearchAppExperienceManagerTelemetry>::Completer::~Completer(&v4);
  }
  return v8;
}
