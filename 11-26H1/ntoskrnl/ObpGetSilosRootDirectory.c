/*
 * XREFs of ObpGetSilosRootDirectory @ 0x1408AD8F0
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x1408AD404 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     ZwCreateDirectoryObject @ 0x140729540 (ZwCreateDirectoryObject.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ObpGetSilosRootDirectory(PHANDLE DirectoryHandle)
{
  NTSTATUS result; // eax
  ULONG v3; // ebx
  ULONG v4; // ebx
  ACL *Pool2; // rax
  ACL *v6; // rdi
  NTSTATUS Acl; // ebx
  _OWORD SecurityDescriptor[2]; // [rsp+38h] [rbp-9h] BYREF
  __int64 v9; // [rsp+58h] [rbp+17h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+1Fh] BYREF

  memset(&ObjectAttributes, 0, 44);
  v9 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    v3 = RtlLengthSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
    v4 = RtlLengthSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4)) + 32 + v3;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
    v6 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v4, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((int)v6, 2, 0, 131075, *(void **)&RtlpBootStatHandleLock.WaitRegister.Flags, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((int)v6, 2, 0, 983055, *(void **)((char *)&RtlpBootStatHandleLock.116 + 4), 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v6, 0);
            if ( Acl >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpSilosDirectoryName;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
              ObjectAttributes.Attributes = 208;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              Acl = ZwCreateDirectoryObject(DirectoryHandle, 0xF000Fu, &ObjectAttributes);
              if ( Acl == 0x40000000 )
                Acl = 0;
            }
          }
        }
      }
      ExFreePoolWithTag(v6, 0x6C636144u);
      return Acl;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
