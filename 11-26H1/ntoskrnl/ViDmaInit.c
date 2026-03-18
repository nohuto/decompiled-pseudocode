/*
 * XREFs of ViDmaInit @ 0x140C397DC
 * Callers:
 *     VfDmaPluginEntry @ 0x1406476A0 (VfDmaPluginEntry.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140498C60 (ExInitializeNPagedLookasideListInternal.c)
 */

char ViDmaInit()
{
  __int64 (__fastcall *v0)(int, unsigned int, unsigned int, __int64 *); // rax

  if ( !ViAdapterListInitialized )
  {
    v0 = (__int64 (__fastcall *)(int, unsigned int, unsigned int, __int64 *))&ViAdapterList;
    qword_140F08290 = 0LL;
    ViAdapterList.Blink = &ViAdapterList;
    ViAdapterList.Flink = &ViAdapterList;
    ViAdapterListInitialized = 1;
  }
  if ( !ViDomainCommonBufferListInitialized )
  {
    v0 = (__int64 (__fastcall *)(int, unsigned int, unsigned int, __int64 *))&ViDomainCommonBufferList;
    qword_140F082B0 = 0LL;
    qword_140F082A8 = (__int64)&ViDomainCommonBufferList;
    ViDomainCommonBufferList = (__int64)&ViDomainCommonBufferList;
    ViDomainCommonBufferListInitialized = 1;
  }
  if ( !ViHalWaitBlockLookasideInitialized )
  {
    LOBYTE(v0) = ExInitializeNPagedLookasideListInternal(
                   (__int64)&stru_140E27B08.AffinityVersion,
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
  if ( (unsigned int)HalPrivateDispatchTable >= 0x3F )
  {
    VfRealHalAllocateMapRegisters = (__int64)off_140E00850[0];
    v0 = VfHalAllocateMapRegisters;
    off_140E00850[0] = (__int64 (__fastcall *)())VfHalAllocateMapRegisters;
  }
  ViDoubleBufferDma = 1;
  return (char)v0;
}
