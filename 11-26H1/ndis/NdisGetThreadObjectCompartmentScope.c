/*
 * XREFs of NdisGetThreadObjectCompartmentScope @ 0x1400402D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisGetThreadObjectCompartmentScope(PETHREAD Thread, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  PACCESS_TOKEN v9; // rax
  void *v10; // rbp
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v12; // edi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v14; // rcx
  PACCESS_TOKEN v15; // rax
  void *v16; // r14
  unsigned int ThreadSessionId; // eax
  NTSTATUS InformationToken; // edi
  NTSTATUS v19; // edi
  KIRQL v20; // al
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+20h] [rbp-28h] BYREF
  PVOID TokenInformation[4]; // [rsp+28h] [rbp-20h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+60h] [rbp+18h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+68h] [rbp+20h] BYREF

  result = (__int64)PsGetThreadProperty(Thread, 0x6D43644EuLL, 0);
  v7 = 0;
  if ( result )
  {
    *a3 = *(_DWORD *)result;
    *a2 = *(_DWORD *)(result + 4);
    result = ObfDereferenceObject((PVOID)result);
  }
  else
  {
    *a3 = 0;
    *a2 = 0;
  }
  if ( *a3 )
    return result;
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation[0] = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    goto LABEL_7;
  }
  v9 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v10 = v9;
  if ( !v9
    || (InformationToken = SeQueryInformationToken(v9, TokenSessionId, TokenInformation),
        PsDereferenceImpersonationToken(v10),
        InformationToken < 0) )
  {
    CurrentProcessSessionId = PsGetThreadSessionId(Thread);
LABEL_7:
    v12 = CurrentProcessSessionId;
    goto LABEL_8;
  }
  v12 = (unsigned int)TokenInformation[0];
LABEL_8:
  if ( v12 == -1 )
  {
    CurrentThread = KeGetCurrentThread();
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation[0] = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      ThreadSessionId = PsGetCurrentProcessSessionId(v14);
    }
    else
    {
      v15 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v16 = v15;
      if ( v15 )
      {
        v19 = SeQueryInformationToken(v15, TokenSessionId, TokenInformation);
        PsDereferenceImpersonationToken(v16);
        if ( v19 >= 0 )
        {
          v12 = (unsigned int)TokenInformation[0];
          goto LABEL_13;
        }
      }
      ThreadSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v12 = ThreadSessionId;
  }
LABEL_13:
  if ( v12 < dword_14011E898 )
  {
    v20 = KeAcquireSpinLockRaiseToDpc(&qword_14011E8E0);
    if ( v12 < dword_14011E898 )
      v7 = *((_DWORD *)qword_14011E8E8 + 6 * v12);
    KeReleaseSpinLock(&qword_14011E8E0, v20);
    if ( !v7 )
      v7 = 1;
    result = v7;
  }
  else
  {
    result = 1LL;
  }
  *a3 = result;
  return result;
}
