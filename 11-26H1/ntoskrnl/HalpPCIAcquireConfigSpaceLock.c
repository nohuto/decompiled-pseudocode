/*
 * XREFs of HalpPCIAcquireConfigSpaceLock @ 0x14042CB64
 * Callers:
 *     HaliPciInterfaceReadConfig @ 0x14042C850 (HaliPciInterfaceReadConfig.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall HalpPCIAcquireConfigSpaceLock(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 *v2; // rdi
  unsigned __int8 CurrentIrql; // bl
  bool v4; // zf

  v2 = a1;
  if ( LOBYTE(HalpDeviceBlockUnblockPushLock.Timer.DueTime.LowPart) )
  {
    *a1 = 15;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 15;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    v4 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
    *v2 = CurrentIrql;
    if ( v4 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&HalpPCIConfigLock, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&HalpPCIConfigLock);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&HalpPCIConfigLock);
    }
  }
}
