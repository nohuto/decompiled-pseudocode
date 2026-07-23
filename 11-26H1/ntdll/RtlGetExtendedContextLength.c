/*
 * XREFs of RtlGetExtendedContextLength @ 0x1800B1520
 * Callers:
 *     PsspCaptureThreadInformation @ 0x1800B0C00 (PsspCaptureThreadInformation.c)
 *     PsspInitializeContextOrExtendedContext @ 0x1800B1330 (PsspInitializeContextOrExtendedContext.c)
 * Callees:
 *     RtlGetExtendedContextLength3 @ 0x1800B17C0 (RtlGetExtendedContextLength3.c)
 *     RtlpValidateContextFlags2 @ 0x1800B1FF0 (RtlpValidateContextFlags2.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  __int64 v3; // rbx
  NTSTATUS result; // eax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0;
  result = RtlpValidateContextFlags2(ContextFlags, &v6, 2147353560LL);
  if ( result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v3 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlGetExtendedContextLength3(ContextFlags, ContextLength, v3, 2147353560LL);
  }
  return result;
}
