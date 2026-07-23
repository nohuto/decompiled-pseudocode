/*
 * XREFs of RtlULongLongSub @ 0x1404A8EE4
 * Callers:
 *     KiAdjustTimer2DueTimes @ 0x140339568 (KiAdjustTimer2DueTimes.c)
 *     IopAddCodeRegion @ 0x1404E058C (IopAddCodeRegion.c)
 *     IopFillTriageDumpDataBlocks @ 0x1405CBEE8 (IopFillTriageDumpDataBlocks.c)
 *     PspCriticalProcessDeathBugcheckCallback @ 0x140618EF0 (PspCriticalProcessDeathBugcheckCallback.c)
 *     AslpFileGetCrcChecksum @ 0x140892EA4 (AslpFileGetCrcChecksum.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x140A9807C (LdrpResSearchResourceInsideDirectory.c)
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
