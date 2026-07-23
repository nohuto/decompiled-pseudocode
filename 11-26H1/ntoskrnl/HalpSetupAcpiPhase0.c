/*
 * XREFs of HalpSetupAcpiPhase0 @ 0x140CB9944
 * Callers:
 *     HalpAcpiInitDiscard @ 0x140CB5358 (HalpAcpiInitDiscard.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140344B6C (HalpAcpiGetTable.c)
 *     HalpMap @ 0x140345A2C (HalpMap.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HalReadBootRegister @ 0x140BF5168 (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x140BF51AC (HalWriteBootRegister.c)
 *     HalpNumaInitializeHmaConfiguration @ 0x140CB79B4 (HalpNumaInitializeHmaConfiguration.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140CB7A3C (HalpNumaInitializeStaticConfiguration.c)
 *     HalpAcpiInitializePmRegisters @ 0x140CB94AC (HalpAcpiInitializePmRegisters.c)
 *     HalpSetPlatformFlags @ 0x140CB98BC (HalpSetPlatformFlags.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140CBB1BC (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140D0EC50 (HalpAllocPhysicalMemoryEx.c)
 *     HalpAcpiTableCacheInit @ 0x140D1082C (HalpAcpiTableCacheInit.c)
 */

__int64 __fastcall HalpSetupAcpiPhase0(__int64 a1)
{
  __int64 result; // rax
  _DWORD *Table; // rax
  unsigned int v4; // ecx
  size_t v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  if ( !BYTE2(HalpDeviceBlockUnblockPushLock.PropagateBoostsEntry.Next) )
  {
    result = HalpAcpiTableCacheInit();
    if ( (int)result < 0 )
      return result;
    Table = (_DWORD *)HalpAcpiGetTable(a1, 1346584902, 0, 0);
    if ( !Table )
      return 3221226021LL;
    v4 = Table[1];
    v5 = 276LL;
    if ( v4 < 0x114 )
      v5 = v4;
    memmove(&HalpDeviceBlockUnblockPushLock.512, Table, v5);
    HalpSetPlatformFlags(v6, a1);
    HalpAcpiInitializePmRegisters(v7);
    if ( (*(_DWORD *)&HalpDeviceBlockUnblockPushLock.SavedApcStateFill[24] & 0x40000) != 0 )
      HalpInterruptClusterModeForced = 1;
    if ( (*(_DWORD *)&HalpDeviceBlockUnblockPushLock.SavedApcStateFill[24] & 0x80000) != 0 )
      HalpInterruptPhysicalModeOnly = 1;
    HalpAcpiDetectMachineSpecificActions(a1);
    HalpNumaInitializeStaticConfiguration(a1);
    HalpNumaInitializeHmaConfiguration(a1);
    PdttTable = 0LL;
    v8 = HalpAcpiGetTable(a1, 1414808656, 0, 0);
    v9 = v8;
    if ( v8 )
    {
      v10 = *(unsigned __int8 *)(v8 + 36);
      if ( *(unsigned int *)(v9 + 4) >= (unsigned __int64)*(unsigned int *)(v9 + 40) + 2 * v10 )
      {
        qword_140E10D38 = HalpMmAllocateMemoryInternal(136 * (int)v10, 1u);
        if ( qword_140E10D38 )
          PdttTable = v9;
      }
    }
    v11 = HalpAcpiGetTable(a1, 1413824855, 0, 0);
    if ( v11 )
      HIDWORD(HalpDeviceBlockUnblockPushLock.WriteTransferCount) = *(_DWORD *)(v11 + 36);
    if ( !*(_QWORD *)&HalpDeviceBlockUnblockPushLock.AbWaitEntryCount && !HalpPrebootMode )
    {
      v14 = 0x100000LL;
      v12 = HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v14, 1, 0, 0LL);
      *(_QWORD *)&HalpDeviceBlockUnblockPushLock.AbWaitEntryCount = v12;
      if ( v12 )
        HalpDeviceBlockUnblockPushLock.SchedulerSharedSystemSlot = (void *)HalpMap(v12, 1LL, 1u, 0, 4u, 0LL);
    }
    BYTE2(HalpDeviceBlockUnblockPushLock.PropagateBoostsEntry.Next) = 1;
    qword_140E006E8 = (__int64)HalpAcpiGetPrmCache;
    LOBYTE(v14) = 0;
    qword_140E006F0 = (__int64)HalpAcpiInvokePrmFwHandler;
    qword_140E006D8 = (__int64)HalAcpiGetTableDispatch;
    qword_140E006E0 = (__int64)xHalTimerWatchdogStop;
    v13 = HalpAcpiGetTable(a1, 1414483778, 0, 0);
    HalpSimpleBootFlagTable = v13;
    if ( v13 && *(_DWORD *)(v13 + 4) >= 0x28u && *(_BYTE *)(v13 + 36) > 9u )
    {
      if ( !(unsigned int)HalReadBootRegister(&v14) && (v14 & 1) == 0 )
        HalWriteBootRegister(v14 | 1);
    }
    else
    {
      HalpSimpleBootFlagTable = 0LL;
    }
    off_140E006C8[0] = HalpEndOfBoot;
  }
  return 0LL;
}
