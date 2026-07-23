/*
 * XREFs of PspAllocateNotificationChannel @ 0x1407FD498
 * Callers:
 *     PspCheckEnableNotificationChannel @ 0x140B68198 (PspCheckEnableNotificationChannel.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ZwCreateWnfStateName @ 0x140729A40 (ZwCreateWnfStateName.c)
 *     ObpGetObjectSecurity @ 0x1408F5810 (ObpGetObjectSecurity.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     ObReleaseObjectSecurityEx @ 0x1409184C0 (ObReleaseObjectSecurityEx.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     PsReferenceEffectiveToken @ 0x1409CAEC0 (PsReferenceEffectiveToken.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140A98F90 (RtlGetOwnerSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAllocateNotificationChannel(__int64 a1, __int64 a2, _WNF_STATE_NAME *a3)
{
  void *v4; // rsi
  __int64 v6; // rdx
  NTSTATUS ObjectSecurity; // edi
  PSID v8; // rbx
  ULONG v9; // r13d
  ACL *Pool2; // rax
  ACL *v11; // rdi
  NTSTATUS WnfStateName; // ebx
  BOOLEAN OwnerDefaulted[4]; // [rsp+48h] [rbp-19h] BYREF
  int v15; // [rsp+4Ch] [rbp-15h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-11h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp-9h] BYREF
  PSID Owner; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v19[8]; // [rsp+68h] [rbp+7h] BYREF
  _OWORD v20[2]; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+90h] [rbp+2Fh]
  char v23; // [rsp+E0h] [rbp+7Fh] BYREF

  SecurityDescriptor = 0LL;
  Owner = 0LL;
  TokenInformation = 0LL;
  v21 = 0LL;
  v15 = 0;
  memset(v20, 0, sizeof(v20));
  v4 = 0LL;
  v23 = 0;
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &v23, 0LL);
  if ( ObjectSecurity >= 0 )
  {
    if ( SecurityDescriptor )
    {
      ObjectSecurity = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, OwnerDefaulted);
      if ( ObjectSecurity >= 0 )
      {
        v4 = (void *)PsReferenceEffectiveToken(a2, 1953654867LL, &v15, OwnerDefaulted, v19, 0LL);
        ObjectSecurity = SeQueryInformationToken(v4, TokenUser, &TokenInformation);
        if ( ObjectSecurity >= 0 )
        {
          v8 = Owner;
          v9 = 4 * (*((unsigned __int8 *)Owner + 1) + *(unsigned __int8 *)(*(_QWORD *)TokenInformation + 1LL)) + 48;
          Pool2 = (ACL *)ExAllocatePool2(0x40uLL);
          v11 = Pool2;
          if ( Pool2 )
          {
            RtlCreateAcl(Pool2, v9, 2u);
            RtlpAddKnownAce((int)v11, 2, 0, 0x80000000, v8, 0);
            RtlpAddKnownAce((int)v11, 2, 0, 0x80000000, *(void **)TokenInformation, 0);
            RtlCreateSecurityDescriptor(v20, 1u);
            RtlSetDaclSecurityDescriptor(v20, 1u, v11, 0);
            WnfStateName = ZwCreateWnfStateName(a3, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 0, v20);
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
    LOBYTE(v6) = v23;
    ObReleaseObjectSecurityEx(SecurityDescriptor, v6, a1);
  }
  if ( v4 )
  {
    if ( v15 == 1 )
      ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a2 + 184) + 584LL), (ULONG_PTR)v4, 0x74726853u);
    else
      ObfDereferenceObjectWithTag(v4, 0x74726853u);
  }
  return (unsigned int)ObjectSecurity;
}
