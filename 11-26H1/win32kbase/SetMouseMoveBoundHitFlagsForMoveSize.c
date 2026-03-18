/*
 * XREFs of SetMouseMoveBoundHitFlagsForMoveSize @ 0x14021C2A0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 */

__int64 __fastcall SetMouseMoveBoundHitFlagsForMoveSize(unsigned int a1, int a2, int a3)
{
  __int64 result; // rax

  result = anonymous_namespace_::GetMouseProcessor(a1, a2, a3);
  if ( result )
    _InterlockedOr((volatile signed __int32 *)(result + 3664), a1);
  return result;
}
