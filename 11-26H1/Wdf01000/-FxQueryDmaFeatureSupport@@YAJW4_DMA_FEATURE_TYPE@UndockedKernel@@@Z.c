/*
 * XREFs of ?FxQueryDmaFeatureSupport@@YAJW4_DMA_FEATURE_TYPE@UndockedKernel@@@Z @ 0x140089ED4
 * Callers:
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x140089F58 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

int __fastcall FxQueryDmaFeatureSupport(UndockedKernel::_DMA_FEATURE_TYPE FeatureType)
{
  _UNICODE_STRING funcName; // [rsp+20h] [rbp-18h] BYREF
  UndockedKernel::_DMA_FEATURE_QUERY_STATUS dmaSubStatus; // [rsp+48h] [rbp+10h] BYREF

  dmaSubStatus.AsUINT64 = 0LL;
  if ( !LOBYTE(WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfChannels) )
  {
    funcName = 0LL;
    RtlInitUnicodeString(&funcName, L"IoQueryDmaFeatureSupport");
    WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&funcName);
    LOBYTE(WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfChannels) = 1;
  }
  if ( WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink )
    return ((int (__fastcall *)(UndockedKernel::_DMA_FEATURE_TYPE, UndockedKernel::_DMA_FEATURE_QUERY_STATUS *))WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink)(
             DmaFeatureTypeUserModeDriverDescriptorFlag,
             &dmaSubStatus);
  else
    return -1073741511;
}
