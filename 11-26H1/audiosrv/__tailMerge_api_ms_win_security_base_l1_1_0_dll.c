/*
 * XREFs of __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x1800B3564
 * Callers:
 *     __imp_load_GetSidLengthRequired @ 0x1800B35E3 (__imp_load_GetSidLengthRequired.c)
 *     __imp_load_InitializeSid @ 0x1800B35F5 (__imp_load_InitializeSid.c)
 *     __imp_load_GetSidSubAuthority @ 0x1800B3607 (__imp_load_GetSidSubAuthority.c)
 *     __imp_load_CopySid @ 0x1800B3619 (__imp_load_CopySid.c)
 *     __imp_load_GetLengthSid @ 0x1800B362B (__imp_load_GetLengthSid.c)
 *     __imp_load_IsValidSid @ 0x1800B363D (__imp_load_IsValidSid.c)
 *     __imp_load_InitializeAcl @ 0x1800B364F (__imp_load_InitializeAcl.c)
 *     __imp_load_AddAce @ 0x1800B3661 (__imp_load_AddAce.c)
 *     __imp_load_GetAclInformation @ 0x1800B3673 (__imp_load_GetAclInformation.c)
 *     __imp_load_GetSecurityDescriptorOwner @ 0x1800B3685 (__imp_load_GetSecurityDescriptorOwner.c)
 *     __imp_load_GetSecurityDescriptorGroup @ 0x1800B3697 (__imp_load_GetSecurityDescriptorGroup.c)
 *     __imp_load_GetSecurityDescriptorDacl @ 0x1800B36A9 (__imp_load_GetSecurityDescriptorDacl.c)
 *     __imp_load_SetSecurityDescriptorDacl @ 0x1800B36BB (__imp_load_SetSecurityDescriptorDacl.c)
 *     __imp_load_GetSecurityDescriptorSacl @ 0x1800B36CD (__imp_load_GetSecurityDescriptorSacl.c)
 *     __imp_load_MakeSelfRelativeSD @ 0x1800B36DF (__imp_load_MakeSelfRelativeSD.c)
 *     __imp_load_GetSecurityDescriptorLength @ 0x1800B36F1 (__imp_load_GetSecurityDescriptorLength.c)
 *     __imp_load_GetSecurityDescriptorControl @ 0x1800B3703 (__imp_load_GetSecurityDescriptorControl.c)
 *     __imp_load_MakeAbsoluteSD @ 0x1800B3715 (__imp_load_MakeAbsoluteSD.c)
 *     __imp_load_InitializeSecurityDescriptor @ 0x1800B3727 (__imp_load_InitializeSecurityDescriptor.c)
 *     __imp_load_GetTokenInformation @ 0x1800B3DBD (__imp_load_GetTokenInformation.c)
 *     __imp_load_CheckTokenMembership @ 0x1800B4290 (__imp_load_CheckTokenMembership.c)
 *     __imp_load_AllocateAndInitializeSid @ 0x1800B42B4 (__imp_load_AllocateAndInitializeSid.c)
 *     __imp_load_AddAccessAllowedAce @ 0x1800B42C6 (__imp_load_AddAccessAllowedAce.c)
 *     __imp_load_FreeSid @ 0x1800B42D8 (__imp_load_FreeSid.c)
 *     __imp_load_GetAce @ 0x1800B42EA (__imp_load_GetAce.c)
 *     __imp_load_GetKernelObjectSecurity @ 0x1800B42FC (__imp_load_GetKernelObjectSecurity.c)
 *     __imp_load_RevertToSelf @ 0x1800B4320 (__imp_load_RevertToSelf.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088030 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_security_base_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_security_base_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
