/*
 * XREFs of RtlAssert @ 0x140619AB0
 * Callers:
 *     KsepStringSplitMultiString @ 0x1407BE83C (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x1407BECF8 (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryDWORD @ 0x1407BF038 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryQuerySZ @ 0x1407BF28C (KsepRegistryQuerySZ.c)
 *     KsepRegistryQueryValue @ 0x1407BF4FC (KsepRegistryQueryValue.c)
 *     KsepRegistryOpenKey @ 0x1409E5254 (KsepRegistryOpenKey.c)
 *     KsepStringConcatenate @ 0x1409E5358 (KsepStringConcatenate.c)
 *     KsepStringFree @ 0x1409E5588 (KsepStringFree.c)
 *     KsepStringTransform @ 0x1409E5CF0 (KsepStringTransform.c)
 *     KsepStringDuplicate @ 0x1409E5E2C (KsepStringDuplicate.c)
 *     KseShimDatabaseClose @ 0x1409E6D54 (KseShimDatabaseClose.c)
 *     KseDriverUnloadImage @ 0x140A2501C (KseDriverUnloadImage.c)
 *     KsepGetShimCallbacksForDriver @ 0x140A25750 (KsepGetShimCallbacksForDriver.c)
 *     KsepStringDuplicateUnicode @ 0x140A25B24 (KsepStringDuplicateUnicode.c)
 *     KsepEngineInitialize @ 0x140CCCDD4 (KsepEngineInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x140CCDA60 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineReadFlags @ 0x140D0821C (KsepEngineReadFlags.c)
 * Callees:
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     RtlCaptureContext @ 0x1405349C0 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x140618030 (DbgPrompt.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x140723E50 (ZwTerminateThread.c)
 *     RtlpTerminateCurrentProcess @ 0x140804A9C (RtlpTerminateCurrentProcess.c)
 */

void __stdcall RtlAssert(PVOID VoidFailedAssertion, PVOID VoidFileName, ULONG LineNumber, PSTR MutableMessage)
{
  bool v8; // zf
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  CHAR Response[16]; // [rsp+40h] [rbp-518h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+50h] [rbp-508h] BYREF

  RtlCaptureContext(&ContextRecord);
  if ( !MutableMessage )
    MutableMessage = (PSTR)&File;
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
    if ( (MEMORY[0xFFFFF780000002D4] & 3) != 3 )
      break;
    if ( !DbgPrompt(
            "Break repeatedly, break Once, Ignore, terminate Process, or terminate Thread (boipt)? ",
            Response,
            2u) )
    {
      __debugbreak();
LABEL_17:
      RtlpTerminateCurrentProcess();
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
      ZwTerminateThread(-2LL, 3221225473LL);
  }
}
