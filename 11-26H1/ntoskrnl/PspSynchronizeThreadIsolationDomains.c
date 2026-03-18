/*
 * XREFs of PspSynchronizeThreadIsolationDomains @ 0x1404C6128
 * Callers:
 *     PspAssignPrimaryToken @ 0x140773B18 (PspAssignPrimaryToken.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409EB314 (PspDisablePrimaryTokenExchange.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1409FE890 (PspOneDirectionSecurityDomainCombine.c)
 *     PspCombineSecurityDomains @ 0x140A0021C (PspCombineSecurityDomains.c)
 *     PsSetVmProcessorHostProcess @ 0x140B688F0 (PsSetVmProcessorHostProcess.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x1402C45E0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402C4710 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1404D35B4 (KiAdjustUserIsolationDomainThread.c)
 *     PsGetNextProcessThread @ 0x1409573A0 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PspSynchronizeThreadIsolationDomains(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  v2 = 0LL;
  while ( 1 )
  {
    result = PsGetNextProcessThread(a1, v2);
    v4 = result;
    if ( !result )
      break;
    v6 = -1;
    KiAcquireThreadLockRaiseToDpc(result, &v6);
    if ( (*(_BYTE *)(v4 + 1121) & 3) != 0 )
    {
      LOBYTE(v5) = 1;
      KiAdjustUserIsolationDomainThread(v4, *(_QWORD *)(*(_QWORD *)(v4 + 544) + 1888LL), v5);
    }
    KiReleaseThreadLockLowerIrql(v4, v6);
    v2 = v4;
    a1 = v1;
  }
  return result;
}
