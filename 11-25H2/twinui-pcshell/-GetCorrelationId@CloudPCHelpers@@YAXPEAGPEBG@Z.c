/*
 * XREFs of ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x18061AB94
 * Callers:
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802846D8 (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180284B48 (-RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@w.c)
 *     ??0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802CB2DC (--0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CopyCorrelationIdForBootUserSession@Utils@implementation@Shell@Internal@Windows@winrt@@SAXXZ @ 0x180619CF0 (-CopyCorrelationIdForBootUserSession@Utils@implementation@Shell@Internal@Windows@winrt@@SAXXZ.c)
 *     ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18061B230 (-HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180626FA4 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x180629388 (-PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@56@AEBI@Z @ 0x180635620 (-OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180635918 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x18064AD54 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 *     ?HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18064BF20 (-HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1802D5A94 (--_U@YAPEAX_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_CopyCorrelationId@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18061C5A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_CopyCorrelationId@@@details@wil@.c)
 *     wcscmp_0 @ 0x1806A4AF4 (wcscmp_0.c)
 */

void __fastcall CloudPCHelpers::GetCorrelationId(_WORD *pvData, wchar_t *String1, const unsigned __int16 *a3)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // rbx
  WCHAR *v7; // rdi
  __int64 v8; // rdx
  const struct std::nothrow_t *v9; // rdx
  __int64 v10; // r15
  DWORD v11; // eax
  const WCHAR *v12; // rdx
  DWORD pcbData; // [rsp+70h] [rbp+30h] BYREF

  if ( pvData )
  {
    pcbData = 0;
    v4 = -1LL;
    do
      ++v4;
    while ( String1[v4] );
    v6 = v4 + 52;
    v7 = (WCHAR *)operator new[](saturated_mul(v6, 2uLL));
    _o_wcscpy_s(v7, 52LL, L"Software\\Microsoft\\Windows\\RemoteSystemIntegration\\");
    _o_wcscat_s(v7, v6, String1);
    if ( !wcscmp_0(String1, L"SystemId_boot") )
    {
      LOBYTE(v8) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_CopyCorrelationId>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_W365Boot_CopyCorrelationId>::GetImpl'::`2'::impl,
        v8);
      RegGetValueW(HKEY_CURRENT_USER, v7, L"CorrelationId", 2u, 0LL, 0LL, &pcbData);
      if ( pcbData - 1 <= 0x102 )
      {
        RegGetValueW(HKEY_CURRENT_USER, v7, L"CorrelationId", 2u, 0LL, pvData, &pcbData);
LABEL_16:
        operator delete(v7, v9);
        return;
      }
      v10 = -2147483646LL;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\RemoteSystemIntegration",
        L"CorrelationId",
        1u,
        0LL,
        0LL,
        &pcbData);
      v11 = pcbData;
      if ( !pcbData )
      {
LABEL_15:
        *pvData = 0;
        goto LABEL_16;
      }
      if ( pcbData >= 0x104 )
      {
LABEL_14:
        if ( v11 - 1 <= 0x102 )
          goto LABEL_16;
        goto LABEL_15;
      }
      v12 = L"Software\\Microsoft\\Windows\\RemoteSystemIntegration";
    }
    else
    {
      v10 = -2147483647LL;
      RegGetValueW(HKEY_CURRENT_USER, v7, L"CorrelationId", 1u, 0LL, 0LL, &pcbData);
      v11 = pcbData;
      if ( !pcbData )
        goto LABEL_15;
      if ( pcbData >= 0x104 )
        goto LABEL_14;
      v12 = v7;
    }
    RegGetValueW((HKEY)v10, v12, L"CorrelationId", 1u, 0LL, pvData, &pcbData);
    v11 = pcbData;
    goto LABEL_14;
  }
}
