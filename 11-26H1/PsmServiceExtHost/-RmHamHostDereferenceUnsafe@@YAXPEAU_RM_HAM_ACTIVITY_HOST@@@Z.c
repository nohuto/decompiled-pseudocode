/*
 * XREFs of ?RmHamHostDereferenceUnsafe@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026830
 * Callers:
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180015F54 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026C18 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmHamHostDereferenceUnsafe(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  if ( (*((_QWORD *)a1 + 75))-- == 1LL )
    RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)a1 - 56) & -(__int64)(a1 != 0LL)));
}
