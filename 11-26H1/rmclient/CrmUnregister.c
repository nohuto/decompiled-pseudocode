/*
 * XREFs of CrmUnregister @ 0x180004900
 * Callers:
 *     AcpReleaseClientRegistration @ 0x180019FA8 (AcpReleaseClientRegistration.c)
 * Callees:
 *     ?CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x180004938 (-CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z.c)
 */

BOOLEAN __fastcall CrmUnregister(struct _CRMP_REGISTRATION_CONTEXT *a1)
{
  CrmpRegistrationContextCleanup(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
