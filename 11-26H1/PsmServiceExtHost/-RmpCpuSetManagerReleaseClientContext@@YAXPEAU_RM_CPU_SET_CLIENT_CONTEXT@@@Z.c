/*
 * XREFs of ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x1800865AC
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800800A0 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z @ 0x180081EB4 (-RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z.c)
 * Callees:
 *     CempListEntryRemoveAndClear @ 0x180013890 (CempListEntryRemoveAndClear.c)
 *     CempListEntryIsNull @ 0x180014218 (CempListEntryIsNull.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800849A4 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008652C (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18008662C (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

void __fastcall RmpCpuSetManagerReleaseClientContext(struct _RM_CPU_SET_CLIENT_CONTEXT *a1)
{
  struct _RM_CPU_SET_MANAGER *v1; // rsi
  _QWORD *i; // rdi
  _QWORD *j; // rdi
  _QWORD *v5; // rcx

  v1 = *(struct _RM_CPU_SET_MANAGER **)a1;
  for ( i = (_QWORD *)((char *)a1 + 24); (_QWORD *)*i != i; RmpCpuSetManagerReleaseAllocation((_QWORD *)(*i - 64LL)) )
    ;
  RmpCpuSetManagerApplyAllPolicyChanges(v1);
  for ( j = (_QWORD *)((char *)a1 + 40);
        (_QWORD *)*j != j;
        RmpCpuSetManagerReleaseProcessRegistrationEx(v1, (PVOID)(*j - 72LL), 0) )
  {
    ;
  }
  if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a1 + 1) )
    CempListEntryRemoveAndClear(v5);
  HampFreeHeap(a1);
}
