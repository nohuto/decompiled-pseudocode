/*
 * XREFs of NdisGetThreadObjectCompartmentId @ 0x14004A5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisGetThreadObjectCompartmentId(PETHREAD Thread)
{
  unsigned int *ThreadProperty; // rax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  PACCESS_TOKEN v5; // rax
  void *v6; // rbp
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v8; // edi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v10; // rcx
  PACCESS_TOKEN v11; // rax
  void *v12; // rbp
  unsigned int ThreadSessionId; // eax
  NTSTATUS InformationToken; // edi
  NTSTATUS v16; // edi
  KIRQL v17; // al
  unsigned int v18; // ebx
  PVOID TokenInformation[2]; // [rsp+20h] [rbp-28h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+58h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+60h] [rbp+18h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+68h] [rbp+20h] BYREF

  ThreadProperty = (unsigned int *)PsGetThreadProperty(Thread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v18 = *ThreadProperty;
    ObfDereferenceObject(ThreadProperty);
    if ( v18 )
      return v18;
  }
  v3 = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation[0] = 0LL;
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
    goto LABEL_5;
  }
  v5 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v6 = v5;
  if ( !v5
    || (InformationToken = SeQueryInformationToken(v5, TokenSessionId, TokenInformation),
        PsDereferenceImpersonationToken(v6),
        InformationToken < 0) )
  {
    CurrentProcessSessionId = PsGetThreadSessionId(Thread);
LABEL_5:
    v8 = CurrentProcessSessionId;
    goto LABEL_6;
  }
  v8 = (unsigned int)TokenInformation[0];
LABEL_6:
  if ( v8 != -1 )
    goto LABEL_11;
  CurrentThread = KeGetCurrentThread();
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation[0] = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    ThreadSessionId = PsGetCurrentProcessSessionId(v10);
    goto LABEL_10;
  }
  v11 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v12 = v11;
  if ( !v11
    || (v16 = SeQueryInformationToken(v11, TokenSessionId, TokenInformation),
        PsDereferenceImpersonationToken(v12),
        v16 < 0) )
  {
    ThreadSessionId = PsGetThreadSessionId(CurrentThread);
LABEL_10:
    v8 = ThreadSessionId;
    goto LABEL_11;
  }
  v8 = (unsigned int)TokenInformation[0];
LABEL_11:
  if ( v8 >= dword_14011E898 )
    return 1LL;
  v17 = KeAcquireSpinLockRaiseToDpc(&qword_14011E8E0);
  if ( v8 < dword_14011E898 )
    v3 = *((_DWORD *)qword_14011E8E8 + 6 * v8);
  KeReleaseSpinLock(&qword_14011E8E0, v17);
  if ( !v3 )
    return 1;
  return v3;
}
