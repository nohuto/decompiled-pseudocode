/*
 * XREFs of SmmIdentityMapMemory @ 0x140284F9C
 * Callers:
 *     SmmIommuSwitchToTranslation @ 0x140285730 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmmIdentityMapMemory(__int64 a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdi
  __int64 v5; // rcx
  _QWORD v6[3]; // [rsp+50h] [rbp-48h] BYREF
  __int128 SystemInformation; // [rsp+68h] [rbp-30h] BYREF
  __int64 v8; // [rsp+78h] [rbp-20h]

  v8 = 0LL;
  SystemInformation = 0LL;
  v2 = ZwQuerySystemInformation(SystemPrefetcherInformation|0x80, &SystemInformation, 0x18u, 0LL);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 112);
    v6[2] = v8;
    v6[0] = 1LL;
    v6[1] = 0LL;
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))qword_140169628)(v5, 3LL, v6);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2279;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to query system physical memory info, Status=0x%.8x",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v3;
  }
}
