/*
 * XREFs of PsEnumProcesses @ 0x1409BBF0C
 * Callers:
 *     PsRefreshUserPresencePpmPolicies @ 0x140617DDC (PsRefreshUserPresencePpmPolicies.c)
 *     PfTStart @ 0x1407C9844 (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x1407E01B0 (PopEtEnergyTrackerCreate.c)
 *     PsShutdownSystem @ 0x1407FFCB4 (PsShutdownSystem.c)
 *     EtwpDisablePerProcessTracing @ 0x14082E698 (EtwpDisablePerProcessTracing.c)
 *     EtwpPsProvCaptureState @ 0x14083608C (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x14083773C (EtwpCoverageSamplerStart.c)
 *     PopEtEnergyTrackerQuery @ 0x140B69ED8 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
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
