/*
 * XREFs of HaliHaltSystem @ 0x140581BD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiPmRegisterRead @ 0x140464ED0 (HalpAcpiPmRegisterRead.c)
 *     HalpShutdown @ 0x140581FB0 (HalpShutdown.c)
 *     InbvCheckDisplayOwnership @ 0x1405C7370 (InbvCheckDisplayOwnership.c)
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
      while ( !(_DWORD)KiBugCheckData && !(unsigned __int8)InbvCheckDisplayOwnership() );
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
