/*
 * XREFs of PpmInfoApplySettingUpdate @ 0x140A9C928
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x140A3FC14 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PpmReapplyIdlePolicy @ 0x140A9C8FC (PpmReapplyIdlePolicy.c)
 *     PpmInfoReleaseLocks @ 0x140A9C9D4 (PpmInfoReleaseLocks.c)
 *     PpmGetPolicyAction @ 0x140A9CA04 (PpmGetPolicyAction.c)
 *     PpmReapplyPerfPolicy @ 0x140A9D088 (PpmReapplyPerfPolicy.c)
 */

__int64 __fastcall PpmInfoApplySettingUpdate(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // r11
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h] BYREF

  v7 = 0;
  if ( !a2 && (!PpmPerfSchedulerDirectedPerfStatesSupported || !PopHeteroSystem || !(_BYTE)a3) )
    return PpmInfoReleaseLocks(a1);
  v5 = *(unsigned __int8 *)(a1 + 36);
  v8 = 0LL;
  *((_QWORD *)&v8 + (v5 >> 6)) |= 1LL << (v5 & 0x3F);
  PpmGetPolicyAction(&v8, &v7, a3, a4);
  if ( (*(_BYTE *)(v6 + 37) & 1) != 0 )
    return PpmReapplyPerfPolicy(&v7);
  PpmReapplyIdlePolicy();
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F10070.1136);
}
