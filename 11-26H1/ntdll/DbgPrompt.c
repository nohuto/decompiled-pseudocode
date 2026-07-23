/*
 * XREFs of DbgPrompt @ 0x18013B8A0
 * Callers:
 *     RtlAssert @ 0x1800913D0 (RtlAssert.c)
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     DebugPrompt @ 0x1801269E0 (DebugPrompt.c)
 */

ULONG __cdecl DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return DebugPrompt();
}
