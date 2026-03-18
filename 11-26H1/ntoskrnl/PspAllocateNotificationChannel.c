/*
 * XREFs of PspAllocateNotificationChannel @ 0x1407F7938
 * Callers:
 *     PspCheckEnableNotificationChannel @ 0x140B650F8 (PspCheckEnableNotificationChannel.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ZwCreateWnfStateName @ 0x140724E70 (ZwCreateWnfStateName.c)
 *     ObpGetObjectSecurity @ 0x1408EF250 (ObpGetObjectSecurity.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 *     ObReleaseObjectSecurityEx @ 0x14093C920 (ObReleaseObjectSecurityEx.c)
 *     PsReferenceEffectiveToken @ 0x14094F580 (PsReferenceEffectiveToken.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140A95B60 (RtlGetOwnerSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAllocateNotificationChannel(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rsi
  __int64 v6; // rdx
  NTSTATUS ObjectSecurity; // edi
  PSID Src; // rbx
  ULONG v9; // r13d
  ACL *Pool2; // rax
  ACL *v11; // rdi
  int WnfStateName; // ebx
  char v14; // [rsp+48h] [rbp-19h] BYREF
  BOOLEAN OwnerDefaulted[3]; // [rsp+49h] [rbp-18h] BYREF
  int v16; // [rsp+4Ch] [rbp-15h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-11h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp-9h] BYREF
  PSID Owner; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v20[8]; // [rsp+68h] [rbp+7h] BYREF
  _OWORD v21[2]; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+90h] [rbp+2Fh]
  char v24; // [rsp+E0h] [rbp+7Fh] BYREF

  SecurityDescriptor = 0LL;
  Owner = 0LL;
  v14 = 0;
  v22 = 0LL;
  TokenInformation = 0LL;
  memset(v21, 0, sizeof(v21));
  v4 = 0LL;
  v16 = 0;
  v24 = 0;
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &v24, 0LL);
  if ( ObjectSecurity >= 0 )
  {
    if ( SecurityDescriptor )
    {
      ObjectSecurity = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, OwnerDefaulted);
      if ( ObjectSecurity >= 0 )
      {
        v4 = (void *)PsReferenceEffectiveToken(a2, 1953654867LL, &v16, &v14, v20, 0LL);
        ObjectSecurity = SeQueryInformationToken(v4, TokenUser, &TokenInformation);
        if ( ObjectSecurity >= 0 )
        {
          Src = Owner;
          v9 = 4 * (*((unsigned __int8 *)Owner + 1) + *(unsigned __int8 *)(*(_QWORD *)TokenInformation + 1LL)) + 48;
          Pool2 = (ACL *)ExAllocatePool2(0x40uLL);
          v11 = Pool2;
          if ( Pool2 )
          {
            RtlCreateAcl(Pool2, v9, 2u);
            RtlpAddKnownAce((int)v11, 2, 0, 0x80000000, Src, 0);
            RtlpAddKnownAce((int)v11, 2, 0, 0x80000000, *(void **)TokenInformation, 0);
            RtlCreateSecurityDescriptor(v21, 1u);
            RtlSetDaclSecurityDescriptor(v21, 1u, v11, 0);
            WnfStateName = ZwCreateWnfStateName(a3, 3LL);
            ExFreePoolWithTag(v11, 0x66577350u);
            ObjectSecurity = 0;
            if ( WnfStateName < 0 )
              ObjectSecurity = WnfStateName;
          }
          else
          {
            ObjectSecurity = -1073741670;
          }
        }
      }
    }
    else
    {
      ObjectSecurity = -1073741790;
    }
  }
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  if ( SecurityDescriptor )
  {
    LOBYTE(v6) = v24;
    ObReleaseObjectSecurityEx(SecurityDescriptor, v6, a1);
  }
  if ( v4 )
  {
    if ( v16 == 1 )
      ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a2 + 184) + 584LL), (ULONG_PTR)v4, 0x74726853u);
    else
      ObfDereferenceObjectWithTag(v4, 0x74726853u);
  }
  return (unsigned int)ObjectSecurity;
}
