/*
 * XREFs of ?ndisNsiGetAllThreadInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x14004AA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisNsiGetAllThreadInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  int v1; // edx
  int *v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  int *ThreadProperty; // rax
  int v5; // esi
  __int64 v6; // rcx
  PACCESS_TOKEN v7; // rax
  void *v8; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v10; // edi
  struct _KTHREAD *v11; // rbp
  __int64 v12; // rcx
  PACCESS_TOKEN v13; // rax
  void *v14; // r14
  unsigned int ThreadSessionId; // eax
  int v16; // eax
  NTSTATUS v18; // edi
  NTSTATUS v19; // edi
  KIRQL v20; // al
  BOOLEAN EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp+20h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  if ( !v1 )
  {
    v2 = (int *)*((_QWORD *)a1 + 5);
    if ( !v2 )
      return 0LL;
    CurrentThread = KeGetCurrentThread();
    ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
    v5 = 0;
    if ( ThreadProperty )
    {
      *v2 = *ThreadProperty;
      v2[1] = ThreadProperty[1];
      ObfDereferenceObject(ThreadProperty);
    }
    else
    {
      *(_QWORD *)v2 = 0LL;
    }
    if ( *v2 )
      return 0LL;
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    }
    else
    {
      v7 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v8 = v7;
      if ( v7 )
      {
        v18 = SeQueryInformationToken(v7, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v8);
        if ( v18 >= 0 )
        {
          v10 = (unsigned int)TokenInformation;
LABEL_10:
          if ( v10 == -1 )
          {
            v11 = KeGetCurrentThread();
            CopyOnOpen = 0;
            EffectiveOnly = 0;
            ImpersonationLevel = SecurityAnonymous;
            TokenInformation = 0LL;
            if ( KeGetCurrentIrql() >= 2u )
            {
              ThreadSessionId = PsGetCurrentProcessSessionId(v12);
            }
            else
            {
              v13 = PsReferenceImpersonationToken(v11, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
              v14 = v13;
              if ( v13 )
              {
                v19 = SeQueryInformationToken(v13, TokenSessionId, &TokenInformation);
                PsDereferenceImpersonationToken(v14);
                if ( v19 >= 0 )
                {
                  v10 = (unsigned int)TokenInformation;
                  goto LABEL_15;
                }
              }
              ThreadSessionId = PsGetThreadSessionId(v11);
            }
            v10 = ThreadSessionId;
          }
LABEL_15:
          if ( v10 < dword_14011E898 )
          {
            v20 = KeAcquireSpinLockRaiseToDpc(&qword_14011E8E0);
            if ( v10 < dword_14011E898 )
              v5 = *((_DWORD *)qword_14011E8E8 + 6 * v10);
            KeReleaseSpinLock(&qword_14011E8E0, v20);
            if ( !v5 )
              v5 = 1;
            v16 = v5;
          }
          else
          {
            v16 = 1;
          }
          *v2 = v16;
          return 0LL;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v10 = CurrentProcessSessionId;
    goto LABEL_10;
  }
  if ( (unsigned int)(v1 - 1) > 1 )
    return 3221225485LL;
  else
    return 3221225474LL;
}
