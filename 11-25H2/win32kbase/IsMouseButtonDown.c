/*
 * XREFs of IsMouseButtonDown @ 0x140216820
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 */

char __fastcall IsMouseButtonDown(__int64 a1, __int64 a2)
{
  __int64 MouseProcessor; // rax

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1, a2);
  if ( MouseProcessor )
    LOBYTE(MouseProcessor) = *(_DWORD *)(MouseProcessor + 3772) != 0;
  return MouseProcessor;
}
