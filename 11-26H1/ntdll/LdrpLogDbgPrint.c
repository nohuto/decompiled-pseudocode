/*
 * XREFs of LdrpLogDbgPrint @ 0x18011EE2C
 * Callers:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800DB608 (vDbgPrintExWithPrefixInternal.c)
 *     StringCbPrintfA @ 0x18011EF2C (StringCbPrintfA.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

struct _TEB *__fastcall LdrpLogDbgPrint(__int64 a1, __int64 a2, const char *a3, int a4, __int64 a5, __int64 a6)
{
  struct _TEB *result; // rax
  char pszDest[256]; // [rsp+40h] [rbp-118h] BYREF

  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0 || (result = NtCurrentTeb(), (result->SameTebFlags & 0x20) != 0) )
  {
    StringCbPrintfA(
      pszDest,
      0x100uLL,
      "%04x:%04x @ %08d - %s - %s: ",
      NtCurrentTeb()->ClientId.UniqueProcess,
      NtCurrentTeb()->ClientId.UniqueThread,
      (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24,
      a3,
      (&off_180171218)[2 * a4]);
    return (struct _TEB *)vDbgPrintExWithPrefixInternal((__int64)pszDest, 0x55u, 0, a5, a6, 1);
  }
  return result;
}
