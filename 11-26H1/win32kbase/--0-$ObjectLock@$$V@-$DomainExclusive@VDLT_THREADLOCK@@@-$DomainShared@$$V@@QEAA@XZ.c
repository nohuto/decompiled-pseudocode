/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EAF04
 * Callers:
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400491B4 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1400D04F0 (HMUnlockObjectInternal.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x14015DE38 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_THREADLOCK@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x1400EAF64 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_THREADLOCK@@@-$DomainSharedB.c)
 */

__int64 __fastcall DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 UserSessionState; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)a1 = UserSessionState + 42392;
  v8 = W32GetUserSessionState(v6, v5, v7);
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = v8 + 42384;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  DomainSharedBase<>::DomainExclusiveBase<DLT_THREADLOCK>::ObjectLockBase<>::vInitAndLock<>(a1);
  return a1;
}
