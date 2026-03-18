/*
 * XREFs of PiCslIsConsoleLocked @ 0x140B133D8
 * Callers:
 *     PipDmgReevaluateQueue @ 0x140770D50 (PipDmgReevaluateQueue.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140B130B4 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x140B13278 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
