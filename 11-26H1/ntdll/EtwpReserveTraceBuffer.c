/*
 * XREFs of EtwpReserveTraceBuffer @ 0x180011230
 * Callers:
 *     EtwpTraceUmEvent @ 0x180010AD0 (EtwpTraceUmEvent.c)
 *     EtwpTraceUmMessage @ 0x1800BD9EC (EtwpTraceUmMessage.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18000E5E0 (RtlQueryPerformanceCounter.c)
 *     EtwpSwitchBuffer @ 0x180011380 (EtwpSwitchBuffer.c)
 *     RtlGetSystemTimePrecise @ 0x180011550 (RtlGetSystemTimePrecise.c)
 */

__int64 __fastcall EtwpReserveTraceBuffer(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v6; // esi
  unsigned int v8; // r15d
  unsigned int v9; // ecx
  unsigned int v10; // ebp
  __int64 v11; // rbx
  unsigned __int32 v12; // r14d

  v6 = a3;
  if ( (unsigned int)a2 <= *(_DWORD *)(a1 + 196) )
  {
    v8 = *(_DWORD *)(a1 + 192);
    v9 = *(_DWORD *)(a1 + 188);
    v10 = (a2 + 7) & 0xFFFFFFF8;
    if ( a3 >= v9 )
    {
      a2 = a3 % v9;
      v6 = a3 % v9;
    }
    do
    {
      v11 = *(_QWORD *)(a1 + 8LL * v6 + 560);
      if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 12));
        if ( *(_DWORD *)(v11 + 44) == 1 && *(_DWORD *)(v11 + 8) <= v8 )
        {
          v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), v10);
          if ( v12 + v10 <= v8 )
          {
            *a5 = v11;
            if ( a4 )
            {
              if ( *(_DWORD *)(a1 + 16) == 2 )
              {
                *a4 = RtlGetSystemTimePrecise();
              }
              else if ( *(_DWORD *)(a1 + 16) == 3 )
              {
                *a4 = __rdtsc();
              }
              else
              {
                RtlQueryPerformanceCounter(a4, a2);
              }
            }
            return v11 + v12;
          }
          if ( v12 <= v8 )
            *(_DWORD *)(v11 + 4) = v12;
        }
      }
    }
    while ( (unsigned __int8)EtwpSwitchBuffer(a1, v11, v6) == 1 );
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 368));
  if ( (*(_DWORD *)(a1 + 308) & 0x10000) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 496)
                                                    + 12LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 4LL * v6)
                                                    + 4));
  return 0LL;
}
