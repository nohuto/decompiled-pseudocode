/*
 * XREFs of SeMakeAnonymousLogonToken @ 0x140CE3688
 * Callers:
 *     SepInitializationPhase1 @ 0x140815D14 (SepInitializationPhase1.c)
 * Callees:
 *     RtlpTimeFieldsToTime @ 0x14044A428 (RtlpTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SepCreateToken @ 0x14081B1B8 (SepCreateToken.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409A9150 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AA9160 (RtlSetGroupSecurityDescriptor.c)
 *     SeSetMandatoryPolicyToken @ 0x140ADA87C (SeSetMandatoryPolicyToken.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 SeMakeAnonymousLogonToken()
{
  PSID v0; // rbx
  int v1; // edx
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
  _SID_AND_ATTRIBUTES v16; // [rsp+C0h] [rbp-68h] BYREF
  _DWORD v17[2]; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+D8h] [rbp-50h]
  __int64 v19; // [rsp+E0h] [rbp-48h]
  int v20; // [rsp+E8h] [rbp-40h]
  int v21; // [rsp+ECh] [rbp-3Ch]
  void *v22; // [rsp+F0h] [rbp-38h]
  __int64 v23; // [rsp+F8h] [rbp-30h]
  __m128i si128; // [rsp+100h] [rbp-28h] BYREF
  _SID_AND_ATTRIBUTES v25; // [rsp+118h] [rbp-10h] BYREF
  __int64 v26; // [rsp+128h] [rbp+0h]
  int v27; // [rsp+130h] [rbp+8h]

  v13 = 1;
  v14 = 0LL;
  *(&v16.Attributes + 1) = 0;
  v17[1] = 0;
  v21 = 0;
  v15 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  RtlpTimeFieldsToTime((__int64)&si128, &v15);
  v0 = SeAnonymousLogonSid;
  v25.Sid = *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags;
  v26 = *(_QWORD *)&SepRmCapTableLock.SchedulerAssistYieldCounter;
  v16.Sid = SeAnonymousLogonSid;
  v16.Attributes = 0;
  v25.Attributes = 7;
  v27 = 96;
  v1 = *(unsigned __int8 *)(*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags + 1LL);
  v2 = ((4 * *(unsigned __int8 *)(*(_QWORD *)&SepRmCapTableLock.SchedulerAssistYieldCounter + 1LL) + 11) & 0xFFFFFFFC)
     + 16
     + ((4 * v1 + 11) & 0xFFFFFFFC);
  v3 = 4 * (v1 + *((unsigned __int8 *)SeAnonymousLogonSid + 1)) + 48;
  Pool2 = (ACL *)ExAllocatePool2(256LL, 0xC8uLL, 0x63416553u);
  v5 = Pool2;
  if ( !Pool2 )
    return 0LL;
  RtlCreateAcl(Pool2, v3, 2u);
  RtlAddAccessAllowedAce(v5, 2u, 0xF01FFu, *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
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
  RtlSetOwnerSecurityDescriptor(v8, *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags, 0);
  RtlSetGroupSecurityDescriptor(v8, *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags, 0);
  v17[0] = 48;
  v18 = 0LL;
  v20 = 0;
  v19 = 0LL;
  v22 = v8;
  v23 = 0LL;
  SepCreateToken(
    (HANDLE *)&v14,
    v9,
    v10,
    (__int64)v17,
    v11,
    v12,
    (__int64)&SeAnonymousAuthenticationId,
    &v15,
    &v16,
    2u,
    &v25,
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
