/*
 * XREFs of PiDevCfgGetKeySecurityDescriptor @ 0x140A49800
 * Callers:
 *     PiDevCfgCopyDeviceKeys @ 0x140A47944 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A49C64 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     RtlGetAce @ 0x140420040 (RtlGetAce.c)
 *     RtlGetDaclSecurityDescriptor @ 0x14047FDF0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQuerySecurityObject @ 0x14072ACE0 (ZwQuerySecurityObject.c)
 *     RtlGetAcesBufferSize @ 0x140809260 (RtlGetAcesBufferSize.c)
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1409029C0 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlAddAce @ 0x1409E03E0 (RtlAddAce.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140A6E620 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140A98F90 (RtlGetOwnerSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgGetKeySecurityDescriptor(void *a1, char a2, _QWORD *a3, SECURITY_INFORMATION *a4)
{
  int v5; // r14d
  ACL *v6; // r13
  void *v7; // r15
  NTSTATUS v8; // eax
  int DaclSecurityDescriptor; // ebx
  _BYTE *v10; // rax
  ULONG v11; // ebx
  SECURITY_INFORMATION v12; // r14d
  ULONG v13; // r12d
  _BYTE *Pool2; // rsi
  NTSTATUS v15; // eax
  PACL v16; // rdi
  ULONG i; // r12d
  BOOLEAN v18; // cl
  ULONG v19; // ebx
  ACL *v20; // rax
  void *v21; // rax
  BOOLEAN DaclPresent; // [rsp+30h] [rbp-99h] BYREF
  BOOLEAN OwnerDefaulted[3]; // [rsp+31h] [rbp-98h] BYREF
  ULONG AceListLength; // [rsp+34h] [rbp-95h] BYREF
  ULONG LengthNeeded; // [rsp+38h] [rbp-91h] BYREF
  PSID Owner; // [rsp+40h] [rbp-89h] BYREF
  PACL Dacl; // [rsp+48h] [rbp-81h] BYREF
  PVOID Ace; // [rsp+50h] [rbp-79h] BYREF
  PVOID AceList; // [rsp+58h] [rbp-71h] BYREF
  SECURITY_INFORMATION *v31; // [rsp+60h] [rbp-69h]
  _QWORD *v32; // [rsp+68h] [rbp-61h]
  HANDLE Handle; // [rsp+70h] [rbp-59h]
  _OWORD AbsoluteSecurityDescriptor[2]; // [rsp+78h] [rbp-51h] BYREF
  __int64 v35; // [rsp+98h] [rbp-31h]
  _BYTE SecurityDescriptor[2]; // [rsp+A0h] [rbp-29h] BYREF
  _WORD v37[7]; // [rsp+A2h] [rbp-27h]
  _BYTE *v38; // [rsp+B0h] [rbp-19h]

  v31 = a4;
  v32 = a3;
  *a3 = 0LL;
  v35 = 0LL;
  Handle = a1;
  LengthNeeded = 0;
  Owner = 0LL;
  DaclPresent = 0;
  Dacl = 0LL;
  Ace = 0LL;
  AceList = 0LL;
  AceListLength = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  memset(AbsoluteSecurityDescriptor, 0, sizeof(AbsoluteSecurityDescriptor));
  v8 = ZwQuerySecurityObject(a1, (a2 != 0) + 2, SecurityDescriptor, 0x40u, &LengthNeeded);
  DaclSecurityDescriptor = v8;
  if ( v8 == -1073741789 )
    return (unsigned int)-1073741720;
  if ( v8 < 0 )
    return (unsigned int)DaclSecurityDescriptor;
  if ( SecurityDescriptor[0] != 1 )
    return (unsigned int)-1073741736;
  if ( v37[0] >= 0 )
  {
    v10 = v38;
  }
  else if ( *(_DWORD *)&v37[3] )
  {
    v10 = &SecurityDescriptor[*(unsigned int *)&v37[3]];
  }
  else
  {
    v10 = 0LL;
  }
  OwnerDefaulted[0] = (v37[0] & 2) != 0;
  if ( !v10 )
    return (unsigned int)-1073741722;
  if ( !RtlEqualSid(v10, PiDevCfgNullSid) )
  {
    return (unsigned int)-1073741720;
  }
  else
  {
    if ( a2
      && RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, OwnerDefaulted) >= 0
      && !OwnerDefaulted[0]
      && Owner
      && RtlEqualSid(Owner, *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4)) )
    {
      v5 = 1;
    }
    v11 = 240;
    v12 = v5 | 4;
    while ( 1 )
    {
      v13 = v11;
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v15 = ZwQuerySecurityObject(Handle, v12, Pool2, v11, &LengthNeeded);
      DaclSecurityDescriptor = v15;
      if ( v15 != -1073741789 )
        break;
      v11 = LengthNeeded;
      if ( LengthNeeded <= v13 )
        goto LABEL_49;
      ExFreePoolWithTag(Pool2, 0);
    }
    if ( v15 >= 0 )
    {
      DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(Pool2, &DaclPresent, &Dacl, OwnerDefaulted);
      if ( DaclSecurityDescriptor >= 0 )
      {
        if ( DaclPresent && (v16 = Dacl) != 0LL )
        {
          DaclPresent = 0;
          for ( i = 0; i < v16->AceCount; ++i )
          {
            DaclSecurityDescriptor = RtlGetAce(v16, i, &Ace);
            if ( DaclSecurityDescriptor < 0 )
              goto LABEL_56;
            if ( !*(_BYTE *)Ace
              && (*((_DWORD *)Ace + 1) & 0xF003F) == 0xF003F
              && RtlEqualSid((char *)Ace + 8, *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4)) )
            {
              v18 = 1;
              goto LABEL_38;
            }
          }
          v18 = DaclPresent;
LABEL_38:
          if ( v18 )
          {
            *v31 = v12;
            *v32 = Pool2;
            return (unsigned int)DaclSecurityDescriptor;
          }
          v19 = RtlLengthSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4)) + v16->AclSize + 8;
          v20 = (ACL *)ExAllocatePool2(0x100uLL);
          v6 = v20;
          if ( !v20 )
            goto LABEL_40;
          DaclSecurityDescriptor = RtlCreateAcl(v20, v19, 2u);
          if ( DaclSecurityDescriptor >= 0 )
          {
            DaclSecurityDescriptor = RtlGetAce(v16, 0, &AceList);
            if ( DaclSecurityDescriptor >= 0 )
            {
              DaclSecurityDescriptor = RtlGetAcesBufferSize((__int64)v16, &AceListLength);
              if ( DaclSecurityDescriptor >= 0 )
              {
                DaclSecurityDescriptor = RtlAddAce(v6, 2u, 0, AceList, AceListLength);
                if ( DaclSecurityDescriptor >= 0 )
                {
                  DaclSecurityDescriptor = RtlpAddKnownAce(
                                             (char *)v6,
                                             2u,
                                             2,
                                             983103,
                                             *(unsigned __int8 **)((char *)&RtlpBootStatHandleLock.116 + 4),
                                             0);
                  if ( DaclSecurityDescriptor >= 0 )
                  {
                    DaclSecurityDescriptor = RtlCreateSecurityDescriptor(AbsoluteSecurityDescriptor, 1u);
                    if ( DaclSecurityDescriptor >= 0 )
                    {
                      DaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(AbsoluteSecurityDescriptor, 1u, v6, 0);
                      if ( DaclSecurityDescriptor >= 0 )
                      {
                        if ( RtlValidSecurityDescriptor(AbsoluteSecurityDescriptor)
                          && (AceListLength = RtlLengthSecurityDescriptor(AbsoluteSecurityDescriptor),
                              AceListLength >= 0x28) )
                        {
                          v21 = (void *)ExAllocatePool2(0x100uLL);
                          v7 = v21;
                          if ( !v21 )
                          {
LABEL_40:
                            DaclSecurityDescriptor = -1073741670;
                            goto LABEL_56;
                          }
                          DaclSecurityDescriptor = RtlAbsoluteToSelfRelativeSD(
                                                     AbsoluteSecurityDescriptor,
                                                     v21,
                                                     &AceListLength);
                          if ( DaclSecurityDescriptor >= 0 )
                          {
                            *v31 = v12;
                            *v32 = v7;
                            v7 = 0LL;
                          }
                        }
                        else
                        {
LABEL_49:
                          DaclSecurityDescriptor = -1073741595;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          DaclSecurityDescriptor = -1073741275;
        }
      }
    }
LABEL_56:
    if ( Pool2 != SecurityDescriptor )
      ExFreePoolWithTag(Pool2, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)DaclSecurityDescriptor;
}
