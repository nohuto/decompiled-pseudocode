/*
 * XREFs of KiSetDpcRequestFlag @ 0x140447660
 * Callers:
 *     KiCheckForTimerExpiration @ 0x140220830 (KiCheckForTimerExpiration.c)
 *     KiUpdateRunTime @ 0x140220DB0 (KiUpdateRunTime.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiRequestTimer2Expiration @ 0x1404475C4 (KiRequestTimer2Expiration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSetDpcRequestFlag(unsigned __int16 *a1, __int16 a2)
{
  unsigned int v4; // r8d
  unsigned __int16 v5; // cx
  int v6; // r9d
  unsigned __int64 v7; // rax
  unsigned int v8; // r9d
  int v9; // eax
  unsigned int v10; // ecx
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // tt

  v4 = 0;
  _m_prefetchw(a1);
  v5 = *a1;
  if ( v5 != _InterlockedCompareExchange16((volatile signed __int16 *)a1, a2 | v5, v5) )
  {
    while ( 1 )
    {
      v6 = v4;
      if ( v4 )
        break;
      if ( (_DWORD)KeNumberProcessors_0 != 1 )
      {
        v6 = 64;
LABEL_5:
        v4 = v6;
        v7 = __rdtsc();
        v8 = 10 * (v6 + ((v6 - 1) & (unsigned int)v7)) / MEMORY[0xFFFFF780000002D6];
        if ( v8 )
        {
          v9 = 1;
          do
          {
            _mm_pause();
            v10 = v9++;
          }
          while ( v10 < v8 );
        }
      }
      _m_prefetchw(a1);
      v11 = *a1;
      v12 = *a1;
      if ( v12 == _InterlockedCompareExchange16((volatile signed __int16 *)a1, a2 | v11, v11) )
        return v11;
    }
    if ( v4 < 0x1FFF )
      v6 = 2 * v4;
    goto LABEL_5;
  }
  return v5;
}
