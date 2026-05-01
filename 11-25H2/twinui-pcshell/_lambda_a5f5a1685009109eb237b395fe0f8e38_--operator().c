/*
 * XREFs of _lambda_a5f5a1685009109eb237b395fe0f8e38_::operator() @ 0x1805A935C
 * Callers:
 *     wistd::__function::__func__lambda_a5f5a1685009109eb237b395fe0f8e38__long___cdecl(void)_::operator() @ 0x1805A9C90 (wistd--__function--__func__lambda_a5f5a1685009109eb237b395fe0f8e38__long___cdecl(void)_--operato.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??R?$_Func_class@XUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801F2B44 (--R-$_Func_class@XUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXUDashboard.c)
 *     ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@AEAUguid@6@@Z @ 0x1805AB544 (-EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_a5f5a1685009109eb237b395fe0f8e38_::operator()(__int64 a1)
{
  __m128i v2; // xmm0
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  const char *v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int8 v10; // [rsp+28h] [rbp-20h]
  __int8 v11; // [rsp+29h] [rbp-1Fh]
  __int8 v12; // [rsp+2Ah] [rbp-1Eh]
  __int8 v13; // [rsp+2Bh] [rbp-1Dh]
  __int8 v14; // [rsp+2Ch] [rbp-1Ch]
  __int8 v15; // [rsp+2Dh] [rbp-1Bh]
  __int8 v16; // [rsp+2Eh] [rbp-1Ah]
  __int8 v17; // [rsp+2Fh] [rbp-19h]
  _QWORD v18[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(__m128i *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 152LL);
  v3 = HIWORD(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 152LL));
  v4 = HIDWORD(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 152LL));
  LODWORD(v9) = _mm_cvtsi128_si32(v2);
  WORD2(v9) = v4;
  HIWORD(v9) = v3;
  v2.m128i_i64[0] = _mm_srli_si128(v2, 8).m128i_u64[0];
  v10 = v2.m128i_i8[0];
  v11 = v2.m128i_i8[1];
  v12 = v2.m128i_i8[2];
  v13 = v2.m128i_i8[3];
  v14 = v2.m128i_i8[4];
  v15 = v2.m128i_i8[5];
  v16 = v2.m128i_i8[6];
  v17 = v2.m128i_i8[7];
  v5 = *(_QWORD *)(a1 + 8);
  try
  {
    winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureDashboardExtensionCreated(v5, v18, &v9);
    if ( v18[0] && (v6 = *(_QWORD *)(a1 + 16), *(_QWORD *)(v6 + 56)) )
    {
      v9 = v18[0];
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v9);
      std::_Func_class<void,winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::operator()(
        v6,
        (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
    }
    else
    {
      **(_DWORD **)(a1 + 24) = -2147023728;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB4D,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v7);
  }
  return result;
}
