/*
 * XREFs of ?CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x180004938
 * Callers:
 *     CrmRegister @ 0x180004520 (CrmRegister.c)
 *     CrmUnregister @ 0x180004900 (CrmUnregister.c)
 * Callees:
 *     <none>
 */

void __fastcall CrmpRegistrationContextCleanup(struct _CRMP_REGISTRATION_CONTEXT *a1)
{
  if ( *((_QWORD *)a1 + 1) )
  {
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001DC50, 1u, 0LL);
    *((_QWORD *)a1 + 2) = 0LL;
  }
}
