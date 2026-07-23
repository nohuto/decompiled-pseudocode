/*
 * XREFs of HalpAcquireCmosSpinLock @ 0x140532A40
 * Callers:
 *     HalSetBusDataByOffset @ 0x14042C360 (HalSetBusDataByOffset.c)
 *     HalpWriteStdCmosData @ 0x1404492E0 (HalpWriteStdCmosData.c)
 *     HalpSetClockAfterSleep @ 0x140449344 (HalpSetClockAfterSleep.c)
 *     HalpSetClockBeforeSleep @ 0x1404493B8 (HalpSetClockBeforeSleep.c)
 *     HalpReadRtcStdPCAT @ 0x140449870 (HalpReadRtcStdPCAT.c)
 *     HalpWriteRtcStdPCAT @ 0x1404498F0 (HalpWriteRtcStdPCAT.c)
 *     HalpReadStdCmosData @ 0x140449B40 (HalpReadStdCmosData.c)
 *     HalpAcquireCmosSpinLockAndWait @ 0x140449BC0 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalpGetSetCmosData @ 0x1404ED634 (HalpGetSetCmosData.c)
 *     HalpSetCmosData @ 0x1404FAC94 (HalpSetCmosData.c)
 *     HalGetEnvironmentVariable @ 0x14057E860 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x14057E900 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x1405812C0 (HalMakeBeep.c)
 *     HalpReboot @ 0x140581E74 (HalpReboot.c)
 *     x86BiosReadCmosPortByte @ 0x140583338 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x1405834B0 (x86BiosWriteCmosPortByte.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpAcquireCmosSpinLock(char a1)
{
  unsigned int v2; // ebx
  bool v3; // al
  __int64 v4; // rcx
  __int64 v5; // rdx
  bool v6; // r8
  __int64 result; // rax

  v2 = 0;
  while ( 1 )
  {
    v3 = HalpDisableInterrupts();
    LODWORD(v5) = KeGetPcr()->Prcb.Number;
    v6 = v3;
    result = (unsigned int)_InterlockedCompareExchange(&HalpSystemHardwareLock, v5, -1);
    if ( (_DWORD)result == -1 )
      break;
    if ( a1 )
    {
      v5 = (unsigned int)HalpSystemHardwareLock;
      LODWORD(v4) = KeGetPcr()->Prcb.Number;
      if ( HalpSystemHardwareLock == (_DWORD)v4 )
      {
        if ( HalpBugcheckInProgress )
          return result;
      }
    }
    if ( v6 )
      _enable();
    while ( HalpSystemHardwareLock != -1 )
    {
      if ( HalpPmuArbiter.ApcState.ApcListHead[0].Flink )
        guard_dispatch_icall_no_overrides(v4, v5);
      if ( (++v2 & dword_140FBB3DC) != 0 || !qword_140FBB3E0 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v2, v5);
    }
  }
  LOBYTE(HalpDeviceBlockUnblockPushLock.WriteTransferCount) = v6;
  return result;
}
