/*
 * XREFs of NtImpersonateAnonymousToken @ 0x140AB3DD0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     SepGetAnonymousToken @ 0x1403B321C (SepGetAnonymousToken.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     ObReferenceObjectByPointer @ 0x140458E50 (ObReferenceObjectByPointer.c)
 *     SeTokenIsRestricted @ 0x14045A300 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x1404866B0 (SeTokenIsWriteRestricted.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SepRegQueryDwordValue @ 0x140AB4114 (SepRegQueryDwordValue.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB430C (SepCopyAnonymousTokenAndSetSilo.c)
 */

NTSTATUS __stdcall NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  void *v1; // r14
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v4; // rcx
  const signed __int32 *PrimaryToken; // rbx
  PACCESS_TOKEN ClientToken; // rdi
  __int64 v7; // rcx
  NTSTATUS AnonymousToken; // ebx
  PVOID v9; // rsi
  unsigned __int64 CurrentServerSilo; // rax
  int v11; // eax
  _KPROCESS *Process; // rdi
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  void *v15; // rax
  void *v16; // rbx
  void *v17; // [rsp+40h] [rbp-29h] BYREF
  PACCESS_TOKEN Token; // [rsp+48h] [rbp-21h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-19h] BYREF
  __int128 v20; // [rsp+70h] [rbp+7h] BYREF
  __int128 v21; // [rsp+80h] [rbp+17h]
  __int128 v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h] BYREF
  PVOID v25; // [rsp+E8h] [rbp+7Fh] BYREF

  *(_QWORD *)&v22 = 0LL;
  DWORD2(v22) = 0;
  v1 = 0LL;
  v25 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  Token = 0LL;
  Object = 0LL;
  v17 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v23 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  result = ObReferenceObjectByHandle(ThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (const signed __int32 *)SubjectContext.PrimaryToken;
  ClientToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    ClientToken = SubjectContext.ClientToken;
  if ( ((int)SepRegQueryDwordValue(v4, L"AnonymousAppContainerImpersonationLevelCheck", &v23) < 0 || !v23)
    && *((_DWORD *)ClientToken + 48) != 1
    && _bittest(PrimaryToken + 50, 0xEu)
    && *((int *)ClientToken + 49) < 2 )
  {
    AnonymousToken = -1073741659;
    goto LABEL_13;
  }
  if ( _bittest((const signed __int32 *)ClientToken + 50, 0xEu) )
  {
    AnonymousToken = SepGetAnonymousToken((__int64)ClientToken, &Token);
    if ( AnonymousToken >= 0 )
    {
      AnonymousToken = PsImpersonateClient((PETHREAD)Object, Token, 1u, 0, SecurityImpersonation);
      ObfDereferenceObject(Token);
    }
    goto LABEL_13;
  }
  if ( (int)SepRegQueryDwordValue(v7, L"EveryoneIncludesAnonymous", &v23) < 0
    || (v9 = (PVOID)PspSiloMonitorLock.Padding[0], v23 != 1) )
  {
    v9 = *(PVOID *)&PspSiloMonitorLock.WaitBlockFill11[160];
  }
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    if ( (*((_DWORD *)ClientToken + 50) & 0x380000) != 0 )
    {
      LODWORD(v20) = 48;
      *((_QWORD *)&v20 + 1) = 0LL;
      DWORD2(v21) = 0;
      *(_QWORD *)&v21 = 0LL;
      v22 = 0LL;
      AnonymousToken = SepDuplicateToken((__int64)v9, (int)&v20, 1, 2, 2u, 0, 1, (char **)&v25);
      if ( AnonymousToken < 0 )
        goto LABEL_13;
      *((_DWORD *)v25 + 50) |= *((_DWORD *)ClientToken + 50) & 0x380000;
      v9 = v25;
    }
LABEL_22:
    AnonymousToken = ObReferenceObjectByPointer(
                       v9,
                       4u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       KeGetCurrentThread()->PreviousMode);
    if ( AnonymousToken >= 0 )
    {
      ObfDereferenceObject(v9);
      Process = KeGetCurrentThread()->ApcState.Process;
      v15 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u, v13, v14);
      v16 = v15;
      if ( v15 )
      {
        if ( !SeTokenIsRestricted(v15) || SeTokenIsWriteRestricted(v16) )
        {
          ObFastDereferenceObject((signed __int64 *)&Process[1].ActiveProcessors, (ULONG_PTR)v16, 0x746C6644u);
          AnonymousToken = PsImpersonateClient((PETHREAD)Object, v9, v1 == 0LL, 0, SecurityImpersonation);
        }
        else
        {
          ObfDereferenceObject(v16);
          AnonymousToken = -1073741790;
        }
      }
      else
      {
        AnonymousToken = -1073741823;
      }
    }
    goto LABEL_13;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  v11 = SepCopyAnonymousTokenAndSetSilo(CurrentServerSilo, &v17);
  v1 = v17;
  AnonymousToken = v11;
  if ( v11 >= 0 )
  {
    v9 = v17;
    goto LABEL_22;
  }
LABEL_13:
  SeReleaseSubjectContext(&SubjectContext);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v1 )
    ObfDereferenceObject(v1);
  if ( v25 )
    ObfDereferenceObject(v25);
  return AnonymousToken;
}
