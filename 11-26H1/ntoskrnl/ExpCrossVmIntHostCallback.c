/*
 * XREFs of ExpCrossVmIntHostCallback @ 0x140846250
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCrossVmIntHostCallback(int a1, struct _EX_RUNDOWN_REF **a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned __int64 ExtensionTable; // rbx
  struct _KTHREAD *Thread; // [rsp+68h] [rbp+20h] BYREF

  if ( a1 == 1 )
  {
    v2 = *a2;
    ExtensionTable = ExGetExtensionTable(*a2);
    if ( ExtensionTable )
    {
      if ( (int)guard_dispatch_icall_no_overrides((__int64)ExpObCloseCrossVmEvent, (__int64)ExpObDeleteCrossVmEvent) >= 0
        && (int)guard_dispatch_icall_no_overrides((__int64)ExpObCloseCrossVmMutant, (__int64)ExpObDeleteCrossVmMutant) >= 0 )
      {
        if ( v2 == (struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Flink
          && *(_QWORD *)(ExtensionTable + 128) )
        {
          guard_dispatch_icall_no_overrides((__int64)ExWnfCrossVmCallback, 0LL);
        }
        if ( v2 == WheapConfigTableLock.WaitBlock[0].SparePtr )
        {
          if ( *(_QWORD *)(ExtensionTable + 128) )
          {
            guard_dispatch_icall_no_overrides((__int64)ExWnfCrossVmCallback, 1LL);
            Thread = CmpFreezeListLock.WaitBlock[3].Thread;
            if ( (int)ZwUpdateWnfStateData((__int64)&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, (__int64)&Thread) >= 0 )
              HIBYTE(CmpFreezeListLock.ForegroundLossTime) = 1;
          }
        }
      }
      ExReleaseExtensionTable(v2);
    }
  }
  return 0LL;
}
