/*
 * XREFs of ?wait@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA_NKH@Z @ 0x18009A858
 * Callers:
 *     ?WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ @ 0x18009A750 (-WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1800A5270 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180254FE0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x180420800 (-WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ.c)
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x18044D9F8 (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     ?DestroyTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUITabProxyWindowInternal@345@@Z @ 0x18055C3B0 (-DestroyTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
      (void *)0xAD4,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v3);
  return v4;
}
