/*
 * XREFs of WheapProcessEfiBadMemoryPage @ 0x1406D897C
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1406D8788 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     HalSetEnvironmentVariableEx @ 0x14046B270 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x14046B4B0 (HalGetEnvironmentVariableEx.c)
 *     WheaPersistBadPageToBcd @ 0x1406D9F4C (WheaPersistBadPageToBcd.c)
 *     WheaPersistBadPageToRegistry @ 0x1406DA108 (WheaPersistBadPageToRegistry.c)
 */

__int64 WheapProcessEfiBadMemoryPage()
{
  __int64 result; // rax
  int v1; // eax
  unsigned int v2; // ebx
  int v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v3 = 8;
  result = HalGetEnvironmentVariableEx(
             L"UncorrectedBadMemoryPage",
             (__int64)&WheapHardwareErrorGuid,
             (__int64)&v4,
             &v3,
             0LL);
  if ( !v3 )
    return 3221226021LL;
  if ( (int)result >= 0 )
  {
    if ( *(_DWORD *)off_140E09578 == 1 )
    {
      v1 = WheaPersistBadPageToBcd(v4);
    }
    else
    {
      if ( *(_DWORD *)off_140E09578 != 2 )
      {
        v2 = 0;
        goto LABEL_11;
      }
      v1 = WheaPersistBadPageToRegistry(v4);
    }
    v2 = v1;
    if ( v1 < 0 )
      return v2;
LABEL_11:
    HalSetEnvironmentVariableEx(L"UncorrectedBadMemoryPage", (int)&WheapHardwareErrorGuid, 0LL, 0, 7);
    return v2;
  }
  return result;
}
