/*
 * XREFs of HalpDmaAllocateDomain @ 0x14058CB90
 * Callers:
 *     HalJoinDmaDomain @ 0x1405113F0 (HalJoinDmaDomain.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpDmaDereferenceDomainObject @ 0x140346528 (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaReferenceDomainObject @ 0x14034B1CC (HalpDmaReferenceDomainObject.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14058CF5C (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x14058D24C (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpDmaGetReservedRegionsForTranslateDomain @ 0x14058D2D4 (HalpDmaGetReservedRegionsForTranslateDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpDmaAllocateDomain(__int64 a1)
{
  int v1; // esi
  unsigned __int64 v2; // r15
  __int64 v4; // r12
  __int64 *v5; // r14
  void *v6; // rax
  __int64 v7; // rdi
  KIRQL v8; // al
  __int64 *v9; // rcx
  __int64 v10; // rdx
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // dl
  unsigned __int8 v14; // cl
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // r15d
  __int64 ReservedRegionsForTranslateDomain; // rax
  __int64 ReservedRegionsForDeviceResources; // rax
  __int64 *v20; // rdx
  __int64 *v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v25; // [rsp+30h] [rbp-10h]
  __int64 v26; // [rsp+38h] [rbp-8h]

  v1 = *(_DWORD *)(a1 + 520);
  v2 = *(_QWORD *)(a1 + 144);
  v4 = 0LL;
  v5 = 0LL;
  v6 = (void *)HalpMmAllocCtxAlloc(a1, 120LL);
  v7 = (__int64)v6;
  if ( !v6 )
    return v7;
  memset_0(v6, 0, 0x78uLL);
  v8 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  v9 = (__int64 *)qword_140FBAD18;
  if ( *(__int64 **)qword_140FBAD18 != &HalpDmaDomainList )
    __fastfail(3u);
  *(_QWORD *)v7 = &HalpDmaDomainList;
  *(_QWORD *)(v7 + 8) = v9;
  *v9 = v7;
  qword_140FBAD18 = v7;
  KeReleaseSpinLock(&HalpDmaDomainListLock, v8);
  HalpDmaReferenceDomainObject(v7);
  v11 = HalpIommuDomainMaxInputBitWidth;
  *(_BYTE *)(v7 + 32) = *(_BYTE *)(a1 + 445);
  v26 = (-(__int64)(*(_BYTE *)(a1 + 153) != 0) & 0xFFFF0000LL) + 0x10000;
  if ( v1 == 2 )
  {
    v12 = v11;
    goto LABEL_16;
  }
  if ( !_BitScanReverse64((unsigned __int64 *)&v10, HalpMaximumPhysicalMemoryAddress) )
    goto LABEL_11;
  if ( (unsigned __int8)v10 < 0x1Eu )
  {
    v12 = 32;
    goto LABEL_12;
  }
  if ( (unsigned __int8)v10 >= 0x3Fu )
LABEL_11:
    v12 = 64;
  else
    v12 = v10 + 2;
LABEL_12:
  if ( v1 )
  {
    v14 = v12;
    if ( v12 > v11 )
      v14 = v11;
    v12 = v14;
  }
LABEL_16:
  if ( v12 < 0x40u )
    v15 = (1LL << v12) - 1;
  else
    v15 = -1LL;
  v16 = *(_QWORD *)(a1 + 544);
  if ( v15 <= v2 )
    v2 = v15;
  v25 = v2;
  LOBYTE(v10) = 0;
  if ( v16 )
  {
    if ( (int)guard_dispatch_icall_no_overrides(v16, 3LL) < 0 )
    {
LABEL_48:
      HalpDmaDereferenceDomainObject((__int64 *)v7);
      v7 = 0LL;
      goto LABEL_49;
    }
    LOBYTE(v10) = 0;
  }
  if ( !v1 )
  {
    v17 = 1;
    v22 = 0LL;
    goto LABEL_46;
  }
  if ( v1 == 1 || v1 == 2 )
  {
    v17 = 0;
LABEL_31:
    if ( v1 == 1 )
      goto LABEL_37;
    goto LABEL_32;
  }
  if ( v1 != 3 )
  {
    v17 = 4;
    goto LABEL_31;
  }
  v17 = 0;
LABEL_32:
  if ( v1 == 3 )
  {
    ReservedRegionsForTranslateDomain = HalpDmaGetReservedRegionsForTranslateDomain(*(_QWORD *)(a1 + 536), v10, v7 + 33);
LABEL_36:
    v5 = (__int64 *)ReservedRegionsForTranslateDomain;
    goto LABEL_37;
  }
  if ( v1 == 2 )
  {
    ReservedRegionsForTranslateDomain = HalpDmaGetReservedRegionsForHybridPassthroughDomain();
    goto LABEL_36;
  }
LABEL_37:
  ReservedRegionsForDeviceResources = HalpDmaGetReservedRegionsForDeviceResources(*(PDEVICE_OBJECT *)(a1 + 528));
  v4 = ReservedRegionsForDeviceResources;
  if ( v5 )
  {
    v20 = (__int64 *)*v5;
    v21 = v5;
    if ( *v5 )
    {
      do
      {
        v21 = v20;
        v20 = (__int64 *)*v20;
      }
      while ( v20 );
    }
    *v21 = v4;
  }
  else
  {
    v5 = (__int64 *)ReservedRegionsForDeviceResources;
    v4 = 0LL;
  }
  v22 = 0x8000000000000000uLL;
  if ( v1 == 2 )
    v22 = 0xC000000000000000uLL;
LABEL_46:
  if ( (int)guard_dispatch_icall_no_overrides(v17, v22) < 0 )
    goto LABEL_48;
  **(_QWORD **)(v7 + 40) = v7;
  *(_QWORD *)(v7 + 16) = v25;
  *(_QWORD *)(v7 + 24) = v26;
  *(_DWORD *)(v7 + 48) = v1;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 104) = 0LL;
  *(_QWORD *)(v7 + 96) = v7 + 88;
  *(_QWORD *)(v7 + 88) = v7 + 88;
LABEL_49:
  if ( v5 )
    HalpMmAllocCtxFree(v23, (__int64)v5);
  if ( v4 )
    HalpMmAllocCtxFree(v23, v4);
  return v7;
}
