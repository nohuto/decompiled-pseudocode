/*
 * XREFs of RtlULongLongSub @ 0x1404AF854
 * Callers:
 *     KiAdjustTimer2DueTimes @ 0x1403374E8 (KiAdjustTimer2DueTimes.c)
 *     IopAddCodeRegion @ 0x1404E71D0 (IopAddCodeRegion.c)
 *     IopFillTriageDumpDataBlocks @ 0x1405C9618 (IopFillTriageDumpDataBlocks.c)
 *     PspCriticalProcessDeathBugcheckCallback @ 0x140615F00 (PspCriticalProcessDeathBugcheckCallback.c)
 *     AslpFileGetCrcChecksum @ 0x14088CAA8 (AslpFileGetCrcChecksum.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x140A9352C (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongSub(ULONGLONG ullMinuend, ULONGLONG ullSubtrahend, ULONGLONG *pullResult)
{
  ULONGLONG v3; // r9

  if ( ullMinuend < ullSubtrahend )
    v3 = -1LL;
  else
    v3 = ullMinuend - ullSubtrahend;
  *pullResult = v3;
  return ullMinuend < ullSubtrahend ? 0xC0000095 : 0;
}
