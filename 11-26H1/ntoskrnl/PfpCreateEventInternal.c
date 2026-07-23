/*
 * XREFs of PfpCreateEventInternal @ 0x1407CB08C
 * Callers:
 *     PfpScenCtxStart @ 0x1407C90C0 (PfpScenCtxStart.c)
 *     PfTStart @ 0x1407C9844 (PfTStart.c)
 *     PfpCreateEvent @ 0x1407CB06C (PfpCreateEvent.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1407288C0 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpCreateEventInternal(UNICODE_STRING *a1, EVENT_TYPE a2, ULONG a3, PVOID *a4)
{
  NTSTATUS Acl; // ebx
  ULONG v9; // ebx
  ULONG v10; // ebx
  ACL *Pool2; // rax
  ACL *v12; // rdi
  HANDLE EventHandle; // [rsp+38h] [rbp-39h] BYREF
  PVOID Object; // [rsp+40h] [rbp-31h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v17; // [rsp+68h] [rbp-9h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-1h] BYREF

  v17 = 0LL;
  EventHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v9 = RtlLengthSid(SeAliasAdminsSid);
    v10 = RtlLengthSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4)) + 32 + v9;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
    v12 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v10, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((int)v12, 2, 0, 2031619, SeAliasAdminsSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((int)v12, 2, 0, 2031619, *(void **)((char *)&RtlpBootStatHandleLock.116 + 4), 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v12, 0);
            if ( Acl >= 0 )
            {
              ObjectAttributes.Attributes = a3;
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.ObjectName = a1;
              ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              Acl = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, a2, 0);
              if ( Acl >= 0 )
              {
                Object = 0LL;
                Acl = ObReferenceObjectByHandle(
                        EventHandle,
                        0x1F0003u,
                        (POBJECT_TYPE)ExEventObjectType,
                        0,
                        &Object,
                        0LL);
                *a4 = Object;
                if ( Acl >= 0 )
                  Acl = 0;
              }
            }
          }
        }
      }
    }
    else
    {
      Acl = -1073741670;
    }
    if ( EventHandle )
      ZwClose(EventHandle);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)Acl;
}
