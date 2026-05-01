/*
 * XREFs of ?CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180004EA0
 * Callers:
 *     CrmActivityWindowClosedReasonUnsubscribe @ 0x180004510 (CrmActivityWindowClosedReasonUnsubscribe.c)
 *     ?CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180004DE0 (-CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 *     ?CrmpActivityWindowClosedReasonSubscribe@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@P6AXPEAX11@Z1@Z @ 0x180010780 (-CrmpActivityWindowClosedReasonSubscribe@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@P6AXPEAX11@Z1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CrmpActivityWindowClosedReasonUnsubscribe(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  __int64 v2; // rax

  if ( *((_QWORD *)a1 + 12) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)a1 + 12) = 0LL;
  }
  if ( *((_DWORD *)a1 + 22) || *((_DWORD *)a1 + 23) )
  {
    v2 = *((_QWORD *)a1 + 2);
    if ( *(_QWORD *)(v2 + 16) )
      CrmpInProcActivityWindowClosedReasonUnsubscribe(*((_QWORD *)a1 + 1));
    else
      NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001DC50, 9u, 0LL, *((_QWORD *)a1 + 1), *(_QWORD *)(v2 + 8));
    *((_QWORD *)a1 + 11) = 0LL;
  }
}
