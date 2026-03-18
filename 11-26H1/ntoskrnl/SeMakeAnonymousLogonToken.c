/*
 * XREFs of SeMakeAnonymousLogonToken @ 0x140CDD2F0
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

__int64 SeMakeAnonymousLogonToken()
{
  PSID v0; // rbx
  int ControlWord_high; // edx
  int v2; // r15d
  ULONG v3; // edi
  ACL *Pool2; // rax
  ACL *v5; // rsi
  void *v7; // rax
  void *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // [rsp+28h] [rbp-100h]
  int v12; // [rsp+30h] [rbp-F8h]
  int v13; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v14; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+B8h] [rbp-70h] BYREF
  PSID v16; // [rsp+C0h] [rbp-68h] BYREF
  int v17; // [rsp+C8h] [rbp-60h]
  int v18; // [rsp+CCh] [rbp-5Ch]
  _DWORD v19[2]; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v20; // [rsp+D8h] [rbp-50h]
  __int64 v21; // [rsp+E0h] [rbp-48h]
  int v22; // [rsp+E8h] [rbp-40h]
  int v23; // [rsp+ECh] [rbp-3Ch]
  void *v24; // [rsp+F0h] [rbp-38h]
  __int64 v25; // [rsp+F8h] [rbp-30h]
  __m128i si128; // [rsp+100h] [rbp-28h] BYREF
  _XSAVE_FORMAT *StateSaveArea; // [rsp+118h] [rbp-10h] BYREF
  int v28; // [rsp+120h] [rbp-8h]
  __int64 v29; // [rsp+128h] [rbp+0h]
  int v30; // [rsp+130h] [rbp+8h]

  v13 = 1;
  v14 = 0LL;
  v18 = 0;
  v19[1] = 0;
  v23 = 0;
  v15 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  RtlpTimeFieldsToTime((__int64)&si128, &v15);
  v0 = SeAnonymousLogonSid;
  StateSaveArea = RtlpBootStatHandleLock.StateSaveArea;
  v29 = *(_QWORD *)&SepRmCapTableLock.ResourceIndex;
  v16 = SeAnonymousLogonSid;
  v17 = 0;
  v28 = 7;
  v30 = 96;
  ControlWord_high = HIBYTE(RtlpBootStatHandleLock.StateSaveArea->ControlWord);
  v2 = ((4 * *(unsigned __int8 *)(*(_QWORD *)&SepRmCapTableLock.ResourceIndex + 1LL) + 11) & 0xFFFFFFFC)
     + 16
     + ((4 * ControlWord_high + 11) & 0xFFFFFFFC);
  v3 = 4 * (ControlWord_high + *((unsigned __int8 *)SeAnonymousLogonSid + 1)) + 48;
  Pool2 = (ACL *)ExAllocatePool2(256LL, 0xC8uLL, 0x63416553u);
  v5 = Pool2;
  if ( !Pool2 )
    return 0LL;
  RtlCreateAcl(Pool2, v3, 2u);
  RtlAddAccessAllowedAce(v5, 2u, 0xF01FFu, RtlpBootStatHandleLock.StateSaveArea);
  RtlAddAccessAllowedAce(v5, 2u, 0xF01FFu, SeAnonymousLogonSid);
  v7 = (void *)ExAllocatePool2(256LL, 0x28uLL, 0x64536553u);
  v8 = v7;
  if ( !v7 )
  {
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  RtlCreateSecurityDescriptor(v7, 1u);
  RtlSetDaclSecurityDescriptor(v8, 1u, v5, 0);
  RtlSetOwnerSecurityDescriptor(v8, RtlpBootStatHandleLock.StateSaveArea, 0);
  RtlSetGroupSecurityDescriptor(v8, RtlpBootStatHandleLock.StateSaveArea, 0);
  v19[0] = 48;
  v20 = 0LL;
  v22 = 0;
  v21 = 0LL;
  v24 = v8;
  v25 = 0LL;
  SepCreateToken(
    (HANDLE *)&v14,
    v9,
    v10,
    (__int64)v19,
    v11,
    v12,
    (__int64)&SeAnonymousAuthenticationId,
    &v15,
    &v16,
    2,
    (__int64)&StateSaveArea,
    v2,
    0,
    0LL,
    0LL,
    v0,
    v5);
  SeSetMandatoryPolicyToken(v14, &v13);
  ExFreePoolWithTag(v5, 0);
  ExFreePoolWithTag(v8, 0);
  return v14;
}
