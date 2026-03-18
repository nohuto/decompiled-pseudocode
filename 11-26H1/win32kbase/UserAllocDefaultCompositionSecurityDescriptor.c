/*
 * XREFs of UserAllocDefaultCompositionSecurityDescriptor @ 0x140043A00
 * Callers:
 *     CreateSharedResourceObject @ 0x140057834 (CreateSharedResourceObject.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x140058A80 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     DCompositionCreateSynchronizationObject @ 0x140228680 (DCompositionCreateSynchronizationObject.c)
 *     NtDCompositionCreateBufferCollection @ 0x140228B60 (NtDCompositionCreateBufferCollection.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     AllocAce @ 0x140108680 (AllocAce.c)
 *     AllocateWindowManagerSid @ 0x1401197D0 (AllocateWindowManagerSid.c)
 *     ?AllocateLocalSystemSid@@YAJPEAPEAX@Z @ 0x140119CE0 (-AllocateLocalSystemSid@@YAJPEAPEAX@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall UserAllocDefaultCompositionSecurityDescriptor(int a1, struct _ACL **a2)
{
  void *v2; // rdi
  PSID v3; // r12
  __int64 v5; // rdx
  NTSTATUS v6; // esi
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG v9; // ebx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  char *v12; // rax
  PSID v13; // r8
  int v14; // eax
  int v15; // r15d
  unsigned __int64 v16; // rcx
  struct _ACL *v17; // rax
  struct _ACL *v18; // r14
  NTSTATUS v19; // ebx
  char *v21; // rax
  char *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  ULONG v26; // r9d
  unsigned int AceListLength; // r15d
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  PSID *v30; // r14
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  PSID *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // rcx
  ULONG v41; // eax
  __int64 v42; // r14
  unsigned __int64 v43; // rcx
  char *v44; // rax
  char *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  ULONG v49; // r9d
  PSID v50; // r8
  ULONG ReturnLength; // [rsp+30h] [rbp-38h] BYREF
  ULONG v52; // [rsp+34h] [rbp-34h] BYREF
  ULONG v53; // [rsp+38h] [rbp-30h] BYREF
  ULONG DestinationSidLength; // [rsp+3Ch] [rbp-2Ch]
  HANDLE Handle; // [rsp+40h] [rbp-28h] BYREF
  PSID Sid; // [rsp+48h] [rbp-20h] BYREF
  PSID v57; // [rsp+50h] [rbp-18h]
  PVOID Buffer; // [rsp+58h] [rbp-10h]
  PSID SourceSid; // [rsp+B8h] [rbp+50h] BYREF
  ULONG TokenInformationLength; // [rsp+C0h] [rbp+58h] BYREF
  int TokenInformation; // [rsp+C8h] [rbp+60h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  Sid = 0LL;
  SourceSid = 0LL;
  Handle = 0LL;
  *a2 = 0LL;
  v6 = AllocateLocalSystemSid(&Sid);
  if ( v6 >= 0 )
  {
    v9 = RtlLengthSid(Sid);
    v10 = v9 + 8;
    v12 = (char *)Win32AllocPoolWithQuotaZInitImpl(v11, v10, 0x65737355u);
    v2 = v12;
    if ( !v12 )
    {
      v2 = 0LL;
      goto LABEL_5;
    }
    v13 = Sid;
    *(_WORD *)v12 = 0;
    *((_WORD *)v12 + 1) = v10;
    *((_DWORD *)v12 + 1) = 0x10000000;
    RtlCopySid(v9, v12 + 8, v13);
    v14 = AllocateWindowManagerSid(&SourceSid);
    v3 = SourceSid;
    v6 = v14;
    if ( v14 < 0 )
      goto LABEL_11;
    LODWORD(SourceSid) = RtlLengthSid(SourceSid);
    v15 = (_DWORD)SourceSid + 8;
    v16 = (unsigned int)(v10 + (_DWORD)SourceSid + 8);
    if ( (unsigned int)v16 < (unsigned int)v10 )
      goto LABEL_5;
    v21 = (char *)Win32AllocPoolWithQuotaZInitImpl(v16, (unsigned int)v16, 0x65737355u);
    v22 = v21;
    if ( !v21 )
      goto LABEL_5;
    memmove(v21, v2, (unsigned int)v10);
    GreDeleteFastMutex((char *)v2, v23, v24, v25);
    v26 = (unsigned int)SourceSid;
    AceListLength = v10 + v15;
    *(_WORD *)&v22[v10] = 0;
    TokenInformationLength = AceListLength;
    *(_DWORD *)&v22[v10 + 4] = 3;
    *(_WORD *)&v22[v10 + 2] = v26 + 8;
    RtlCopySid(v26, &v22[v10 + 8], v3);
    v2 = v22;
    if ( !a1 )
    {
LABEL_38:
      if ( AceListLength + 8 >= AceListLength && AceListLength + 48 >= AceListLength + 8 )
      {
        v17 = (struct _ACL *)Win32AllocPoolWithQuotaZInitImpl(v28, AceListLength + 48, 0x65737355u);
        v18 = v17;
        if ( v17 )
        {
          RtlCreateSecurityDescriptor(v17, 1u);
          if ( RtlCreateAcl(v18 + 5, AceListLength + 8, 2u) >= 0
            && RtlAddAce(v18 + 5, 2u, 0xFFFFFFFF, v2, AceListLength) >= 0 )
          {
            v19 = RtlSetDaclSecurityDescriptor(v18, 1u, v18 + 5, 0);
            RtlSetSaclSecurityDescriptor(v18, 0, 0LL, 0);
            RtlSetOwnerSecurityDescriptor(v18, 0LL, 0);
            RtlSetGroupSecurityDescriptor(v18, 0LL, 0);
            if ( v19 >= 0 )
            {
              *a2 = v18;
              goto LABEL_11;
            }
          }
          GreDeleteFastMutex((char *)v18, v5, v7, v8);
        }
      }
      *a2 = 0LL;
LABEL_5:
      v6 = -1073741801;
      goto LABEL_11;
    }
    TokenInformation = 0;
    v6 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &Handle);
    if ( v6 >= 0 )
    {
      ReturnLength = 0;
      ZwQueryInformationToken(Handle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
      if ( !TokenInformation )
        goto LABEL_29;
      LODWORD(SourceSid) = 0;
      ZwQueryInformationToken(Handle, TokenAppContainerSid, 0LL, 0, (PULONG)&SourceSid);
      v30 = (PSID *)Win32AllocPoolWithQuotaZInitImpl(v29, (unsigned int)SourceSid, 0x65737355u);
      if ( !v30 )
      {
        v2 = v22;
        goto LABEL_5;
      }
      v52 = 0;
      v6 = ZwQueryInformationToken(Handle, TokenAppContainerSid, v30, (ULONG)SourceSid, &v52);
      v2 = v22;
      if ( v6 >= 0 )
      {
        v34 = AllocAce(v22, *v30, (__int64)&TokenInformationLength);
        AceListLength = TokenInformationLength;
        v2 = (void *)v34;
        if ( !v34 )
        {
          v6 = -1073741801;
          v2 = v22;
        }
      }
      GreDeleteFastMutex((char *)v30, v31, v32, v33);
      if ( v6 >= 0 )
      {
LABEL_29:
        TokenInformationLength = 0;
        v6 = ZwQueryInformationToken(Handle, TokenUser, 0LL, 0, &TokenInformationLength);
        Buffer = Win32AllocPoolWithQuotaZInitImpl(v35, TokenInformationLength, 0x65737355u);
        v36 = (PSID *)Buffer;
        if ( !Buffer )
          goto LABEL_37;
        v53 = 0;
        v6 = ZwQueryInformationToken(Handle, TokenUser, Buffer, TokenInformationLength, &v53);
        if ( v6 < 0 )
        {
LABEL_36:
          GreDeleteFastMutex((char *)Buffer, v37, v38, v39);
LABEL_37:
          if ( v6 >= 0 )
            goto LABEL_38;
          goto LABEL_11;
        }
        v57 = *v36;
        DestinationSidLength = RtlLengthSid(v57);
        v41 = DestinationSidLength + 8;
        if ( v2 )
        {
          v42 = AceListLength;
          v43 = v41 + AceListLength;
          if ( (unsigned int)v43 >= AceListLength )
          {
            v44 = (char *)Win32AllocPoolWithQuotaZInitImpl(v43, (unsigned int)v43, 0x65737355u);
            v45 = v44;
            if ( v44 )
            {
              memmove(v44, v2, AceListLength);
              GreDeleteFastMutex((char *)v2, v46, v47, v48);
LABEL_35:
              v49 = DestinationSidLength;
              v50 = v57;
              *(_WORD *)&v45[v42] = 0;
              AceListLength = v49 + 8 + v42;
              *(_WORD *)&v45[v42 + 2] = v49 + 8;
              *(_DWORD *)&v45[v42 + 4] = a1;
              RtlCopySid(v49, &v45[v42 + 8], v50);
              v2 = v45;
              goto LABEL_36;
            }
          }
        }
        else
        {
          v42 = 0LL;
          v45 = (char *)Win32AllocPoolWithQuotaZInitImpl(v40, v41, 0x65737355u);
          if ( v45 )
            goto LABEL_35;
        }
        v6 = -1073741801;
        goto LABEL_36;
      }
    }
  }
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  if ( Sid )
    GreDeleteFastMutex((char *)Sid, v5, v7, v8);
  if ( v3 )
    GreDeleteFastMutex((char *)v3, v5, v7, v8);
  if ( v2 )
    GreDeleteFastMutex((char *)v2, v5, v7, v8);
  return (unsigned int)v6;
}
