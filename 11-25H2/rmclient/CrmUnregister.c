/*
 * XREFs of CrmUnregister @ 0x180008D80
 * Callers:
 *     AcpReleaseClientRegistration @ 0x18001BA68 (AcpReleaseClientRegistration.c)
 * Callees:
 *     ?CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x180008DB8 (-CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z.c)
 */

BOOLEAN __fastcall CrmUnregister(struct _CRMP_REGISTRATION_CONTEXT *a1)
{
  CrmpRegistrationContextCleanup(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
