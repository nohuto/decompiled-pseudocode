/*
 * XREFs of SdbpGetMergeSdbsSupported @ 0x18008F10C
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x18008D65C (SdbGetMergeRedirectPath.c)
 *     SdbGetMergeStubPath @ 0x18008D810 (SdbGetMergeStubPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x18008E3FC (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x18008E830 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpGetMergeSdbsDisabled @ 0x18008F004 (SdbpGetMergeSdbsDisabled.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 SdbpGetMergeSdbsSupported()
{
  ULONGLONG v1; // rax
  ULONGLONG v2; // rax
  ULONGLONG v3; // rax
  NTSTATUS v4; // eax
  _OSVERSIONINFOEXW VersionInfo; // [rsp+30h] [rbp-138h] BYREF

  if ( dword_1800E35E8 )
    return (unsigned int)dword_1800E175C;
  memset_0(&VersionInfo.dwPlatformId, 0, 0x10CuLL);
  VersionInfo.dwOSVersionInfoSize = 284;
  *(_QWORD *)&VersionInfo.dwMajorVersion = 10LL;
  VersionInfo.dwBuildNumber = 22621;
  v1 = VerSetConditionMask(0LL, 2u, 3u);
  v2 = VerSetConditionMask(v1, 1u, 3u);
  v3 = VerSetConditionMask(v2, 4u, 3u);
  dword_1800E35E8 = 1;
  v4 = RtlVerifyVersionInfo(&VersionInfo, 7u, v3);
  if ( v4 >= 0 )
    return 1LL;
  if ( v4 != -1073741735 )
    AslLogCallPrintf(1LL, "SdbpGetMergeSdbsSupported", 1056LL, "Failed to verify version info [%x]", v4);
  dword_1800E175C = 0;
  return 0LL;
}
