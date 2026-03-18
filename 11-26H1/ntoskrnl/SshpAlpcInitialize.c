/*
 * XREFs of SshpAlpcInitialize @ 0x140CD768C
 * Callers:
 *     SshInitialize @ 0x140CD7428 (SshInitialize.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x1404F0710 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x140724390 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x1407245D0 (ZwAlpcSetInformation.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SshpAlpcMessageCallback @ 0x1407E4760 (SshpAlpcMessageCallback.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409F49E0 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     ExCreateCallback @ 0x140AFB990 (ExCreateCallback.c)
 *     CmSiRWLockInitialize @ 0x140B60560 (CmSiRWLockInitialize.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 SshpAlpcInitialize()
{
  ULONG v0; // ebx
  ACL *Pool2; // rax
  ACL *v2; // rsi
  int Acl; // ebx
  NTSTATUS v4; // eax
  PCALLBACK_OBJECT v5; // rdi
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-89h] BYREF
  OBJECT_ATTRIBUTES CallbackObject_8; // [rsp+30h] [rbp-81h] BYREF
  __int128 v9; // [rsp+60h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v12; // [rsp+A0h] [rbp-11h]
  int v13[4]; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v14; // [rsp+B8h] [rbp+7h]

  v9 = 0LL;
  memset(&CallbackObject_8, 0, 44);
  memset_0(v13, 0, 0x48uLL);
  DestinationString = 0LL;
  v12 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  CallbackObject = 0LL;
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial);
  v0 = 4 * *(unsigned __int8 *)(*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags + 1LL) + 28;
  Pool2 = (ACL *)ExAllocatePool2(64LL, v0, 0x70687373u);
  v2 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, v0);
    Acl = RtlCreateAcl(v2, v0, 2u);
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
            RtlInitUnicodeString(&DestinationString, L"\\SleepstudyControlPort");
            v14 = 64LL;
            CallbackObject_8.ObjectName = &DestinationString;
            v13[0] = 0x100000;
            *(_OWORD *)&CallbackObject_8.SecurityDescriptor = (unsigned __int64)SecurityDescriptor;
            CallbackObject_8.Length = 48;
            CallbackObject_8.RootDirectory = 0LL;
            CallbackObject_8.Attributes = 512;
            Acl = ZwAlpcCreatePort(
                    (__int64)&PsAltSystemCallRegistrationLock.KernelShadowStack,
                    (__int64)&CallbackObject_8);
            if ( Acl >= 0 )
            {
              CallbackObject_8.Length = 48;
              CallbackObject_8.RootDirectory = 0LL;
              CallbackObject_8.Attributes = 512;
              CallbackObject_8.ObjectName = 0LL;
              *(_OWORD *)&CallbackObject_8.SecurityDescriptor = 0LL;
              v4 = ExCreateCallback(&CallbackObject, &CallbackObject_8, 1u, 0);
              v5 = CallbackObject;
              Acl = v4;
              if ( v4 >= 0 )
              {
                if ( ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)SshpAlpcMessageCallback, 0LL) )
                {
                  v9 = (unsigned __int64)v5;
                  Acl = ZwAlpcSetInformation((__int64)PsAltSystemCallRegistrationLock.KernelShadowStack, 9LL);
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
