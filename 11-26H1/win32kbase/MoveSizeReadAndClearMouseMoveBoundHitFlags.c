/*
 * XREFs of MoveSizeReadAndClearMouseMoveBoundHitFlags @ 0x14021BE10
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 */

__int64 __fastcall MoveSizeReadAndClearMouseMoveBoundHitFlags(int a1, int a2, int a3)
{
  __int64 MouseProcessor; // rcx
  __int64 result; // rax

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1, a2, a3);
  result = 0LL;
  if ( MouseProcessor )
    return (unsigned int)_InterlockedExchange((volatile __int32 *)(MouseProcessor + 3664), 0);
  return result;
}
