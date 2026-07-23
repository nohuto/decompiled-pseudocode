/*
 * XREFs of PsGetSessionSchedulingGroupByProcess @ 0x140AF6E00
 * Callers:
 *     PsQueryCpuQuotaInformation @ 0x14052D4BC (PsQueryCpuQuotaInformation.c)
 *     PspEstablishDfssHierarchy @ 0x1407FDD54 (PspEstablishDfssHierarchy.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSessionSchedulingGroupByProcess(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 744);
  if ( !v1 || (*(_DWORD *)(a1 + 1532) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v1 + 32) + 32LL);
}
