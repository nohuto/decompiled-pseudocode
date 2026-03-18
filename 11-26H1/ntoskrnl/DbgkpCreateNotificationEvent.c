/*
 * XREFs of DbgkpCreateNotificationEvent @ 0x14078A2D0
 * Callers:
 *     DbgkpInitializePhase1SiloState @ 0x14078A5C8 (DbgkpInitializePhase1SiloState.c)
 * Callees:
 *     RtlLengthSid @ 0x1404872D0 (RtlLengthSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1404984A0 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateEvent @ 0x140723CF0 (ZwCreateEvent.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  UNICODE_STRING String2; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-58h]
  _OWORD Sid[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v20[3]; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)&String2.Length = 2621478LL;
  v18 = 0LL;
  EventHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  String2.Buffer = L"lpacInstrumentation";
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = RtlDeriveCapabilitySidsFromName(&String2, v20, Sid);
  if ( result >= 0 )
  {
    result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( result >= 0 )
    {
      v5 = RtlLengthSid(RtlpBootStatHandleLock.StateSaveArea);
      v6 = RtlLengthSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags) + v5;
      v7 = RtlLengthSid(RtlpBootStatHandleLock.SchedulingGroup) + v6;
      v8 = RtlLengthSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4)) + v7;
      v9 = v8 + RtlLengthSid(Sid) + 68;
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
          Acl = RtlpAddKnownAce((int)v11, 2, 0, 1179649, *(void **)((char *)&RtlpBootStatHandleLock.116 + 4), 0);
          v13 = v11;
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((int)v11, 2, 0, 1179649, Sid, 0);
            v13 = v11;
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce((int)v11, 2, 0, 2031619, *(void **)&RtlpBootStatHandleLock.WaitRegister.Flags, 0);
              v13 = v11;
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce((int)v11, 2, 0, 1179649, RtlpBootStatHandleLock.StateSaveArea, 0);
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
