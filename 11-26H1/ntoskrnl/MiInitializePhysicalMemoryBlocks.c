/*
 * XREFs of MiInitializePhysicalMemoryBlocks @ 0x140CF9A64
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     MxInstallMoreMemory @ 0x1406EC098 (MxInstallMoreMemory.c)
 *     MiComputeNodeMemory @ 0x1406ECB90 (MiComputeNodeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiConvertInitialMemoryBlock @ 0x14086C154 (MiConvertInitialMemoryBlock.c)
 *     MiCreateNodeLists @ 0x14086C474 (MiCreateNodeLists.c)
 *     MiCreatePfnBitMaps @ 0x1408800DC (MiCreatePfnBitMaps.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     MiMarkLargePageRanges @ 0x140CF9F2C (MiMarkLargePageRanges.c)
 *     MmInitializeMemoryLimits @ 0x140D01728 (MmInitializeMemoryLimits.c)
 */

LARGE_INTEGER __fastcall MiInitializePhysicalMemoryBlocks(__int64 a1)
{
  bool *v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 v4; // r8
  bool v5; // al
  __int64 v6; // rax
  void *v7; // rbx
  void *v8; // rsi
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  LARGE_INTEGER result; // rax
  _BYTE v12[56]; // [rsp+20h] [rbp-48h] BYREF

  v2 = v12;
  v3 = 0LL;
  while ( (int)v3 < 49 )
  {
    v5 = 1;
    if ( (unsigned int)v3 <= 0x2C )
    {
      v4 = 0x15C5C0C00048LL;
      if ( _bittest64(&v4, v3) )
        v5 = 0;
    }
    v3 = (unsigned int)(v3 + 1);
    *v2++ = v5;
  }
  v6 = MmInitializeMemoryLimits(a1, v12);
  v7 = (void *)v6;
  if ( !v6 )
    MxInstallMoreMemory(17);
  v8 = (void *)MiConvertInitialMemoryBlock((__int64)&MiSystemPartition, v6);
  ExFreePoolWithTag(v7, 0);
  qword_140E37E60 = MiCreateNodeLists((__int64)&MiSystemPartition, (__int64)v8);
  if ( !qword_140E37E60 )
    MxInstallMoreMemory(19);
  if ( ((unsigned __int8)&stru_140E2DAB0.QuantumTarget & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *(_OWORD *)&stru_140E2DAB0.QuantumTarget = 0LL;
  MiComputeNodeMemory(&MiSystemPartition, 1);
  qword_140FFC998 = KeQueryPerformanceCounter(0LL).QuadPart;
  MmPhysicalMemoryBlock = v8;
  if ( !(unsigned int)MiCreatePfnBitMaps((__int64)&MiSystemPartition, (unsigned int *)v8, v9, v10) )
    MxInstallMoreMemory(22);
  qword_140FFC9A0 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiMarkLargePageRanges(a1);
  result = KeQueryPerformanceCounter(0LL);
  qword_140FFC9A8 = result.QuadPart;
  return result;
}
