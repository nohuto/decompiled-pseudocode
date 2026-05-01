/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1?PolicyManager_FreeGetPolicyData@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180217C54
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1?PolicyManager_FreeGetPolicyData@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180234D04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1.c)
 *     ?IsLockWidgetCanvasDisabledByPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805B0670 (-IsLockWidgetCanvasDisabledByPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     ?IsWidgetDisabledByPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805B0EBC (-IsWidgetDisabledByPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     ?GetCopilotHardwareKeyAppEnforcedByPolicy@CopilotButtonHelpers@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1805FF900 (-GetCopilotHardwareKeyAppEnforcedByPolicy@CopilotButtonHelpers@@YA-AV-$basic_string@GU-$char_tra.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return PolicyManager_FreeGetPolicyData(v1);
  return result;
}
