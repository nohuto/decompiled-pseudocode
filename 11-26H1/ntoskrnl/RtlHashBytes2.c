/*
 * XREFs of RtlHashBytes2 @ 0x14024D064
 * Callers:
 *     MiFindUserSidHotPatchContext @ 0x14087600C (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x140877654 (MiLoadHotPatchForUserSid.c)
 *     ObLogSecurityDescriptor @ 0x1408FCCF0 (ObLogSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x1408FCFF0 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x1408FD750 (SeDefaultObjectMethod.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140A41C70 (ObAssignObjectSecurityDescriptor.c)
 * Callees:
 *     rapidhash_internal @ 0x14024D090 (rapidhash_internal.c)
 */

__int64 __fastcall RtlHashBytes2(__int64 a1, __int64 a2)
{
  return rapidhash_internal(a1, a2, 0xBDD89AA982704029uLL);
}
