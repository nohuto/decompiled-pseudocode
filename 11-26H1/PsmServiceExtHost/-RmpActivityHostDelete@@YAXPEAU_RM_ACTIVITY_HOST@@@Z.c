/*
 * XREFs of ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180023F94
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024AB0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z @ 0x180031BF4 (-RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800328D0 (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005CCF8 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180063950 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180063A78 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpActivityHostDelete(unsigned __int64 P)
{
  char *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx

  if ( *(_QWORD *)(P + 1408) )
    RmpActivityHostRemoveFromRemediationGroup((PVOID)P, 1u);
  v2 = (char *)(P + 56);
  if ( *(_QWORD *)(P + 856) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)((P & -(__int64)(v2 != 0LL)) + 0x30) + 40LL) + 176LL))();
    *(_QWORD *)(P + 856) = 0LL;
  }
  v3 = (_QWORD *)(P + 1056);
  v4 = *(_QWORD *)(P + 1056);
  if ( v4 )
  {
    v5 = P & -(__int64)(v2 != 0LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 40LL) + 192LL))(v4, 0LL);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 40LL) + 176LL))(*v3);
    *v3 = 0LL;
  }
  RmpActivityHostRemoveFromTables((struct _RM_ACTIVITY_HOST *)P);
  RmpPsmAppFamilyTableTryRemoveActivityHost((struct _RM_ACTIVITY_HOST *)P);
  RmpActivityHostCleanupCommonState((struct _RM_ACTIVITY_HOST *)P);
  v6 = *(_QWORD *)(P + 48);
  RmpPolicyResizeScratchBuffers((struct _RM_POLICY_WORK_BUFFER *)(v6 + 432), --*(_DWORD *)(v6 + 480), 0);
  RmpObjectRelease((char *)P);
}
