/*
 * XREFs of PpmIdleCoordinatedBitsFromList @ 0x1404C83B8
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleCoordinatedBitsFromList(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( (_DWORD)a2 )
  {
    a2 = (unsigned int)a2;
    do
    {
      if ( *a1 < 0x40u )
        result |= 1LL << *a1;
      ++a1;
      --a2;
    }
    while ( a2 );
  }
  return result;
}
