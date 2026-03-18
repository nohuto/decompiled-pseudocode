/*
 * XREFs of SeMakeAnonymousLogonTokenNoEveryone @ 0x140CDD570
 * Callers:
 *     SepInitializationPhase1 @ 0x140810284 (SepInitializationPhase1.c)
 * Callees:
 *     RtlpTimeFieldsToTime @ 0x1404522F8 (RtlpTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SepCreateToken @ 0x140815004 (SepCreateToken.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409D8260 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1409F49E0 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AABBB0 (RtlSetGroupSecurityDescriptor.c)
 *     SeSetMandatoryPolicyToken @ 0x140ADDB0C (SeSetMandatoryPolicyToken.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 SeMakeAnonymousLogonTokenNoEveryone()
{
  PSID v0; // rbx
  int v1; // r14d
  ULONG v2; // edi
  ACL *Pool2; // rax
  ACL *v4; // rsi
  void *v6; // rax
  void *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // [rsp+28h] [rbp-100h]
  int v11; // [rsp+30h] [rbp-F8h]
  int v12; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v13; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+B8h] [rbp-70h] BYREF
  PSID v15; // [rsp+C0h] [rbp-68h] BYREF
  int v16; // [rsp+C8h] [rbp-60h]
  int v17; // [rsp+CCh] [rbp-5Ch]
  _DWORD v18[2]; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+D8h] [rbp-50h]
  __int64 v20; // [rsp+E0h] [rbp-48h]
  int v21; // [rsp+E8h] [rbp-40h]
  int v22; // [rsp+ECh] [rbp-3Ch]
  void *v23; // [rsp+F0h] [rbp-38h]
  __int64 v24; // [rsp+F8h] [rbp-30h]
  __m128i si128; // [rsp+100h] [rbp-28h] BYREF
  PSID v26; // [rsp+118h] [rbp-10h] BYREF
  int v27; // [rsp+120h] [rbp-8h]

  v12 = 1;
  v13 = 0LL;
  v17 = 0;
  v18[1] = 0;
  v22 = 0;
  v14 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  RtlpTimeFieldsToTime((__int64)&si128, &v14);
  v0 = SeAnonymousLogonSid;
  v26 = SeUntrustedMandatorySid;
  v15 = SeAnonymousLogonSid;
  v16 = 0;
  v27 = 96;
  v1 = ((4 * *((unsigned __int8 *)SeUntrustedMandatorySid + 1) + 11) & 0xFFFFFFFC) + 16;
  v2 = 4 * (*((unsigned __int8 *)SeAnonymousLogonSid + 1) + HIBYTE(RtlpBootStatHandleLock.StateSaveArea->ControlWord))
     + 48;
  Pool2 = (ACL *)ExAllocatePool2(256LL, 0xC8uLL, 0x63416553u);
  v4 = Pool2;
  if ( !Pool2 )
    return 0LL;
  RtlCreateAcl(Pool2, v2, 2u);
  RtlAddAccessAllowedAce(v4, 2u, 0xF01FFu, RtlpBootStatHandleLock.StateSaveArea);
  RtlAddAccessAllowedAce(v4, 2u, 0xF01FFu, SeAnonymousLogonSid);
  v6 = (void *)ExAllocatePool2(256LL, 0x28uLL, 0x64536553u);
  v7 = v6;
  if ( !v6 )
  {
    ExFreePoolWithTag(v4, 0);
    return 0LL;
  }
  RtlCreateSecurityDescriptor(v6, 1u);
  RtlSetDaclSecurityDescriptor(v7, 1u, v4, 0);
  RtlSetOwnerSecurityDescriptor(v7, RtlpBootStatHandleLock.StateSaveArea, 0);
  RtlSetGroupSecurityDescriptor(v7, RtlpBootStatHandleLock.StateSaveArea, 0);
  v18[0] = 48;
  v19 = 0LL;
  v21 = 0;
  v20 = 0LL;
  v23 = v7;
  v24 = 0LL;
  SepCreateToken(
    (HANDLE *)&v13,
    v8,
    v9,
    (__int64)v18,
    v10,
    v11,
    (__int64)&SeAnonymousAuthenticationId,
    &v14,
    &v15,
    1,
    (__int64)&v26,
    v1,
    0,
    0LL,
    0LL,
    v0,
    v4);
  SeSetMandatoryPolicyToken(v13, &v12);
  ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(v7, 0);
  return v13;
}
