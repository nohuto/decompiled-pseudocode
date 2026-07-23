/*
 * XREFs of SshpAlpcInitialize @ 0x140CDDA0C
 * Callers:
 *     SshInitialize @ 0x140CDD7A8 (SshInitialize.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x1404E9CF0 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x140728F60 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x1407291A0 (ZwAlpcSetInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SshpAlpcMessageCallback @ 0x1407EA2C0 (SshpAlpcMessageCallback.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     ExCreateCallback @ 0x140AFD610 (ExCreateCallback.c)
 *     CmSiRWLockInitialize @ 0x140B63600 (CmSiRWLockInitialize.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 SshpAlpcInitialize()
{
  ULONG v0; // ebx
  ACL *Pool2; // rax
  ACL *v2; // rsi
  NTSTATUS Acl; // ebx
  NTSTATUS Callback; // eax
  PCALLBACK_OBJECT v5; // rdi
  PCALLBACK_OBJECT ObjectAttributes[7]; // [rsp+28h] [rbp-89h] BYREF
  __int128 PortInformation; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v11; // [rsp+A0h] [rbp-11h]
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+A8h] [rbp-9h] BYREF

  PortInformation = 0LL;
  memset_0(&PortAttributes, 0, sizeof(PortAttributes));
  DestinationString = 0LL;
  v11 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(ObjectAttributes, 0, 52);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&PsAltSystemCallRegistrationLock.Padding[4]);
  v0 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)&RtlpBootStatHandleLock.116 + 4) + 1LL) + 28;
  Pool2 = (ACL *)ExAllocatePool2(64LL, v0, 0x70687373u);
  v2 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, v0);
    Acl = RtlCreateAcl(v2, v0, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v2, 2u, 0x10000000u, *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v2, 0);
          if ( Acl >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\SleepstudyControlPort");
            PortAttributes.MaxMessageLength = 64LL;
            ObjectAttributes[3] = (PCALLBACK_OBJECT)&DestinationString;
            PortAttributes.Flags = 0x100000;
            ObjectAttributes[5] = (PCALLBACK_OBJECT)SecurityDescriptor;
            LODWORD(ObjectAttributes[1]) = 48;
            ObjectAttributes[2] = 0LL;
            LODWORD(ObjectAttributes[4]) = 512;
            ObjectAttributes[6] = 0LL;
            Acl = ZwAlpcCreatePort(
                    (PHANDLE)&PsAltSystemCallRegistrationLock.Padding[3],
                    (POBJECT_ATTRIBUTES)&ObjectAttributes[1],
                    &PortAttributes);
            if ( Acl >= 0 )
            {
              LODWORD(ObjectAttributes[1]) = 48;
              ObjectAttributes[2] = 0LL;
              LODWORD(ObjectAttributes[4]) = 512;
              ObjectAttributes[3] = 0LL;
              *(_OWORD *)&ObjectAttributes[5] = 0LL;
              Callback = ExCreateCallback(ObjectAttributes, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 1u, 0);
              v5 = ObjectAttributes[0];
              Acl = Callback;
              if ( Callback >= 0 )
              {
                if ( ExRegisterCallback(ObjectAttributes[0], (PCALLBACK_FUNCTION)SshpAlpcMessageCallback, 0LL) )
                {
                  PortInformation = (unsigned __int64)v5;
                  Acl = ZwAlpcSetInformation(
                          (HANDLE)PsAltSystemCallRegistrationLock.Padding[3],
                          AlpcRegisterCallbackInformation,
                          &PortInformation,
                          0x10u);
                  if ( Acl >= 0 )
                  {
                    SshpAlpcMessageCallback(0LL, 0LL, 0LL);
                    Acl = 0;
                  }
                }
                else
                {
                  Acl = -1073741670;
                }
              }
              if ( v5 )
                ObfDereferenceObjectWithTag(v5, 0x746C6644u);
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v2, 0x70687373u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
