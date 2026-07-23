/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x1800E32C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0x7FFE02F0] & 0x200) != 0;
}
