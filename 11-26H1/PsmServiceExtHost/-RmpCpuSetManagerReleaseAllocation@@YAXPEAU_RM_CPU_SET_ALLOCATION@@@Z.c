/*
 * XREFs of ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008652C
 * Callers:
 *     ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x180081CB0 (-RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_IN.c)
 *     ?RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x180082208 (-RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x1800865AC (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpGameModeReleaseCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180087D00 (-RmpGameModeReleaseCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     CempListEntryRemoveAndClear @ 0x180013890 (CempListEntryRemoveAndClear.c)
 *     ?RmpObjectTableRemoveObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18005C7F4 (-RmpObjectTableRemoveObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpCpuSetManagerReleaseAllProcessorsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180086468 (-RmpCpuSetManagerReleaseAllProcessorsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18008662C (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

void __fastcall RmpCpuSetManagerReleaseAllocation(_QWORD *P)
{
  __int64 v1; // rdi
  _QWORD *i; // rsi

  v1 = P[6];
  RmpCpuSetManagerReleaseAllProcessorsFromAllocation(
    (struct _RM_CPU_SET_MANAGER *)v1,
    (struct _RM_CPU_SET_ALLOCATION *)P);
  for ( i = P + 10;
        (_QWORD *)*i != i;
        RmpCpuSetManagerReleaseProcessRegistrationEx((struct _RM_CPU_SET_MANAGER *)v1, (PVOID)(*i - 104LL), 0) )
  {
    ;
  }
  CempListEntryRemoveAndClear(P + 8);
  RmpObjectRelease((char *)P);
  RmpObjectTableRemoveObject((struct _RM_OBJECT_TABLE *)(v1 + 24), (struct _RM_OBJECT_HEADER *)P);
  RmpObjectRelease((char *)P);
  RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_CPU_SET_MANAGER *)v1);
}
