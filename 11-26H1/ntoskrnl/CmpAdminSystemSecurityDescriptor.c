/*
 * XREFs of CmpAdminSystemSecurityDescriptor @ 0x140860480
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlLengthRequiredSid @ 0x1408F0000 (RtlLengthRequiredSid.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x140A77920 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

ACL *CmpAdminSystemSecurityDescriptor()
{
  unsigned __int8 *Pool2; // rbp
  __int64 v1; // rax
  unsigned __int8 *v2; // rdi
  ULONG v3; // ebx
  size_t v4; // r14
  ACL *v5; // rax
  ACL *v6; // rsi
  NTSTATUS Acl; // eax
  int v8; // eax
  __int64 v9; // rax
  ACL *v10; // rbx
  NTSTATUS SecurityDescriptor; // eax
  ULONG_PTR v12; // r14
  NTSTATUS v13; // eax
  ULONG_PTR v14; // r14
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+60h] [rbp+8h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  RtlLengthRequiredSid(1u);
  Pool2 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
  RtlLengthRequiredSid(2u);
  v1 = ExAllocatePool2(0x100uLL);
  v2 = (unsigned __int8 *)v1;
  if ( !Pool2 || !v1 )
    KeBugCheckEx(0x51u, 0xBuLL, 1uLL, 0LL, 0LL);
  if ( RtlInitializeSid(Pool2, &IdentifierAuthority, 1u) < 0 || RtlInitializeSid(v2, &IdentifierAuthority, 2u) < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 2uLL, 0LL, 0LL);
  *RtlSubAuthoritySid(Pool2, 0) = 18;
  *RtlSubAuthoritySid(v2, 0) = 32;
  *RtlSubAuthoritySid(v2, 1u) = 544;
  v3 = 4 * (Pool2[1] + v2[1]) + 40;
  v4 = v3;
  v5 = (ACL *)ExAllocatePool2(0x100uLL);
  v6 = v5;
  if ( !v5 )
    KeBugCheckEx(0x51u, 0xBuLL, 3uLL, 0LL, 0LL);
  Acl = RtlCreateAcl(v5, v3, 2u);
  if ( Acl < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 4uLL, Acl, 0LL);
  v8 = RtlpAddKnownAce((int)v6, 2, 0, 2032127, Pool2, 0);
  if ( v8 < 0 || (v8 = RtlpAddKnownAce((int)v6, 2, 0, 2032127, v2, 0), v8 < 0) )
    KeBugCheckEx(0x51u, 0xBuLL, 5uLL, v8, 0LL);
  v9 = ExAllocatePool2(0x100uLL);
  v10 = (ACL *)v9;
  if ( !v9 )
    KeBugCheckEx(0x51u, 0xBuLL, 6uLL, 0LL, 0LL);
  memmove((void *)(v9 + 40), v6, v4);
  SecurityDescriptor = RtlCreateSecurityDescriptor(v10, 1u);
  v12 = SecurityDescriptor;
  if ( SecurityDescriptor < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 7uLL, v12, 0LL);
  }
  v13 = RtlSetDaclSecurityDescriptor(v10, 1u, v10 + 5, 0);
  v14 = v13;
  if ( v13 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 8uLL, v14, 0LL);
  }
  ExFreePoolWithTag(Pool2, 0);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v6, 0);
  return v10;
}
