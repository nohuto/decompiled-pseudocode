/*
 * XREFs of NdisDllInitialize @ 0x140097800
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1400C7D5C (ndisAllocatePerProcessorPageDescriptor.c)
 *     ?NdispRegisterShim@@YAXXZ @ 0x140141DC8 (-NdispRegisterShim@@YAXXZ.c)
 */

__int64 NdisDllInitialize()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  _QWORD *PerProcessorPageDescriptor; // rax
  _QWORD *v4; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  signed __int32 v7; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  DestinationString = 0LL;
  v7 = 0;
  if ( !ndisDllInitialized )
  {
    ndisDllInitialized = 1;
    ndisNumberOfActiveProcessorsAtBoot = KeQueryActiveProcessorCountEx(0xFFFFu);
    KeQueryActiveProcessorCountEx(0);
    ndisMaxNumberOfProcessors = KeQueryMaximumProcessorCountEx(0xFFFFu);
    ndisMaxCacheLineSize = KeGetRecommendedSharedDataAlignment();
    if ( ndisMaxCacheLineSize < 0x40 )
      ndisMaxCacheLineSize = 64;
    KeInitializeSpinLock(&ndisPerProcessorDescriptorLock);
    qword_14011E5D0 = (__int64)&ndisPerProcessorDescriptorList;
    ndisPerProcessorDescriptorList = &ndisPerProcessorDescriptorList;
    PerProcessorPageDescriptor = (_QWORD *)ndisAllocatePerProcessorPageDescriptor(v2, v1);
    if ( PerProcessorPageDescriptor )
    {
      v4 = ndisPerProcessorDescriptorList;
      if ( *((void ***)ndisPerProcessorDescriptorList + 1) != &ndisPerProcessorDescriptorList )
        __fastfail(3u);
      *PerProcessorPageDescriptor = ndisPerProcessorDescriptorList;
      PerProcessorPageDescriptor[1] = &ndisPerProcessorDescriptorList;
      v4[1] = PerProcessorPageDescriptor;
      ndisPerProcessorDescriptorList = PerProcessorPageDescriptor;
    }
    if ( _InterlockedIncrement(&v7) == 1 )
      NdispRegisterShim();
    if ( ndisMaxNumberOfProcessors > 0x100 )
    {
      qword_14011E878 = ExAllocatePool2(64LL, 520LL * ndisMaxNumberOfProcessors, 538985550LL);
      if ( !qword_14011E878 )
        v0 = -1073741801;
    }
    RtlInitUnicodeString(&DestinationString, L"MmGetSystemRoutineAddressEx");
    ndisGetSystemRoutineAddressEx = (void *(*)(struct _UNICODE_STRING *, char *))MmGetSystemRoutineAddress(&DestinationString);
  }
  return v0;
}
