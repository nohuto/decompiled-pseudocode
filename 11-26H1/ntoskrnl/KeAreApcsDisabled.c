/*
 * XREFs of KeAreApcsDisabled @ 0x14048CB50
 * Callers:
 *     sub_140542730 @ 0x140542730 (sub_140542730.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
