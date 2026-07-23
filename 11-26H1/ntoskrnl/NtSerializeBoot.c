/*
 * XREFs of NtSerializeBoot @ 0x1408AD310
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x1405DAF5C (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot(void)
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
