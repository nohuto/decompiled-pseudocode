/*
 * XREFs of _lambda_706d5b32740c4da4e698be21c17b442a_::operator() @ 0x1805A8AD8
 * Callers:
 *     wistd::__function::__func__lambda_706d5b32740c4da4e698be21c17b442a__long___cdecl(void)_::operator() @ 0x1805A9C80 (wistd--__function--__func__lambda_706d5b32740c4da4e698be21c17b442a__long___cdecl(void)_--operato.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??R?$_Func_class@XUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801F2B44 (--R-$_Func_class@XUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXUDashboard.c)
 *     ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@AEAUguid@6@@Z @ 0x1805AB544 (-EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805B709C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash@@@details@wil@@QEAA_NXZ @ 0x1805B74B4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExte.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_706d5b32740c4da4e698be21c17b442a_::operator()(RTL_SRWLOCK **a1)
{
  char IsEnabled; // al
  __int64 *v3; // rdi
  RTL_SRWLOCK *v4; // r9
  __m128i v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  const char *v9; // r9
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v12; // [rsp+28h] [rbp-20h] BYREF
  __int8 v13; // [rsp+30h] [rbp-18h]
  __int8 v14; // [rsp+31h] [rbp-17h]
  __int8 v15; // [rsp+32h] [rbp-16h]
  __int8 v16; // [rsp+33h] [rbp-15h]
  __int8 v17; // [rsp+34h] [rbp-14h]
  __int8 v18; // [rsp+35h] [rbp-13h]
  __int8 v19; // [rsp+36h] [rbp-12h]
  __int8 v20; // [rsp+37h] [rbp-11h]
  _QWORD v21[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
    {
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::GetImpl'::`2'::impl);
      v3 = (__int64 *)&(*a1)[18];
      if ( IsEnabled )
      {
        wil::AcquireSRWLockExclusive(&v12, *a1 + 16);
        v11 = 0LL;
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v3, &v11);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
      }
      else
      {
        v11 = 0LL;
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v3, &v11);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
      }
    }
    v4 = *a1;
    LOBYTE(v4[33].Ptr) = 1;
    v5 = *(__m128i *)((char *)a1[1][6].Ptr + 152);
    v6 = HIWORD(*((_QWORD *)a1[1][6].Ptr + 19));
    v7 = HIDWORD(*((_QWORD *)a1[1][6].Ptr + 19));
    LODWORD(v12) = _mm_cvtsi128_si32(v5);
    WORD2(v12) = v7;
    HIWORD(v12) = v6;
    v5.m128i_i64[0] = _mm_srli_si128(v5, 8).m128i_u64[0];
    v13 = v5.m128i_i8[0];
    v14 = v5.m128i_i8[1];
    v15 = v5.m128i_i8[2];
    v16 = v5.m128i_i8[3];
    v17 = v5.m128i_i8[4];
    v18 = v5.m128i_i8[5];
    v19 = v5.m128i_i8[6];
    v20 = v5.m128i_i8[7];
    winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureDashboardExtensionCreated(v4, v21, &v12);
    if ( v21[0] && (v8 = (__int64)a1[2], *(_QWORD *)(v8 + 56)) )
    {
      v11 = v21[0];
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v11);
      std::_Func_class<void,winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::operator()(
        v8,
        (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
    }
    else
    {
      LODWORD(a1[3]->Ptr) = -2147023728;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v21);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB6B,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v9);
  }
  return result;
}
