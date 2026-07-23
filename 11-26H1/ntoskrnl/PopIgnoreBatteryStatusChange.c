/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x14050E888
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140F106B8, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140F106C0);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140F10740, Executive, 0, 0, 0LL);
  }
  byte_140F10778 = 1;
  return v0;
}
