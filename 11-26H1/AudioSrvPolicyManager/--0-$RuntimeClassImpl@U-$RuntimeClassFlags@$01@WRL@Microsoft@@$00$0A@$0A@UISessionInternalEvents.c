/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18000703C
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioProcess@@UIAudioProcessInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x180006F3C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioProcess@@UIAudioProcessInternal.c)
 *     ??0CDuckingManager@@QEAA@XZ @ 0x180045BB4 (--0CDuckingManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = 1;
  return a1;
}
