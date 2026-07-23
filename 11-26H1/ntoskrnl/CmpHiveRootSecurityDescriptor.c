/*
 * XREFs of CmpHiveRootSecurityDescriptor @ 0x140B50A7C
 * Callers:
 *     CmpSetVersionData @ 0x14085CA84 (CmpSetVersionData.c)
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140CF0AAC (CmpCreateRegistryRoot.c)
 *     CmpInitializePreloadedHives @ 0x140CF16F4 (CmpInitializePreloadedHives.c)
 * Callees:
 *     RtlGetAce @ 0x140420040 (RtlGetAce.c)
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x140491FF0 (RtlDeriveCapabilitySidsFromName.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x140A77920 (RtlInitializeSid.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 CmpHiveRootSecurityDescriptor()
{
  unsigned __int8 *Pool2; // rsi
  unsigned __int8 *v1; // r13
  unsigned __int8 *v2; // r12
  unsigned __int8 *v3; // r14
  __int64 v4; // rax
  unsigned __int8 *v5; // r15
  ULONG v6; // edi
  ACL *v7; // rbx
  NTSTATUS Acl; // eax
  int v9; // eax
  __int64 v10; // rdi
  __int16 v11; // ax
  __int16 v12; // ax
  PVOID Ace; // [rsp+38h] [rbp-69h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+40h] [rbp-61h] BYREF
  int v16; // [rsp+48h] [rbp-59h]
  __int16 v17; // [rsp+4Ch] [rbp-55h]
  size_t v18; // [rsp+50h] [rbp-51h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int8 CapabilitySid[48]; // [rsp+68h] [rbp-39h] BYREF
  _BYTE CapabilityGroupSid[48]; // [rsp+98h] [rbp-9h] BYREF

  *(_QWORD *)&UnicodeString.Length = 1703960LL;
  v16 = 0;
  UnicodeString.Buffer = L"registryRead";
  v17 = 256;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  LODWORD(v18) = 0;
  WORD2(v18) = 3840;
  Ace = 0LL;
  Pool2 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
  v1 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
  v2 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
  v3 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
  v4 = ExAllocatePool2(0x100uLL);
  v5 = (unsigned __int8 *)v4;
  if ( !Pool2 || !v1 || !v2 || !v3 || !v4 )
    KeBugCheckEx(0x51u, 0xBuLL, 1uLL, 0LL, 0LL);
  *(_WORD *)Pool2 = 257;
  *(_DWORD *)(Pool2 + 2) = 0;
  *((_WORD *)Pool2 + 3) = v17;
  if ( RtlInitializeSid(v1, &IdentifierAuthority, 1u) < 0
    || RtlInitializeSid(v2, &IdentifierAuthority, 1u) < 0
    || RtlInitializeSid(v3, &IdentifierAuthority, 2u) < 0
    || RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v18, 2u) < 0 )
  {
    KeBugCheckEx(0x51u, 0xBuLL, 2uLL, 0LL, 0LL);
  }
  *RtlSubAuthoritySid(Pool2, 0) = 0;
  *RtlSubAuthoritySid(v1, 0) = 12;
  *RtlSubAuthoritySid(v2, 0) = 18;
  *RtlSubAuthoritySid(v3, 0) = 32;
  *RtlSubAuthoritySid(v3, 1u) = 544;
  *RtlSubAuthoritySid(v5, 0) = 2;
  *RtlSubAuthoritySid(v5, 1u) = 1;
  if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid) < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 3uLL, 0LL, 0LL);
  v6 = 4 * (CapabilitySid[1] + Pool2[1] + v1[1] + v2[1] + v3[1] + v5[1]) + 104;
  v18 = v6;
  v7 = (ACL *)ExAllocatePool2(0x100uLL);
  if ( !v7 )
    KeBugCheckEx(0x51u, 0xBuLL, 4uLL, 0LL, 0LL);
  Acl = RtlCreateAcl(v7, v6, 2u);
  if ( Acl < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 5uLL, Acl, 0LL);
  v9 = RtlpAddKnownAce((char *)v7, 2u, 0, 983103, v2, 0);
  if ( v9 < 0
    || (v9 = RtlpAddKnownAce((char *)v7, 2u, 0, 983103, v3, 0), v9 < 0)
    || (v9 = RtlpAddKnownAce((char *)v7, 2u, 0, 131097, Pool2, 0), v9 < 0)
    || (v9 = RtlpAddKnownAce((char *)v7, 2u, 0, 131097, v1, 0), v9 < 0)
    || (v9 = RtlpAddKnownAce((char *)v7, 2u, 0, 131097, v5, 0), v9 < 0)
    || (v9 = RtlpAddKnownAce((char *)v7, 2u, 0, 131097, CapabilitySid, 0), v9 < 0) )
  {
    KeBugCheckEx(0x51u, 0xBuLL, 6uLL, v9, 0LL);
  }
  RtlGetAce(v7, 0, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v7, 1u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v7, 2u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v7, 3u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v7, 4u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v7, 5u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  v10 = ExAllocatePool2(0x100uLL);
  if ( !v10 )
    KeBugCheckEx(0x51u, 0xBuLL, 7uLL, 0LL, 0LL);
  memmove((void *)(v10 + 40), v7, v18);
  *(_OWORD *)v10 = 0LL;
  *(_OWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)(v10 + 32) = 0LL;
  v11 = *(_WORD *)(v10 + 2);
  *(_BYTE *)v10 = 1;
  if ( v11 < 0 )
  {
    ExFreePoolWithTag((PVOID)v10, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 9uLL, 0xFFFFFFFFC0000079uLL, 0LL);
  }
  v12 = v11 | 4;
  if ( v10 != -40 )
    *(_QWORD *)(v10 + 32) = v10 + 40;
  *(_WORD *)(v10 + 2) = v12 & 0xFFF7;
  ExFreePoolWithTag(Pool2, 0);
  ExFreePoolWithTag(v1, 0);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(v5, 0);
  ExFreePoolWithTag(v7, 0);
  return v10;
}
