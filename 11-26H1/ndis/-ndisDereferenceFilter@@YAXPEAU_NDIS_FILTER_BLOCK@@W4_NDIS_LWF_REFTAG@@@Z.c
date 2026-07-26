/*
 * XREFs of ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x140054860
 * Callers:
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400546E0 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009D4F0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1400B5114 (-ndisPktMonRegisterAllFilters@@YAXXZ.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14017A580 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x140054A80 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     NdisNblTrackerDeregisterComponent @ 0x140054C00 (NdisNblTrackerDeregisterComponent.c)
 *     ??1_NDIS_FILTER_BLOCK@@QEAA@XZ @ 0x14008E9B0 (--1_NDIS_FILTER_BLOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisDeinitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@@Z @ 0x14016AFB0 (-ndisDeinitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@@Z.c)
 */

void __fastcall ndisDereferenceFilter(_NDIS_FILTER_BLOCK *this, unsigned __int8 a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rsi
  KIRQL v4; // r8
  _NDIS_FILTER_BLOCK **i; // rdx
  _NDIS_FILTER_BLOCK *v6; // rcx
  KIRQL v7; // r8
  _NDIS_FILTER_BLOCK **j; // rdx
  _NDIS_FILTER_BLOCK *v9; // rcx
  _NDIS_FILTER_TASK_OFFLOAD *Offload; // rcx
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCapabilities; // rcx
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCurrentConfig; // rcx
  _UNICODE_STRING *FilterFriendlyName; // rcx
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *IterativeDataPathTracker; // rcx
  struct _VF_NDIS_DISPATCH_TABLE *v15; // rax

  if ( (unsigned __int8)ndisDereferenceRef(&this->Ref.SpinLock, a2) )
  {
    FilterDriver = this->FilterDriver;
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    for ( i = &ndisGlobalFilterList; ; i = &v6->NextGlobalFilter )
    {
      v6 = *i;
      if ( !*i )
        break;
      if ( v6 == this )
      {
        *i = this->NextGlobalFilter;
        break;
      }
    }
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v4);
    v7 = KeAcquireSpinLockRaiseToDpc(&FilterDriver->Lock);
    for ( j = &FilterDriver->FilterQueue; ; j = &v9->NextFilter )
    {
      v9 = *j;
      if ( !*j )
        break;
      if ( v9 == this )
      {
        *j = this->NextFilter;
        break;
      }
    }
    KeReleaseSpinLock(&FilterDriver->Lock, v7);
    Offload = this->Offload;
    if ( Offload )
    {
      ExFreePoolWithTag(Offload, 0);
      this->Offload = 0LL;
    }
    HwTimestampCapabilities = this->HwTimestampCapabilities;
    if ( HwTimestampCapabilities )
    {
      ExFreePoolWithTag(HwTimestampCapabilities, 0);
      this->HwTimestampCapabilities = 0LL;
    }
    HwTimestampCurrentConfig = this->HwTimestampCurrentConfig;
    if ( HwTimestampCurrentConfig )
    {
      ExFreePoolWithTag(HwTimestampCurrentConfig, 0);
      this->HwTimestampCurrentConfig = 0LL;
    }
    ndisDeinitializeZeroBasedRef(&this->PnPRef);
    NdisNblTrackerDeregisterComponent(this->NblTracker);
    FilterFriendlyName = this->FilterFriendlyName;
    this->NblTracker = 0LL;
    if ( FilterFriendlyName )
    {
      ExFreePoolWithTag(FilterFriendlyName, 0);
      this->FilterFriendlyName = 0LL;
    }
    IterativeDataPathTracker = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)this->IterativeDataPathTracker;
    if ( IterativeDataPathTracker )
    {
      ExFreePoolWithTag(IterativeDataPathTracker, 0);
      this->IterativeDataPathTracker = 0LL;
    }
    v15 = ndisVerifierNdisDispatch;
    this->Header.Type = 0;
    if ( v15 )
    {
      if ( this->VerifierContext )
      {
        (*((void (**)(void))v15 + 2))();
        this->VerifierContext = 0LL;
      }
    }
    _NDIS_FILTER_BLOCK::~_NDIS_FILTER_BLOCK(this);
    ExFreePoolWithTag(this, 0);
    ndisDereferenceFilterDriver(FilterDriver, 0, LWFDRV_FILTERMODULE);
  }
}
