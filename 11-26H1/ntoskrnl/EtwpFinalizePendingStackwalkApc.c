/*
 * XREFs of EtwpFinalizePendingStackwalkApc @ 0x14048735C
 * Callers:
 *     EtwpCancelStackWalkApc @ 0x140487340 (EtwpCancelStackWalkApc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpFinalizePendingStackwalkApc(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  if ( !a3 )
  {
    result = (*(unsigned __int16 *)(a1 + 818) & 7u) + 24;
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), result);
  }
  return result;
}
