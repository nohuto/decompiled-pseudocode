/*
 * XREFs of HalpAcquireCmosSpinLock @ 0x140530540
 * Callers:
 *     HalSetBusDataByOffset @ 0x140439AB0 (HalSetBusDataByOffset.c)
 *     HalpWriteStdCmosData @ 0x1404511B0 (HalpWriteStdCmosData.c)
 *     HalpSetClockAfterSleep @ 0x140451214 (HalpSetClockAfterSleep.c)
 *     HalpSetClockBeforeSleep @ 0x140451288 (HalpSetClockBeforeSleep.c)
 *     HalpReadRtcStdPCAT @ 0x140451740 (HalpReadRtcStdPCAT.c)
 *     HalpWriteRtcStdPCAT @ 0x1404517C0 (HalpWriteRtcStdPCAT.c)
 *     HalpReadStdCmosData @ 0x140451A10 (HalpReadStdCmosData.c)
 *     HalpAcquireCmosSpinLockAndWait @ 0x140451A90 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalpGetSetCmosData @ 0x1404F4054 (HalpGetSetCmosData.c)
 *     HalpSetCmosData @ 0x1405014A4 (HalpSetCmosData.c)
 *     HalGetEnvironmentVariable @ 0x14057C330 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x14057C3D0 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x14057EDA0 (HalMakeBeep.c)
 *     HalpReboot @ 0x14057F954 (HalpReboot.c)
 *     x86BiosReadCmosPortByte @ 0x140580E18 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x140580F90 (x86BiosWriteCmosPortByte.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
      if ( (++v2 & dword_140FBB03C) != 0 || !qword_140FBB040 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v2, v5);
    }
  }
  BYTE4(HalpDeviceBlockUnblockPushLock.TracingPrivate[0]) = v6;
  return result;
}
