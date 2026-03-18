/*
 * XREFs of HalpQueryPerDeviceMsiLimitInformation @ 0x1407816A4
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BED8E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpQueryPerDeviceMsiLimitInformation(_WORD *a1)
{
  *a1 = HalpInterruptPerDeviceMsiLimit;
  return 0LL;
}
