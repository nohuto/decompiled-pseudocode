/*
 * XREFs of HvlInitializeProcessor @ 0x1407943F4
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     HvlpGetLpcbByLpIndex @ 0x1402F3138 (HvlpGetLpcbByLpIndex.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x1402F31A0 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlpFreeOverlayPages @ 0x140346300 (HvlpFreeOverlayPages.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     KeGetProcessorNodeNumber @ 0x140464DA0 (KeGetProcessorNodeNumber.c)
 *     HvlGetRootVpSharedPages @ 0x1405BBB38 (HvlGetRootVpSharedPages.c)
 *     HvlpSetupCachedHypercallPages @ 0x1405BDA28 (HvlpSetupCachedHypercallPages.c)
 *     HvlpAllocateOverlayPages @ 0x1405C22B8 (HvlpAllocateOverlayPages.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvlpEnableRootVirtualProcessor @ 0x140794748 (HvlpEnableRootVirtualProcessor.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall HvlInitializeProcessor(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbp
  __int64 result; // rax
  void *v8; // r14
  __int64 *v9; // rdi
  SIZE_T v10; // rdx
  MEMORY_CACHING_TYPE v11; // r8d
  __int64 *v12; // r15
  void *OverlayPages; // rax
  char v14; // di
  unsigned int LpIndexFromProcessorIndex; // eax
  _LIST_ENTRY *LpcbByLpIndex; // r13
  void *v17; // rax
  unsigned __int16 ProcessorNodeNumber; // ax
  __int64 IndependentPages; // rax
  PHYSICAL_ADDRESS *v20; // rbx
  void *v21; // rcx
  __int64 v22; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v22 = 0LL;
  if ( !HvlHypervisorConnected )
    return 0LL;
  v6 = 2LL;
  if ( (HvlpFlags & 2) != 0 )
  {
    result = HvlpEnableRootVirtualProcessor(a1, a3);
    if ( (int)result < 0 )
      return result;
  }
  v8 = 0LL;
  if ( (HvlpFlags & 2) != 0 && ((HvlpFlags & 0x20) != 0 || (HvlpFlags & 0x80000) != 0) )
  {
    v9 = (__int64 *)(a1 + 35872);
    if ( (int)HvlGetRootVpSharedPages(a2, (_QWORD *)(a1 + 35872), &v22) < 0 )
      goto LABEL_23;
    v3 = v22;
  }
  else
  {
    v9 = (__int64 *)(a1 + 35872);
    *(_QWORD *)(a1 + 35872) = 0LL;
  }
  v12 = v9;
  if ( (HvlpFlags & 0x80000) != 0 )
  {
    if ( (HvlpFlags & 2) != 0 )
    {
      *(_QWORD *)(a1 + 35912) = MmMapIoSpaceEx(*v9, 4096LL, 4u);
    }
    else
    {
      OverlayPages = (void *)HvlpAllocateOverlayPages();
      *(_QWORD *)(a1 + 35912) = OverlayPages;
      if ( !OverlayPages )
        goto LABEL_23;
      *(PHYSICAL_ADDRESS *)v9 = MmGetPhysicalAddress(OverlayPages);
    }
  }
  v14 = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(*(_DWORD *)(a1 + 36));
    LpcbByLpIndex = HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex);
    if ( (v14 & 0x20) != 0 )
      LpcbByLpIndex[2].Flink = (struct _LIST_ENTRY *)MmMapIoSpaceEx(v3, 4096LL, 4u);
  }
  if ( (HvlpFlags & 2) == 0 && (HvlpFlags & 0x8000) != 0 )
  {
    v17 = (void *)HvlpAllocateOverlayPages();
    v8 = v17;
    v9 = v12;
    if ( !v17 )
      goto LABEL_23;
    memset_0(v17, 0, 0x80uLL);
    *(_QWORD *)(a1 + 36600) = v8;
  }
  ProcessorNodeNumber = KeGetProcessorNodeNumber(a1);
  IndependentPages = MmAllocateIndependentPagesEx(24576LL, ProcessorNodeNumber, 0LL, 0LL);
  v20 = (PHYSICAL_ADDRESS *)IndependentPages;
  v9 = v12;
  if ( IndependentPages )
  {
    *(_QWORD *)(a1 + 35904) = IndependentPages;
    do
    {
      v20[2] = MmGetPhysicalAddress(v20);
      v20 += 512;
      --v6;
    }
    while ( v6 );
    HvlpSetupCachedHypercallPages((_SLIST_HEADER *)a1);
    return 0LL;
  }
LABEL_23:
  if ( (HvlpFlags & 2) == 0 )
  {
    v21 = *(void **)(a1 + 35912);
    if ( v21 )
    {
      HvlpFreeOverlayPages(v21, v10, v11);
      *(_QWORD *)(a1 + 35912) = 0LL;
      *v9 = 0LL;
    }
  }
  if ( v8 )
  {
    HvlpFreeOverlayPages(v8, v10, v11);
    *(_QWORD *)(a1 + 36600) = 0LL;
  }
  return 3221225626LL;
}
