/*
 * XREFs of TpCallbackLeaveCriticalSectionOnCompletion @ 0x18010CE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackLeaveCriticalSectionOnCompletion(
        PTP_CALLBACK_INSTANCE Instance,
        PRTL_CRITICAL_SECTION CriticalSection)
{
  if ( Instance && CriticalSection && !Instance->CriticalSection )
  {
    Instance->CallbackEpilogFlags |= 1u;
    Instance->CriticalSection = CriticalSection;
  }
  else
  {
    TppRaiseInvalidParameter();
  }
}
