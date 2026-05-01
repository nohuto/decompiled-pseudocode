/*
 * XREFs of _lambda_fca3cb616a5d138146c9ecf7abf9513f_::operator() @ 0x180486930
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___::RunTask @ 0x180486CF0 (CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ??$com_query_failfast@UIMultitaskingViewForegroundStaging@@AEAPEAUIMultitaskingViewManager@@@wil@@YA?AV?$com_ptr_t@UIMultitaskingViewForegroundStaging@@Uerr_failfast_policy@wil@@@0@AEAPEAUIMultitaskingViewManager@@@Z @ 0x180486878 (--$com_query_failfast@UIMultitaskingViewForegroundStaging@@AEAPEAUIMultitaskingViewManager@@@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_fca3cb616a5d138146c9ecf7abf9513f_::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  __int64 (__fastcall **v4)(_QWORD, GUID *, _QWORD *); // rax
  _QWORD *v5; // rax
  __int64 (__fastcall *v6)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v7; // ebx
  __int64 (__fastcall *v9)(_QWORD, GUID *, _QWORD *); // rbx
  int v10; // eax
  int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v14 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    (char)a2);
  v13 = 0LL;
  v4 = *a2;
  v13 = 0LL;
  if ( ((int (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64, GUID *, __int64 *))v4[5])(
         a2,
         5LL,
         &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9,
         &v13) >= 0 )
  {
    v5 = wil::com_query_failfast<IMultitaskingViewForegroundStaging,IMultitaskingViewManager * &>(&v15, &v14);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 24LL))(*v5);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  v12 = 0LL;
  v6 = (*a2)[5];
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  if ( ((int (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64, GUID *, __int64 *))v6)(
         a2,
         2LL,
         &GUID_389221b7_bf28_4d25_9501_b4491d822be1,
         &v12) < 0 )
  {
    v9 = (*a2)[3];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64, GUID *, __int64 *))v9)(
            a2,
            2LL,
            &GUID_389221b7_bf28_4d25_9501_b4491d822be1,
            &v12);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_6;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v12 + 48LL))(
            v12,
            *(_QWORD *)a1,
            *(_QWORD *)(a1 + 8),
            *(unsigned int *)(a1 + 16));
    if ( v11 < 0 )
    {
      v7 = v11;
      goto LABEL_6;
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
  }
  v7 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  return v7;
}
