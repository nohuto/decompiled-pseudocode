/*
 * XREFs of ??$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18035C644
 * Callers:
 *     ?GetExperienceManager@ActionCenterExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18035E8C0 (-GetExperienceManager@ActionCenterExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUII.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801529A0 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801539D0 (-QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIActionCenterExperienceManager@6789@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801C4490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNoti.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x18035CCBC (--0CActionCenterExperienceManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CActionCenterExperienceManager,IInspectable,IServiceProvider * &>(
        void **a1,
        struct IServiceProvider **a2)
{
  void *v4; // rax
  int Interface; // edi
  CActionCenterExperienceManager *v6; // rbx
  void *v8; // [rsp+40h] [rbp+8h] BYREF
  CActionCenterExperienceManager *v9; // [rsp+50h] [rbp+18h]
  void *v10; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = operator new(0x360uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v9 = (CActionCenterExperienceManager *)v4;
  if ( v4 )
  {
    v10 = v4;
    v6 = CActionCenterExperienceManager::CActionCenterExperienceManager((CActionCenterExperienceManager *)v4);
    v9 = v6;
    v8 = 0LL;
    Interface = CActionCenterExperienceManager::RuntimeClassInitialize(v6, *a2);
    if ( Interface >= 0 )
      Interface = CActionCenterExperienceManager::QueryInterface(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a1);
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>::Release((volatile signed __int64 *)v6);
  }
  else
  {
    Interface = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return (unsigned int)Interface;
}
