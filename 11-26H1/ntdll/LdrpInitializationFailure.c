/*
 * XREFs of LdrpInitializationFailure @ 0x1800CB4A0
 * Callers:
 *     LdrpLoadShimEngine @ 0x1800C3CD8 (LdrpLoadShimEngine.c)
 *     _LdrpInitialize @ 0x1800CC6B8 (_LdrpInitialize.c)
 *     LdrpInitializeShimDllDependencies @ 0x180118DCC (LdrpInitializeShimDllDependencies.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800CBA00 (LdrpLogFatalLdrEtwEvent.c)
 *     NtRaiseHardError @ 0x180161CF0 (NtRaiseHardError.c)
 */

NTSTATUS __fastcall LdrpInitializationFailure(int a1)
{
  unsigned __int64 v1; // rbx
  NTSTATUS result; // eax
  ULONG Response; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 Parameters; // [rsp+50h] [rbp+18h] BYREF

  v1 = a1;
  Response = 0;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrinit.c",
    2996,
    (__int64)"LdrpInitializationFailure",
    0,
    "Process initialization failed with status 0x%08lx\n",
    a1);
  result = LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName, &LdrFatalInitError);
  if ( !LdrpFatalHardErrorCount )
  {
    Parameters = v1;
    return NtRaiseHardError(-1073741499, 1u, 0, &Parameters, 1u, &Response);
  }
  return result;
}
