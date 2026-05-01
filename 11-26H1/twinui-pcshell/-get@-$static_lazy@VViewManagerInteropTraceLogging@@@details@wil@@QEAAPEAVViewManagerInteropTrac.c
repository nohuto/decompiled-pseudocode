/*
 * XREFs of ?get@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAPEAVViewManagerInteropTraceLogging@@P6AXXZ@Z @ 0x18004E0D8
 * Callers:
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18004DF74 (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ??$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18004DFA4 (--$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QE.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004DFFC (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAA@XZ @ 0x18004EC70 (--1Completer@-$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<ViewManagerInteropTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
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
         &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
         0,
         &v6,
         (LPVOID *)&v8)
    && v6 )
  {
    v4 = &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper;
    v8 = &qword_1808DC7E0;
    qword_1808DC7E8 = 0LL;
    qword_1808DC7E0 = (__int64)&IamTraceLogging::`vftable';
    byte_1808DC7F0 = 0;
    dword_1808DC7F4 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<ViewManagerInteropTraceLogging>::Completer::~Completer(&v4);
  }
  return v8;
}
