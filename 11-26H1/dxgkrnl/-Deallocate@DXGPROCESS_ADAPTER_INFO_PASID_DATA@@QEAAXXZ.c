/*
 * XREFs of ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x140371F38
 * Callers:
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1402E75F4 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403717C0 (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?SysMmDestroyPasidDevice@@YAJPEAU_IOMMU_DMA_PASID_DEVICE@@@Z @ 0x140286F24 (-SysMmDestroyPasidDevice@@YAJPEAU_IOMMU_DMA_PASID_DEVICE@@@Z.c)
 */

void __fastcall DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate(DXGPROCESS_ADAPTER_INFO_PASID_DATA *this)
{
  DXGPROCESS_ADAPTER_INFO_PASID_DATA *v2; // rcx
  __int64 i; // rdi

  if ( *((_QWORD *)this + 4) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 4); i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i) )
      {
        ((void (*)(void))qword_1401696A8)();
        SysMmDestroyPasidDevice(*(struct _IOMMU_DMA_PASID_DEVICE **)(*((_QWORD *)this + 4) + 8 * i));
        *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i) = 0LL;
      }
    }
    if ( *((_QWORD *)this + 5) )
    {
      ((void (*)(void))qword_1401695E8)();
      *((_QWORD *)this + 5) = 0LL;
    }
    if ( *((_DWORD *)this + 4) > 1u )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 4));
      *((_QWORD *)this + 4) = 0LL;
    }
  }
  v2 = (DXGPROCESS_ADAPTER_INFO_PASID_DATA *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    if ( v2 != this )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
}
