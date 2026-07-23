/*
 * XREFs of WmipInitializeSecurity @ 0x140CE6910
 * Callers:
 *     WmipDriverEntry @ 0x140CE6560 (WmipDriverEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409A9150 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AA9160 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 WmipInitializeSecurity()
{
  ULONG v0; // ebx
  ACL *Pool2; // rax
  ACL *v2; // rdi
  __int64 result; // rax
  NTSTATUS Acl; // ebx
  PSID v5; // rsi
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-39h] BYREF
  __int16 v7; // [rsp+38h] [rbp-29h] BYREF
  char v8; // [rsp+3Ah] [rbp-27h]
  int v9; // [rsp+40h] [rbp-21h]
  __int128 v10; // [rsp+44h] [rbp-1Dh]
  int v11; // [rsp+54h] [rbp-Dh]
  int v12; // [rsp+5Ch] [rbp-5h]
  int v13; // [rsp+64h] [rbp+3h]
  LONG (__fastcall *v14)(__int64); // [rsp+80h] [rbp+1Fh]
  __int64 (__fastcall *v15)(__int64, int, DWORD *, void *, ULONG *, struct _KLOCK_ENTRIES *, int, __int64); // [rsp+90h] [rbp+2Fh]

  DestinationString = 0LL;
  v0 = 4
     * (*(unsigned __int8 *)(*(_QWORD *)((char *)&RtlpBootStatHandleLock.116 + 4) + 1LL)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *(unsigned __int8 *)(*(_QWORD *)&PspSiloMonitorLock.WaitRegister.Flags + 1LL)
      + *((unsigned __int8 *)SeExports->SeLocalServiceSid + 1)
      + *((unsigned __int8 *)SeExports->SeNetworkServiceSid + 1))
     + 116;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v0, 0x70696D57u);
  v2 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Acl = RtlCreateAcl(Pool2, v0, 2u);
  if ( Acl < 0 )
    goto LABEL_13;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x1FFFFFu, *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
  if ( Acl < 0 )
    goto LABEL_13;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x800u, *(PSID *)&PspSiloMonitorLock.WaitRegister.Flags);
  if ( Acl < 0 )
    goto LABEL_13;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x11FFFFFu, SeAliasAdminsSid);
  if ( Acl < 0 )
    goto LABEL_13;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x1FFFFFu, SeExports->SeLocalServiceSid);
  if ( Acl < 0 )
    goto LABEL_13;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x1FFFFFu, SeExports->SeNetworkServiceSid);
  if ( Acl < 0 )
    goto LABEL_13;
  WmipDefaultAccessSd = (__int64)&WmipDefaultAccessSecurityDescriptor;
  RtlCreateSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, 1u);
  Acl = RtlSetDaclSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, 1u, v2, 0);
  if ( Acl < 0 )
    goto LABEL_13;
  v5 = SeAliasAdminsSid;
  Acl = RtlSetOwnerSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, SeAliasAdminsSid, 0);
  if ( Acl < 0 )
    goto LABEL_13;
  Acl = RtlSetGroupSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, v5, 0);
  if ( Acl < 0 )
    goto LABEL_13;
  SeCaptureSubjectContext(&ymmword_140FD8578);
  memset_0(&v7, 0, 0x78uLL);
  v7 = 120;
  v9 = 256;
  v8 = v8 & 0xE7 | 8;
  v11 = 2039807;
  v15 = WmipSecurityMethod;
  v14 = WmipDeleteMethod;
  v10 = WmipGenericMapping;
  v12 = 512;
  v13 = 168;
  RtlInitUnicodeString(&DestinationString, L"WmiGuid");
  result = ObCreateObjectType(&DestinationString, &v7, 0LL, (__int64)&WmipGuidObjectType);
  Acl = result;
  if ( (int)result < 0 )
  {
LABEL_13:
    ExFreePoolWithTag(v2, 0);
    result = (unsigned int)Acl;
    WmipDefaultAccessSd = 0LL;
  }
  return result;
}
