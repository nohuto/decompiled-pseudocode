/*
 * XREFs of EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register @ 0x1804ABD60
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1804AB5B8 (--$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInter.c)
 *     ?RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1804B20E4 (-RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUI.c)
 *     ?SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktop@@@Z @ 0x1804B42F0 (-SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationServi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0 @ 0x18029CE88 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease_0.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister @ 0x1802A3764 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_1802A3764.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalAddRef @ 0x1802C88FC (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalAddRef.c)
 *     Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification___&__0 @ 0x1804AB520 (Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopNotificationForwarderHelpe_ea_1804AB520.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister((__int64)a1);
  v10 = 0LL;
  Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0(&v10);
  v4 = Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification______0(
         &v10,
         a1);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 60LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"desktop\\internal\\shell\\inc\\private\\EventRegistrationHelpers.h",
      (const char *)(unsigned int)v4);
    goto LABEL_9;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 120LL))(v10, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 61LL;
    goto LABEL_5;
  }
  v7 = v10;
  if ( a1[1] != v10 )
  {
    v11 = v10;
    Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalAddRef(&v11);
    v11 = a1[1];
    a1[1] = v7;
    Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0(&v11);
  }
  v5 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0(&v10);
  return v5;
}
