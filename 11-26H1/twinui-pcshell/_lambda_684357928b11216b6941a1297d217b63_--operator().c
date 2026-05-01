/*
 * XREFs of _lambda_684357928b11216b6941a1297d217b63_::operator() @ 0x1805CCB58
 * Callers:
 *     wistd::__function::__func__lambda_684357928b11216b6941a1297d217b63__long___cdecl(void)_::operator() @ 0x1805CDEA0 (wistd--__function--__func__lambda_684357928b11216b6941a1297d217b63__long___cdecl(void)_--operato.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??R?$_Func_class@XUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801E03E8 (--R-$_Func_class@XUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXUDashboard.c)
 *     ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@AEAUguid@6@@Z @ 0x1805CF760 (-EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805DA9EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash@@@details@wil@@QEAA_NXZ @ 0x1805DAE00 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExte.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_684357928b11216b6941a1297d217b63_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rcx
  PVOID Ptr; // rcx
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // rbx
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v9[2]; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::GetImpl'::`2'::impl) )
      {
        wil::AcquireSRWLockExclusive(v9, *a1 + 16);
        v8 = 0LL;
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)&(*a1)[18], &v8);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v9);
      }
      else
      {
        v2 = *a1;
        v8 = 0LL;
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)&v2[18], &v8);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
      }
    }
    LOBYTE((*a1)[39].Ptr) = 1;
    Ptr = a1[1][6].Ptr;
    v4 = (RTL_SRWLOCK *)*((_QWORD *)Ptr + 20);
    v9[0] = *((RTL_SRWLOCK **)Ptr + 19);
    v9[1] = v4;
    winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureDashboardExtensionCreated(*a1, v10, v9);
    if ( v10[0] && (v5 = (__int64)a1[2], *(_QWORD *)(v5 + 56)) )
    {
      v8 = v10[0];
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v8);
      std::_Func_class<void,winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::operator()(
        v5,
        (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
    }
    else
    {
      LODWORD(a1[3]->Ptr) = -2147023728;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBB6,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v6);
  }
  return result;
}
