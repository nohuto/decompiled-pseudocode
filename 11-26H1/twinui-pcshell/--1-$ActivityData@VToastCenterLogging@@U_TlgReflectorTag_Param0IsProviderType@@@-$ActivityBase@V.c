/*
 * XREFs of ??1?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180040E74
 * Callers:
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x18001A1A8 (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18001BB64 (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x18001C030 (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ @ 0x18001D97C (-ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18001E180 (-DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MO.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003E5A0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180040D7C (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180040DD8 (--1-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x1801E7318 (-Show@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801EBC58 (-OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801F3850 (-OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1802C7A50 (-OnViewHidden@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001D6FC (-Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180040E10 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18004226C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802C6DAC (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(
        _DWORD *a1)
{
  __int64 v2; // rcx
  const struct _tlgProvider_t *v3; // rax

  wil::details::shared_buffer::reset((wil::details::shared_buffer *)(a1 + 58));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 10));
  if ( *a1 == 1 )
  {
    *a1 = 2;
    v3 = ToastCenterLogging::Provider(v2);
    _tlgWriteActivityAutoStop<0,5>(v3, a1 + 2);
  }
  *a1 = 3;
}
