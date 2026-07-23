/*
 * XREFs of RtlGetVersion @ 0x140A97730
 * Callers:
 *     RtlVerifyVersionInfo @ 0x14048F510 (RtlVerifyVersionInfo.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x14055577C (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     Win7RtlGetVersion @ 0x1407C2860 (Win7RtlGetVersion.c)
 *     Win81RtlGetVersion @ 0x1407C2950 (Win81RtlGetVersion.c)
 *     Win8RtlGetVersion @ 0x1407C2A40 (Win8RtlGetVersion.c)
 *     _SysCtxOpenMachine @ 0x1408A3070 (_SysCtxOpenMachine.c)
 *     SdbpMatchOsVersion @ 0x140A975D4 (SdbpMatchOsVersion.c)
 *     PopEtInit @ 0x140CDBE50 (PopEtInit.c)
 *     EtwpTraceSystemInitialization @ 0x140CE77E0 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1404490A0 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x140A97810 (RtlGetSuiteMask.c)
 */

NTSTATUS __stdcall RtlGetVersion(PRTL_OSVERSIONINFOW lpVersionInformation)
{
  DWORD dwOSVersionInfoSize; // eax
  __int16 v3; // ax
  bool v4; // zf
  __int16 SuiteMask; // ax
  _NT_PRODUCT_TYPE NtProductType; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&lpVersionInformation->dwMajorVersion = 10LL;
  lpVersionInformation->dwBuildNumber = (unsigned __int16)NtBuildNumber;
  dwOSVersionInfoSize = lpVersionInformation->dwOSVersionInfoSize;
  NtProductType = 0;
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
      if ( RtlGetNtProductType(&NtProductType) )
        BYTE2(lpVersionInformation[1].dwMajorVersion) = NtProductType;
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
