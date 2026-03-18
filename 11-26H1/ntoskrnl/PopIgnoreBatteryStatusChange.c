/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x140514E18
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140F0FEF8, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140F0FF00);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140F0FF80, Executive, 0, 0, 0LL);
  }
  byte_140F0FFB8 = 1;
  return v0;
}
