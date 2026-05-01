/*
 * XREFs of ?RmpSystemQueryProcessCommitSaveInfo@@YAXPEAXPEAU_PROCESS_COMMIT_RELEASE_INFORMATION@@@Z @ 0x18005A2A0
 * Callers:
 *     ?RmpActivityHostQueryOfferedMemoryCommitSaveCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180083B20 (-RmpActivityHostQueryOfferedMemoryCommitSaveCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall RmpSystemQueryProcessCommitSaveInfo(void *a1, struct _PROCESS_COMMIT_RELEASE_INFORMATION *a2)
{
  __int128 v3; // xmm1
  __int128 ProcessInformation; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h]

  ProcessInformation = 0LL;
  LODWORD(ProcessInformation) = 3;
  v5 = 0LL;
  NtQueryInformationProcess(a1, (PROCESSINFOCLASS)65, &ProcessInformation, 0x20u, 0LL);
  v3 = v5;
  *(_OWORD *)a2 = ProcessInformation;
  *((_OWORD *)a2 + 1) = v3;
}
