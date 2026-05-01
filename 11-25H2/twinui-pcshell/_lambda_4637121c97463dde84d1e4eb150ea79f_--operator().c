/*
 * XREFs of _lambda_4637121c97463dde84d1e4eb150ea79f_::operator() @ 0x1803EC064
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_4637121c97463dde84d1e4eb150ea79f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::Run @ 0x1803EFB10 (Windows--Internal--COperationLambdaVar_0__lambda_4637121c97463dde84d1e4eb150ea79f___ea_1803EFB10.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z @ 0x180187070 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z.c)
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x1802AB898 (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 *     ??$CreateExternalObjectVector@VGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@V?$AgileVector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@$0A@@4Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$AgileVector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@$0A@@1234@@Z @ 0x1803EA9A4 (--$CreateExternalObjectVector@VGetCurrentActivityForViewOperationResults@Activities@Data@Interna.c)
 *     ??$wait_for_completion@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@V?$ComPtr@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1803EB468 (--$wait_for_completion@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall lambda_4637121c97463dde84d1e4eb150ea79f_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // r12d
  __int64 *v4; // rax
  HRESULT v5; // eax
  unsigned int v6; // ebx
  LPVOID v7; // rbx
  __int64 (__fastcall *v8)(LPVOID, GUID *, GUID *, __int64 **); // rdi
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  int CurrentActivityForViewOperation; // eax
  unsigned int v16; // r15d
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, _QWORD, GUID *, ApplicationViewHelpers **); // rsi
  int v20; // eax
  struct IApplicationView *v21; // rdx
  __int64 WindowForView; // rdx
  __int64 *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  int v26; // r8d
  int v27; // eax
  __int64 v28; // rcx
  const char *v29; // r9
  __int64 v30; // rax
  int v31; // eax
  __int64 v33; // rdi
  __int64 *v34; // rax
  __int64 *v35; // rbx
  int ppv; // [rsp+20h] [rbp-E8h]
  __int64 v37; // [rsp+30h] [rbp-D8h] BYREF
  __int64 *v38; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C8h] BYREF
  int v40; // [rsp+48h] [rbp-C0h]
  __int64 v41; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID v42; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v44)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-A0h] BYREF
  ApplicationViewHelpers *v45[2]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v46[136]; // [rsp+80h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]
  unsigned int v50; // [rsp+120h] [rbp+18h] BYREF
  __int64 *v51; // [rsp+128h] [rbp+20h] BYREF

  v2 = a2;
  v3 = 0;
  LODWORD(v51) = 0;
  v4 = wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
  wil::ActivityThreadWatcher::ActivityThreadWatcher(
    (wil::ActivityThreadWatcher *)v46,
    (struct wil::details::IFailureCallback *)v4,
    "TaskFlowDataEngineTelemetry.GetCurrentActivityForAllViewsAsync.AsyncOperation");
  v42 = 0LL;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v42);
  v5 = CoCreateInstance(
         &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
         0LL,
         4u,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         &v42);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AF,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v5);
LABEL_30:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v42);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v46);
    return v6;
  }
  v38 = 0LL;
  v7 = v42;
  v8 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 **))(*(_QWORD *)v42 + 24LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v38);
  v9 = v8(v7, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &v38);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B2,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v9);
LABEL_29:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v38);
    goto LABEL_30;
  }
  v37 = 0LL;
  v10 = *v38;
  v37 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 24))(v38, &v37);
  v6 = v11;
  if ( v11 < 0 )
  {
    v12 = 437LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v11);
LABEL_28:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v37);
    goto LABEL_29;
  }
  v50 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v37 + 24LL))(v37, &v50);
  v6 = v11;
  if ( v11 < 0 )
  {
    v12 = 440LL;
    goto LABEL_7;
  }
  v39 = 0LL;
  CurrentActivityForViewOperation = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults,Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,0>>(
                                      v13,
                                      &v39,
                                      v14);
  v6 = CurrentActivityForViewOperation;
  if ( CurrentActivityForViewOperation < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BC,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)CurrentActivityForViewOperation);
LABEL_27:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v39);
    goto LABEL_28;
  }
  v16 = 0;
  v40 = 0;
  v17 = v39;
  while ( v16 < v50 )
  {
    v45[0] = 0LL;
    v18 = v37;
    v19 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, ApplicationViewHelpers **))(*(_QWORD *)v37 + 32LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v45);
    try
    {
      v20 = v19(v18, v16, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v45);
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1C2,
          (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v20,
          ppv);
      WindowForView = ApplicationViewHelpers::GetWindowForView(
                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v45[0],
                        v21);
      v44 = 0LL;
      v23 = (__int64 *)(*a1 + 24LL);
      v24 = *v23;
      v44 = 0LL;
      v25 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v24 + 48))(v23, WindowForView, &v44);
      if ( v25 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1C6,
          (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v25,
          ppv);
      wil::wait_for_completion<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Microsoft::WRL::ComPtr<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>>(
        &v43,
        v44,
        v26);
      v3 |= 1u;
      LODWORD(v51) = v3;
      v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 104LL))(v17, v43);
      if ( v27 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1C9,
          (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v27,
          ppv);
      v28 = v43;
      if ( v43 )
      {
        v43 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v44);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v45);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x1CA,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        v29);
      v2 = a2;
      v17 = v39;
      v16 = v40;
      v3 = (int)v51;
    }
    v40 = ++v16;
  }
  v41 = 0LL;
  v30 = *(_QWORD *)v17;
  v41 = 0LL;
  v31 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v30 + 64))(v17, &v41);
  v6 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CE,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v31);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
    goto LABEL_27;
  }
  v33 = v41;
  v51 = (__int64 *)(v2 + 16);
  v34 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v51);
  v35 = v34;
  if ( v33 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v34);
    RoGetAgileReference(0LL, &GUID_b8b1e07f_4293_5ac2_b3fe_9365ac66d3f2, v33, v35);
  }
  else
  {
    v43 = 0LL;
    v51 = (__int64 *)*v34;
    *v34 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v39);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v37);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v38);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v42);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v46);
  return 0LL;
}
