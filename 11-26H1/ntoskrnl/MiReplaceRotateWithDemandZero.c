/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x140AEFA48
 * Callers:
 *     MmRotatePhysicalView @ 0x140AEF280 (MmRotatePhysicalView.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14024DE40 (MmBuildMdlForNonPagedPool.c)
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiDereferenceIoPages @ 0x1403152FC (MiDereferenceIoPages.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiMarkMdlComplete @ 0x1403C5184 (MiMarkMdlComplete.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MiIsPfn @ 0x14041A8F0 (MiIsPfn.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MmSizeOfMdl @ 0x140481EB0 (MmSizeOfMdl.c)
 *     MiGetVadCacheAttribute @ 0x1404DBCAC (MiGetVadCacheAttribute.c)
 *     MiSlowRotateCopy @ 0x1406FC1B4 (MiSlowRotateCopy.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiLogVirtualRotateEvent @ 0x140870FEC (MiLogVirtualRotateEvent.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReplaceRotateWithDemandZero(__int64 a1, __int64 a2, SIZE_T a3, __int64 a4, __int64 a5, SIZE_T *a6)
{
  struct _MDL *p_MemoryDescriptorList; // r14
  struct _MDL *p_P; // r15
  CSHORT v11; // di
  unsigned int VadFlags; // eax
  unsigned int VadCacheAttribute; // eax
  unsigned int v14; // eax
  __int64 ByteCount; // rcx
  unsigned int v16; // esi
  __int64 *v17; // rdi
  unsigned __int64 i; // rbx
  int v20; // ebx
  SIZE_T v21; // rax
  int v22; // ebx
  SIZE_T v23; // rax
  struct _MDL MemoryDescriptorList; // [rsp+40h] [rbp-1D8h] BYREF
  struct _MDL P; // [rsp+100h] [rbp-118h] BYREF

  memset_0(&MemoryDescriptorList, 0, 0xB8uLL);
  memset_0(&P, 0, 0xB8uLL);
  if ( a3 <= 0x10000 )
    goto LABEL_2;
  if ( a3 > 0xFFFFFFFF
    || (v20 = MmGetCurrentProcessorColor() | 0x80000000,
        v21 = MmSizeOfMdl((PVOID)a2, a3),
        (p_MemoryDescriptorList = (struct _MDL *)ExAllocatePoolMm(64LL, v21, 1868983881, v20)) == 0LL) )
  {
    a3 = 0x10000LL;
LABEL_2:
    p_MemoryDescriptorList = &MemoryDescriptorList;
LABEL_3:
    p_P = &P;
    goto LABEL_4;
  }
  v22 = MmGetCurrentProcessorColor() | 0x80000000;
  v23 = MmSizeOfMdl((PVOID)a2, a3);
  p_P = (struct _MDL *)ExAllocatePoolMm(64LL, v23, 1868983881, v22);
  if ( !p_P )
  {
    a3 = 0x10000LL;
    goto LABEL_3;
  }
LABEL_4:
  p_MemoryDescriptorList->Next = 0LL;
  p_MemoryDescriptorList->ByteCount = a3;
  p_MemoryDescriptorList->MdlFlags = 0;
  p_MemoryDescriptorList->ByteOffset = a2 & 0xFFF;
  v11 = 8 * (((a3 + (a2 & 0xFFF) + 4095) >> 12) + 6);
  p_MemoryDescriptorList->Size = v11;
  p_MemoryDescriptorList->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  MmBuildMdlForNonPagedPool(p_MemoryDescriptorList);
  p_MemoryDescriptorList->MdlFlags |= 0x2000u;
  p_P->Next = 0LL;
  p_P->Size = v11;
  p_P->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  p_P->ByteOffset = a2 & 0xFFF;
  p_P->ByteCount = a3;
  p_P->MdlFlags = 0x2000;
  VadFlags = MiReadVadFlags(a1);
  VadCacheAttribute = MiGetVadCacheAttribute(VadFlags);
  v14 = MiSwitchToTransition((ULONG_PTR)p_P, a1, VadCacheAttribute);
  ByteCount = p_P->ByteCount;
  v16 = v14;
  if ( ByteCount != a3 )
  {
    a3 = p_P->ByteCount;
    p_MemoryDescriptorList->ByteCount = ByteCount;
  }
  if ( p_P->ByteCount )
  {
    if ( (int)guard_dispatch_icall_no_overrides((__int64)p_P, (__int64)p_MemoryDescriptorList) < 0 )
      MiSlowRotateCopy((__int64)p_P, (__int64)p_MemoryDescriptorList, a1);
    MiMarkMdlComplete((__int64)p_P, a1);
    v17 = (__int64 *)&p_MemoryDescriptorList[1];
    for ( i = (unsigned __int64)p_MemoryDescriptorList->ByteCount >> 12; i; --i )
    {
      if ( !MiIsPfn(*v17) )
        MiDereferenceIoPages(1LL, *v17, 1uLL);
      ++v17;
    }
  }
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 && a3 )
    MiLogVirtualRotateEvent(a2, a3, 2);
  if ( p_MemoryDescriptorList != &MemoryDescriptorList )
    ExFreePoolWithTag(p_MemoryDescriptorList, 0);
  if ( p_P->ByteCount )
    MmUnlockPages(p_P);
  if ( p_P != &P )
    ExFreePoolWithTag(p_P, 0);
  *a6 = a3;
  return v16;
}
