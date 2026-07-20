/*
 * XREFs of SmpSessionIdToInitialSessionIndex @ 0x1400099F0
 * Callers:
 *     SmpDestroyControlBlock @ 0x140007BF4 (SmpDestroyControlBlock.c)
 *     SmpSetCoreProcessIds @ 0x140018CC4 (SmpSetCoreProcessIds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpSessionIdToInitialSessionIndex(int a1)
{
  __int64 result; // rax

  if ( a1 != -1 )
  {
    for ( result = 0LL; (unsigned int)result < SmpNumberInitialSessions; result = (unsigned int)(result + 1) )
    {
      if ( a1 == *(_DWORD *)(SmpCoreProcessIds + 40 * result) )
        return result;
    }
  }
  return 0xFFFFFFFFLL;
}
