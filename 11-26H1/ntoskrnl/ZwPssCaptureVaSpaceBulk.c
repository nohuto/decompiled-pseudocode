/*
 * XREFs of ZwPssCaptureVaSpaceBulk @ 0x140725CF0
 * Callers:
 *     DifZwPssCaptureVaSpaceBulkWrapper @ 0x1406AF530 (DifZwPssCaptureVaSpaceBulkWrapper.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140845040 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPssCaptureVaSpaceBulk(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
