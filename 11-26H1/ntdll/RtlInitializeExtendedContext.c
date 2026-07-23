/*
 * XREFs of RtlInitializeExtendedContext @ 0x1800B14A0
 * Callers:
 *     PsspInitializeContextOrExtendedContext @ 0x1800B1330 (PsspInitializeContextOrExtendedContext.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x1800B1A60 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags2 @ 0x1800B1FF0 (RtlpValidateContextFlags2.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT_EX *ContextEx)
{
  ULONG64 v6; // rbx
  NTSTATUS result; // eax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v8 = 0;
  result = RtlpValidateContextFlags2(ContextFlags, &v8, 2147353560LL);
  if ( result >= 0 )
  {
    if ( (v8 & 2) != 0 )
      v6 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlInitializeExtendedContext2(Context, ContextFlags, ContextEx, v6);
  }
  return result;
}
