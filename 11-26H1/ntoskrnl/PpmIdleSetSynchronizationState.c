/*
 * XREFs of PpmIdleSetSynchronizationState @ 0x140505384
 * Callers:
 *     PpmIdleSelectStates @ 0x1402F70FC (PpmIdleSelectStates.c)
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleSetSynchronizationState(unsigned __int32 *a1, unsigned __int8 a2)
{
  unsigned __int32 v2; // eax
  unsigned __int32 v3; // r8d

  _m_prefetchw(a1);
  v2 = *a1;
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)a1, (a2 << 24) | v2 & 0xFFFFFF, v2);
  }
  while ( v2 != v3 );
  return HIBYTE(v2);
}
