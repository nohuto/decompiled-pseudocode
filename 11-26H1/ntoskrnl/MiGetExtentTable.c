/*
 * XREFs of MiGetExtentTable @ 0x14053550C
 * Callers:
 *     MiDeleteFileExtentList @ 0x1407735B4 (MiDeleteFileExtentList.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall MiGetExtentTable(int a1)
{
  return &stru_140E2D2D0.WaitBlock[3].WaitType + 8 * a1;
}
