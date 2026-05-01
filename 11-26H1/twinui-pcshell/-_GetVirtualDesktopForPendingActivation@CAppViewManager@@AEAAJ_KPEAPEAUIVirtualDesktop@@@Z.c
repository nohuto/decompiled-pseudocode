/*
 * XREFs of ?_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z @ 0x1802F6550
 * Callers:
 *     ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x1802F2C00 (-IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801CC690 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x1802EEB9C (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppViewManager::_GetVirtualDesktopForPendingActivation(
        IUnknown **this,
        __int64 a2,
        struct IVirtualDesktop **a3)
{
  HRESULT v6; // ebx
  void *v7; // rbx
  __int64 (__fastcall *v8)(void *, __int64, struct Windows::Foundation::Collections::IPropertySet **); // rdi
  __int64 v9; // r8
  int v10; // eax
  void *v12; // [rsp+20h] [rbp-60h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v13; // [rsp+28h] [rbp-58h] BYREF
  void *ppvOut; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF
  __int128 v16; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING v18; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *a3 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v6 = IUnknown_QueryService(this[15], &SID_ViewEventDispatcher, &GUID_22347704_c4ce_4e82_afeb_c6a00e06cc3a, &ppvOut);
  if ( v6 >= 0 )
  {
    v13 = 0LL;
    v7 = ppvOut;
    v8 = *(__int64 (__fastcall **)(void *, __int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)ppvOut + 64LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    v6 = v8(v7, a2, &v13);
    if ( v6 >= 0 )
    {
      Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v15,
        v13);
      v16 = 0LL;
      v18 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"ActivationVirtualDesktopId",
        0x1Bu,
        0x1Au);
      v10 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v15,
              v18,
              v9,
              &v16);
      v6 = v10;
      if ( v10 >= 0 )
      {
        v12 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
        v6 = IUnknown_QueryService(
               this[15],
               (const GUID *const)&SID_VirtualDesktopManager,
               &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
               &v12);
        if ( v6 >= 0 )
          v6 = (*(__int64 (__fastcall **)(void *, __int128 *, struct IVirtualDesktop **))(*(_QWORD *)v12 + 112LL))(
                 v12,
                 &v16,
                 a3);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31,
          (int)"pcshell\\twinui\\viewmanagerinterop\\inc\\ViewManagerInteropPropertySetHelpers.h",
          (const char *)(unsigned int)v10);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v6;
}
