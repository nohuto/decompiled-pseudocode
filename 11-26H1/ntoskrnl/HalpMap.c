/*
 * XREFs of HalpMap @ 0x140345A2C
 * Callers:
 *     HalpMapPhysicalMemory64 @ 0x14034478C (HalpMapPhysicalMemory64.c)
 *     HalpAcpiGetRsdt @ 0x140344EE4 (HalpAcpiGetRsdt.c)
 *     HalpAcpiCheckAndMapTable @ 0x1403453F0 (HalpAcpiCheckAndMapTable.c)
 *     HalpPciMapMmConfigPhysicalAddress @ 0x14042D1B8 (HalpPciMapMmConfigPhysicalAddress.c)
 *     HalpAcpiAllocateMemory @ 0x140527BBC (HalpAcpiAllocateMemory.c)
 *     HalpAllocateEarlyPages @ 0x14057FFF0 (HalpAllocateEarlyPages.c)
 *     HalpMapEarlyPages @ 0x1405800E0 (HalpMapEarlyPages.c)
 *     HalpMapPhysicalMemoryWriteThrough64 @ 0x140580110 (HalpMapPhysicalMemoryWriteThrough64.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     HalpPowerWriteResetCommand @ 0x140581D44 (HalpPowerWriteResetCommand.c)
 *     HalpInterruptParseMadt @ 0x140592EB8 (HalpInterruptParseMadt.c)
 *     HalMapIoSpace @ 0x14059C940 (HalMapIoSpace.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x14059CD08 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140CB8CAC (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140CB8DA8 (HalpBlkAllocatePageTablePage.c)
 *     HalpBlkInitializePageTables @ 0x140CB8FAC (HalpBlkInitializePageTables.c)
 *     HalpSetupAcpiPhase0 @ 0x140CB9944 (HalpSetupAcpiPhase0.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140D0EC50 (HalpAllocPhysicalMemoryEx.c)
 *     HalpAcpiTableCacheInit @ 0x140D1082C (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpFlushTLB @ 0x140524CC4 (HalpFlushTLB.c)
 *     HalpIsHeap64KRegionExecutable @ 0x140580070 (HalpIsHeap64KRegionExecutable.c)
 *     HalpMmGetPteAddressSafe @ 0x14058037C (HalpMmGetPteAddressSafe.c)
 */

unsigned __int64 __fastcall HalpMap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v6; // r10
  unsigned int v7; // r14d
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned int v12; // esi
  unsigned __int64 v13; // rbp
  _BYTE *PteAddressSafe; // rax
  unsigned __int64 v15; // rbp
  unsigned int i; // r15d
  unsigned __int64 v17; // r13
  _BYTE *v18; // rax
  unsigned __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  bool v22; // zf
  char v23; // r10
  __int64 v24; // rcx

  v6 = 1LL;
  v7 = a2;
  if ( a3 > 1 )
    return 0LL;
  if ( a5 > 0x20 )
    return 0LL;
  v9 = 0x100000014LL;
  if ( !_bittest64(&v9, a5) )
    return 0LL;
  v10 = a6;
  if ( a6 )
  {
    if ( a6 >= HalpHeapEnd )
      return 0LL;
  }
  else
  {
    v10 = HalpHeapStart;
  }
LABEL_8:
  v12 = 0;
LABEL_9:
  while ( v12 < v7 )
  {
    v12 = 0;
    v13 = v10;
    while ( v12 < v7 )
    {
      if ( v13 == HalpHeapEnd )
        return 0LL;
      PteAddressSafe = (_BYTE *)HalpMmGetPteAddressSafe(v13);
      if ( !PteAddressSafe )
        return 0LL;
      v6 = 1LL;
      if ( (*PteAddressSafe & 1) != 0 )
      {
        v10 = v13 + 4096;
        goto LABEL_9;
      }
      v13 += 4096LL;
      ++v12;
    }
    if ( a5 == 32
      && ((unsigned __int8)HalpIsHeap64KRegionExecutable(v10)
       || (unsigned __int8)HalpIsHeap64KRegionExecutable(v10 + (v7 << 12) - 4096)) )
    {
      v10 += 4096LL;
      goto LABEL_8;
    }
    v15 = 0LL;
    for ( i = 0; i < v7; ++i )
    {
      v17 = v10 + (i << 12);
      v18 = (_BYTE *)HalpMmGetPteAddressSafe(v17);
      if ( !v18 )
        return 0LL;
      v6 = 1LL;
      if ( (*v18 & 1) == 0 )
        v17 = v15;
      v15 = v17;
    }
    if ( v15 )
    {
      v10 = v15 + 4096;
      goto LABEL_8;
    }
  }
  v19 = v10 | a1 & 0xFFF;
  if ( v10 == HalpHeapStart )
    HalpHeapStart = v10 + (v7 << 12);
  if ( v12 )
  {
    v20 = 3LL;
    if ( a5 != 4 )
      v20 = v6;
    v21 = v20 | 0x8000000000000000uLL;
    if ( a5 == 32 )
      v21 = v20;
    a2 = v21 | 0x18;
    v22 = a3 == (_DWORD)v6;
    v23 = a4;
    if ( v22 )
      a2 = v21;
    do
    {
      v24 = a1;
      a1 += 4096LL;
      v9 = a2 | v24 & 0xFFFFFFFFFF000LL;
      *(_QWORD *)(8 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = v9;
      if ( a4 )
        __invlpg((void *)v10);
      v10 += 4096LL;
      --v12;
    }
    while ( v12 );
  }
  else
  {
    v23 = a4;
  }
  if ( !v23 )
    HalpFlushTLB(v9, a2);
  return v19;
}
