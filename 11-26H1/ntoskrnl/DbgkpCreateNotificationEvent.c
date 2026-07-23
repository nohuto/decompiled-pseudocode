/*
 * XREFs of DbgkpCreateNotificationEvent @ 0x14078CE00
 * Callers:
 *     DbgkpInitializePhase1SiloState @ 0x14078D0F8 (DbgkpInitializePhase1SiloState.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x140491FF0 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1407288C0 (ZwCreateEvent.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall DbgkpCreateNotificationEvent(UNICODE_STRING *a1, __int64 a2)
{
  NTSTATUS result; // eax
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ULONG v9; // edi
  ACL *Pool2; // rax
  ACL *v11; // rbx
  NTSTATUS Acl; // edi
  ACL *v13; // rcx
  HANDLE EventHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-58h]
  _BYTE CapabilitySid[48]; // [rsp+B0h] [rbp-50h] BYREF
  char CapabilityGroupSid[48]; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)&UnicodeString.Length = 2621478LL;
  v18 = 0LL;
  EventHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  UnicodeString.Buffer = L"lpacInstrumentation";
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid);
  if ( result >= 0 )
  {
    result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( result >= 0 )
    {
      v5 = RtlLengthSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
      v6 = RtlLengthSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4)) + v5;
      v7 = RtlLengthSid(RtlpBootStatHandleLock.SchedulingGroup) + v6;
      v8 = RtlLengthSid(*(PSID *)&RtlpBootStatHandleLock.SystemCallNumber) + v7;
      v9 = v8 + RtlLengthSid(CapabilitySid) + 68;
      Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
      v11 = Pool2;
      if ( !Pool2 )
        return -1073741670;
      Acl = RtlCreateAcl(Pool2, v9, 2u);
      v13 = v11;
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((int)v11, 2, 0, 1179649, RtlpBootStatHandleLock.SchedulingGroup, 0);
        v13 = v11;
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((int)v11, 2, 0, 1179649, *(void **)&RtlpBootStatHandleLock.SystemCallNumber, 0);
          v13 = v11;
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((int)v11, 2, 0, 1179649, CapabilitySid, 0);
            v13 = v11;
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce((int)v11, 2, 0, 2031619, *(void **)((char *)&RtlpBootStatHandleLock.116 + 4), 0);
              v13 = v11;
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce((int)v11, 2, 0, 1179649, *(void **)&RtlpBootStatHandleLock.WaitRegister.Flags, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v11, 0);
                  if ( Acl >= 0 )
                  {
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.Attributes = 528;
                    ObjectAttributes.ObjectName = a1;
                    ObjectAttributes.SecurityQualityOfService = 0LL;
                    Acl = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
                    ExFreePoolWithTag(v11, 0);
                    if ( Acl >= 0 )
                    {
                      Acl = ObpReferenceObjectByHandleWithTag((ULONG_PTR)EventHandle, 0x6B676244u, a2, 0LL, 0LL);
                      ZwClose(EventHandle);
                    }
                    return Acl;
                  }
                }
                v13 = v11;
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v13, 0);
      return Acl;
    }
  }
  return result;
}
