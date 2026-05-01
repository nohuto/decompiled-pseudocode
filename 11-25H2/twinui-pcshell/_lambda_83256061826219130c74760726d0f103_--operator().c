/*
 * XREFs of _lambda_83256061826219130c74760726d0f103_::operator() @ 0x180598784
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___::RunTask @ 0x180598AD0 (CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___--RunTask.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetIsControlDismissing@GuidedSnapAssistControl@@AEAAX_N@Z @ 0x180288564 (-SetIsControlDismissing@GuidedSnapAssistControl@@AEAAX_N@Z.c)
 *     ??$com_query@UIMultitaskingViewForegroundStaging@@AEAPEAUIMultitaskingViewManager@@@wil@@YA?AV?$com_ptr_t@UIMultitaskingViewForegroundStaging@@Uerr_exception_policy@wil@@@0@AEAPEAUIMultitaskingViewManager@@@Z @ 0x180598684 (--$com_query@UIMultitaskingViewForegroundStaging@@AEAPEAUIMultitaskingViewManager@@@wil@@YA-AV-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_83256061826219130c74760726d0f103_::operator()(
        RTL_SRWLOCK **a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  __int64 (__fastcall **v3)(_QWORD, GUID *, _QWORD *); // rax
  int (*v4)(void); // rax
  int v5; // eax
  const char *v6; // r9
  int v7; // [rsp+20h] [rbp-28h]
  __int64 v8[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v10 = a2;
  v12 = 0LL;
  v3 = *a2;
  v12 = 0LL;
  v4 = (int (*)(void))v3[5];
  try
  {
    if ( v4() >= 0 )
    {
      v11 = 0;
      v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 32LL))(v12, &v11);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBA,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
          (const char *)(unsigned int)v5,
          v7);
      if ( !v11 )
      {
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
        return;
      }
      wil::com_query<IMultitaskingViewForegroundStaging,IMultitaskingViewManager * &>(v8, &v10);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8[0] + 24LL))(v8[0]);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v8);
    }
    GuidedSnapAssistControl::SetIsControlDismissing(*a1);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  }
  catch ( ... )
  {
    wil::details::in1diag3::FailFast_CaughtException(
      retaddr,
      (void *)0xCA,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      v6);
  }
}
