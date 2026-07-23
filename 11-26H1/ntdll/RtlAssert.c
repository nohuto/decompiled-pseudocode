/*
 * XREFs of RtlAssert @ 0x1800913D0
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x18002CB70 (sxsisol_SearchActCtxForDllName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18002E260 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180091278 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 * Callees:
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     RtlIsAnyDebuggerPresent @ 0x180091250 (RtlIsAnyDebuggerPresent.c)
 *     RtlCaptureContext @ 0x180126AB0 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x18013B8A0 (DbgPrompt.c)
 *     ZwTerminateProcess @ 0x18015F3C0 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x18015F8A0 (NtTerminateThread.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

void __cdecl __noreturn RtlAssert(PVOID VoidFailedAssertion, PVOID VoidFileName, ULONG LineNumber, PSTR MutableMessage)
{
  bool v8; // zf
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  CHAR Response[16]; // [rsp+40h] [rbp-518h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+50h] [rbp-508h] BYREF

  RtlCaptureContext(&ContextRecord);
  if ( !MutableMessage )
    MutableMessage = (PSTR)&Flags;
  while ( 1 )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Assertion failed: %s%s\n***   Source File: %s, line %ld\n\n",
      MutableMessage,
      (const char *)VoidFailedAssertion,
      (const char *)VoidFileName,
      LineNumber);
    if ( !RtlIsAnyDebuggerPresent() )
      break;
    if ( !DbgPrompt(
            "Break repeatedly, break Once, Ignore, terminate Process, or terminate Thread (boipt)? ",
            Response,
            2u) )
    {
      __debugbreak();
LABEL_17:
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741823);
      return;
    }
    if ( Response[0] > 98 )
    {
      v9 = Response[0] - 105;
      v8 = Response[0] == 105;
    }
    else
    {
      if ( Response[0] == 98 || Response[0] == 66 )
        goto LABEL_15;
      v9 = Response[0] - 73;
      v8 = Response[0] == 73;
    }
    if ( v8 )
      return;
    v10 = v9 - 6;
    if ( !v10 )
    {
LABEL_15:
      DbgPrintEx(0x65u, 0, "Execute '.cxr %p' to dump context\n", &ContextRecord);
      __debugbreak();
    }
    v11 = v10 - 1;
    if ( !v11 )
      goto LABEL_17;
    if ( v11 == 4 )
      NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, -1073741823);
  }
}
