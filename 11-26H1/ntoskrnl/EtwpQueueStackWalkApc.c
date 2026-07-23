/*
 * XREFs of EtwpQueueStackWalkApc @ 0x14020AA10
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 * Callees:
 *     EtwpQueueApc @ 0x14020AAF0 (EtwpQueueApc.c)
 */

char __fastcall EtwpQueueStackWalkApc(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int8 a4, unsigned int *a5)
{
  unsigned int v6; // edi

  v6 = 0;
  if ( a4 )
  {
    if ( _bittest((const signed __int32 *)(a1 + 120), 0x17u) )
      return 0;
  }
  else
  {
    v6 = (*(_WORD *)(a3 + 818) & 7) + 24;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), v6) )
      return 0;
  }
  if ( (int)EtwpQueueApc(
              (int)a3 + 832,
              a1,
              a2,
              (unsigned int)EtwpStackWalkApc,
              (__int64)EtwpCancelStackWalkApc,
              a4,
              a5[1],
              *a5) >= 0 )
    return 1;
  if ( a4 )
    return 0;
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), v6);
  return 0;
}
