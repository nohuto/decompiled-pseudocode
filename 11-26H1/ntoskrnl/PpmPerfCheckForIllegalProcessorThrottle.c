/*
 * XREFs of PpmPerfCheckForIllegalProcessorThrottle @ 0x140255980
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x140254FC0 (PpmPerfSnapDeliveredPerformance.c)
 * Callees:
 *     PopDiagTraceIllegalProcessorThrottle @ 0x14060BA84 (PopDiagTraceIllegalProcessorThrottle.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfCheckForIllegalProcessorThrottle(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( PopProcessorThrottleLogInterval )
  {
    v4 = *(_QWORD *)(a1 + 35264);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 35272);
      if ( v5 )
      {
        result = *(_QWORD *)(v4 + 320);
        if ( result )
        {
          if ( *(_BYTE *)(a1 + 35144) )
          {
            guard_dispatch_icall_no_overrides(&v8, a2, a3);
            if ( *(_DWORD *)(v5 + 80) < *(_DWORD *)(v4 + 464) )
            {
              *(_BYTE *)(a1 + 35152) = 0;
            }
            else if ( *(_BYTE *)(a1 + 35152) )
            {
              if ( *(_QWORD *)(a1 + 35160) != v8 )
              {
                v7 = (unsigned int)(*(_DWORD *)(a1 + 35148) + 1);
                *(_DWORD *)(a1 + 35148) = v7;
                if ( !((unsigned int)v7 % PopProcessorThrottleLogInterval) || (_DWORD)v7 == 1 )
                {
                  LODWORD(v7) = KeGetPcr()->Prcb.Number;
                  PopDiagTraceIllegalProcessorThrottle(v7, v8, a1 + 35168);
                }
              }
            }
            else
            {
              *(_BYTE *)(a1 + 35152) = 1;
            }
            result = v8;
            *(_QWORD *)(a1 + 35160) = v8;
          }
        }
      }
    }
  }
  return result;
}
