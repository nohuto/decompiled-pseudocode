/*
 * XREFs of PpmInfoApplySettingUpdate @ 0x140AD873C
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1409FB634 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PpmInfoReleaseLocks @ 0x140AD87EC (PpmInfoReleaseLocks.c)
 *     PpmGetPolicyAction @ 0x140AD881C (PpmGetPolicyAction.c)
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 *     PpmReapplyIdlePolicy @ 0x140AD8F94 (PpmReapplyIdlePolicy.c)
 */

__int64 __fastcall PpmInfoApplySettingUpdate(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h] BYREF

  v8 = 0;
  if ( !a2 && (!PpmPerfSchedulerDirectedPerfStatesSupported || !PopHeteroSystem || !(_BYTE)a3) )
    return PpmInfoReleaseLocks(a1);
  v6 = *(unsigned __int8 *)(a1 + 36);
  v9 = 0LL;
  *((_QWORD *)&v9 + (v6 >> 6)) |= 1LL << (v6 & 0x3F);
  PpmGetPolicyAction(&v9, &v8, a3, a4);
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    return PpmReapplyPerfPolicy(&v8);
  PpmReapplyIdlePolicy(v7);
  return PopReleaseRwLock(&PpmIdlePolicyLock);
}
