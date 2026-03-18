/*
 * XREFs of HasCapture @ 0x14003B910
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 */

char __fastcall HasCapture(__int64 a1, __int64 a2)
{
  __int64 MouseProcessor; // rax
  char v3; // cl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1, a2);
  if ( !MouseProcessor )
    return 0;
  v3 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(MouseProcessor + 3896), 1, 1) )
    return 0;
  return v3;
}
