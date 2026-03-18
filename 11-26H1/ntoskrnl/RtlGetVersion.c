/*
 * XREFs of RtlGetVersion @ 0x140A92BE0
 * Callers:
 *     RtlVerifyVersionInfo @ 0x1404959C0 (RtlVerifyVersionInfo.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1405532EC (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     Win7RtlGetVersion @ 0x1407BF800 (Win7RtlGetVersion.c)
 *     Win81RtlGetVersion @ 0x1407BF8F0 (Win81RtlGetVersion.c)
 *     Win8RtlGetVersion @ 0x1407BF9E0 (Win8RtlGetVersion.c)
 *     _SysCtxOpenMachine @ 0x14089CC70 (_SysCtxOpenMachine.c)
 *     SdbpMatchOsVersion @ 0x140A92A84 (SdbpMatchOsVersion.c)
 *     PopEtInit @ 0x140CD5AFC (PopEtInit.c)
 *     EtwpTraceSystemInitialization @ 0x140CE1440 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140450F70 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x140A92CC0 (RtlGetSuiteMask.c)
 */

NTSTATUS __stdcall RtlGetVersion(PRTL_OSVERSIONINFOW lpVersionInformation)
{
  ULONG dwOSVersionInfoSize; // eax
  __int16 v3; // ax
  bool v4; // zf
  __int16 SuiteMask; // ax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&lpVersionInformation->dwMajorVersion = 10LL;
  lpVersionInformation->dwBuildNumber = (unsigned __int16)NtBuildNumber;
  dwOSVersionInfoSize = lpVersionInformation->dwOSVersionInfoSize;
  v7 = 0;
  lpVersionInformation->dwPlatformId = 2;
  if ( dwOSVersionInfoSize == 284 || dwOSVersionInfoSize == 292 )
  {
    LOWORD(lpVersionInformation[1].dwOSVersionInfoSize) = BYTE1(CmNtCSDVersion);
    v3 = (unsigned __int8)CmNtCSDVersion;
    LOWORD(lpVersionInformation[1].dwMajorVersion) = 0;
    v4 = (_DWORD)InitializationPhase == 0;
    HIWORD(lpVersionInformation[1].dwOSVersionInfoSize) = v3;
    BYTE2(lpVersionInformation[1].dwMajorVersion) = 0;
    if ( !v4 )
    {
      if ( RtlGetNtProductType(&v7) )
        BYTE2(lpVersionInformation[1].dwMajorVersion) = v7;
      SuiteMask = RtlGetSuiteMask();
      v4 = lpVersionInformation->dwOSVersionInfoSize == 292;
      LOWORD(lpVersionInformation[1].dwMajorVersion) = SuiteMask;
      if ( v4 )
        lpVersionInformation[1].dwMinorVersion = RtlGetSuiteMask() & 0x1FFFF;
    }
    HIBYTE(lpVersionInformation[1].dwMajorVersion) = 0;
  }
  return 0;
}
