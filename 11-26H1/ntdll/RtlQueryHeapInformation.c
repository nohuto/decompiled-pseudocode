/*
 * XREFs of RtlQueryHeapInformation @ 0x180076310
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x180075B50 (RtlQueryProcessHeapInformation.c)
 *     RtlpGetHeapTag @ 0x1800764FC (RtlpGetHeapTag.c)
 *     RtlpReadProcessHeaps @ 0x1800C27DC (RtlpReadProcessHeaps.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180144BD0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpStackTraceEtwCallback @ 0x18014F8A0 (RtlpHpStackTraceEtwCallback.c)
 * Callees:
 *     RtlpQueryExtendedHeapInformation @ 0x180092130 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x1800EA838 (RtlpHpTagQueryTags.c)
 *     RtlpQueryMemoryUsageInformation @ 0x18011E5A4 (RtlpQueryMemoryUsageInformation.c)
 *     RtlpHpStackTraceSerialize @ 0x180122180 (RtlpHpStackTraceSerialize.c)
 */

NTSTATUS __cdecl RtlQueryHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS v6; // r9d
  NTSTATUS v7; // r9d

  if ( HeapInformationClass == -2147483647 )
  {
    if ( HeapInformationLength >= 8 )
    {
      *(_QWORD *)HeapInformation = &RtlpHeapFailureInfo;
      v7 = 0;
      if ( ReturnLength )
        *ReturnLength = 8LL;
    }
    else
    {
      if ( ReturnLength )
        *ReturnLength = 8LL;
      return -1073741789;
    }
    return v7;
  }
  else
  {
    v6 = 0;
    if ( HeapInformationClass )
    {
      switch ( HeapInformationClass )
      {
        case 8:
          return RtlpQueryMemoryUsageInformation(HeapHandle, HeapInformation, HeapInformationLength, ReturnLength);
        case 7:
          if ( !HeapHandle || !HeapInformation || *((_DWORD *)HeapHandle + 4) != -571548178 )
            return -1073741811;
          if ( ReturnLength )
            *ReturnLength = 8LL;
          if ( HeapInformationLength != 8 )
            return -1073741811;
          *(_QWORD *)HeapInformation = *((_QWORD *)HeapHandle + 13);
          return v6;
        case 5:
          return RtlpHpStackTraceSerialize(HeapInformation, HeapInformationLength, ReturnLength, 0LL);
        case 1:
          if ( ReturnLength )
            *ReturnLength = 4LL;
          if ( HeapInformationLength >= 4 )
          {
            LOBYTE(v6) = RtlpDisableBreakOnFailureCookie == 0;
            *(_DWORD *)HeapInformation = v6;
            return 0;
          }
          else
          {
            return -1073741789;
          }
        case 2:
          if ( HeapInformationLength >= 0x58 )
            return RtlpQueryExtendedHeapInformation(HeapInformation, HeapInformationLength, ReturnLength, 0LL);
          else
            return -1073741811;
        case 4:
          return RtlpHpTagQueryTags(HeapInformation);
        default:
          return -1073741811;
      }
    }
    else if ( *((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
    {
      if ( HeapInformationLength >= 4 )
      {
        if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
          *(_DWORD *)HeapInformation = 2;
        else
          *(_DWORD *)HeapInformation = *((unsigned __int8 *)HeapHandle + 419);
        if ( ReturnLength )
          *ReturnLength = 4LL;
        return 0;
      }
      else
      {
        if ( ReturnLength )
          *ReturnLength = 4LL;
        return -1073741789;
      }
    }
    else
    {
      return -1073741822;
    }
  }
}
