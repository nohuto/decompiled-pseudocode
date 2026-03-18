/*
 * XREFs of HasCapture @ 0x14017CAF0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 */

char __fastcall HasCapture(int a1, int a2, int a3)
{
  __int64 MouseProcessor; // rax
  char v4; // cl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1, a2, a3);
  if ( !MouseProcessor )
    return 0;
  v4 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(MouseProcessor + 3904), 1, 1) )
    return 0;
  return v4;
}
