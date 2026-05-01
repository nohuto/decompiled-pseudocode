/*
 * XREFs of ?CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180004DE0
 * Callers:
 *     CrmActivityAllocateInternal @ 0x180004990 (CrmActivityAllocateInternal.c)
 *     CrmActivityAllocate @ 0x180004AA0 (CrmActivityAllocate.c)
 *     CrmActivityFree @ 0x180004DA0 (CrmActivityFree.c)
 * Callees:
 *     ?CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180004EA0 (-CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 */

void __fastcall CrmpActivityContextCleanup(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax

  CrmpActivityWindowClosedReasonUnsubscribe(a1);
  if ( *((_QWORD *)a1 + 6) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  v2 = (void *)*((_QWORD *)a1 + 8);
  if ( v2 )
    CloseHandle(v2);
  v3 = *((_QWORD *)a1 + 1);
  if ( v3 != -1 )
  {
    v4 = *((_QWORD *)a1 + 2);
    if ( *(_QWORD *)(v4 + 16) )
      CrmpInProcActivityFree();
    else
      NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001DC50, 4u, 0LL, v3, *(_QWORD *)(v4 + 8));
  }
}
