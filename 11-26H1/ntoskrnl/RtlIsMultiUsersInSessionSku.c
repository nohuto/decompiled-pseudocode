/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x140804240
 * Callers:
 *     GetGlobalizationUserModelType @ 0x1405026D4 (GetGlobalizationUserModelType.c)
 * Callees:
 *     <none>
 */

bool RtlIsMultiUsersInSessionSku()
{
  return (MEMORY[0xFFFFF780000002F0] & 0x200) != 0;
}
