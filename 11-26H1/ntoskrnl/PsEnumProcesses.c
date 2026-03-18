/*
 * XREFs of PsEnumProcesses @ 0x14096E8BC
 * Callers:
 *     PsRefreshUserPresencePpmPolicies @ 0x140614F24 (PsRefreshUserPresencePpmPolicies.c)
 *     PfTStart @ 0x1407C67E4 (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x1407DBF90 (PopEtEnergyTrackerCreate.c)
 *     PsShutdownSystem @ 0x1407FA284 (PsShutdownSystem.c)
 *     EtwpDisablePerProcessTracing @ 0x140828458 (EtwpDisablePerProcessTracing.c)
 *     EtwpPsProvCaptureState @ 0x14082FE4C (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x1408314FC (EtwpCoverageSamplerStart.c)
 *     PopEtEnergyTrackerQuery @ 0x140B66F4C (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PsGetNextProcess @ 0x14096EE20 (PsGetNextProcess.c)
 */

__int64 __fastcall PsEnumProcesses(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  __int64 result; // rax
  void *v5; // rbx
  int v6; // edi

  v3 = 0LL;
  while ( 1 )
  {
    result = PsGetNextProcess(v3);
    v5 = (void *)result;
    if ( !result )
      break;
    v6 = guard_dispatch_icall_no_overrides(result, a2);
    v3 = v5;
    if ( v6 < 0 )
    {
      ObfDereferenceObjectWithTag(v5, 0x6E457350u);
      return (unsigned int)v6;
    }
  }
  return result;
}
