/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024050
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180046230 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAud_ea_180046230.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180046240 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAud_ea_180046240.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::AddRef(
        __int64 a1)
{
  unsigned int v1; // r9d
  signed __int32 v2; // r8d

  v1 = 0x7FFFFFFF;
  while ( 1 )
  {
    v2 = *(_DWORD *)(a1 + 28);
    if ( v2 == 0x7FFFFFFF )
      break;
    if ( v2 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 28), v2 + 1, v2) )
      return (unsigned int)(v2 + 1);
  }
  return v1;
}
