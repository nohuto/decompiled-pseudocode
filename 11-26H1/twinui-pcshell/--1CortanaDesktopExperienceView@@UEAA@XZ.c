/*
 * XREFs of ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1803D09E0
 * Callers:
 *     ??_ECortanaDesktopExperienceView@@UEAAPEAXI@Z @ 0x1803D0CA0 (--_ECortanaDesktopExperienceView@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800254EC (--1-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$integr.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1800C9FA4 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??R?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@QEBAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x1803C7320 (--R-$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@QEBAXPEAVICortanaWNFService@Cort.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CortanaDesktopExperienceView::~CortanaDesktopExperienceView(CortanaDesktopExperienceView *this)
{
  void *v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  TwinUI::Lighting::AssistantLightManager *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx

  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>((HWND *)this + 35);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>((HWND *)this + 34);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  v4 = (_QWORD *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v4 )
  {
    v5 = (TwinUI::Lighting::AssistantLightManager *)v4[1];
    v4[1] = 0LL;
    if ( v5 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v5, v2);
      operator delete(v5, (const struct std::nothrow_t *)0x70);
    }
    operator delete(v4, (const struct std::nothrow_t *)0x10);
  }
  v6 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v6 )
    wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>::operator()(v3, v6);
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>((__int64)this);
}
