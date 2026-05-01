/*
 * XREFs of ?CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x180008DB8
 * Callers:
 *     CrmRegister @ 0x1800089A0 (CrmRegister.c)
 *     CrmUnregister @ 0x180008D80 (CrmUnregister.c)
 * Callees:
 *     <none>
 */

void __fastcall CrmpRegistrationContextCleanup(struct _CRMP_REGISTRATION_CONTEXT *a1)
{
  if ( *((_QWORD *)a1 + 1) )
  {
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EC20, 1u, 0LL);
    *((_QWORD *)a1 + 2) = 0LL;
  }
}
