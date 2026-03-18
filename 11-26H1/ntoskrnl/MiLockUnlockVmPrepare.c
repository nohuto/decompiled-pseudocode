/*
 * XREFs of MiLockUnlockVmPrepare @ 0x140960C00
 * Callers:
 *     NtLockVirtualMemory @ 0x140318600 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x140960970 (NtUnlockVirtualMemory.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     MiGetNextVad @ 0x140326018 (MiGetNextVad.c)
 *     MiLocateAddress @ 0x140326730 (MiLocateAddress.c)
 *     MiVadPagesTradable @ 0x14035C9E0 (MiVadPagesTradable.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiGetVmPartition @ 0x14044FD80 (MiGetVmPartition.c)
 *     MiLockVadRange @ 0x140960DAC (MiLockVadRange.c)
 */

__int64 __fastcall MiLockUnlockVmPrepare(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  bool v5; // zf
  ULONG *VmPartition; // rax
  _KPROCESS *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rcx
  __int64 Address; // rax
  unsigned __int64 i; // r9
  unsigned __int64 v15; // rcx
  __int64 v16; // r9

  v2 = *(_QWORD *)(a1 + 8) + 1024LL;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 104) = v2;
  v5 = *(_DWORD *)a1 == 0;
  *(_QWORD *)(a1 + 80) = ((v3 & 0xFFF) - v3 + v4 + 4096) >> 12;
  if ( v5 )
  {
    if ( (*(_DWORD *)(v2 + 184) & 0xF) == 1 )
      VmPartition = &MiSystemPartition;
    else
      VmPartition = (ULONG *)MiGetVmPartition(v2);
    if ( VmPartition[4539] )
      *(_DWORD *)(a1 + 4) |= 0x10u;
  }
  else
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(
               64LL,
               8 * ((((v3 & 0xFFF) - v3 + v4 + 4096) >> 18) + (((((v3 & 0xFFF) - v3 + v4 + 4096) >> 12) & 0x3F) != 0)),
               1802267981,
               CurrentProcessorColor | 0x80000000);
    if ( !PoolMm )
      return 3221225626LL;
    *(_QWORD *)(a1 + 136) = PoolMm;
    *(_QWORD *)(a1 + 128) = ((((v3 & 0xFFF) - v3 + v4 + 4096) >> 18)
                           + (((((v3 & 0xFFF) - v3 + v4 + 4096) >> 12) & 0x3F) != 0)) << 6;
  }
  v7 = *(_KPROCESS **)(a1 + 8);
  if ( KeGetCurrentThread()->ApcState.Process != v7 )
  {
    KiStackAttachProcess(v7, 0, a1 + 16);
    *(_DWORD *)(a1 + 4) |= 2u;
  }
  v8 = MiLockVadRange(*(_QWORD *)(a1 + 8), v3 & 0xFFFFFFFFFFFFF000uLL, v4 & 0xFFFFFFFFFFFFF000uLL, 0LL);
  *(_DWORD *)(a1 + 4) |= 8u;
  v9 = v8;
  if ( !v8 )
    return 3221225477LL;
  v5 = *(_DWORD *)a1 == 0;
  *(_QWORD *)(a1 + 96) = v8;
  if ( !v5 )
  {
    Address = (__int64)MiLocateAddress(v3);
    *(_QWORD *)(a1 + 88) = Address;
    for ( i = 0LL; i < v9; i = v16 + 1 )
    {
      if ( !MiVadPagesTradable(Address) )
        return 3221225549LL;
      Address = MiGetNextVad(v15);
    }
  }
  return 0LL;
}
