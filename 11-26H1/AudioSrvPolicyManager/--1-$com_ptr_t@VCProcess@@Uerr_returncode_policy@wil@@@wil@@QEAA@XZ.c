/*
 * XREFs of ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770
 * Callers:
 *     PbmSetSmtcSubscriptionState @ 0x180006AA0 (PbmSetSmtcSubscriptionState.c)
 *     ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180007F10 (-ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180007FB0 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 *     ?RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180008610 (-RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_.c)
 *     ?RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z @ 0x1800087D0 (-RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z.c)
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x180008A20 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180008E40 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180009040 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000B7F0 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000C0C0 (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?SetNotificationData@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEAE_K@Z @ 0x180015194 (-SetNotificationData@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@st.c)
 *     ?clear@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18001681C (-clear@-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x18002099C (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_::_Delete_this @ 0x180029A60 (std--_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_--_Delete_this.c)
 *     ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180038B10 (-InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CApplicationManager@@QEAAJKPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x18003CC18 (-RegisterMixedRealitySpatialAudioFormatPolicyChange@CApplicationManager@@QEAAJKPEAUIMixedReality.c)
 *     std::_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_::_Delete_this @ 0x180041710 (std--_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_--_Delete_this.c)
 *     PbmCastingAppStateChanged @ 0x180041AE0 (PbmCastingAppStateChanged.c)
 *     PbmPlayToStreamStateChanged @ 0x180041D60 (PbmPlayToStreamStateChanged.c)
 *     PbmSetScreenReaderState @ 0x180041FD0 (PbmSetScreenReaderState.c)
 *     ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180043588 (--1_Flist_node_remove_op@-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?GetMixedRealitySpatialAudioFormatPolicyForProcess@CWindowsPolicyManager@@UEAAJKPEAW4MixedRealitySpatialAudioFormatPolicy@Audio@Media@Windows@@@Z @ 0x180046310 (-GetMixedRealitySpatialAudioFormatPolicyForProcess@CWindowsPolicyManager@@UEAAJKPEAW4MixedRealit.c)
 *     ?NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x1800464B0 (-NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     ?NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x180046910 (-NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     _CPlaybackManager::QueueStreamStartedWorkItem_::_1_::dtor$2 @ 0x18004BE50 (_CPlaybackManager--QueueStreamStartedWorkItem_--_1_--dtor$2.c)
 *     _CApplicationManager::RegisterMixedRealitySpatialAudioFormatPolicyChange_::_1_::dtor$0 @ 0x18004E079 (_CApplicationManager--RegisterMixedRealitySpatialAudioFormatPolicyChange_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  signed __int32 i; // r8d
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
  {
    for ( i = *((_DWORD *)v1 + 5); i != 0x7FFFFFFF; i = *((_DWORD *)v1 + 5) )
    {
      if ( i == _InterlockedCompareExchange(v1 + 5, i - 1, i) )
        break;
    }
    result = (unsigned int)(i - 1);
    if ( i == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 560LL))(v1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
