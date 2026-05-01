/*
 * XREFs of ?CrmpActivityStop@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x18000B0B0
 * Callers:
 *     CrmActivityStop @ 0x18000B0A0 (CrmActivityStop.c)
 * Callees:
 *     <none>
 */

void __fastcall CrmpActivityStop(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(v1 + 16) )
    CrmpInProcActivityStop(*((_QWORD *)a1 + 1));
  else
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001DC50, 7u, 0LL, *((_QWORD *)a1 + 1), *(_QWORD *)(v1 + 8));
}
