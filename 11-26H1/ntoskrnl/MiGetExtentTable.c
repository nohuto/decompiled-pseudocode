/*
 * XREFs of MiGetExtentTable @ 0x14053308C
 * Callers:
 *     MiDeleteFileExtentList @ 0x1407705B4 (MiDeleteFileExtentList.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall MiGetExtentTable(int a1)
{
  return &stru_140E2D150.WaitBlock[3].WaitType + 8 * a1;
}
