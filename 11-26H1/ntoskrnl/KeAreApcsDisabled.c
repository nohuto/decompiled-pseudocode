/*
 * XREFs of KeAreApcsDisabled @ 0x140486690
 * Callers:
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
