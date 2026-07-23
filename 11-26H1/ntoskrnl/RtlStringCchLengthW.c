/*
 * XREFs of RtlStringCchLengthW @ 0x1404509C0
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x14062153C (RtlpIdnToUnicodeWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x1407B3B38 (PiCMGenerateDeviceInstance.c)
 *     PpmRegisterProfiles @ 0x1407E6B9C (PpmRegisterProfiles.c)
 *     PopPlInitWString @ 0x1407E80A8 (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1407EA680 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x140809788 (RtlpValidAttribute.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140887904 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpSafeAllocAndConcatW @ 0x140887F80 (SdbpSafeAllocAndConcatW.c)
 *     AslPathCombine @ 0x14088F92C (AslPathCombine.c)
 *     PiUEventHandleRegistration @ 0x1409A80E0 (PiUEventHandleRegistration.c)
 *     PnpGetDeviceDependencyList @ 0x1409B2710 (PnpGetDeviceDependencyList.c)
 *     AslStringDuplicate @ 0x1409D8BA8 (AslStringDuplicate.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
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
