/*
 * XREFs of ?_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEA_N@Z @ 0x1802F60BC
 * Callers:
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1802F80F4 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1801B9430 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1802F6708 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_EvaluateFrameworkViewTypeForSwitchHelper(
        CAppViewManager *this,
        HWND a2,
        HWND a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a4,
        bool *a5)
{
  int GlomForWindow; // ebx
  bool v10; // al
  CAppViewManager *v11; // rcx
  int v12; // edi
  int v13; // esi
  int v14; // ecx
  __int64 (__fastcall *v15)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64, int *); // rbx
  int v16; // eax
  bool v17; // dl
  bool v19; // [rsp+20h] [rbp-58h] BYREF
  bool v20; // [rsp+21h] [rbp-57h] BYREF
  int v21; // [rsp+24h] [rbp-54h] BYREF
  struct IImmersiveApplicationInternal *v22; // [rsp+28h] [rbp-50h] BYREF
  struct IImmersiveApplicationInternal *v23; // [rsp+30h] [rbp-48h] BYREF
  int v24; // [rsp+38h] [rbp-40h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-38h] BYREF
  __int64 v26; // [rsp+58h] [rbp-20h]

  v24 = 0;
  *a5 = 0;
  v23 = 0LL;
  v22 = 0LL;
  v19 = 0;
  v20 = 0;
  if ( a2 == a3 )
  {
    GlomForWindow = -2147024809;
LABEL_3:
    v10 = 0;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a2, &v23, &v19);
  v10 = 0;
  if ( GlomForWindow < 0 )
    goto LABEL_18;
  if ( !v19 )
  {
    GlomForWindow = -2147024891;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a3, &v22, &v20);
  v12 = GlomForWindow;
  v10 = 0;
  if ( GlomForWindow < 0 )
    goto LABEL_18;
  if ( !CAppViewManager::_IsMultiViewOperationAllowed(v11, v22) )
  {
    GlomForWindow = -2147024891;
    goto LABEL_3;
  }
  v10 = 0;
  if ( !v20 )
  {
    v13 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v23 + 616LL))(v23);
    v14 = 6;
    v21 = 6;
    v17 = 0;
    if ( a4 )
    {
      v15 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64, int *))(*(_QWORD *)a4 + 368LL);
      v26 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FrameworkViewType", 0x12u, 0x11u);
      v24 = 1;
      v16 = v15(a4, v26, &v21);
      v14 = v21;
      if ( v16 >= 0 )
        v17 = 1;
    }
    v10 = 0;
    GlomForWindow = v12;
    if ( v17 && v14 != 6 )
      v10 = v14 != v13;
  }
LABEL_18:
  *a5 = v10;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  return (unsigned int)GlomForWindow;
}
