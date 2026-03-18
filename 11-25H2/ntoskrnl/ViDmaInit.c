/*
 * XREFs of ViDmaInit @ 0x140B8C048
 * Callers:
 *     VfDmaPluginEntry @ 0x1406085C0 (VfDmaPluginEntry.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140460B30 (ExInitializeNPagedLookasideListInternal.c)
 */

void ViDmaInit()
{
  if ( !ViAdapterListInitialized )
  {
    qword_140F036D0 = 0LL;
    ViAdapterList.Blink = &ViAdapterList;
    ViAdapterList.Flink = &ViAdapterList;
    ViAdapterListInitialized = 1;
  }
  if ( !ViDomainCommonBufferListInitialized )
  {
    qword_140F03710 = 0LL;
    qword_140F03708 = (__int64)&ViDomainCommonBufferList;
    ViDomainCommonBufferList = (__int64)&ViDomainCommonBufferList;
    ViDomainCommonBufferListInitialized = 1;
  }
  if ( !ViHalWaitBlockLookasideInitialized )
  {
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViHalWaitBlockLookaside,
      0LL,
      (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
      512,
      152,
      1449943368,
      16,
      VfInitializedWithoutReboot);
    ViHalWaitBlockLookasideInitialized = 1;
  }
  ViVerifyDma = 1;
  if ( (unsigned int)HalPrivateDispatchTable >= 0x3D )
  {
    VfRealHalAllocateMapRegisters = (__int64)off_140E00830[0];
    off_140E00830[0] = (__int64 (__fastcall *)())VfHalAllocateMapRegisters;
  }
  ViDoubleBufferDma = 1;
}
