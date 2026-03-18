/*
 * XREFs of PoInitHiberServices @ 0x1407C8370
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14084E49C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ExIsSoftBoot @ 0x14052A6C0 (ExIsSoftBoot.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     BiOpenStoreWithHash @ 0x140773404 (BiOpenStoreWithHash.c)
 *     PopInitializeHibernateGlobals @ 0x1407D0394 (PopInitializeHibernateGlobals.c)
 *     PopSubscribeHibernatePolicyWnf @ 0x1407D0974 (PopSubscribeHibernatePolicyWnf.c)
 *     PopTraceHibernatePolicyUpdate @ 0x1407D59EC (PopTraceHibernatePolicyUpdate.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x1407DDA3C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopHibernateEvaluation @ 0x140943464 (PopHibernateEvaluation.c)
 *     BcdCloseStore @ 0x1409D0088 (BcdCloseStore.c)
 *     PopBcdClearPendingResume @ 0x1409D08F8 (PopBcdClearPendingResume.c)
 *     PopAcquireTransitionLock @ 0x140B39914 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140B4C040 (PopReleaseTransitionLock.c)
 *     PopBcdEstablishResumeObject @ 0x140B68C20 (PopBcdEstablishResumeObject.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
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
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  char v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = 0LL;
  v13 = 0;
  RtlInitUnicodeString(&unk_140F10DF0, L"\\OSDataRoot");
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
    && (int)BiOpenStoreWithHash(v7, 2u, v8, (__int64)&v14) >= 0 )
  {
    v9 = v14;
    PopBcdEstablishResumeObject(v14, 0LL);
    PopBcdClearPendingResume(v9);
    BcdCloseStore(v9);
  }
  PopSubscribeHibernatePolicyWnf();
  PopAdaptiveClearInitialSystemPowerState();
  result = qword_140E67548;
  if ( qword_140E67548 )
    return guard_dispatch_icall_no_overrides(v11, v10);
  return result;
}
