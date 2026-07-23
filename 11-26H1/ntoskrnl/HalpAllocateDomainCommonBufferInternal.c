/*
 * XREFs of HalpAllocateDomainCommonBufferInternal @ 0x14058C6F0
 * Callers:
 *     HalAllocateCommonBufferExV3 @ 0x14058AD70 (HalAllocateCommonBufferExV3.c)
 *     HalAllocateCommonBufferWithBounds @ 0x14058AF10 (HalAllocateCommonBufferWithBounds.c)
 *     HalAllocateDomainCommonBuffer @ 0x14058C100 (HalAllocateDomainCommonBuffer.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     HalpDmaDereferenceDomainObject @ 0x140346528 (HalpDmaDereferenceDomainObject.c)
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x14034A280 (MmAllocatePagesForMdlEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14034A2E0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     HalpAllocateCommonBufferEntry @ 0x14034AF30 (HalpAllocateCommonBufferEntry.c)
 *     MmAllocateContiguousMemoryEx @ 0x14034B050 (MmAllocateContiguousMemoryEx.c)
 *     HalpDmaReferenceDomainObject @ 0x14034B1CC (HalpDmaReferenceDomainObject.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     CvmDebugLog @ 0x140534A08 (CvmDebugLog.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x140785AAC (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpAllocateDomainCommonBufferInternal(
        __int64 a1,
        PHYSICAL_ADDRESS *a2,
        unsigned __int64 *a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        int a7,
        _QWORD *a8,
        _RTL_BALANCED_NODE **a9)
{
  _RTL_BALANCED_NODE *v9; // r12
  struct _MDL *v12; // r15
  int CommonBufferEntry; // r14d
  __int64 v14; // rax
  PHYSICAL_ADDRESS v15; // rsi
  unsigned __int64 v16; // rdi
  MEMORY_CACHING_TYPE CacheType; // r8d
  __int64 v18; // r9
  unsigned int v19; // r11d
  unsigned int v20; // ecx
  int v21; // ecx
  int v22; // r10d
  int v23; // ecx
  ULONG Flags; // ecx
  __int64 v25; // r14
  int ContiguousVirtualBufferShared; // eax
  void *v27; // rax
  PHYSICAL_ADDRESS v28; // rdx
  struct _MDL *PagesForMdl; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  char v32; // [rsp+58h] [rbp-61h]
  char v33; // [rsp+59h] [rbp-60h]
  char v34; // [rsp+5Ah] [rbp-5Fh]
  ULONG v35; // [rsp+5Ch] [rbp-5Dh]
  MEMORY_CACHING_TYPE v36; // [rsp+60h] [rbp-59h]
  int v37[2]; // [rsp+68h] [rbp-51h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-49h] BYREF
  __int64 QuadPart; // [rsp+78h] [rbp-41h]
  SIZE_T TotalBytes; // [rsp+80h] [rbp-39h]
  __int64 v41; // [rsp+88h] [rbp-31h] BYREF
  PVOID v42; // [rsp+90h] [rbp-29h]
  __int64 v43; // [rsp+98h] [rbp-21h]
  __int128 v44; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-9h]
  unsigned __int64 v46; // [rsp+B8h] [rbp-1h]
  PHYSICAL_ADDRESS v47; // [rsp+C0h] [rbp+7h]
  char v49; // [rsp+110h] [rbp+57h]

  v46 = 0LL;
  LODWORD(v45) = 0;
  v42 = 0LL;
  v9 = 0LL;
  v34 = 0;
  v33 = 0;
  QuadPart = 0LL;
  v12 = 0LL;
  v49 = 0;
  v32 = 0;
  v47.QuadPart = 0LL;
  TotalBytes = (a4 + 4095) & 0xFFFFF000;
  v41 = 0LL;
  v44 = 0LL;
  BaseAddress = 0LL;
  v35 = 21;
  CommonBufferEntry = HalpDmaReferenceDomainObject(a1);
  if ( CommonBufferEntry < 0 )
    return (unsigned int)CommonBufferEntry;
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 )
    *(_BYTE *)(v14 + 524) = 1;
  v15.QuadPart = 0LL;
  if ( a2 )
    v15 = *a2;
  v16 = *(_QWORD *)(a1 + 16);
  if ( a3 && v16 > *a3 )
    v16 = *a3;
  CacheType = *(_BYTE *)(a1 + 32) != 0;
  v36 = CacheType;
  if ( a6 )
  {
    CacheType = *a6;
    v36 = *a6;
    if ( *a6 )
    {
      if ( CacheType != MmCached )
      {
        CommonBufferEntry = -1073741811;
        goto LABEL_58;
      }
    }
  }
  v18 = *(_QWORD *)(a1 + 24);
  v19 = TotalBytes;
  if ( (a5 & 1) != 0 )
  {
    v20 = 1;
    v19 = (TotalBytes + 0x1FFFFF) & 0xFFE00000;
    TotalBytes = v19;
    do
    {
      if ( 1LL << v20 >= (unsigned __int64)v19 )
        break;
      ++v20;
    }
    while ( v20 < 0x3F );
    v35 = 101;
    v18 = 1LL << v20;
  }
  v21 = *(_DWORD *)(a1 + 48);
  if ( v21 == 2 )
  {
    v22 = 1;
  }
  else
  {
    v22 = 0;
    if ( v21 )
    {
      v23 = v21 - 1;
      if ( v23 )
      {
        if ( v23 != 1 )
        {
          Flags = v35;
          goto LABEL_36;
        }
      }
      else
      {
        v32 = 1;
      }
    }
  }
  v25 = v19;
  v43 = v19;
  *(_QWORD *)v37 = v19;
  if ( (int)MmAllocateContiguousMemoryEx(
              v37,
              v15.QuadPart,
              v16,
              v18,
              a7,
              CacheType != MmNonCached ? 4 : 516,
              0LL,
              1147953480,
              v22,
              (__int64 *)&BaseAddress) >= 0 )
  {
    if ( HalpDmaCvmConfiguration && *(_QWORD *)v37 == v25 )
    {
      v42 = BaseAddress;
      ContiguousVirtualBufferShared = HalpDmaCvmMakeContiguousVirtualBufferShared(
                                        BaseAddress,
                                        (unsigned int)v25,
                                        &BaseAddress,
                                        &v41);
      v9 = (_RTL_BALANCED_NODE *)BaseAddress;
      CommonBufferEntry = ContiguousVirtualBufferShared;
      CvmDebugLog("Marking common buffer as shared: VirtualAddr=%p Length=0x%08X NewVirtualAddress=%p PhysicalAddress=%p\n");
      if ( CommonBufferEntry < 0 )
      {
        MmFreeContiguousMemory(v27);
        goto LABEL_58;
      }
      v25 = v43;
    }
    else
    {
      v9 = (_RTL_BALANCED_NODE *)BaseAddress;
    }
    if ( *(_QWORD *)v37 == v25 )
      goto LABEL_41;
    MmFreeContiguousMemory(v9);
  }
  v9 = 0LL;
  if ( *(_DWORD *)(a1 + 48) != 2 )
  {
LABEL_57:
    CommonBufferEntry = -1073741670;
    goto LABEL_58;
  }
  CacheType = v36;
  Flags = v35 & 0xFFFFFFEF;
LABEL_36:
  v28 = *(PHYSICAL_ADDRESS *)(a1 + 16);
  v49 = 1;
  v25 = (unsigned int)TotalBytes;
  v43 = (unsigned int)TotalBytes;
  if ( a7 == 0x80000000 )
    PagesForMdl = MmAllocatePagesForMdlEx(v15, v28, 0LL, (unsigned int)TotalBytes, CacheType, Flags);
  else
    PagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                   v15.LowPart,
                                   v28.LowPart,
                                   0LL,
                                   (unsigned int)TotalBytes,
                                   CacheType,
                                   a7,
                                   Flags,
                                   0LL);
  v12 = PagesForMdl;
  if ( !PagesForMdl )
    goto LABEL_57;
  v9 = (_RTL_BALANCED_NODE *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, v36, 0LL, 0, 0x40000010u);
LABEL_41:
  if ( !v9 )
    goto LABEL_57;
  PhysicalAddress = MmGetPhysicalAddress(v9);
  QuadPart = PhysicalAddress.QuadPart;
  if ( v12 )
  {
    *((_QWORD *)&v44 + 1) = v12;
  }
  else
  {
    LODWORD(v44) = 1;
    *((PHYSICAL_ADDRESS *)&v44 + 1) = PhysicalAddress;
    v45 = v25;
  }
  if ( v49 )
  {
    v47 = v15;
    v46 = v16;
    CommonBufferEntry = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 40), 3LL);
    if ( CommonBufferEntry >= 0 )
    {
      v34 = 1;
LABEL_51:
      CommonBufferEntry = HalpAllocateCommonBufferEntry((__int64)v12, v9, QuadPart, a1, 1, (__int64)v42);
      if ( CommonBufferEntry >= 0 )
      {
        *a8 = QuadPart;
        *a9 = v9;
        return (unsigned int)CommonBufferEntry;
      }
      if ( v33 )
      {
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 40), &v44);
      }
      else if ( v34 )
      {
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 40), QuadPart);
      }
    }
  }
  else
  {
    if ( !v32 )
      goto LABEL_51;
    CommonBufferEntry = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 40), 3LL);
    if ( CommonBufferEntry >= 0 )
    {
      v33 = 1;
      goto LABEL_51;
    }
  }
LABEL_58:
  HalpDmaDereferenceDomainObject((__int64 *)a1);
  if ( v9 )
  {
    if ( v12 )
    {
      MmUnmapLockedPages(v9, v12);
LABEL_63:
      MiFreePagesFromMdl((ULONG_PTR)v12, 0, 0, 0);
      ExFreePoolWithTag(v12, 0);
      return (unsigned int)CommonBufferEntry;
    }
    MmFreeContiguousMemory(v9);
  }
  else if ( v12 )
  {
    goto LABEL_63;
  }
  return (unsigned int)CommonBufferEntry;
}
