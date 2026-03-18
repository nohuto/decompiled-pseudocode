/*
 * XREFs of HalpAcpiDetectPiix4Work @ 0x1407823C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140359004 (HalpMmAllocCtxFree.c)
 *     HalpPiix4Detect @ 0x140C0A8DC (HalpPiix4Detect.c)
 */

__int64 __fastcall HalpAcpiDetectPiix4Work(__int64 a1)
{
  __int64 v1; // rcx

  HalpMmAllocCtxFree(a1, a1);
  LOBYTE(v1) = 1;
  return HalpPiix4Detect(v1);
}
