/*
 * XREFs of ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x18005EBE8
 * Callers:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024AB0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005EACC (-RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpEmptyWorkerCleanup(struct _RM_EMPTY_WORKER_CONTEXT *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = *(_QWORD *)a1;
  if ( v2 )
  {
    TpReleaseWork(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = (void *)*((_QWORD *)a1 + 1);
  if ( v3 )
    NtClose(v3);
  v4 = (void *)*((_QWORD *)a1 + 2);
  if ( v4 )
    NtClose(v4);
}
