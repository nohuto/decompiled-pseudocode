/*
 * XREFs of ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800800A0
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180074560 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpEnforcerContextCleanup@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180083C7C (-RmpEnforcerContextCleanup@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x180084520 (-RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800849A4 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x1800865AC (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800886EC (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpCleanupAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  _QWORD *i; // rsi
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = *((_QWORD *)a1 + 443);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)a1 + 443) = 0LL;
  }
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 648));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16));
  if ( *((_QWORD *)a1 + 423) )
    TpReleasePool();
  v3 = (void *)*((_QWORD *)a1 + 420);
  if ( v3 )
    HampFreeHeap(v3);
  v4 = (void *)*((_QWORD *)a1 + 422);
  if ( v4 )
    HampFreeHeap(v4);
  RmpAcquireGlobalLock();
  for ( i = (_QWORD *)((char *)a1 + 800);
        (_QWORD *)*i != i;
        RmpCpuSetManagerReleaseClientContext((struct _RM_CPU_SET_CLIENT_CONTEXT *)(*i - 8LL)) )
  {
    ;
  }
  RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 792));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 816));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 840));
  v6 = (void *)*((_QWORD *)a1 + 109);
  if ( v6 )
    HampFreeHeap(v6);
  RmpReleaseGlobalLock();
  RmpEnforcerContextCleanup(a1);
  v7 = *((_QWORD *)a1 + 284);
  if ( v7 )
    TpReleaseWork(v7);
  RmpPartitionCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312));
  v8 = *((_QWORD *)a1 + 84);
  if ( v8 )
    TpReleaseTimer(v8);
  *((_DWORD *)a1 + 196) &= ~1u;
  HampManagerCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2360));
}
