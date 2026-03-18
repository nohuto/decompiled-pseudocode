/*
 * XREFs of RtlGetAppContainerParent @ 0x140804020
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x14077E4E0 (RtlpGetTokenNamedObjectPath.c)
 *     SepValidateReferencedCachedHandles @ 0x140A293B8 (SepValidateReferencedCachedHandles.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14047F970 (RtlSubAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x1408E9A40 (RtlLengthRequiredSid.c)
 *     RtlGetAppContainerSidType @ 0x140A2A020 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x140A6AF80 (RtlInitializeSid.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlGetAppContainerParent(PSID Sid, _QWORD *a2)
{
  *a2 = 0LL;
  RtlGetAppContainerSidType(Sid);
  return 3221225485LL;
}
