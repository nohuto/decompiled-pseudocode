/*
 * XREFs of TpCallbackSetEventOnCompletion @ 0x180104E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackSetEventOnCompletion(PTP_CALLBACK_INSTANCE Instance, HANDLE Event)
{
  if ( !Instance || (char *)Event - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || Instance->Event )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    Instance->CallbackEpilogFlags |= 4u;
    Instance->Event = (unsigned int)Event;
  }
}
