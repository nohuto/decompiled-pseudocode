/*
 * XREFs of CmSiCloseSection @ 0x1404DC2AC
 * Callers:
 *     HvpViewMapCleanup @ 0x1408B7D00 (HvpViewMapCleanup.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
