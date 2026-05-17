/*
 * XREFs of DbgPrompt @ 0x18013B9E0
 * Callers:
 *     RtlAssert @ 0x180070F80 (RtlAssert.c)
 *     LdrpGenericExceptionFilter @ 0x18015B768 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     DebugPrompt @ 0x180126C70 (DebugPrompt.c)
 */

__int64 __fastcall DbgPrompt(__int64 a1)
{
  __int64 v1; // rax

  v1 = -1LL;
  do
    ++v1;
  while ( *(_BYTE *)(a1 + v1) );
  return DebugPrompt();
}
