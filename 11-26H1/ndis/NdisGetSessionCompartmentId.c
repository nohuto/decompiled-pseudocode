/*
 * XREFs of NdisGetSessionCompartmentId @ 0x14003F6A0
 * Callers:
 *     NdisGetProcessObjectCompartmentId @ 0x14003F1E0 (NdisGetProcessObjectCompartmentId.c)
 *     NdisGetJobObjectCompartmentId @ 0x14003F5E0 (NdisGetJobObjectCompartmentId.c)
 *     ?ndisNsiGetAllSessionInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x14003F640 (-ndisNsiGetAllSessionInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1400CDE70 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisGetSessionCompartmentId(unsigned int a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rcx
  PACCESS_TOKEN v5; // rax
  void *v6; // rbp
  unsigned int CurrentProcessSessionId; // eax
  NTSTATUS v9; // ebx
  KIRQL v10; // al
  BOOLEAN EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp+20h] BYREF

  v1 = 0;
  v2 = a1;
  if ( a1 == -1 )
  {
    CurrentThread = KeGetCurrentThread();
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
    }
    else
    {
      v5 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v6 = v5;
      if ( v5 )
      {
        v9 = SeQueryInformationToken(v5, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v6);
        if ( v9 >= 0 )
        {
          v2 = (unsigned int)TokenInformation;
          goto LABEL_6;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v2 = CurrentProcessSessionId;
  }
LABEL_6:
  if ( v2 >= dword_14011E898 )
    return 1LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&qword_14011E8E0);
  if ( v2 < dword_14011E898 )
    v1 = *((_DWORD *)qword_14011E8E8 + 6 * v2);
  KeReleaseSpinLock(&qword_14011E8E0, v10);
  if ( !v1 )
    return 1;
  return v1;
}
