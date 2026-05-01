/*
 * XREFs of ?Run@?$produce@V?$ImmersiveShellThreadDispatcherCallback@V?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@std@@@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcherCallback@34567@@impl@winrt@@UEAAHXZ @ 0x1805BB240
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1805B9418 (--0-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V-$allocator@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  struct winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData **v3; // rbx
  void (__fastcall *v4)(__int64, __int64 *, __int64, _QWORD); // r14
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 result; // rax
  _BYTE v8[56]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v10; // [rsp+78h] [rbp+10h]

  v1 = a1 + 8;
  if ( !a1 )
    v1 = 24LL;
  v2 = v1 + 12;
  v3 = (struct winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData **)(v1 + 40);
  v4 = *(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD))v1;
  v5 = *(_DWORD *)(v1 + 8);
  v10 = &v9;
  v9 = *(_QWORD *)(v1 + 32);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  try
  {
    v6 = std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>(
           (__int64)v8,
           v3);
    v4(v6, &v9, v2, v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
