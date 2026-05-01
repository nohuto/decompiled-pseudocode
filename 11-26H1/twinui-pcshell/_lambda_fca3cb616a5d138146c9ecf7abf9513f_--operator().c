/*
 * XREFs of _lambda_fca3cb616a5d138146c9ecf7abf9513f_::operator() @ 0x1804975F0
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___::RunTask @ 0x1804979A0 (CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006CF04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ??$com_query_failfast@UIMultitaskingViewForegroundStaging@@AEAPEAUIMultitaskingViewManager@@@wil@@YA?AV?$com_ptr_t@UIMultitaskingViewForegroundStaging@@Uerr_failfast_policy@wil@@@0@AEAPEAUIMultitaskingViewManager@@@Z @ 0x180497534 (--$com_query_failfast@UIMultitaskingViewForegroundStaging@@AEAPEAUIMultitaskingViewManager@@@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_fca3cb616a5d138146c9ecf7abf9513f_::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD *),
        char a3)
{
  __int64 (__fastcall **v5)(_QWORD, GUID *, _QWORD *); // rax
  _QWORD *v6; // rax
  __int64 (__fastcall *v7)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v8; // ebx
  __int64 (__fastcall *v10)(_QWORD, GUID *, _QWORD *); // rbx
  int v11; // eax
  int v12; // eax
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v15 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    a3);
  v14 = 0LL;
  v5 = *a2;
  v14 = 0LL;
  if ( ((int (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64, GUID *, __int64 *))v5[5])(
         a2,
         5LL,
         &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9,
         &v14) >= 0 )
  {
    v6 = wil::com_query_failfast<IMultitaskingViewForegroundStaging,IMultitaskingViewManager * &>(&v16, &v15);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 24LL))(*v6);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  v13 = 0LL;
  v7 = (*a2)[5];
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  if ( ((int (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64, GUID *, __int64 *))v7)(
         a2,
         2LL,
         &GUID_389221b7_bf28_4d25_9501_b4491d822be1,
         &v13) < 0 )
  {
    v10 = (*a2)[3];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64, GUID *, __int64 *))v10)(
            a2,
            2LL,
            &GUID_389221b7_bf28_4d25_9501_b4491d822be1,
            &v13);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_6;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v13 + 48LL))(
            v13,
            *(_QWORD *)a1,
            *(_QWORD *)(a1 + 8),
            *(unsigned int *)(a1 + 16));
    if ( v12 < 0 )
    {
      v8 = v12;
      goto LABEL_6;
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13);
  }
  v8 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  return v8;
}
