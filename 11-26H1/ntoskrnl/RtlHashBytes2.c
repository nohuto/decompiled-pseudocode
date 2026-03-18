/*
 * XREFs of RtlHashBytes2 @ 0x14024B704
 * Callers:
 *     MiFindUserSidHotPatchContext @ 0x14086FCAC (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x1408712F4 (MiLoadHotPatchForUserSid.c)
 *     ObLogSecurityDescriptor @ 0x1409211E0 (ObLogSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x1409214E0 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x140921C40 (SeDefaultObjectMethod.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140A2FDF0 (ObAssignObjectSecurityDescriptor.c)
 * Callees:
 *     rapidhash_internal @ 0x14024B730 (rapidhash_internal.c)
 */

__int64 __fastcall RtlHashBytes2(__int64 a1, __int64 a2)
{
  return rapidhash_internal(a1, a2, 0xBDD89AA982704029uLL);
}
