/*
 * XREFs of ?UpdatePinnedTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1805C8430
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B029C (--1-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18028F9F8 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ?GetProcessHandleForClientOfObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@PEAUIUnknown@@K@Z @ 0x180296960 (-GetProcessHandleForClientOfObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_onl.c)
 *     ??B?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@QEBA?AUIInspectable@Foundation@Windows@1@XZ @ 0x180296AD4 (--B-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInte.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??1PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAA@XZ @ 0x1805BF8B0 (--1PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAA@XZ.c)
 *     _anonymous_namespace_::ManageTaskbarPin @ 0x1805C3590 (_anonymous_namespace_--ManageTaskbarPin.c)
 *     ?StartActivity@PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z @ 0x1805C5A58 (-StartActivity@PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Stop@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805C5BF4 (-Stop@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Para.c)
 *     ?TryGetProcessImageName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@Z @ 0x1805C783C (-TryGetProcessImageName@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAX@.c)
 *     _anonymous_namespace_::TryGetProcessPublisher @ 0x1805C79B4 (_anonymous_namespace_--TryGetProcessPublisher.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::UpdatePinnedTaskbarItem(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v7; // rdx
  __int64 ProcessPublisher; // rax
  const unsigned __int16 *v9; // rdi
  __int64 ProcessImageName; // rax
  const unsigned __int16 *v11; // rbx
  unsigned int v12; // ebx
  __int64 v14; // [rsp+20h] [rbp-1D8h] BYREF
  void *v15[4]; // [rsp+28h] [rbp-1D0h] BYREF
  void *v16[4]; // [rsp+48h] [rbp-1B0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-190h] BYREF
  __int64 v18[42]; // [rsp+70h] [rbp-188h] BYREF

  v17 = 0LL;
  v7 = *(_QWORD *)winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::operator winrt::Windows::Foundation::IInspectable(
                    a1,
                    (winrt *)&v14);
  wil::GetProcessHandleForClientOfObject(&v17, v7);
  if ( v14 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
  memset_0(v18, 0, 0x148uLL);
  ProcessPublisher = anonymous_namespace_::TryGetProcessPublisher((__int64)v16, v17);
  v9 = (const unsigned __int16 *)ProcessPublisher;
  if ( *(_QWORD *)(ProcessPublisher + 24) > 7uLL )
    v9 = *(const unsigned __int16 **)ProcessPublisher;
  ProcessImageName = TryGetProcessImageName((__int64)v15, v17);
  v11 = (const unsigned __int16 *)ProcessImageName;
  if ( *(_QWORD *)(ProcessImageName + 24) > 7uLL )
    v11 = *(const unsigned __int16 **)ProcessImageName;
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"PinManagerUpdatePinnedTaskbarItem");
  v18[0] = (__int64)&PinManagerTelemetry::PinManagerUpdatePinnedTaskbarItem::`vftable';
  PinManagerTelemetry::PinManagerUpdatePinnedTaskbarItem::StartActivity(
    (PinManagerTelemetry::PinManagerUpdatePinnedTaskbarItem *)v18,
    v11,
    v9);
  std::wstring::_Tidy_deallocate(v15);
  std::wstring::_Tidy_deallocate(v16);
  v12 = anonymous_namespace_::ManageTaskbarPin(a2, a3, a4);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v18,
    v12);
  PinManagerTelemetry::PinManagerUpdatePinnedTaskbarItem::~PinManagerUpdatePinnedTaskbarItem((PinManagerTelemetry::PinManagerUpdatePinnedTaskbarItem *)v18);
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v17);
  return v12;
}
