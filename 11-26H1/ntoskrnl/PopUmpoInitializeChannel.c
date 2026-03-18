/*
 * XREFs of PopUmpoInitializeChannel @ 0x140CD5374
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x1404F0710 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x140724390 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x1407245D0 (ZwAlpcSetInformation.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409F49E0 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     PopUmpoProcessMessages @ 0x140AAA08C (PopUmpoProcessMessages.c)
 *     ExCreateCallback @ 0x140AFB990 (ExCreateCallback.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 PopUmpoInitializeChannel()
{
  ULONG v0; // ebx
  ACL *Pool2; // rax
  ACL *v2; // rdi
  int Acl; // ebx
  PCALLBACK_OBJECT v4; // rsi
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-89h] BYREF
  OBJECT_ATTRIBUTES CallbackObject_8; // [rsp+30h] [rbp-81h] BYREF
  __int128 v8; // [rsp+60h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v11; // [rsp+A0h] [rbp-11h]
  int v12[4]; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v13; // [rsp+B8h] [rbp+7h]

  memset(&CallbackObject_8, 0, 44);
  memset_0(v12, 0, 0x48uLL);
  v11 = 0LL;
  *(_QWORD *)&PopModernStandbyStateNotify.ThreadTimerDelay = 0LL;
  PopModernStandbyStateNotify.TracingPrivate[0] = 0LL;
  DestinationString = 0LL;
  BYTE4(PopModernStandbyStateNotify.OtherTransferCount) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  PopModernStandbyStateNotify.WriteTransferCount = 0LL;
  CallbackObject = 0LL;
  v8 = 0LL;
  LODWORD(PopModernStandbyStateNotify.OtherTransferCount) = 0;
  PopModernStandbyStateNotify.QueuedScb = 0LL;
  v0 = 4 * *(unsigned __int8 *)(*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags + 1LL) + 28;
  Pool2 = (ACL *)ExAllocatePool2(64LL, v0, 0x6F706D55u);
  v2 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v0, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v2, 2u, 0x10000000u, *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v2, 0);
          if ( Acl >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\PowerPort");
            v13 = 4096LL;
            CallbackObject_8.ObjectName = &DestinationString;
            v12[0] = 0x100000;
            CallbackObject_8.SecurityDescriptor = SecurityDescriptor;
            CallbackObject_8.Length = 48;
            CallbackObject_8.RootDirectory = 0LL;
            CallbackObject_8.Attributes = 512;
            CallbackObject_8.SecurityQualityOfService = 0LL;
            Acl = ZwAlpcCreatePort((__int64)&PopModernStandbyStateNotify.ThreadTimerDelay, (__int64)&CallbackObject_8);
            if ( Acl >= 0 )
            {
              CallbackObject_8.Length = 48;
              CallbackObject_8.RootDirectory = 0LL;
              CallbackObject_8.Attributes = 512;
              CallbackObject_8.ObjectName = 0LL;
              *(_OWORD *)&CallbackObject_8.SecurityDescriptor = 0LL;
              Acl = ExCreateCallback(&CallbackObject, &CallbackObject_8, 1u, 0);
              if ( Acl >= 0 )
              {
                v4 = CallbackObject;
                if ( ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopUmpoMessageCallback, 0LL) )
                {
                  v8 = (unsigned __int64)v4;
                  Acl = ZwAlpcSetInformation(*(__int64 *)&PopModernStandbyStateNotify.ThreadTimerDelay, 9LL);
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
