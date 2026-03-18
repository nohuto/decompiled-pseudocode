/*
 * XREFs of ZwPssCaptureVaSpaceBulk @ 0x14069DA20
 * Callers:
 *     NtPssCaptureVaSpaceBulk @ 0x1407B5720 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPssCaptureVaSpaceBulk(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
