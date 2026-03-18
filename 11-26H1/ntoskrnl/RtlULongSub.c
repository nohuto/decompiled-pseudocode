/*
 * XREFs of RtlULongSub @ 0x1404D5F4C
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x1405B4800 (DbgkpTriageDumpSnapData.c)
 *     KiDeduplicateTriageDumpDataArrays @ 0x1405E7E88 (KiDeduplicateTriageDumpDataArrays.c)
 *     BcpDisplayCriticalStringCentered @ 0x140716B84 (BcpDisplayCriticalStringCentered.c)
 *     _RegRtlQueryKeyPathName @ 0x14089D928 (_RegRtlQueryKeyPathName.c)
 *     PiForEachDriverQueryRoutine @ 0x140913514 (PiForEachDriverQueryRoutine.c)
 *     BiGetFilePathFromEfiPath @ 0x1409D0F18 (BiGetFilePathFromEfiPath.c)
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
