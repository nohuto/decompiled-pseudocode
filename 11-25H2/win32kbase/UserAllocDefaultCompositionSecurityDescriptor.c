/*
 * XREFs of UserAllocDefaultCompositionSecurityDescriptor @ 0x1400492B0
 * Callers:
 *     CreateSharedResourceObject @ 0x14004E81C (CreateSharedResourceObject.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x14009B614 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     DCompositionCreateSynchronizationObject @ 0x140226440 (DCompositionCreateSynchronizationObject.c)
 *     NtDCompositionCreateBufferCollection @ 0x140226920 (NtDCompositionCreateBufferCollection.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?AllocateLocalSystemSid@@YAJPEAPEAX@Z @ 0x1400496F0 (-AllocateLocalSystemSid@@YAJPEAPEAX@Z.c)
 *     AllocateWindowManagerSid @ 0x1400497C0 (AllocateWindowManagerSid.c)
 *     CreateSecurityDescriptor @ 0x140049900 (CreateSecurityDescriptor.c)
 *     AllocAce @ 0x140049D70 (AllocAce.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall UserAllocDefaultCompositionSecurityDescriptor(int a1, __int64 *a2)
{
  void *v2; // rbx
  PSID v3; // r15
  NTSTATUS v4; // edi
  ULONG v5; // edi
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rax
  PSID v9; // r8
  int v10; // eax
  int v11; // r12d
  __int64 v12; // rcx
  char *v13; // rax
  char *v14; // r14
  ULONG v15; // ecx
  unsigned int v16; // r13d
  char *v17; // rdx
  __int64 v18; // rcx
  PSID *v19; // r12
  __int64 v20; // rax
  __int64 v21; // rcx
  PSID *v22; // r12
  __int64 v23; // rcx
  ULONG v24; // eax
  unsigned int v25; // r14d
  __int64 v26; // rcx
  void *v27; // rax
  __int64 v28; // r12
  ULONG v29; // ecx
  PSID v30; // r8
  __int64 v31; // rdx
  __int16 v32; // ax
  __int64 SecurityDescriptor; // rax
  void *TokenHandle; // [rsp+30h] [rbp-48h] BYREF
  int TokenInformation; // [rsp+38h] [rbp-40h] BYREF
  PSID Sid; // [rsp+40h] [rbp-38h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-30h] BYREF
  ULONG v39; // [rsp+4Ch] [rbp-2Ch] BYREF
  ULONG v40; // [rsp+50h] [rbp-28h] BYREF
  ULONG DestinationSidLength; // [rsp+54h] [rbp-24h]
  PSID v42; // [rsp+58h] [rbp-20h]
  PVOID Buffer; // [rsp+60h] [rbp-18h]
  PSID SourceSid; // [rsp+D0h] [rbp+58h] BYREF
  ULONG TokenInformationLength; // [rsp+D8h] [rbp+60h] BYREF

  v2 = 0LL;
  Sid = 0LL;
  v3 = 0LL;
  SourceSid = 0LL;
  TokenHandle = 0LL;
  *a2 = 0LL;
  v4 = AllocateLocalSystemSid(&Sid);
  if ( v4 < 0 )
    goto LABEL_27;
  v5 = RtlLengthSid(Sid);
  v6 = v5 + 8;
  v8 = Win32AllocPoolWithQuotaZInitImpl(v7, v5 + 8, 0x65737355u);
  v2 = (void *)v8;
  if ( !v8 )
  {
    v2 = 0LL;
LABEL_36:
    v4 = -1073741801;
    goto LABEL_27;
  }
  v9 = Sid;
  *(_WORD *)v8 = 0;
  *(_WORD *)(v8 + 2) = v6;
  *(_DWORD *)(v8 + 4) = 0x10000000;
  RtlCopySid(v5, (PSID)(v8 + 8), v9);
  v10 = AllocateWindowManagerSid(&SourceSid);
  v3 = SourceSid;
  v4 = v10;
  if ( v10 < 0 )
    goto LABEL_27;
  LODWORD(SourceSid) = RtlLengthSid(SourceSid);
  v11 = (_DWORD)SourceSid + 8;
  v12 = v6 + (_DWORD)SourceSid + 8;
  if ( (unsigned int)v12 < v6 )
    goto LABEL_36;
  v13 = (char *)Win32AllocPoolWithQuotaZInitImpl(v12, (unsigned int)v12, 0x65737355u);
  v14 = v13;
  if ( !v13 )
    goto LABEL_36;
  memmove(v13, v2, v6);
  GreDeleteFastMutex((char *)v2);
  v15 = (unsigned int)SourceSid;
  v16 = v6 + v11;
  v17 = &v14[v6];
  TokenInformationLength = v6 + v11;
  *(_WORD *)v17 = 0;
  *((_WORD *)v17 + 1) = v11;
  *((_DWORD *)v17 + 1) = 3;
  RtlCopySid(v15, v17 + 8, v3);
  v2 = v14;
  if ( !a1 )
  {
LABEL_24:
    SecurityDescriptor = CreateSecurityDescriptor(v2, v16, 0);
    if ( !SecurityDescriptor )
      v4 = -1073741801;
    *a2 = SecurityDescriptor;
    goto LABEL_27;
  }
  TokenInformation = 0;
  v4 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
  if ( v4 < 0 )
    goto LABEL_27;
  ReturnLength = 0;
  ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
  if ( !TokenInformation )
    goto LABEL_14;
  LODWORD(SourceSid) = 0;
  ZwQueryInformationToken(TokenHandle, TokenAppContainerSid, 0LL, 0, (PULONG)&SourceSid);
  v19 = (PSID *)Win32AllocPoolWithQuotaZInitImpl(v18, (unsigned int)SourceSid, 0x65737355u);
  if ( !v19 )
  {
    v4 = -1073741801;
    v2 = v14;
    goto LABEL_27;
  }
  v39 = 0;
  v4 = ZwQueryInformationToken(TokenHandle, TokenAppContainerSid, v19, (ULONG)SourceSid, &v39);
  v2 = v14;
  if ( v4 >= 0 )
  {
    v20 = AllocAce(v14, *v19, (__int64)&TokenInformationLength);
    v16 = TokenInformationLength;
    v2 = (void *)v20;
    if ( !v20 )
    {
      v4 = -1073741801;
      v2 = v14;
    }
  }
  GreDeleteFastMutex((char *)v19);
  if ( v4 >= 0 )
  {
LABEL_14:
    TokenInformationLength = 0;
    v4 = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
    Buffer = (PVOID)Win32AllocPoolWithQuotaZInitImpl(v21, TokenInformationLength, 0x65737355u);
    v22 = (PSID *)Buffer;
    if ( !Buffer )
      goto LABEL_23;
    v40 = 0;
    v4 = ZwQueryInformationToken(TokenHandle, TokenUser, Buffer, TokenInformationLength, &v40);
    if ( v4 >= 0 )
    {
      v42 = *v22;
      DestinationSidLength = RtlLengthSid(v42);
      v24 = DestinationSidLength + 8;
      if ( v2 )
      {
        v25 = v16;
        v26 = v24 + v16;
        if ( (unsigned int)v26 >= v16 )
        {
          v27 = (void *)Win32AllocPoolWithQuotaZInitImpl(v26, (unsigned int)v26, 0x65737355u);
          v28 = (__int64)v27;
          if ( v27 )
          {
            memmove(v27, v2, v16);
            GreDeleteFastMutex((char *)v2);
LABEL_21:
            v29 = DestinationSidLength;
            v30 = v42;
            v31 = v28 + v25;
            v32 = DestinationSidLength + 8;
            v16 = DestinationSidLength + 8 + v25;
            *(_WORD *)v31 = 0;
            *(_WORD *)(v31 + 2) = v32;
            *(_DWORD *)(v31 + 4) = a1;
            RtlCopySid(v29, (PSID)(v31 + 8), v30);
            v2 = (void *)v28;
            goto LABEL_22;
          }
        }
      }
      else
      {
        v25 = 0;
        v28 = Win32AllocPoolWithQuotaZInitImpl(v23, v24, 0x65737355u);
        if ( v28 )
          goto LABEL_21;
      }
      v4 = -1073741801;
    }
LABEL_22:
    GreDeleteFastMutex((char *)Buffer);
LABEL_23:
    if ( v4 < 0 )
      goto LABEL_27;
    goto LABEL_24;
  }
LABEL_27:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( Sid )
    GreDeleteFastMutex((char *)Sid);
  if ( v3 )
    GreDeleteFastMutex((char *)v3);
  if ( v2 )
    GreDeleteFastMutex((char *)v2);
  return (unsigned int)v4;
}
