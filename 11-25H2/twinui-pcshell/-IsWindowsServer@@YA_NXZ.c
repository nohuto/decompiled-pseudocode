/*
 * XREFs of ?IsWindowsServer@@YA_NXZ @ 0x18022C87C
 * Callers:
 *     ?IsAllowedSku@@YA_NXZ @ 0x1800BB138 (-IsAllowedSku@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

bool IsWindowsServer(void)
{
  ULONGLONG v0; // rax
  struct _OSVERSIONINFOEXW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  VersionInformation.dwOSVersionInfoSize = 284;
  *(_OWORD *)&VersionInformation.dwMajorVersion = 0LL;
  memset_0(VersionInformation.szCSDVersion, 0, sizeof(VersionInformation.szCSDVersion));
  *(_DWORD *)&VersionInformation.wSuiteMask = 0x10000;
  *(_DWORD *)&VersionInformation.wServicePackMajor = 0;
  v0 = VerSetConditionMask(0LL, 0x80u, 1u);
  return !VerifyVersionInfoW(&VersionInformation, 0x80u, v0);
}
