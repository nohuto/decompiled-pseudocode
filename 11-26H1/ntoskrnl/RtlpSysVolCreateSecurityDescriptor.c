/*
 * XREFs of RtlpSysVolCreateSecurityDescriptor @ 0x1407745A0
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x140A95BA0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlLengthSid @ 0x1404872D0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlSetControlSecurityDescriptor @ 0x1408045B0 (RtlSetControlSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
    || (Acl = RtlSetControlSecurityDescriptor(v5, 4096LL, 4096LL), Acl < 0) )
  {
    v12 = v10;
    goto LABEL_11;
  }
  *a1 = v5;
  result = 0LL;
  *a2 = v10;
  return result;
}
