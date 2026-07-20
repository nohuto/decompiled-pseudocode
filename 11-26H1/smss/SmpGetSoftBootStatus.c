/*
 * XREFs of SmpGetSoftBootStatus @ 0x1400010B8
 * Callers:
 *     wmain @ 0x140001618 (wmain.c)
 * Callees:
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

bool SmpGetSoftBootStatus()
{
  bool result; // al
  __int128 SystemInformation; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+30h] [rbp-28h]

  SystemInformation = 0LL;
  v2 = 0LL;
  NtQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL);
  SmpSoftBoot = (BYTE8(v2) & 4) != 0;
  result = (BYTE8(v2) & 0x20) != 0;
  SmpSoftBootSystemHiveReady = result;
  SmpBugcheckRecovery = (WORD4(v2) & 0x4000) != 0LL;
  return result;
}
