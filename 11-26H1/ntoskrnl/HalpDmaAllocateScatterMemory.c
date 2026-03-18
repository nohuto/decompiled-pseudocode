/*
 * XREFs of HalpDmaAllocateScatterMemory @ 0x140B30EDC
 * Callers:
 *     HalpDmaAllocateLocalScatterPool @ 0x140782CB0 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140B30E5C (HalpDmaGrowScatterMapBuffers.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x1403454A0 (MmFreePagesFromMdl.c)
 *     MmAllocatePagesForMdl @ 0x140348900 (MmAllocatePagesForMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     HalpDmaCvmMakeMdlDeviceShared @ 0x140783128 (HalpDmaCvmMakeMdlDeviceShared.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

PMDL __fastcall HalpDmaAllocateScatterMemory(PHYSICAL_ADDRESS *a1, unsigned int a2, _QWORD *a3)
{
  PHYSICAL_ADDRESS v3; // rdi
  SIZE_T v5; // r14
  PHYSICAL_ADDRESS v6; // rbx
  char i; // bp
  PMDL PagesForMdl; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  PMDL v11; // rsi
  PVOID MappedSystemVa; // rax

  v3 = a1[18];
  v5 = (unsigned __int64)a2 << 12;
  if ( v3.LowPart == -1 )
    v6.QuadPart = 0x1000000LL;
  else
    v6.QuadPart = 0LL;
  for ( i = 0; ; i = 1 )
  {
    PagesForMdl = MmAllocatePagesForMdl(v6, v3, 0LL, v5);
    v11 = PagesForMdl;
    if ( PagesForMdl )
      break;
    if ( i || !v6.QuadPart )
      return 0LL;
    v6.QuadPart = 0LL;
  }
  if ( HalpDmaCvmConfiguration && (int)HalpDmaCvmMakeMdlDeviceShared((__int64)PagesForMdl, v9, v10) < 0 )
  {
    MmFreePagesFromMdl(v11);
    ExFreePoolWithTag(v11, 0);
    return 0LL;
  }
  if ( (v11->MdlFlags & 5) != 0 )
    MappedSystemVa = v11->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000020u);
  *a3 = MappedSystemVa;
  return v11;
}
