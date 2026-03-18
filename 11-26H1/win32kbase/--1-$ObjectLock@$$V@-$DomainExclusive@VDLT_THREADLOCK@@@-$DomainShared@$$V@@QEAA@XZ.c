/*
 * XREFs of ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x14013637C
 * Callers:
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x140136574 (rimLidClosedPolicyUpdateStateAndApply.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x14015DE38 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     UserPowerInfoCallout @ 0x1401A8D3C (UserPowerInfoCallout.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1401AF7C0 (rimDisplayOffPolicyUpdateStateAndApply.c)
 * Callees:
 *     <none>
 */

void __fastcall DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>(__int64 a1)
{
  PERESOURCE *v2; // rcx

  if ( *(_BYTE *)(a1 + 40) )
  {
    v2 = *(PERESOURCE **)a1;
    if ( v2 )
      ExReleaseResourceAndLeaveCriticalRegion(*v2);
    *(_BYTE *)(a1 + 40) = 0;
  }
}
