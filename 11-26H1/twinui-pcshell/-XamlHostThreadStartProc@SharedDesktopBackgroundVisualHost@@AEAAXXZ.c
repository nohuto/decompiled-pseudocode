/*
 * XREFs of ?XamlHostThreadStartProc@SharedDesktopBackgroundVisualHost@@AEAAXXZ @ 0x18060F1DC
 * Callers:
 *     _lambda_3a06c2c252ae701a17f26d0b735b6b61_::_lambda_invoker_cdecl_ @ 0x1806083A0 (_lambda_3a06c2c252ae701a17f26d0b735b6b61_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1802B7828 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandl_ea_1802B7828.c)
 *     ??$check_bool@H@winrt@@YAHHAEBUslim_source_location@impl@0@@Z @ 0x1803CECB0 (--$check_bool@H@winrt@@YAHHAEBUslim_source_location@impl@0@@Z.c)
 *     ??$?RUSharedDesktopBackgroundVisualHost@@_N@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSharedDesktopBackgroundVisualHost@@AEB_N@Z @ 0x180608A30 (--$-RUSharedDesktopBackgroundVisualHost@@_N@-$event@U-$TypedEventHandler@UISharedDesktopBackgrou.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SharedDesktopBackgroundVisualHost::XamlHostThreadStartProc(SharedDesktopBackgroundVisualHost *this)
{
  unsigned int v2; // eax
  int v3; // [rsp+30h] [rbp-28h] BYREF
  __int128 v4; // [rsp+38h] [rbp-20h]
  RTL_SRWLOCK *v5; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0LL;
  v2 = EnableMouseInPointerForThread();
  winrt::check_bool<int>(v2, (winrt *)&v3);
  wil::AcquireSRWLockExclusive(&v5, (RTL_SRWLOCK *)this + 22);
  *((_DWORD *)this + 46) = 2;
  *((_BYTE *)this + 209) = 1;
  _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
    (wil::details **)this + 30,
    1,
    0LL);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  LOBYTE(v5) = 1;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>::operator()<SharedDesktopBackgroundVisualHost,bool>(
    (RTL_SRWLOCK *)this + 16,
    (__int64)this,
    (__int64)&v5);
}
