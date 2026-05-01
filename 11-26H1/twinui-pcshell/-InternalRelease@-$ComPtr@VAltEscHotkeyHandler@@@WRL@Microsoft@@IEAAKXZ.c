/*
 * XREFs of ?InternalRelease@?$ComPtr@VAltEscHotkeyHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1801D16D4
 * Callers:
 *     ?VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x1801D1600 (-VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 *     ??$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x1801D16FC (--$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEA.c)
 *     ??1?$ComPtr@VAltEscHotkeyHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C8708 (--1-$ComPtr@VAltEscHotkeyHandler@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VAltEscHotkeyHandler@@V1@AEAPEAUIWeakReference@WeakReference@@@Details@WRL@Microsoft@@YAJPEAPEAVAltEscHotkeyHandler@@AEAPEAUIWeakReference@WeakReference@@@Z @ 0x1804B6D14 (--$MakeAndInitialize@VAltEscHotkeyHandler@@V1@AEAPEAUIWeakReference@WeakReference@@@Details@WRL@.c)
 *     ?AltEscHotkeyHandler_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B70C4 (-AltEscHotkeyHandler_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802A9EE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_1802A9EE0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AltEscHotkeyHandler>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release(v1);
  }
  return result;
}
