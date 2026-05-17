/*
 * XREFs of LdrpInitializationFailure @ 0x1800CDD30
 * Callers:
 *     LdrpLoadShimEngine @ 0x1800C6518 (LdrpLoadShimEngine.c)
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 *     LdrpInitializeShimDllDependencies @ 0x18011901C (LdrpInitializeShimDllDependencies.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800CE290 (LdrpLogFatalLdrEtwEvent.c)
 *     NtRaiseHardError @ 0x180161DF0 (NtRaiseHardError.c)
 */

__int64 __fastcall LdrpInitializationFailure(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  int v3; // [rsp+48h] [rbp+10h] BYREF
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v1 = a1;
  v3 = 0;
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrinit.c",
    2996,
    (__int64)"LdrpInitializationFailure",
    0,
    "Process initialization failed with status 0x%08lx\n",
    a1);
  result = LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName, &LdrFatalInitError);
  if ( !LdrpFatalHardErrorCount )
  {
    v4 = v1;
    return NtRaiseHardError(3221225797LL, 1LL, 0LL, &v4, 1, &v3);
  }
  return result;
}
