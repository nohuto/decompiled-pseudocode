/*
 * XREFs of MiIsUserQueryVmCallerTrusted @ 0x140920364
 * Callers:
 *     MmQueryVirtualMemory @ 0x14091F870 (MmQueryVirtualMemory.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockThreadSecurityShared @ 0x140271DC0 (PspUnlockThreadSecurityShared.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     SepPrivilegeCheck @ 0x14042F0A0 (SepPrivilegeCheck.c)
 *     PspLockThreadSecurityShared @ 0x14044ADE0 (PspLockThreadSecurityShared.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeTokenIsAdmin @ 0x140920530 (SeTokenIsAdmin.c)
 *     SeCaptureSubjectContextEx @ 0x140920670 (SeCaptureSubjectContextEx.c)
 */

_BOOL8 __fastcall MiIsUserQueryVmCallerTrusted(PETHREAD Thread, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  struct _KTHREAD *v7; // r14
  void *v8; // rdi
  int v9; // r15d
  struct _KPROCESS *v10; // rdx
  PACCESS_TOKEN ClientToken; // rcx
  char v12; // r14
  BOOL v13; // esi
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-40h] BYREF
  int v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+54h] [rbp-1Ch]
  LUID v18; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+60h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( Thread == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = Thread->Process;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) == 0 )
    goto LABEL_7;
  v7 = KeGetCurrentThread();
  PspLockThreadSecurityShared((__int64)Thread, (__int64)v7, a3, a4);
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v8 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObjectWithTag(v8, 0x74726853u);
  }
  else
  {
    v8 = 0LL;
  }
  PspUnlockThreadSecurityShared((__int64)Thread, v7);
  if ( v8 )
  {
    v9 = 2;
  }
  else
  {
LABEL_7:
    v8 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x74726853u, a3, a4);
    v9 = 1;
  }
  if ( !SeTokenIsAdmin(v8) )
  {
    v10 = Thread->ApcState.Process;
    v18 = SeProfileSingleProcessPrivilege;
    v16 = 1;
    v17 = 1;
    v19 = 0;
    SeCaptureSubjectContextEx(Thread, v10, &SubjectContext);
    ClientToken = SubjectContext.ClientToken;
    if ( SubjectContext.ClientToken )
    {
      if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
      {
        v12 = 0;
        goto LABEL_12;
      }
    }
    else
    {
      ClientToken = SubjectContext.PrimaryToken;
    }
    v12 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v18, 1u, 1, 1);
LABEL_12:
    SeReleaseSubjectContext(&SubjectContext);
    v13 = v12 != 0;
    goto LABEL_13;
  }
  v13 = 1;
LABEL_13:
  if ( v9 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)&Thread->Process[1].ActiveProcessors, (ULONG_PTR)v8, 0x74726853u);
  }
  else if ( v8 )
  {
    ObfDereferenceObjectWithTag(v8, 0x74726853u);
  }
  return v13;
}
