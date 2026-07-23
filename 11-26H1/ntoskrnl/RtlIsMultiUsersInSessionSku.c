/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x140809CE0
 * Callers:
 *     GetGlobalizationUserModelType @ 0x1404FBFA4 (GetGlobalizationUserModelType.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0xFFFFF780000002F0] & 0x200) != 0;
}
