/*
 * XREFs of HalpAllocateCommonBufferDmaThin @ 0x14034ACB4
 * Callers:
 *     HalAllocateCommonBufferDmaThinEx @ 0x14034A1A0 (HalAllocateCommonBufferDmaThinEx.c)
 *     HalAllocateCommonBufferWithBoundsDmaThin @ 0x1404F4570 (HalAllocateCommonBufferWithBoundsDmaThin.c)
 *     HalAllocateDomainCommonBufferDmaThin @ 0x14058D6E0 (HalAllocateDomainCommonBufferDmaThin.c)
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
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpAllocateCommonBufferDmaThin(
        PHYSICAL_ADDRESS *a1,
        PHYSICAL_ADDRESS *a2,
        PHYSICAL_ADDRESS *a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        int a7,
        PHYSICAL_ADDRESS *a8,
        _QWORD *a9)
{
  PVOID v9; // r14
  unsigned __int64 v10; // r12
  struct _MDL *v12; // r15
  int CommonBufferEntry; // esi
  PHYSICAL_ADDRESS v14; // rax
  PHYSICAL_ADDRESS v15; // rdi
  PHYSICAL_ADDRESS v16; // r8
  MEMORY_CACHING_TYPE CacheType; // esi
  __int64 QuadPart; // r9
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  unsigned int v21; // ecx
  PHYSICAL_ADDRESS v22; // rdx
  struct _MDL *PartitionNodePagesForMdl; // rax
  PHYSICAL_ADDRESS v24; // rcx
  ULONG Flags; // [rsp+50h] [rbp-39h]
  PVOID BaseAddress; // [rsp+60h] [rbp-29h] BYREF
  int v27[2]; // [rsp+68h] [rbp-21h] BYREF
  __int128 v28; // [rsp+70h] [rbp-19h] BYREF
  int v29; // [rsp+80h] [rbp-9h]
  char v32; // [rsp+E8h] [rbp+5Fh]

  Flags = 5;
  v29 = 0;
  v9 = 0LL;
  v32 = 0;
  v28 = 0LL;
  BaseAddress = 0LL;
  v10 = (a4 + 4095) & 0xFFFFF000;
  v12 = 0LL;
  CommonBufferEntry = HalpDmaReferenceDomainObject();
  if ( CommonBufferEntry >= 0 )
  {
    v14 = a1[7];
    if ( v14.QuadPart )
      *(_BYTE *)(v14.QuadPart + 524) = 1;
    v15.QuadPart = 0LL;
    if ( a2 && a2->QuadPart )
      v15 = *a2;
    v16 = a1[2];
    if ( a3 && v16.QuadPart > (unsigned __int64)a3->QuadPart )
      v16 = *a3;
    if ( v15.QuadPart > (unsigned __int64)v16.QuadPart
      || (CacheType = MmCached, a6) && (CacheType = *a6) != MmNonCached && CacheType != MmCached )
    {
      CommonBufferEntry = -1073741811;
      goto LABEL_33;
    }
    QuadPart = a1[3].QuadPart;
    if ( (a5 & 1) != 0 )
    {
      v21 = 1;
      v10 = ((_DWORD)v10 + 0x1FFFFF) & 0xFFE00000;
      do
      {
        if ( 1LL << v21 >= (unsigned __int64)(unsigned int)v10 )
          break;
        ++v21;
      }
      while ( v21 < 0x3F );
      Flags = 101;
      QuadPart = 1LL << v21;
    }
    *(_QWORD *)v27 = v10;
    if ( (int)MmAllocateContiguousMemoryEx(
                (int)v27,
                v15.LowPart,
                v16.LowPart,
                QuadPart,
                a7,
                CacheType != MmNonCached ? 4 : 516,
                0LL,
                1147953480,
                a1[6].LowPart == 2,
                (__int64)&BaseAddress) < 0 )
      goto LABEL_50;
    if ( *(_QWORD *)v27 == v10 )
      v9 = BaseAddress;
    else
      MmFreeContiguousMemory(BaseAddress);
    if ( !v9 )
    {
LABEL_50:
      if ( a1[6].LowPart != 2
        || ((v22 = a1[2], a7 != 0x80000000)
          ? (PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                                         v15.LowPart,
                                                         v22.LowPart,
                                                         0LL,
                                                         v10,
                                                         CacheType,
                                                         a7,
                                                         Flags,
                                                         0LL))
          : (PartitionNodePagesForMdl = MmAllocatePagesForMdlEx(v15, v22, 0LL, v10, CacheType, Flags)),
            (v12 = PartitionNodePagesForMdl) == 0LL
         || (v9 = MmMapLockedPagesSpecifyCache(PartitionNodePagesForMdl, 0, CacheType, 0LL, 0, 0x40000010u)) == 0LL) )
      {
        CommonBufferEntry = -1073741670;
        goto LABEL_33;
      }
    }
    PhysicalAddress = MmGetPhysicalAddress(v9);
    if ( v12 )
    {
      v24 = a1[5];
      *((_QWORD *)&v28 + 1) = v12;
      CommonBufferEntry = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))guard_dispatch_icall_no_overrides)(
                            (PHYSICAL_ADDRESS)v24.QuadPart,
                            3LL,
                            &v28);
      if ( CommonBufferEntry < 0 )
        goto LABEL_33;
      PhysicalAddress.QuadPart = 0LL;
      v32 = 1;
    }
    CommonBufferEntry = HalpAllocateCommonBufferEntry((_DWORD)v12, (_DWORD)v9, 0, (_DWORD)a1, 1, 0LL);
    *a8 = PhysicalAddress;
    *a9 = v9;
    if ( CommonBufferEntry >= 0 )
      return (unsigned int)CommonBufferEntry;
    if ( v32 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))guard_dispatch_icall_no_overrides)(
        (PHYSICAL_ADDRESS)a1[5].QuadPart,
        0LL,
        v10 >> 12);
LABEL_33:
    HalpDmaDereferenceDomainObject((__int64 *)a1);
    if ( v9 )
    {
      if ( !v12 )
      {
        MmFreeContiguousMemory(v9);
        return (unsigned int)CommonBufferEntry;
      }
      MmUnmapLockedPages(v9, v12);
    }
    else if ( !v12 )
    {
      return (unsigned int)CommonBufferEntry;
    }
    MiFreePagesFromMdl((ULONG_PTR)v12, 0, 0, 0);
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)CommonBufferEntry;
}
