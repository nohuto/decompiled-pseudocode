/*
 * XREFs of ExpCrossVmIntHostCallback @ 0x14084C4B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCrossVmIntHostCallback(int a1, struct _EX_RUNDOWN_REF **a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned __int64 ExtensionTable; // rbx
  __int64 Buffer; // [rsp+68h] [rbp+20h] BYREF

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
            Buffer = *(_QWORD *)&CmpFreezeListLock.Timer.Processor;
            if ( ZwUpdateWnfStateData(&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, &Buffer, 8u, 0LL, 0LL, 0, 0) >= 0 )
              CmpFreezeListLock.SchedulerApcFill3[51] = 1;
          }
        }
      }
      ExReleaseExtensionTable(v2);
    }
  }
  return 0LL;
}
