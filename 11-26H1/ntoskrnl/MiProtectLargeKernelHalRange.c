/*
 * XREFs of MiProtectLargeKernelHalRange @ 0x14086A8A0
 * Callers:
 *     MiProtectKernelCfgData @ 0x140CF88F0 (MiProtectKernelCfgData.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiGetLargePteAddress @ 0x14042D440 (MiGetLargePteAddress.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiRestrictSystemCodeProtection @ 0x14052C130 (MiRestrictSystemCodeProtection.c)
 *     MiComputeDriverProtection @ 0x140B47B54 (MiComputeDriverProtection.c)
 */

__int64 __fastcall MiProtectLargeKernelHalRange(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 *ProcessorFlushList; // rbx
  unsigned int v6; // r15d
  unsigned __int64 v7; // r10
  unsigned __int64 LargePteAddress; // rdi
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r12
  unsigned __int64 PteAddress; // rsi
  char *AnyMultiplexedVm; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  char v15; // r13
  int v16; // r14d
  unsigned __int64 v17; // r11
  int v18; // eax
  unsigned __int64 ValidPte; // rax
  __int64 v20; // rdx

  ProcessorFlushList = 0LL;
  v6 = MiComputeDriverProtection(a3);
  LargePteAddress = MiGetLargePteAddress(v7, 1u);
  v10 = MiGetLargePteAddress(v9, 1u);
  PteAddress = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v15 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v13, v14);
  if ( LargePteAddress < v10 )
  {
    v16 = a4 & 1;
    do
    {
      if ( !PteAddress || (LargePteAddress & 0xFFF) == 0 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        if ( PteAddress )
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, PteAddress);
        PteAddress = MiGetPteAddress(LargePteAddress);
        MiLockPageTableInternal((signed __int64)AnyMultiplexedVm, PteAddress, 0);
      }
      v17 = *(_QWORD *)LargePteAddress;
      if ( v16 )
        v18 = MiRestrictSystemCodeProtection(*(_QWORD *)LargePteAddress, v6);
      else
        v18 = v6;
      ValidPte = MiMakeValidPte(LargePteAddress, (v17 >> 12) & 0xFFFFFFFFFFLL, v18 | 0xA4000000);
      MiRewritePteWithLockBit((signed __int64)AnyMultiplexedVm, 0, LargePteAddress, ValidPte);
      if ( !ProcessorFlushList )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        MiInitializeTbFlushList(
          (__int64)ProcessorFlushList,
          (__int64)AnyMultiplexedVm,
          *((_DWORD *)ProcessorFlushList + 3),
          0,
          32);
      }
      MiInsertLargeTbFlushEntry((__int64)ProcessorFlushList, 1, LargePteAddress);
      LargePteAddress += 8LL;
    }
    while ( LargePteAddress < v10 );
    if ( ProcessorFlushList )
    {
      MiFlushTbList((__int64)ProcessorFlushList);
      MiReleaseProcessorFlushList();
    }
  }
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, PteAddress);
  LOBYTE(v20) = v15;
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v20);
  return 0LL;
}
