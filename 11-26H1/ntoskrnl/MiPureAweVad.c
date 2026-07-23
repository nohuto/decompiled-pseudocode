/*
 * XREFs of MiPureAweVad @ 0x14045E8F0
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPureAweVad(int a1)
{
  return (a1 & 0x1C) == 0xC && ((a1 & 0x80000) == 0 || (a1 & 0x800000) == 0);
}
