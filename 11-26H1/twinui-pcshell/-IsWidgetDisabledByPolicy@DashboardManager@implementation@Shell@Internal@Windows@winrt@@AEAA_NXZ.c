/*
 * XREFs of ?IsWidgetDisabledByPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805D4D7C
 * Callers:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x1801FE150 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 * Callees:
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801CD2B0 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801D4C2C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1?PolicyManager_FreeGetPolicyData@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180207520 (--1-$unique_storage@U-$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1-PolicyManager_F.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@@QEAA_NXZ @ 0x1805DAA68 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::IsWidgetDisabledByPolicy(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  bool v1; // bl
  char IsEnabled; // al
  __int64 v3; // rdi
  int Policy; // eax
  __m128i si128; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+10h] BYREF
  char v8; // [rsp+48h] [rbp+18h] BYREF

  v1 = 0;
  v7 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_50179255>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_50179255>::GetImpl'::`2'::impl);
  v3 = v7;
  if ( !IsEnabled )
    goto LABEL_7;
  if ( v7 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v8);
    PolicyManager_FreeGetPolicyData(v3);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v8);
  }
  v7 = 0LL;
  Policy = PolicyManager_GetPolicy(L"NewsAndInterests", L"DisableWidgetsBoard", &si128, &v7);
  v3 = v7;
  if ( Policy >= 0 && *(_DWORD *)(v7 + 4) )
  {
    v1 = *(_DWORD *)(v7 + 16) == 0;
  }
  else
  {
LABEL_7:
    if ( v3 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&v8);
      PolicyManager_FreeGetPolicyData(v3);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v8);
    }
    v7 = 0LL;
    if ( (int)PolicyManager_GetPolicy(L"NewsAndInterests", L"AllowNewsAndInterests", &si128, &v7) >= 0
      && *(_DWORD *)(v7 + 4) )
    {
      v1 = *(_DWORD *)(v7 + 16) != 1;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>(&v7);
  return v1;
}
