/*
 * XREFs of PpmIdleUpdateSynchronizationState @ 0x140605430
 * Callers:
 *     PoInitiateProcessorWake @ 0x140603F50 (PoInitiateProcessorWake.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleUpdateSynchronizationState(unsigned __int32 *a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int32 v3; // eax
  int v4; // r10d
  unsigned __int32 v5; // r8d

  _m_prefetchw(a1);
  v3 = *a1;
  v4 = a3;
  do
  {
    if ( HIBYTE(v3) != v4 )
      break;
    v5 = v3;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v3 & 0xFFFFFF | (a2 << 24), v3);
  }
  while ( v3 != v5 );
  return HIBYTE(v3);
}
