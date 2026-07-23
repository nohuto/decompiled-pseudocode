/*
 * XREFs of PopUmpoInitializeChannel @ 0x140CDB714
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x1404E9CF0 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x140728F60 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x1407291A0 (ZwAlpcSetInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     PopUmpoProcessMessages @ 0x140AA766C (PopUmpoProcessMessages.c)
 *     ExCreateCallback @ 0x140AFD610 (ExCreateCallback.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 PopUmpoInitializeChannel()
{
  ULONG v0; // ebx
  ACL *Pool2; // rax
  ACL *v2; // rdi
  NTSTATUS Acl; // ebx
  PCALLBACK_OBJECT v4; // rsi
  PCALLBACK_OBJECT ObjectAttributes[7]; // [rsp+28h] [rbp-89h] BYREF
  __int128 PortInformation; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v10; // [rsp+A0h] [rbp-11h]
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+A8h] [rbp-9h] BYREF

  memset_0(&PortAttributes, 0, sizeof(PortAttributes));
  v10 = 0LL;
  PopPdcDeviceListLock.TrapFrame = 0LL;
  *(_QWORD *)&PopPdcDeviceListLock.SystemCallNumber = 0LL;
  DestinationString = 0LL;
  LOBYTE(PopPdcDeviceListLock.FirstArgument) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(ObjectAttributes, 0, 52);
  PortInformation = 0LL;
  LODWORD(PopPdcDeviceListLock.SchedulingGroup) = 0;
  *(_OWORD *)&PopPdcDeviceListLock.WaitRegister.Flags = 0uLL;
  v0 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)&RtlpBootStatHandleLock.116 + 4) + 1LL) + 28;
  Pool2 = (ACL *)ExAllocatePool2(64LL, v0, 0x6F706D55u);
  v2 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v0, 2u);
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
            RtlInitUnicodeString(&DestinationString, L"\\PowerPort");
            PortAttributes.MaxMessageLength = 4096LL;
            ObjectAttributes[3] = (PCALLBACK_OBJECT)&DestinationString;
            PortAttributes.Flags = 0x100000;
            ObjectAttributes[5] = (PCALLBACK_OBJECT)SecurityDescriptor;
            LODWORD(ObjectAttributes[1]) = 48;
            ObjectAttributes[2] = 0LL;
            LODWORD(ObjectAttributes[4]) = 512;
            ObjectAttributes[6] = 0LL;
            Acl = ZwAlpcCreatePort(
                    (PHANDLE)&PopPdcDeviceListLock.TrapFrame,
                    (POBJECT_ATTRIBUTES)&ObjectAttributes[1],
                    &PortAttributes);
            if ( Acl >= 0 )
            {
              LODWORD(ObjectAttributes[1]) = 48;
              ObjectAttributes[2] = 0LL;
              LODWORD(ObjectAttributes[4]) = 512;
              ObjectAttributes[3] = 0LL;
              *(_OWORD *)&ObjectAttributes[5] = 0LL;
              Acl = ExCreateCallback(ObjectAttributes, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 1u, 0);
              if ( Acl >= 0 )
              {
                v4 = ObjectAttributes[0];
                if ( ExRegisterCallback(ObjectAttributes[0], (PCALLBACK_FUNCTION)PopUmpoMessageCallback, 0LL) )
                {
                  PortInformation = (unsigned __int64)v4;
                  Acl = ZwAlpcSetInformation(
                          PopPdcDeviceListLock.TrapFrame,
                          AlpcRegisterCallbackInformation,
                          &PortInformation,
                          0x10u);
                  ObfDereferenceObjectWithTag(v4, 0x746C6644u);
                  if ( Acl >= 0 )
                  {
                    PopUmpoProcessMessages();
                    Acl = 0;
                  }
                }
                else
                {
                  Acl = -1073741670;
                }
              }
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
