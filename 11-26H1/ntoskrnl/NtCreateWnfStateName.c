/*
 * XREFs of NtCreateWnfStateName @ 0x1409CAAE0
 * Callers:
 *     DifNtCreateWnfStateNameWrapper @ 0x140678EF0 (DifNtCreateWnfStateNameWrapper.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     SeCaptureSecurityDescriptor @ 0x140901ED0 (SeCaptureSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExpWnfResolveScopeInstance @ 0x1409C6D00 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1409C9C60 (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfGenerateStateName @ 0x1409CB070 (ExpWnfGenerateStateName.c)
 *     ExpExposeWnfStateName @ 0x1409CB444 (ExpExposeWnfStateName.c)
 *     ExpWnfCreateNameInstance @ 0x1409CB5E8 (ExpWnfCreateNameInstance.c)
 *     ExpWnfRegisterPermanentName @ 0x1409CBBBC (ExpWnfRegisterPermanentName.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateWnfStateName(
        PWNF_STATE_NAME StateName,
        WNF_STATE_NAME_LIFETIME NameLifetime,
        WNF_DATA_SCOPE DataScope,
        BOOLEAN PersistData,
        PCWNF_TYPE_ID TypeId,
        ULONG MaximumStateSize,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  PVOID v12; // rsi
  PVOID v13; // rbx
  NTSTATUS NameInstance; // edi
  __int64 v15; // r9
  BOOL v16; // eax
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rbx
  _KPROCESS *Process; // r15
  PVOID P; // [rsp+38h] [rbp-C0h] BYREF
  void *Src; // [rsp+40h] [rbp-B8h]
  int v25[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A0h] BYREF
  __int128 *v27; // [rsp+60h] [rbp-98h]
  _QWORD v28[2]; // [rsp+68h] [rbp-90h] BYREF
  _DWORD v29[2]; // [rsp+78h] [rbp-80h] BYREF
  __int128 *v30; // [rsp+80h] [rbp-78h]
  PVOID v31; // [rsp+88h] [rbp-70h]
  PWNF_STATE_NAME v32; // [rsp+90h] [rbp-68h]
  __int128 *v33; // [rsp+98h] [rbp-60h]
  __int128 v34; // [rsp+A0h] [rbp-58h] BYREF

  v32 = StateName;
  Src = SecurityDescriptor;
  v28[1] = SecurityDescriptor;
  v34 = 0LL;
  v26 = 0LL;
  v28[0] = 0LL;
  v29[1] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v25 = 0LL;
  v12 = 0LL;
  P = 0LL;
  v27 = 0LL;
  if ( PreviousMode )
    ProbeForWrite(StateName, 8uLL, 1u);
  if ( TypeId )
  {
    if ( PreviousMode )
      RtlCopyFromUser(&v34, (void *)TypeId, 0x10uLL);
    else
      RtlCopyVolatileMemory(&v34, TypeId, 0x10uLL);
    v27 = &v34;
    v33 = &v34;
  }
  v13 = Src;
  if ( Src )
  {
    NameInstance = SeCaptureSecurityDescriptor((unsigned __int16 *)Src, PreviousMode, 1, 1, (unsigned __int16 **)&P);
    if ( NameInstance >= 0 )
    {
      v12 = P;
      ExpWnfSpecializeSecurityDescriptor(P);
      v16 = (unsigned int)NameLifetime < WnfPersistentStateName || (unsigned int)(NameLifetime - 2) <= 1;
      if ( !v16
        || NameLifetime == WnfWellKnownStateName
        || ((unsigned int)DataScope >= WnfDataScopeMachine && (unsigned int)(DataScope - 4) > 1 ? (v17 = 0) : (v17 = 1),
            !v17
         || PersistData && ((DataScope & 0xFFFFFFFB) != 0 || NameLifetime != WnfPermanentStateName)
         || MaximumStateSize > 0x1000
         || DataScope == WnfDataScopeProcess && NameLifetime == WnfTemporaryStateName
         || DataScope == WnfDataScopePhysicalMachine) )
      {
        NameInstance = -1073741811;
      }
      else if ( NameLifetime == WnfTemporaryStateName
             || SeSinglePrivilegeCheck(*(LUID *)&PspSiloMonitorLock.SystemCallNumber, PreviousMode) )
      {
        LOBYTE(v15) = PersistData;
        NameInstance = ExpWnfGenerateStateName(&v26, (unsigned int)NameLifetime, (unsigned int)DataScope, v15);
        if ( NameInstance >= 0 )
        {
          LOBYTE(v18) = PreviousMode;
          v19 = v26;
          ExpExposeWnfStateName(v26, v32, v18);
          v29[0] = MaximumStateSize;
          v30 = v27;
          v31 = v12;
          if ( NameLifetime == WnfTemporaryStateName )
          {
            if ( PreviousMode )
              Process = KeGetCurrentThread()->ApcState.Process;
            else
              Process = PsInitialSystemProcess;
            NameInstance = ExpWnfResolveScopeInstance(
                             (struct _EX_RUNDOWN_REF **)v25,
                             (__int64)Process,
                             0LL,
                             DataScope,
                             0LL);
            if ( NameInstance >= 0 )
            {
              NameInstance = ExpWnfCreateNameInstance(v25[0], v19, (unsigned int)v29, (_DWORD)Process, (__int64)v28);
              if ( NameInstance >= 0 )
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v28[0] + 8LL));
            }
          }
          else
          {
            NameInstance = ExpWnfRegisterPermanentName(v19, v29);
          }
          v13 = Src;
        }
      }
      else
      {
        NameInstance = -1073741727;
      }
    }
    else
    {
      v12 = P;
    }
  }
  else
  {
    NameInstance = -1073741819;
  }
  if ( *(_QWORD *)v25 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v25 + 8LL));
  if ( v12 && v12 != v13 && (unsigned __int8)PreviousMode <= 1u )
    ExFreePoolWithTag(v12, 0);
  KeLeaveCriticalRegion();
  return NameInstance;
}
