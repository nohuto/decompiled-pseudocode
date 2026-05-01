/*
 * XREFs of ?wait@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA_NKH@Z @ 0x1800C9318
 * Callers:
 *     ?WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ @ 0x1800C9210 (-WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1800C9FA4 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180249650 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x18042BBD0 (-WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ.c)
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x18045A040 (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     ?DestroyTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUITabProxyWindowInternal@345@@Z @ 0x1805803F0 (-DestroyTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

bool __fastcall _wait___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_NKH_Z(
        HANDLE *a1,
        DWORD a2)
{
  DWORD v2; // eax
  const char *v3; // r9
  bool v4; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = WaitForSingleObjectEx(*a1, a2, 0);
  if ( v2 == 258 )
    return 0;
  v4 = v2 == 0;
  if ( v2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAE9,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v3);
  return v4;
}
