/*
 * XREFs of Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline @ 0x1402721FC
 * Callers:
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x14015D154 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserDeferWindowPosAndBand @ 0x1402487D0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x14024EC50 (NtUserSetWindowPos.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1402597B4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 * Callees:
 *     Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledFallback @ 0x140272234 (Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledFallback.c)
 */

__int64 Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NoMoreSwpIamNotifyPosChanged__private_featureState & 0x10) != 0 )
    return Feature_NoMoreSwpIamNotifyPosChanged__private_featureState & 1;
  else
    return Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledFallback(
             (unsigned int)Feature_NoMoreSwpIamNotifyPosChanged__private_featureState,
             3LL);
}
