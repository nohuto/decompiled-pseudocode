/*
 * XREFs of RtlSanitizeDebugRegister @ 0x1404ABAB0
 * Callers:
 *     PspSetContext @ 0x140A32610 (PspSetContext.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlSanitizeDebugRegister(unsigned __int64 a1, char a2)
{
  if ( a2 && a1 >= 0x7FFFFFFF0000LL )
    return 0LL;
  else
    return a1;
}
