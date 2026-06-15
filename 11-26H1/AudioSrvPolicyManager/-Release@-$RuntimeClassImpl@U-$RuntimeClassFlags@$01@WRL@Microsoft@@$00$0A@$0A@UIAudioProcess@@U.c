/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800089A0
 * Callers:
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180007FB0 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180008E40 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000B7F0 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000C0C0 (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??1CProcess@@MEAA@XZ @ 0x18001ADE4 (--1CProcess@@MEAA@XZ.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020DBC (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18002129C (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     PbmGetSoundLevel @ 0x180024C00 (PbmGetSoundLevel.c)
 *     ??1?$ComPtr@VCProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x18002A028 (--1-$ComPtr@VCProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18002A4C8 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     PbmUnregisterAppManagerNotification @ 0x18002B000 (PbmUnregisterAppManagerNotification.c)
 *     PbmRegisterAppManagerNotification @ 0x18002B070 (PbmRegisterAppManagerNotification.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800399C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAu_ea_1800399C0.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18003B43C (--1CApplicationManager@@MEAA@XZ.c)
 *     PbmIsPlaying @ 0x180041C70 (PbmIsPlaying.c)
 *     PbmRegisterAppClosureNotification @ 0x180041E70 (PbmRegisterAppClosureNotification.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x180041EE0 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmUnregisterAppClosureNotification @ 0x180042130 (PbmUnregisterAppClosureNotification.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x1800421E0 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(
        volatile signed __int32 *a1)
{
  signed __int32 i; // edx
  unsigned __int32 v2; // ebx

  for ( i = *((_DWORD *)a1 + 5); i != 0x7FFFFFFF; i = *((_DWORD *)a1 + 5) )
  {
    if ( i == _InterlockedCompareExchange(a1 + 5, i - 1, i) )
      break;
  }
  v2 = i - 1;
  if ( i == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 560LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
