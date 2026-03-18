/*
 * XREFs of IsMouseButtonDown @ 0x14021BD60
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 */

char __fastcall IsMouseButtonDown(int a1, int a2, int a3)
{
  __int64 MouseProcessor; // rax

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1, a2, a3);
  if ( MouseProcessor )
    LOBYTE(MouseProcessor) = *(_DWORD *)(MouseProcessor + 3780) != 0;
  return MouseProcessor;
}
