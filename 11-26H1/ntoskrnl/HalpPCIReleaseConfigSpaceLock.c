/*
 * XREFs of HalpPCIReleaseConfigSpaceLock @ 0x14043A8A0
 * Callers:
 *     HaliPciInterfaceReadConfig @ 0x140439FA0 (HaliPciInterfaceReadConfig.c)
 *     HalpPCIConfig @ 0x14043A4F0 (HalpPCIConfig.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall HalpPCIReleaseConfigSpaceLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  if ( !LOBYTE(HalpDeviceBlockUnblockPushLock.Timer.TimerListEntry.Flink) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = LODWORD(stru_140F11D08.WaitStatus), LODWORD(stru_140F11D08.WaitStatus)) )
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
