/*
 * XREFs of ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286DB8
 * Callers:
 *     DpiFdoInitializeFdo @ 0x140243960 (DpiFdoInitializeFdo.c)
 *     DpiKsrStopAdapter @ 0x140252AB0 (DpiKsrStopAdapter.c)
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140286618 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYS.c)
 *     DpiFdoHandleRemoveDevice @ 0x14041A370 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14009CC60 (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SysMmCreateLiveDump@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x14009D79C (-SysMmCreateLiveDump@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ??1DXGK_LOG@@QEAA@XZ @ 0x14009D7E8 (--1DXGK_LOG@@QEAA@XZ.c)
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140284D58 (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1402853C8 (-SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x140287BF0 (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 */

void __fastcall SysMmDestroyAdapter(struct SYSMM_ADAPTER *a1)
{
  _QWORD *v1; // r9
  __int64 i; // rdi
  struct SYSMM_LOGICAL_BLOCK *v4; // rdx
  struct SYSMM_LOGICAL_ALLOCATOR *v5; // rcx
  __int64 j; // rdi
  __int64 v7; // rbp
  struct _IOMMU_DMA_DEVICE *v8; // rcx
  struct _IOMMU_DMA_DEVICE *v9; // rcx

  v1 = (_QWORD *)((char *)a1 + 40);
  if ( (_QWORD *)*v1 != v1 )
  {
    if ( (dword_1401696C0 & 0x20) != 0 )
    {
      WdLogSingleEntry5(0LL, 484LL, 6LL, a1, v1, 0LL);
      WdLogGlobalForLineNumber = 834;
    }
    else
    {
      SysMmCreateLiveDump();
    }
  }
  if ( *((_QWORD *)a1 + 46) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 7); i = (unsigned int)(i + 1) )
    {
      v4 = *(struct SYSMM_LOGICAL_BLOCK **)(*((_QWORD *)a1 + 46) + 24 * i + 16);
      if ( v4 )
        SmmFreeLogicalAddress(*((struct SYSMM_LOGICAL_ALLOCATOR **)a1 + 44), v4);
    }
    ExFreePoolWithTag(*((PVOID *)a1 + 46), 0);
  }
  SmmDeinitializeIommu(a1);
  v5 = (struct SYSMM_LOGICAL_ALLOCATOR *)*((_QWORD *)a1 + 44);
  if ( v5 )
    SmmDestroyLogicalAllocator(v5);
  if ( *((_QWORD *)a1 + 45) )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a1 + 6); j = (unsigned int)(j + 1) )
    {
      v7 = *((_QWORD *)a1 + 45);
      v8 = *(struct _IOMMU_DMA_DEVICE **)(v7 + 48 * j + 24);
      if ( v8 )
      {
        SmmIommuDeleteDevice(v8);
        *(_QWORD *)(v7 + 48 * j + 24) = 0LL;
      }
      v9 = *(struct _IOMMU_DMA_DEVICE **)(v7 + 48 * j + 32);
      if ( v9 )
      {
        SmmIommuDeleteDevice(v9);
        *(_QWORD *)(v7 + 48 * j + 32) = 0LL;
      }
    }
    ExFreePoolWithTag(*((PVOID *)a1 + 45), 0);
  }
  DXGK_LOG::~DXGK_LOG((void **)a1 + 32);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
}
