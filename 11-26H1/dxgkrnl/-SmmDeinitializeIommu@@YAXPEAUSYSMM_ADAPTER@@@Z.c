/*
 * XREFs of ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140284D58
 * Callers:
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286DB8 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     SmmClearPageManager @ 0x14009BBCC (SmmClearPageManager.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     SmmDetachDomainFromAllDevices @ 0x140284E08 (SmmDetachDomainFromAllDevices.c)
 *     SmmIommuDeleteDomain @ 0x1402853E4 (SmmIommuDeleteDomain.c)
 */

void __fastcall SmmDeinitializeIommu(struct SYSMM_ADAPTER *a1)
{
  void *v2; // rcx

  if ( (*((_DWORD *)a1 + 5) & 1) == 0 )
  {
    if ( *((_QWORD *)a1 + 14) )
    {
      SmmDetachDomainFromAllDevices();
      if ( !*((_DWORD *)a1 + 26) )
        SmmIommuDeleteDomain(*((_QWORD *)a1 + 14));
      *((_QWORD *)a1 + 14) = 0LL;
    }
    SmmClearPageManager((__int64)a1 + 128);
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 144));
    v2 = (void *)*((_QWORD *)a1 + 30);
    if ( v2 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
    if ( (*((_DWORD *)a1 + 5) & 4) != 0 && *((_DWORD *)a1 + 6) )
    {
      if ( *(_QWORD *)(*((_QWORD *)a1 + 45) + 24LL) )
        ((void (__fastcall *)(void (__fastcall *)(struct _IOMMU_INTERFACE_STATE_CHANGE *, void *)))qword_140169658)(SmmDomainTypeStateChangeCallback);
    }
  }
}
