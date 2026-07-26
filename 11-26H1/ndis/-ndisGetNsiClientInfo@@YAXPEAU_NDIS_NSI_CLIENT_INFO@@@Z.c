/*
 * XREFs of ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14001C710
 * Callers:
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x14001C190 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisMIsCompartmentAccessibleByClient@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001C480 (-ndisMIsCompartmentAccessibleByClient@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1400D0C80 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400D1780 (-ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1400D33E0 (-ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400D3660 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400D3970 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1400D3EE0 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisEnumerateInterfaces32 @ 0x140174CBC (ndisEnumerateInterfaces32.c)
 *     ndisEnumerateInterfaces @ 0x140179810 (ndisEnumerateInterfaces.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetNsiClientInfo(struct _NDIS_NSI_CLIENT_INFO *a1)
{
  struct _KTHREAD *CurrentThread; // r14
  _DWORD *ThreadProperty; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v4; // rdi
  PACCESS_TOKEN v5; // rax
  void *v6; // rbp
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v8; // ebx
  struct _KTHREAD *v9; // rbp
  PACCESS_TOKEN v10; // rax
  void *v11; // r14
  unsigned int ThreadSessionId; // eax
  int v13; // eax
  KIRQL v14; // al
  unsigned int v15; // r8d
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rcx
  NTSTATUS v17; // ebx
  NTSTATUS v18; // ebx
  int v19; // ebp
  KIRQL v20; // al
  BOOLEAN EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_OWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  ThreadProperty = PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v4 = 0LL;
  if ( ThreadProperty )
  {
    *((_DWORD *)a1 + 1) = *ThreadProperty;
    *(_DWORD *)a1 = ThreadProperty[1];
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
  }
  if ( !*((_DWORD *)a1 + 1) )
  {
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    }
    else
    {
      v5 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v6 = v5;
      if ( v5 )
      {
        v17 = SeQueryInformationToken(v5, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v6);
        if ( v17 >= 0 )
        {
          v8 = (unsigned int)TokenInformation;
LABEL_8:
          if ( v8 == -1 )
          {
            v9 = KeGetCurrentThread();
            CopyOnOpen = 0;
            EffectiveOnly = 0;
            ImpersonationLevel = SecurityAnonymous;
            TokenInformation = 0LL;
            if ( KeGetCurrentIrql() >= 2u )
            {
              ThreadSessionId = PsGetCurrentProcessSessionId();
            }
            else
            {
              v10 = PsReferenceImpersonationToken(v9, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
              v11 = v10;
              if ( v10 )
              {
                v18 = SeQueryInformationToken(v10, TokenSessionId, &TokenInformation);
                PsDereferenceImpersonationToken(v11);
                if ( v18 >= 0 )
                {
                  v8 = (unsigned int)TokenInformation;
                  goto LABEL_13;
                }
              }
              ThreadSessionId = PsGetThreadSessionId(v9);
            }
            v8 = ThreadSessionId;
          }
LABEL_13:
          if ( v8 < dword_14011E898 )
          {
            v19 = 0;
            v20 = KeAcquireSpinLockRaiseToDpc(&qword_14011E8E0);
            if ( v8 < dword_14011E898 )
              v19 = *((_DWORD *)qword_14011E8E8 + 6 * v8);
            KeReleaseSpinLock(&qword_14011E8E0, v20);
            if ( !v19 )
              v19 = 1;
            v13 = v19;
          }
          else
          {
            v13 = 1;
          }
          *((_DWORD *)a1 + 1) = v13;
          goto LABEL_16;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v8 = CurrentProcessSessionId;
    goto LABEL_8;
  }
LABEL_16:
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v15 = *((_DWORD *)a1 + 1);
  for ( i = qword_14011E9D8;
        i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8;
        i = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)i )
  {
    if ( *((_DWORD *)i + 4) == v15 )
    {
      v4 = i;
      break;
    }
    if ( *((_DWORD *)i + 4) > v15 )
      break;
  }
  *(_OWORD *)((char *)a1 + 8) = *(_OWORD *)((char *)v4 + 1684);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v14);
}
