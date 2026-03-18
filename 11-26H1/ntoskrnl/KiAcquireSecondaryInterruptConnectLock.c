/*
 * XREFs of KiAcquireSecondaryInterruptConnectLock @ 0x1404238CC
 * Callers:
 *     KiUnmaskSecondaryInterruptInternal @ 0x140423578 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiMaskSecondaryInterruptInternal @ 0x140423640 (KiMaskSecondaryInterruptInternal.c)
 *     KiDisconnectInterruptCommon @ 0x140423DC4 (KiDisconnectInterruptCommon.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140424278 (KiDisconnectSecondaryInterrupt.c)
 *     KiConnectSecondaryInterrupt @ 0x1404247F8 (KiConnectSecondaryInterrupt.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiAcquireSecondaryInterruptConnectLock(PKSPIN_LOCK SpinLock, unsigned __int8 *a2)
{
  KSPIN_LOCK *v3; // rsi
  unsigned __int8 CurrentIrql; // bl

  v3 = SpinLock;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(SpinLock) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SpinLock, 12LL);
  }
  *a2 = CurrentIrql;
  KxAcquireSpinLock(v3);
}
