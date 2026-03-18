/*
 * XREFs of rimSetDeviceDisplayConfig @ 0x1401A2A4C
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x14007B81C (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1401755E0 (RIMUpdatePointerDeviceScalingInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimNotifyPointerDeviceChangeClients @ 0x14020611C (rimNotifyPointerDeviceChangeClients.c)
 */

__int64 __fastcall rimSetDeviceDisplayConfig(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // r9
  __int128 v9; // xmm0
  __int64 v10; // rbx
  __int64 result; // rax

  if ( a2 && *(_DWORD *)(a2 + 24) == 6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 457LL);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 462LL);
  if ( a2
    && a3
    && (*(_DWORD *)(a1 + 1896) != *(_DWORD *)(a4 + 16)
     || *(_DWORD *)(a1 + 1900) != *(_DWORD *)(a4 + 20)
     || *(_DWORD *)(a1 + 1904) != *(_DWORD *)(a4 + 24)
     || *(_DWORD *)(a1 + 1908) != *(_DWORD *)(a4 + 28)
     || *(_DWORD *)(a1 + 1996) != *(_DWORD *)(a4 + 116)
     || *(_DWORD *)(a1 + 2000) != *(_DWORD *)(a4 + 120)
     || *(_DWORD *)(a1 + 2004) != *(_DWORD *)(a4 + 124)
     || *(_DWORD *)(a1 + 2008) != *(_DWORD *)(a4 + 128)
     || *(_DWORD *)(a1 + 1968) != *(_DWORD *)(a4 + 88)
     || *(_DWORD *)(a1 + 1972) != *(_DWORD *)(a4 + 92)
     || *(_DWORD *)(a1 + 1936) != *(_DWORD *)(a4 + 56)
     || *(_DWORD *)(a1 + 1940) != *(_DWORD *)(a4 + 60)
     || *(_DWORD *)(a1 + 1984) != *(_DWORD *)(a4 + 104)
     || *(_DWORD *)(a1 + 1988) != *(_DWORD *)(a4 + 108)
     || RtlCompareMemory((const void *)(a1 + 2020), (const void *)(a4 + 140), 0x10uLL) != 16) )
  {
    if ( *(_DWORD *)(a1 + 1896) != *(_DWORD *)(a4 + 16)
      || *(_DWORD *)(a1 + 1900) != *(_DWORD *)(a4 + 20)
      || (v8 = 0LL, *(_DWORD *)(a1 + 1908) != *(_DWORD *)(a4 + 28)) )
    {
      v8 = 1LL;
    }
    rimNotifyPointerDeviceChangeClients(a1, a2, a4, v8);
  }
  *(_OWORD *)(a1 + 1880) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 1896) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 1912) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 1928) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(a1 + 1944) = *(_OWORD *)(a4 + 64);
  *(_OWORD *)(a1 + 1960) = *(_OWORD *)(a4 + 80);
  *(_OWORD *)(a1 + 1976) = *(_OWORD *)(a4 + 96);
  v9 = *(_OWORD *)(a4 + 112);
  v10 = a4 + 128;
  *(_OWORD *)(a1 + 1992) = v9;
  *(_OWORD *)(a1 + 2008) = *(_OWORD *)v10;
  *(_OWORD *)(a1 + 2024) = *(_OWORD *)(v10 + 16);
  *(_OWORD *)(a1 + 2040) = *(_OWORD *)(v10 + 32);
  *(_OWORD *)(a1 + 2056) = *(_OWORD *)(v10 + 48);
  *(_OWORD *)(a1 + 2072) = *(_OWORD *)(v10 + 64);
  result = *(_QWORD *)(v10 + 80);
  *(_QWORD *)(a1 + 2088) = result;
  if ( a2 )
    return RIMUpdatePointerDeviceScalingInfo((_DWORD *)(a2 + 140), (_DWORD *)(a1 + 1880), (int *)(a1 + 2096), 0LL);
  return result;
}
