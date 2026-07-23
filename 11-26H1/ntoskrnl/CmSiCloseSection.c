/*
 * XREFs of CmSiCloseSection @ 0x1404D598C
 * Callers:
 *     HvpViewMapCleanup @ 0x1408BE2D0 (HvpViewMapCleanup.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
