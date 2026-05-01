/*
 * XREFs of ?GetCpuSpeed@GamingOverlayExperienceManager@@AEAAJPEAN@Z @ 0x180347EF4
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180350550 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$vector@U_PROCESSOR_POWER_INFORMATION@@V?$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@std@@QEAA@_KAEBV?$allocator@U_PROCESSOR_POWER_INFORMATION@@@1@@Z @ 0x180341804 (--0-$vector@U_PROCESSOR_POWER_INFORMATION@@V-$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@st.c)
 *     ??1?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x1803586C4 (--1-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pair@_KURect@Foundat.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetCpuSpeed(GamingOverlayExperienceManager *this, double *a2)
{
  __int64 dwNumberOfProcessors; // rdi
  NTSTATUS v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rdx
  double v8; // xmm1_8
  int *v9; // rcx
  int v10; // eax
  PVOID OutputBuffer[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h]
  _SYSTEM_INFO SystemInfo; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x552,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  *a2 = 0.0;
  memset(&SystemInfo, 0, sizeof(SystemInfo));
  GetSystemInfo(&SystemInfo);
  dwNumberOfProcessors = SystemInfo.dwNumberOfProcessors;
  if ( SystemInfo.dwNumberOfProcessors )
  {
    *(_OWORD *)OutputBuffer = 0LL;
    v12 = 0LL;
    std::vector<_PROCESSOR_POWER_INFORMATION>::vector<_PROCESSOR_POWER_INFORMATION>(
      (char **)OutputBuffer,
      SystemInfo.dwNumberOfProcessors);
    v5 = CallNtPowerInformation(
           ProcessorInformation,
           0LL,
           0,
           OutputBuffer[0],
           8 * (((char *)OutputBuffer[1] - (char *)OutputBuffer[0]) >> 3));
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x560,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v5);
      std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::~vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>(OutputBuffer);
      return v6;
    }
    v7 = dwNumberOfProcessors;
    v8 = *a2;
    v9 = (int *)((char *)OutputBuffer[0] + 8);
    do
    {
      v10 = *v9;
      v9 += 6;
      v8 = v8 + (double)v10 / 1000.0;
      *a2 = v8;
      --v7;
    }
    while ( v7 );
    *a2 = v8 / (double)(int)dwNumberOfProcessors;
    std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::~vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>(OutputBuffer);
  }
  return 0LL;
}
