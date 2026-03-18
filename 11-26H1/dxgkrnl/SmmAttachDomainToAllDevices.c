/*
 * XREFs of SmmAttachDomainToAllDevices @ 0x140284C0C
 * Callers:
 *     SmmSwapDomains @ 0x1402859E4 (SmmSwapDomains.c)
 * Callees:
 *     Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline @ 0x14006F7DC (Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x140285E7C (-SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SysMmIommuDetach@@YAXPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x140285F4C (-SysMmIommuDetach@@YAXPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 */

__int64 __fastcall SmmAttachDomainToAllDevices(__int64 a1, struct _IOMMU_DMA_DOMAIN *a2)
{
  __int64 v2; // rbx
  struct _IOMMU_DMA_DOMAIN *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v7; // r14
  __int64 v8; // r15
  struct _IOMMU_DMA_DOMAIN *v9; // r12
  int v10; // eax
  struct _IOMMU_DMA_DEVICE *v11; // r8
  int v12; // eax

  v2 = 0LL;
  v3 = a2;
  LODWORD(v4) = 0;
  LODWORD(v5) = 0;
  while ( (unsigned int)v5 < *(_DWORD *)(a1 + 24) )
  {
    v7 = *(_QWORD *)(a1 + 360);
    v8 = (unsigned int)v5;
    if ( *(_QWORD *)(v7 + 48LL * (unsigned int)v5 + 24) )
    {
      v9 = v3;
      if ( (unsigned int)Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline()
        && (*(_DWORD *)(a1 + 88) & 8) != 0
        && (*(_BYTE *)(v7 + 48LL * (unsigned int)v5 + 16) & 8) == 0 )
      {
        v9 = (struct _IOMMU_DMA_DOMAIN *)qword_1401696B8;
      }
      v10 = SysMmIommuAttach(
              *(struct _DEVICE_OBJECT **)(v7 + 48LL * (unsigned int)v5 + 40),
              v9,
              *(struct _IOMMU_DMA_DEVICE **)(v7 + 48LL * (unsigned int)v5 + 24));
      v4 = v10;
      if ( v10 < 0 )
      {
        if ( (_DWORD)v5 )
        {
          v5 = (unsigned int)v5;
          do
          {
            SysMmIommuDetach(*(struct _IOMMU_DMA_DEVICE **)(*(_QWORD *)(a1 + 360) + v2 + 24));
            v2 += 48LL;
            --v5;
          }
          while ( v5 );
        }
        WdLogSingleEntry2(3LL, v8, v4);
        WdLogGlobalForLineNumber = 2084;
        return (unsigned int)v4;
      }
      v11 = *(struct _IOMMU_DMA_DEVICE **)(v7 + 48LL * (unsigned int)v5 + 32);
      if ( v11 )
      {
        v12 = SysMmIommuAttach(*(struct _DEVICE_OBJECT **)(v7 + 48LL * (unsigned int)v5 + 40), v9, v11);
        v4 = v12;
        if ( v12 < 0 )
        {
          SysMmIommuDetach(*(struct _IOMMU_DMA_DEVICE **)(v7 + 48LL * (unsigned int)v5 + 24));
          WdLogSingleEntry2(3LL, (unsigned int)v5, v4);
          WdLogGlobalForLineNumber = 2093;
          return (unsigned int)v4;
        }
      }
      v3 = a2;
    }
    LODWORD(v5) = v5 + 1;
  }
  return (unsigned int)v4;
}
