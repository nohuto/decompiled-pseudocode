/*
 * XREFs of ?IsLockWidgetCanvasDisabledByPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805D458C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D6690 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasDelayedInitial.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x1801085C4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1?PolicyManager_FreeGetPolicyData@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180207520 (--1-$unique_storage@U-$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1-PolicyManager_F.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::IsLockWidgetCanvasDisabledByPolicy(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  bool v4; // bl
  __m128i si128; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  HIDWORD(v7) = HIDWORD(this);
  v4 = 0;
  LODWORD(v7) = 0;
  if ( (int)SHRegGetBOOLWithREGSAM(
              HKEY_LOCAL_MACHINE,
              L"Software\\Policies\\Microsoft\\Dsh",
              L"DisableWidgetsOnLockScreen",
              a4,
              (int *)&v7) >= 0 )
    return (_DWORD)v7 == 0;
  v7 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (int)PolicyManager_GetPolicy(L"NewsAndInterests", L"AllowNewsAndInterests", &si128, &v7) >= 0
    && *(_DWORD *)(v7 + 4) )
  {
    v4 = *(_DWORD *)(v7 + 16) != 1;
  }
  wil::details::unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>(&v7);
  return v4;
}
