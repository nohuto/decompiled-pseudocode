/*
 * XREFs of RtlAssert @ 0x180070F80
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x180042600 (sxsisol_SearchActCtxForDllName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180043CF0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180070E28 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 * Callees:
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     RtlIsAnyDebuggerPresent @ 0x180070E00 (RtlIsAnyDebuggerPresent.c)
 *     RtlCaptureContext @ 0x180126D40 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x18013B9E0 (DbgPrompt.c)
 *     ZwTerminateProcess @ 0x18015F4C0 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x18015F9A0 (NtTerminateThread.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

char __fastcall RtlAssert(const char *a1, const char *a2, int a3, const char *a4)
{
  int v8; // eax
  bool v9; // zf
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  char v14[16]; // [rsp+40h] [rbp-518h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+50h] [rbp-508h] BYREF

  RtlCaptureContext(&ContextRecord);
  if ( !a4 )
    a4 = (const char *)&unk_180176D3C;
  while ( 1 )
  {
    DbgPrintEx(101, 0, "\n*** Assertion failed: %s%s\n***   Source File: %s, line %ld\n\n", a4, a1, a2, a3);
    LOBYTE(v8) = RtlIsAnyDebuggerPresent();
    if ( !(_BYTE)v8 )
      return v8;
    v8 = DbgPrompt("Break repeatedly, break Once, Ignore, terminate Process, or terminate Thread (boipt)? ", v14, 2LL);
    if ( !v8 )
    {
      __debugbreak();
LABEL_17:
      LOBYTE(v8) = ZwTerminateProcess(-1LL, 3221225473LL);
      return v8;
    }
    if ( v14[0] > 98 )
    {
      v10 = v14[0] - 105;
      v9 = v14[0] == 105;
    }
    else
    {
      if ( v14[0] == 98 || v14[0] == 66 )
        goto LABEL_15;
      v10 = v14[0] - 73;
      v9 = v14[0] == 73;
    }
    if ( v9 )
      return v8;
    v11 = v10 - 6;
    if ( !v11 )
    {
LABEL_15:
      DbgPrintEx(101, 0, "Execute '.cxr %p' to dump context\n", &ContextRecord);
      __debugbreak();
    }
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_17;
    if ( v12 == 4 )
      NtTerminateThread(-2LL, 3221225473LL);
  }
}
