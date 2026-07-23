/*
 * XREFs of HalpPCIReleaseConfigSpaceLock @ 0x14042D150
 * Callers:
 *     HaliPciInterfaceReadConfig @ 0x14042C850 (HaliPciInterfaceReadConfig.c)
 *     HalpPCIConfig @ 0x14042CDA0 (HalpPCIConfig.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall HalpPCIReleaseConfigSpaceLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  if ( !LOBYTE(HalpDeviceBlockUnblockPushLock.Timer.DueTime.LowPart) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      _InterlockedAnd64(&HalpPCIConfigLock, 0LL);
    }
    else
    {
      result = KiReleaseSpinLockInstrumented(&HalpPCIConfigLock, retaddr);
    }
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v1);
    __writecr8(v1);
  }
  return result;
}
