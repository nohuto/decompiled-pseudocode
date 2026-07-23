/*
 * XREFs of PiCslIsConsoleLocked @ 0x14096EDA4
 * Callers:
 *     PipDmgReevaluateQueue @ 0x140773D50 (PipDmgReevaluateQueue.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096EA80 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x14096EC44 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char PiCslIsConsoleLocked()
{
  char v0; // dl

  v0 = 0;
  if ( !PipCslInitialized )
    KeBugCheckEx(0xCAu, 0x10uLL, 0LL, 0LL, 0LL);
  if ( !PipCslConsoleLockState )
    return 1;
  if ( PipCslConsoleLockState != 1 )
  {
    if ( PipCslConsoleLockState != 2 )
      __fastfail(5u);
    return 1;
  }
  return v0;
}
