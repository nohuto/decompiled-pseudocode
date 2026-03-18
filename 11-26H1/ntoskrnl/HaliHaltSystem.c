/*
 * XREFs of HaliHaltSystem @ 0x14057F6B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiPmRegisterRead @ 0x14046B750 (HalpAcpiPmRegisterRead.c)
 *     HalpShutdown @ 0x14057FA90 (HalpShutdown.c)
 *     InbvCheckDisplayOwnership @ 0x1405C4B00 (InbvCheckDisplayOwnership.c)
 */

void __noreturn HaliHaltSystem()
{
  __int16 v0; // bx
  __int16 v1; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    do
    {
      do
        v1 = 0;
      while ( !LODWORD(KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink)
           && !(unsigned __int8)InbvCheckDisplayOwnership() );
    }
    while ( !LODWORD(HalpPmuArbiter.TrapFrame) || !LOBYTE(IommuInterfaceStateChangeCallbackPushLock.ThreadTimerDelay) );
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v1, 2u, 0LL);
    v0 = v1;
    if ( LOBYTE(IommuInterfaceStateChangeCallbackPushLock.Spare36) )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v1, 2u, 0LL);
      v0 |= v1;
    }
    if ( (v0 & 0x100) != 0 && v0 >= 0 )
      HalpShutdown();
  }
}
