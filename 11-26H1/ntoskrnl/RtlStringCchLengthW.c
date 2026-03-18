/*
 * XREFs of RtlStringCchLengthW @ 0x140459140
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x14061E4EC (RtlpIdnToUnicodeWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x1407B0AD8 (PiCMGenerateDeviceInstance.c)
 *     PpmRegisterProfiles @ 0x1407E1B0C (PpmRegisterProfiles.c)
 *     PopPlInitWString @ 0x1407E3018 (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1407E4B20 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x140803CE8 (RtlpValidAttribute.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140881504 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpSafeAllocAndConcatW @ 0x140881B80 (SdbpSafeAllocAndConcatW.c)
 *     AslPathCombine @ 0x140889530 (AslPathCombine.c)
 *     PnpGetDeviceDependencyList @ 0x140910630 (PnpGetDeviceDependencyList.c)
 *     PiUEventHandleRegistration @ 0x1409D71F0 (PiUEventHandleRegistration.c)
 *     AslStringDuplicate @ 0x1409E3DCC (AslStringDuplicate.c)
 *     PiCMCreateDevice @ 0x140B5A67C (PiCMCreateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // rax
  NTSTATUS v4; // ecx

  if ( !psz || cchMax > 0x7FFFFFFF )
  {
    v4 = -1073741811;
LABEL_15:
    if ( pcchLength )
      *pcchLength = 0LL;
    return v4;
  }
  for ( i = cchMax; i; --i )
  {
    if ( !*psz )
      break;
    ++psz;
  }
  v4 = -1073741811;
  if ( i )
    v4 = 0;
  if ( pcchLength )
  {
    if ( i )
      *pcchLength = cchMax - i;
    else
      *pcchLength = 0LL;
  }
  if ( !i )
    goto LABEL_15;
  return v4;
}
