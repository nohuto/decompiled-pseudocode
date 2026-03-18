/*
 * XREFs of PopSetupAudioEventNotification @ 0x1407C85D0
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x140948A90 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupAudioEventNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (unsigned int)&v1,
           (unsigned int)&WNF_SEB_AUDIO_ACTIVITY,
           1,
           0,
           (__int64)PopWnfAudioCallback,
           0LL);
}
