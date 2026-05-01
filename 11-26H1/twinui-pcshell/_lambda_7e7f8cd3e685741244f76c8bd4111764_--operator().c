/*
 * XREFs of _lambda_7e7f8cd3e685741244f76c8bd4111764_::operator() @ 0x1801A6738
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___::RunTask @ 0x18049F810 (CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AltTabInvoked_@MultitaskingViewTelemetry@@QEBAXW4ALT_TAB_VIEW_FLAGS@@@Z @ 0x18007A950 (-AltTabInvoked_@MultitaskingViewTelemetry@@QEBAXW4ALT_TAB_VIEW_FLAGS@@@Z.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18029583C (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x18029587C (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_7e7f8cd3e685741244f76c8bd4111764_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  int (__fastcall *v5)(__int64, __int64, GUID *, __int64 *); // rbx
  BOOL v6; // r15d
  __int64 (__fastcall *v7)(__int64, __int64, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  int v11; // eax
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // cl
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v23; // [rsp+50h] [rbp+20h] BYREF

  if ( *(_DWORD *)a1 == 40 || (v4 = 6, ((*(_DWORD *)a1 - 42) & 0xFFFFFFFD) == 0) )
    v4 = 5;
  v23 = 0LL;
  v5 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  v6 = 1;
  if ( v5(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v23) < 0 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v8 = v7(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v23);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC9,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
        (const char *)(unsigned int)v8);
      v21 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    else
    {
      if ( *(_DWORD *)a1 != 44 )
        v6 = *(_DWORD *)a1 == 45;
      v10 = v6 | 2;
      if ( v4 != 6 )
        v10 = v6;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v23 + 48LL))(
              v23,
              *(_QWORD *)(a1 + 8),
              v10,
              *(_QWORD *)(a1 + 16));
      v9 = v11;
      if ( v11 >= 0 )
      {
        if ( MultitaskingViewTelemetry::IsEnabled(v13, v12) )
        {
          wil::details::static_lazy<MultitaskingViewTelemetry>::get(
            v14,
            _lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
          MultitaskingViewTelemetry::AltTabInvoked_(v20, v10);
        }
        goto LABEL_12;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD5,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
        (const char *)(unsigned int)v11);
      v19 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    return v9;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 56LL))(v23, v4);
  v9 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
      (const char *)(unsigned int)v17);
    v18 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return v9;
  }
LABEL_12:
  v15 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0LL;
}
