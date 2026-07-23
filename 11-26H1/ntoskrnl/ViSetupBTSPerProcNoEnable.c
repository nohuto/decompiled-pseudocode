/*
 * XREFs of ViSetupBTSPerProcNoEnable @ 0x140C38048
 * Callers:
 *     VfBranchTracingPluginEntry @ 0x140C37C9C (VfBranchTracingPluginEntry.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 ViSetupBTSPerProcNoEnable()
{
  __int64 v0; // rdi
  unsigned int v1; // ecx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0LL;
  Affinity = 0LL;
  for ( PreviousAffinity = 0LL; (unsigned int)v0 < (unsigned int)KeNumberProcessors_0; v0 = (unsigned int)(v0 + 1) )
  {
    v1 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v0);
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v1 >> 6);
    Affinity.Mask = 1LL << v1;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    __writemsr(0x600u, (unsigned __int64)VfBTSDataManagementArea[v0]);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  return 1LL;
}
