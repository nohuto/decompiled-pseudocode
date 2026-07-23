/*
 * XREFs of HalpAllocateCommonBufferVectorInternal @ 0x1404CB450
 * Callers:
 *     HalAllocateCommonBufferVector @ 0x14058AE30 (HalAllocateCommonBufferVector.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpDmaDereferenceDomainObject @ 0x140346528 (HalpDmaDereferenceDomainObject.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x14034A280 (MmAllocatePagesForMdlEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14034A2E0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     HalpDmaReferenceDomainObject @ 0x14034B1CC (HalpDmaReferenceDomainObject.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpAllocateCommonBufferVectorInternal(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        MEMORY_CACHING_TYPE a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        char a9,
        __int64 *a10)
{
  __int64 v10; // rbx
  void *v11; // r13
  struct _MDL *v12; // r15
  __int64 v13; // r14
  unsigned __int8 CurrentIrql; // al
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // edi
  void *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 *v21; // rdi
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned __int64 v24; // r14
  ULONG v25; // r10d
  unsigned __int64 i; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  PHYSICAL_ADDRESS v29; // rax
  unsigned int v30; // ecx
  unsigned __int64 v31; // rdx
  struct _MDL *PagesForMdl; // rax
  char *v33; // rax
  char *v34; // rdx
  _QWORD *v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // rcx
  __int64 v38; // r14
  struct _MDL *v39; // r15
  struct _MDL *Next; // rax
  KIRQL v41; // al
  __int64 *v42; // rdx
  __int64 v43; // r8
  _QWORD *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // [rsp+48h] [rbp-51h]
  _QWORD *v49; // [rsp+50h] [rbp-49h]
  __int64 *v50; // [rsp+58h] [rbp-41h]
  PVOID v51; // [rsp+70h] [rbp-29h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1DCu, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( a6 )
    return 3221225485LL;
  v15 = *(_QWORD *)(a1 + 512);
  v50 = (__int64 *)v15;
  v48 = *(_DWORD *)(v15 + 48);
  if ( a9 )
    goto LABEL_4;
  if ( *(_DWORD *)(v15 + 48) != 2 )
    return 3221225485LL;
  v48 = 3;
LABEL_4:
  v17 = HalpDmaReferenceDomainObject(v15);
  if ( v17 < 0 )
    return (unsigned int)v17;
  v18 = (void *)HalpMmAllocCtxAlloc(v16, 80LL);
  v19 = (__int64)v18;
  if ( !v18 )
  {
    v17 = -1073741670;
LABEL_55:
    HalpDmaDereferenceDomainObject(v50);
    if ( v19 )
      HalpMmAllocCtxFree(v47, v19);
    if ( v13 )
      HalpMmAllocCtxFree(v47, v13);
    if ( v12 )
    {
      if ( v11 )
        MmUnmapLockedPages(v11, v12);
      MiFreePagesFromMdl((ULONG_PTR)v12, 0, 0, 0);
      ExFreePoolWithTag(v12, 0);
    }
    return (unsigned int)v17;
  }
  memset_0(v18, 0, 0x50uLL);
  v20 = a7;
  v21 = v50;
  *(_QWORD *)(v19 + 32) = v50;
  v23 = (_QWORD *)HalpMmAllocCtxAlloc(v22, 16LL * a7);
  v49 = v23;
  v13 = (__int64)v23;
  if ( !v23 )
  {
    v17 = -1073741670;
    v11 = 0LL;
    goto LABEL_55;
  }
  memset_0(v23, 0, 16LL * a7);
  *(_QWORD *)(v19 + 64) = v13;
  v24 = (a8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v48 == 3 )
  {
    v25 = 20;
    v28 = 0LL;
    v29.QuadPart = 0LL;
    v31 = -1LL;
  }
  else
  {
    v25 = 36;
    for ( i = 0LL; ; ++i )
    {
      v27 = 1LL << i;
      if ( i >= 0x40 )
        break;
      if ( v27 >= v24 )
      {
        v24 = 1LL << i;
        goto LABEL_13;
      }
    }
    if ( v27 != v24 )
    {
      v17 = -1073741577;
LABEL_42:
      v11 = 0LL;
      goto LABEL_54;
    }
LABEL_13:
    v28 = v24;
    v29.QuadPart = a2;
    v30 = *(_DWORD *)(a1 + 448);
    if ( v30 < 0x40 )
      v31 = (1LL << v30) - 1;
    else
      v31 = -1LL;
    if ( a3 < v31 )
      v31 = a3;
    if ( a2 >= v31 )
    {
      v17 = -1073741584;
      goto LABEL_42;
    }
  }
  *(_DWORD *)(v19 + 24) = a7;
  *(_QWORD *)(v19 + 16) = v24;
  if ( a5 == 0x80000000 )
    PagesForMdl = MmAllocatePagesForMdlEx(v29, (PHYSICAL_ADDRESS)v31, (PHYSICAL_ADDRESS)v28, v24 * a7, a4, v25);
  else
    PagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(v29.LowPart, v31, v28, v24 * a7, a4, a5, v25, 0LL);
  v12 = PagesForMdl;
  if ( !PagesForMdl )
  {
    v17 = -1073741670;
    v11 = 0LL;
LABEL_54:
    v13 = (__int64)v49;
    goto LABEL_55;
  }
  v33 = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, a4, 0LL, 0, 0x40000010u);
  v51 = v33;
  v34 = v33;
  if ( !v33 )
  {
    v17 = -1073741670;
    v11 = 0LL;
    goto LABEL_54;
  }
  *(_QWORD *)(v19 + 48) = v33;
  *(_QWORD *)(v19 + 40) = v12;
  if ( a7 )
  {
    v35 = v49;
    v36 = a7;
    do
    {
      *v35 = v34;
      v34 += v24;
      v35 += 2;
      --v36;
    }
    while ( v36 );
  }
  if ( v48 == 3 )
  {
    v17 = guard_dispatch_icall_no_overrides(v50[5], 3LL);
    if ( v17 >= 0 )
    {
      if ( a7 )
      {
        v45 = v49 + 1;
        do
        {
          v46 = v10;
          v10 += v24;
          *v45 = v46;
          v45 += 2;
          --v20;
        }
        while ( v20 );
      }
      v21 = v50;
      *(_QWORD *)(v19 + 56) = 0LL;
      *(_BYTE *)(v19 + 72) = 1;
      goto LABEL_29;
    }
    v11 = v51;
    goto LABEL_54;
  }
  if ( a7 )
  {
    v37 = v49 + 1;
    v38 = 8 * (v24 >> 12);
    v39 = v12 + 1;
    do
    {
      Next = v39->Next;
      v39 = (struct _MDL *)((char *)v39 + v38);
      *v37 = (_QWORD)Next << 12;
      v37 += 2;
      --v20;
    }
    while ( v20 );
  }
LABEL_29:
  v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v21 + 13);
  v42 = v21 + 11;
  v43 = v21[11];
  if ( *(__int64 **)(v43 + 8) != v21 + 11 )
    __fastfail(3u);
  *(_QWORD *)(v19 + 8) = v42;
  *(_QWORD *)v19 = v43;
  *(_QWORD *)(v43 + 8) = v19;
  *v42 = v19;
  KeReleaseSpinLock((PKSPIN_LOCK)v21 + 13, v41);
  *a10 = v19;
  return 0LL;
}
