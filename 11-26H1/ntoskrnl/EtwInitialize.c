/*
 * XREFs of EtwInitialize @ 0x140824718
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14084E49C (CmCompleteRegistryInitialization.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218100 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpBuffersFlushRequired @ 0x14021999C (EtwpBuffersFlushRequired.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     KeInsertQueueDpc @ 0x1402BDB30 (KeInsertQueueDpc.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 */

void __fastcall EtwInitialize(unsigned int a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx

  if ( a2 && (v3 = *(_QWORD *)(a2 + 240)) != 0 && *(_QWORD *)(v3 + 3680) && *(_QWORD *)(v3 + 3688) )
    v4 = v3 + 3672;
  else
    v4 = 0LL;
  if ( a1 )
  {
    if ( a1 < 3 )
    {
      while ( (unsigned __int8)EtwpBootPhase <= a1 )
        EtwpInitialize((unsigned __int8)EtwpBootPhase, a1, v4);
    }
    else if ( a1 == 3 )
    {
      v5 = EtwpHostSiloState;
      v6 = 0LL;
      ++EtwpBootPhase;
      if ( *(_DWORD *)(EtwpHostSiloState + 16) )
      {
        do
        {
          if ( ExAcquireRundownProtectionCacheAwareEx(
                 *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v5 + 704) + 8 * v6),
                 1u) )
          {
            if ( (unsigned int)v6 < *(_DWORD *)(EtwpHostSiloState + 16) )
            {
              v7 = *(_QWORD *)(EtwpHostSiloState + 712);
              v8 = *(_QWORD *)(v7 + 8 * v6);
              if ( (v8 & 1) == 0
                && (*(_DWORD *)(v8 + 12) & 0x400) == 0
                && EtwpBuffersFlushRequired(*(_QWORD *)(v7 + 8 * v6)) )
              {
                if ( KeGetEffectiveIrql() > 2u )
                {
                  if ( !_interlockedbittestandset((volatile signed __int32 *)(v8 + 824), 8u) )
                    KeInsertQueueDpc((PRKDPC)(v8 + 568), 0LL, 0LL);
                }
                else
                {
                  KeSetEvent((PRKEVENT)(v8 + 480), 0, 0);
                }
              }
            }
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(EtwpHostSiloState + 704) + 8 * v6),
              1u);
          }
          v5 = EtwpHostSiloState;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < *(_DWORD *)(EtwpHostSiloState + 16) );
      }
    }
  }
  else if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 8) != v4 + 8 )
      EtwpInitialize((unsigned __int8)EtwpBootPhase, 0LL, v4);
  }
}
