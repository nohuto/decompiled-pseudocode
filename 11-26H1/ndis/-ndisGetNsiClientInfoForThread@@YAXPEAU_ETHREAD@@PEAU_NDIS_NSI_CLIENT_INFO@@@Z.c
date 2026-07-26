/*
 * XREFs of ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1400410B0
 * Callers:
 *     ?ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDENTIFIER_OUT@@@Z @ 0x14013A0DC (-ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDEN.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetNsiClientInfoForThread(PETHREAD Thread, struct _NDIS_NSI_CLIENT_INFO *a2)
{
  _DWORD *ThreadProperty; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v5; // rdi
  __int64 v6; // rcx
  PACCESS_TOKEN v7; // rax
  void *v8; // rbp
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v10; // ebx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v12; // rcx
  PACCESS_TOKEN v13; // rax
  void *v14; // r14
  unsigned int ThreadSessionId; // eax
  int v16; // eax
  KIRQL v17; // al
  unsigned int v18; // r8d
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rcx
  NTSTATUS InformationToken; // ebx
  NTSTATUS v21; // ebx
  int v22; // ebp
  KIRQL v23; // al
  PVOID TokenInformation[2]; // [rsp+20h] [rbp-38h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+68h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+70h] [rbp+18h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+78h] [rbp+20h] BYREF

  *(_OWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  ThreadProperty = PsGetThreadProperty(Thread, 0x6D43644EuLL, 0);
  v5 = 0LL;
  if ( ThreadProperty )
  {
    *((_DWORD *)a2 + 1) = *ThreadProperty;
    *(_DWORD *)a2 = ThreadProperty[1];
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
  }
  if ( !*((_DWORD *)a2 + 1) )
  {
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation[0] = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    }
    else
    {
      v7 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v8 = v7;
      if ( v7 )
      {
        InformationToken = SeQueryInformationToken(v7, TokenSessionId, TokenInformation);
        PsDereferenceImpersonationToken(v8);
        if ( InformationToken >= 0 )
        {
          v10 = (unsigned int)TokenInformation[0];
LABEL_8:
          if ( v10 == -1 )
          {
            CurrentThread = KeGetCurrentThread();
            CopyOnOpen = 0;
            EffectiveOnly = 0;
            ImpersonationLevel = SecurityAnonymous;
            TokenInformation[0] = 0LL;
            if ( KeGetCurrentIrql() >= 2u )
            {
              ThreadSessionId = PsGetCurrentProcessSessionId(v12);
            }
            else
            {
              v13 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
              v14 = v13;
              if ( v13 )
              {
                v21 = SeQueryInformationToken(v13, TokenSessionId, TokenInformation);
                PsDereferenceImpersonationToken(v14);
                if ( v21 >= 0 )
                {
                  v10 = (unsigned int)TokenInformation[0];
                  goto LABEL_13;
                }
              }
              ThreadSessionId = PsGetThreadSessionId(CurrentThread);
            }
            v10 = ThreadSessionId;
          }
LABEL_13:
          if ( v10 < dword_14011E898 )
          {
            v22 = 0;
            v23 = KeAcquireSpinLockRaiseToDpc(&qword_14011E8E0);
            if ( v10 < dword_14011E898 )
              v22 = *((_DWORD *)qword_14011E8E8 + 6 * v10);
            KeReleaseSpinLock(&qword_14011E8E0, v23);
            if ( !v22 )
              v22 = 1;
            v16 = v22;
          }
          else
          {
            v16 = 1;
          }
          *((_DWORD *)a2 + 1) = v16;
          goto LABEL_16;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(Thread);
    }
    v10 = CurrentProcessSessionId;
    goto LABEL_8;
  }
LABEL_16:
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v18 = *((_DWORD *)a2 + 1);
  for ( i = qword_14011E9D8;
        i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8;
        i = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)i )
  {
    if ( *((_DWORD *)i + 4) == v18 )
    {
      v5 = i;
      break;
    }
    if ( *((_DWORD *)i + 4) > v18 )
      break;
  }
  *(_OWORD *)((char *)a2 + 8) = *(_OWORD *)((char *)v5 + 1684);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v17);
}
