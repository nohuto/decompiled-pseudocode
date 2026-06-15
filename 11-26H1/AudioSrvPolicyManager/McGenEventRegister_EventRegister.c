/*
 * XREFs of McGenEventRegister_EventRegister @ 0x18002E9FC
 * Callers:
 *     DllMain @ 0x180027E6C (DllMain.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister_EventRegister()
{
  ULONG result; // eax

  result = 0;
  if ( !AUDIO_EVENT_PROVIDER_Context )
    return EventRegister(
             &AUDIO_EVENT_PROVIDER,
             (PENABLECALLBACK)McGenControlCallbackV2,
             &AUDIO_EVENT_PROVIDER_Context,
             &AUDIO_EVENT_PROVIDER_Context);
  return result;
}
