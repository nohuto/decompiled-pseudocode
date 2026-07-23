/*
 * XREFs of RtlULongSub @ 0x1404CF71C
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x1405B7010 (DbgkpTriageDumpSnapData.c)
 *     KiDeduplicateTriageDumpDataArrays @ 0x1405EA7F8 (KiDeduplicateTriageDumpDataArrays.c)
 *     BcpDisplayCriticalStringCentered @ 0x14071B874 (BcpDisplayCriticalStringCentered.c)
 *     _RegRtlQueryKeyPathName @ 0x1408A3D28 (_RegRtlQueryKeyPathName.c)
 *     BiGetFilePathFromEfiPath @ 0x1409A1EF8 (BiGetFilePathFromEfiPath.c)
 *     PiForEachDriverQueryRoutine @ 0x1409B55F4 (PiForEachDriverQueryRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongSub(ULONG ulMinuend, ULONG ulSubtrahend, ULONG *pulResult)
{
  ULONG v3; // r9d

  if ( ulMinuend < ulSubtrahend )
    v3 = -1;
  else
    v3 = ulMinuend - ulSubtrahend;
  *pulResult = v3;
  return ulMinuend < ulSubtrahend ? 0xC0000095 : 0;
}
