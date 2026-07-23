/*
 * XREFs of PspSynchronizeThreadIsolationDomains @ 0x1404BFAD8
 * Callers:
 *     PspAssignPrimaryToken @ 0x140776B18 (PspAssignPrimaryToken.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14091B690 (PspOneDirectionSecurityDomainCombine.c)
 *     PspCombineSecurityDomains @ 0x14091CFB8 (PspCombineSecurityDomains.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409E7AE4 (PspDisablePrimaryTokenExchange.c)
 *     PsSetVmProcessorHostProcess @ 0x140B6B880 (PsSetVmProcessorHostProcess.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x14030F2A0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1404CCE24 (KiAdjustUserIsolationDomainThread.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
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
