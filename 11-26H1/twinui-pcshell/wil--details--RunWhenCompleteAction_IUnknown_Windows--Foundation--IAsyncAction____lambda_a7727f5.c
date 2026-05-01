/*
 * XREFs of wil::details::RunWhenCompleteAction_IUnknown_Windows::Foundation::IAsyncAction____lambda_a7727f50da9d713bf735f2c71ec0999f___ @ 0x18033D1C0
 * Callers:
 *     ?HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18034AD98 (-HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____ @ 0x180322560 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a5e.c)
 *     ??0?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180340B08 (--0-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Para.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncActionCompletedHandler::_)(Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_be6b1a914f7b12eba76d69f77a72b4a6___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_be6b1a914f7b12eba76d69f77a72b4a6___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_ @ 0x180341310 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyncActionComple.c)
 *     ??1HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ @ 0x180342BA0 (--1HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::RunWhenCompleteAction_IUnknown_Windows::Foundation::IAsyncAction____lambda_a7727f50da9d713bf735f2c71ec0999f___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  unsigned int v6; // ebx
  int v8[2]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v9[41]; // [rsp+30h] [rbp-158h] BYREF
  char v10; // [rsp+178h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v9);
  v9[0] = &GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::`vftable';
  v10 = *(_BYTE *)(a2 + 328);
  v4 = 0LL;
  v5 = operator new(0x178uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v8 = v5;
  if ( v5 )
  {
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncActionCompletedHandler::___Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_be6b1a914f7b12eba76d69f77a72b4a6___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_be6b1a914f7b12eba76d69f77a72b4a6___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_(
           v5,
           v9);
    *(_QWORD *)v8 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____((void **)v8);
  *(_QWORD *)v8 = v4;
  GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::~HotkeyEntryPointActivity((GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity *)v9);
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v4);
  }
  else
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5EE,
      (int)"OneCore\\Internal\\Sdk\\Inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v8);
  return v6;
}
