/*
 * XREFs of ?UnpinTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1805EC020
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800F5760 (--1-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details.c)
 *     ?GetProcessHandleForClientOfObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@PEAUIUnknown@@K@Z @ 0x18028FCF0 (-GetProcessHandleForClientOfObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_onl.c)
 *     ??B?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@QEBA?AUIInspectable@Foundation@Windows@1@XZ @ 0x18028FE64 (--B-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInte.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802ACC38 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??1PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAA@XZ @ 0x1805E3894 (--1PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAA@XZ.c)
 *     _anonymous_namespace_::ManageTaskbarPin @ 0x1805E7314 (_anonymous_namespace_--ManageTaskbarPin.c)
 *     ?StartActivity@PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z @ 0x1805E9788 (-StartActivity@PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Stop@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805E9A24 (-Stop@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Para.c)
 *     ?TryGetProcessImageName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@Z @ 0x1805EB5E4 (-TryGetProcessImageName@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAX@.c)
 *     _anonymous_namespace_::TryGetProcessPublisher @ 0x1805EB748 (_anonymous_namespace_--TryGetProcessPublisher.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::UnpinTaskbarItem(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v5; // rdx
  __int64 ProcessPublisher; // rax
  const unsigned __int16 *v7; // rdi
  __int64 ProcessImageName; // rax
  const unsigned __int16 *v9; // rbx
  unsigned int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-1C8h] BYREF
  _QWORD v13[4]; // [rsp+28h] [rbp-1C0h] BYREF
  _QWORD v14[4]; // [rsp+48h] [rbp-1A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-180h] BYREF
  __int64 v16[42]; // [rsp+70h] [rbp-178h] BYREF

  v15 = 0LL;
  v5 = *(_QWORD *)winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::operator winrt::Windows::Foundation::IInspectable(
                    a1,
                    (winrt *)&v12);
  wil::GetProcessHandleForClientOfObject(&v15, v5);
  if ( v12 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v12);
  memset_0(v16, 0, 0x148uLL);
  ProcessPublisher = anonymous_namespace_::TryGetProcessPublisher((__int64)v14, v15);
  v7 = (const unsigned __int16 *)ProcessPublisher;
  if ( *(_QWORD *)(ProcessPublisher + 24) > 7uLL )
    v7 = *(const unsigned __int16 **)ProcessPublisher;
  ProcessImageName = TryGetProcessImageName((__int64)v13, v15);
  v9 = (const unsigned __int16 *)ProcessImageName;
  if ( *(_QWORD *)(ProcessImageName + 24) > 7uLL )
    v9 = *(const unsigned __int16 **)ProcessImageName;
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"PinManagerUnpinTaskbarItem");
  v16[0] = (__int64)&PinManagerTelemetry::PinManagerUnpinTaskbarItem::`vftable';
  PinManagerTelemetry::PinManagerUnpinTaskbarItem::StartActivity(
    (PinManagerTelemetry::PinManagerUnpinTaskbarItem *)v16,
    v9,
    v7);
  std::wstring::_Tidy_deallocate(v13);
  std::wstring::_Tidy_deallocate(v14);
  v10 = anonymous_namespace_::ManageTaskbarPin(a2, 0LL, a3);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v16,
    v10);
  PinManagerTelemetry::PinManagerUnpinTaskbarItem::~PinManagerUnpinTaskbarItem((PinManagerTelemetry::PinManagerUnpinTaskbarItem *)v16);
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v15);
  return v10;
}
