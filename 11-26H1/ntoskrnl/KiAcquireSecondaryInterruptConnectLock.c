/*
 * XREFs of KiAcquireSecondaryInterruptConnectLock @ 0x1404309BC
 * Callers:
 *     KiUnmaskSecondaryInterruptInternal @ 0x140430668 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiMaskSecondaryInterruptInternal @ 0x140430730 (KiMaskSecondaryInterruptInternal.c)
 *     KiDisconnectInterruptCommon @ 0x140430EB4 (KiDisconnectInterruptCommon.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140431368 (KiDisconnectSecondaryInterrupt.c)
 *     KiConnectSecondaryInterrupt @ 0x1404318E8 (KiConnectSecondaryInterrupt.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
