/*
 * XREFs of SmmMapExistingMemoryToDomain @ 0x14009C300
 * Callers:
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x140285400 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     SmmIommuSwitchToTranslation @ 0x140285730 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     ?SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x14003EDA8 (-SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@.c)
 *     ?SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x140040978 (-SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMM.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140041508 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z @ 0x14009C46C (-SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z.c)
 *     SmmUnmapContiguousRangeFromIommu @ 0x14009C4B4 (SmmUnmapContiguousRangeFromIommu.c)
 */

__int64 __fastcall SmmMapExistingMemoryToDomain(__int64 a1)
{
  KIRQL v1; // r13
  struct SYSMM_ADAPTER_OBJECT *v2; // rsi
  struct SYSMM_ADAPTER_OBJECT *v3; // rbx
  struct SYSMM_IOMMU *v4; // r12
  __int64 i; // r15
  int v7; // edi
  volatile LONG *v8; // r14
  KIRQL v9; // al
  __int64 v10; // rbx
  __int64 v11; // rsi
  int LogicalAddress; // eax
  __int64 *v13; // r9
  char v15; // [rsp+80h] [rbp+8h]

  v1 = 0;
  v2 = (struct SYSMM_ADAPTER_OBJECT *)(a1 + 40);
  v3 = *(struct SYSMM_ADAPTER_OBJECT **)(a1 + 40);
  v4 = (struct SYSMM_IOMMU *)(a1 + 64);
  v15 = 0;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)(a1 + 28) )
    {
      v8 = (volatile LONG *)(a1 + 32);
      v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 32));
      v3 = *(struct SYSMM_ADAPTER_OBJECT **)v2;
      v1 = v9;
      v15 = 1;
      while ( v3 != v2 )
      {
        v7 = SmmMapObjectToIommu((struct SYSMM_ADAPTER_OBJECT *)((char *)v3 - 64), v3, v4);
        if ( v7 < 0 )
          goto LABEL_11;
        v3 = *(struct SYSMM_ADAPTER_OBJECT **)v3;
      }
      v7 = 0;
      goto LABEL_18;
    }
    v7 = SmmMapHardwareReservedRangeToIommu(
           (const struct SYSMM_HARDWARE_RESERVED_RANGE *)(*(_QWORD *)(a1 + 368) + 24 * i),
           v4);
    if ( v7 < 0 )
      break;
  }
  v8 = (volatile LONG *)(a1 + 32);
LABEL_11:
  while ( 1 )
  {
    v2 = *(struct SYSMM_ADAPTER_OBJECT **)v2;
    if ( v2 == v3 )
      break;
    SmmUnmapObjectFromIommu((struct SYSMM_ADAPTER_OBJECT *)((char *)v2 - 64), v2, v4);
  }
  if ( (_DWORD)i )
  {
    v10 = 0LL;
    v11 = (unsigned int)i;
    do
    {
      LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(v10 + *(_QWORD *)(a1 + 368) + 16));
      SmmUnmapContiguousRangeFromIommu((_DWORD)v4, LogicalAddress, *v13 >> 12, v13[1], 0, 1, (__int64)v13);
      v10 += 24LL;
      --v11;
    }
    while ( v11 );
  }
  WdLogSingleEntry2(3LL, a1, v7);
  WdLogGlobalForLineNumber = 1788;
  if ( v15 )
LABEL_18:
    ExReleaseSpinLockShared(v8, v1);
  return (unsigned int)v7;
}
