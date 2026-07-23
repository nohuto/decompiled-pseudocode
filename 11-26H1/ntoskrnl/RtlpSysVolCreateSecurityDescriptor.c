/*
 * XREFs of RtlpSysVolCreateSecurityDescriptor @ 0x1407775A0
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x140A98FD0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlSetControlSecurityDescriptor @ 0x14080A050 (RtlSetControlSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpSysVolCreateSecurityDescriptor(_QWORD *a1, ACL **a2)
{
  void *Pool2; // rax
  void *v5; // rdi
  __int64 result; // rax
  NTSTATUS SecurityDescriptor; // ebx
  ULONG v8; // esi
  ACL *v9; // rax
  ACL *v10; // rbx
  NTSTATUS Acl; // esi
  ACL *v12; // rcx
  __int16 Sid; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+32h] [rbp-36h]
  __int16 v15; // [rsp+36h] [rbp-32h]
  int v16; // [rsp+38h] [rbp-30h]

  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  SecurityDescriptor = RtlCreateSecurityDescriptor(Pool2, 1u);
  if ( SecurityDescriptor < 0 )
    goto LABEL_12;
  v14 = 0;
  v15 = 1280;
  Sid = 257;
  v16 = 18;
  v8 = RtlLengthSid(&Sid) + 16;
  v9 = (ACL *)ExAllocatePool2(0x100uLL);
  v10 = v9;
  if ( !v9 )
  {
    SecurityDescriptor = -1073741670;
LABEL_12:
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)SecurityDescriptor;
  }
  Acl = RtlCreateAcl(v9, v8, 2u);
  v12 = v10;
  if ( Acl < 0 )
  {
LABEL_11:
    ExFreePoolWithTag(v12, 0);
    SecurityDescriptor = Acl;
    goto LABEL_12;
  }
  Acl = RtlpAddKnownAce((int)v10, 2, 3, 0x1FFFFF, &Sid, 0);
  if ( Acl < 0
    || (Acl = RtlSetDaclSecurityDescriptor(v5, 1u, v10, 0), Acl < 0)
    || (Acl = RtlSetControlSecurityDescriptor(v5, 0x1000u, 0x1000u), Acl < 0) )
  {
    v12 = v10;
    goto LABEL_11;
  }
  *a1 = v5;
  result = 0LL;
  *a2 = v10;
  return result;
}
