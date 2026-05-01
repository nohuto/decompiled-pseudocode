/*
 * XREFs of ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x180090BEC
 * Callers:
 *     ?ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x1801B4584 (-ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaski.c)
 *     _lambda_abbb930ddb92e06fa07b01ae54ef43e0_::operator() @ 0x18049A7C8 (_lambda_abbb930ddb92e06fa07b01ae54ef43e0_--operator().c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18049CB70 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     std::_Func_impl_no_alloc__lambda_e73f824cf3270f77b2a82ebcd610f772__void_HWND_____::_Do_call @ 0x18049DB10 (std--_Func_impl_no_alloc__lambda_e73f824cf3270f77b2a82ebcd610f772__void_HWND_____--_Do_call.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs @ 0x180090F60 (_anonymous_namespace_--ProcessInputLambdaArgs--_ProcessInputLambdaArgs.c)
 *     _anonymous_namespace_::ProcessInputLambdaArgs::ProcessInputLambdaArgs @ 0x180096258 (_anonymous_namespace_--ProcessInputLambdaArgs--ProcessInputLambdaArgs.c)
 *     MakeMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___ @ 0x18028B330 (MakeMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18029583C (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x18029587C (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?GestureActionTriggered_@MultitaskingViewTelemetry@@QEBAXII@Z @ 0x18049B5C0 (-GestureActionTriggered_@MultitaskingViewTelemetry@@QEBAXII@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall MultitaskingViewGestureHandler::ActivateGestureAction(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, GUID *, GUID *, int *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rbx
  void (__fastcall *v17)(__int64, __int64 *); // rdi
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int8 v20; // cl
  unsigned int v21; // edi
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, __int128 *); // rdi
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rcx
  MultitaskingViewTelemetry *v28; // rcx
  int MultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v34; // [rsp+30h] [rbp-69h] BYREF
  __int64 v35; // [rsp+38h] [rbp-61h]
  int v36[2]; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v37; // [rsp+48h] [rbp-51h]
  __int64 v38; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v39; // [rsp+58h] [rbp-41h]
  __int128 v40; // [rsp+60h] [rbp-39h] BYREF
  __int64 v41; // [rsp+70h] [rbp-29h]
  __int64 v42; // [rsp+78h] [rbp-21h]
  _BYTE v43[80]; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  __int64 v45; // [rsp+100h] [rbp+67h] BYREF
  __int64 v46; // [rsp+118h] [rbp+7Fh]

  memset_0(&v34, 0, 0x50uLL);
  v34 = 0LL;
  v35 = 0LL;
  *(_QWORD *)v36 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, int *))(*(_QWORD *)v6 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v36);
  v8 = v7(v6, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v36);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26C,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_41;
  }
  v10 = *(_QWORD *)(a1 + 40);
  v11 = v35;
  v35 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v45 = 0LL;
  v12 = *(_QWORD *)(a1 + 64);
  v13 = *((_QWORD *)&v40 + 1);
  *((_QWORD *)&v40 + 1) = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *(_QWORD *)(a1 + 56);
  v15 = v41;
  v41 = v14;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v39 = *(_DWORD *)(a1 + 232);
  if ( a2 )
  {
    v16 = *(_QWORD *)(a1 + 56);
    v17 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 72LL);
    v18 = v38;
    v38 = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v17(v16, &v38);
    v46 = *(_QWORD *)(a1 + 128);
    v34 = v46;
    v21 = a2;
    v37 = a2;
    if ( a3 )
      v42 = *a3;
    v22 = *(_QWORD *)(a1 + 120);
    if ( v22 )
    {
      v23 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v22 + 48LL);
      v24 = v40;
      *(_QWORD *)&v40 = 0LL;
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      v25 = v23(v22, &v40);
      v9 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x284,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)(unsigned int)v25);
LABEL_25:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v45);
        goto LABEL_41;
      }
      v21 = v37;
    }
    if ( !*(_DWORD *)(a1 + 160) && a2 != 6 )
    {
      v26 = v39;
      if ( MultitaskingViewTelemetry::IsEnabled(v20, v19) )
      {
        wil::details::static_lazy<MultitaskingViewTelemetry>::get(
          v27,
          _lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
        MultitaskingViewTelemetry::GestureActionTriggered_(v28, v21, v26);
      }
    }
    anonymous_namespace_::ProcessInputLambdaArgs::ProcessInputLambdaArgs(v43, &v34);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v45);
    MultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139 = MakeMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_(
                                                                              &v45,
                                                                              v43);
    v9 = MultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139;
    if ( MultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30A,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139);
      anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs(v43);
      v30 = v45;
      if ( v45 )
      {
        v45 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      goto LABEL_41;
    }
    v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 32) + 24LL))(
            *(_QWORD *)(a1 + 32),
            v45,
            1LL);
    v9 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30B,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v31);
      anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs(v43);
      goto LABEL_25;
    }
    *(_DWORD *)(a1 + 160) = a2;
    anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs(v43);
  }
  v46 = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  v32 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v9 = 0;
LABEL_41:
  anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs(&v34);
  return v9;
}
