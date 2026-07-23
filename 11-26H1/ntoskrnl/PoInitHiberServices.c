/*
 * XREFs of PoInitHiberServices @ 0x1407CB3D0
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1408547AC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ExIsSoftBoot @ 0x14052CBE0 (ExIsSoftBoot.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     BiOpenStoreWithHash @ 0x140776404 (BiOpenStoreWithHash.c)
 *     PopInitializeHibernateGlobals @ 0x1407D3434 (PopInitializeHibernateGlobals.c)
 *     PopSubscribeHibernatePolicyWnf @ 0x1407D3A14 (PopSubscribeHibernatePolicyWnf.c)
 *     PopTraceHibernatePolicyUpdate @ 0x1407D8B9C (PopTraceHibernatePolicyUpdate.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x1407E206C (PopAdaptiveClearInitialSystemPowerState.c)
 *     BcdCloseStore @ 0x1409A1068 (BcdCloseStore.c)
 *     PopBcdClearPendingResume @ 0x1409A18D8 (PopBcdClearPendingResume.c)
 *     PopHibernateEvaluation @ 0x1409BEDDC (PopHibernateEvaluation.c)
 *     PopAcquireTransitionLock @ 0x140B3BB24 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140B4DDD0 (PopReleaseTransitionLock.c)
 *     PopBcdEstablishResumeObject @ 0x140B6BBB0 (PopBcdEstablishResumeObject.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 PoInitHiberServices()
{
  int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  HANDLE v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  char v13; // [rsp+30h] [rbp+8h] BYREF
  HANDLE BcdStoreHandle; // [rsp+38h] [rbp+10h] BYREF

  BcdStoreHandle = 0LL;
  v13 = 0;
  RtlInitUnicodeString(&PoHiberFileRoot, L"\\OSDataRoot");
  PopInitializeHibernateGlobals();
  v0 = PopHiberFileTypeReg;
  if ( PopHiberFileTypeReg != -1 || (v0 = PopHiberFileTypeDefaultReg, PopHiberFileTypeDefaultReg != -1) )
    PopHiberFileType = v0;
  PopAcquireTransitionLock(2LL);
  PopAcquirePolicyLock(v2, v1);
  v3 = PopAllowHibernateReg;
  LOBYTE(v4) = 1;
  LOBYTE(v5) = 1;
  PopHibernateEvaluation(v5, v4, &v13);
  PopReleasePolicyLock();
  PopReleaseTransitionLock(2LL);
  LOBYTE(v6) = v13;
  PopTraceHibernatePolicyUpdate(v3, v6);
  if ( !ExIsSoftBoot()
    && (v13 || !PopHiberBootOptimizationEnabledReg)
    && (int)BiOpenStoreWithHash(v7, 2u, v8, (__int64)&BcdStoreHandle) >= 0 )
  {
    v9 = BcdStoreHandle;
    PopBcdEstablishResumeObject(BcdStoreHandle);
    PopBcdClearPendingResume(v9);
    BcdCloseStore(v9);
  }
  PopSubscribeHibernatePolicyWnf();
  PopAdaptiveClearInitialSystemPowerState();
  result = qword_140E677A8;
  if ( qword_140E677A8 )
    return guard_dispatch_icall_no_overrides(v11, v10);
  return result;
}
