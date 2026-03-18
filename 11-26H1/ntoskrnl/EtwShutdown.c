/*
 * XREFs of EtwShutdown @ 0x140B362AC
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x1407EED58 (PspDeleteExternalServerSiloState.c)
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwpTraceSystemShutdown @ 0x14082810C (EtwpTraceSystemShutdown.c)
 *     EtwpFlushCoverage @ 0x14082A2A8 (EtwpFlushCoverage.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14091EFC0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14093D918 (EtwpReleaseLoggerContext.c)
 *     EtwpStopTrace @ 0x140A6F2F8 (EtwpStopTrace.c)
 */

void __fastcall EtwShutdown(char a1)
{
  struct _LIST_ENTRY *Flink; // rsi
  bool IsCurrentThreadInServerSilo; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  bool v8; // bp
  unsigned __int16 v9; // bx
  unsigned int *v10; // rax
  int v11; // [rsp+20h] [rbp-C8h] BYREF
  __int16 v12; // [rsp+28h] [rbp-C0h]
  __int128 v13; // [rsp+38h] [rbp-B0h]
  int v14; // [rsp+4Ch] [rbp-9Ch]

  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  v8 = IsCurrentThreadInServerSilo;
  if ( !a1 )
  {
    if ( !IsCurrentThreadInServerSilo )
      EtwpTraceSystemShutdown();
    HIDWORD(Flink[271].Flink) = 1;
  }
  if ( !v8 )
    EtwpFlushCoverage(v5, v4, v6, v7);
  memset_0(&v11, 0, 0xB0uLL);
  v11 = 176;
  v9 = (unsigned __int16)Flink[1].Flink;
  v14 = 0x20000;
  while ( (--v9 & 0x8000u) == 0 )
  {
    v10 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v9, 0);
    if ( v10 )
    {
      if ( v8 )
        goto LABEL_12;
      if ( a1 )
      {
        if ( (v10[3] & 0x400000) != 0 )
          goto LABEL_12;
LABEL_6:
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v10 + 170) + 704LL) + 8LL * *v10),
          1u);
      }
      else
      {
        if ( (v10[3] & 0x400) != 0 )
          goto LABEL_6;
LABEL_12:
        if ( v9 )
          v12 = v9;
        else
          v12 = -1;
        v13 = *(_OWORD *)(v10 + 69);
        EtwpReleaseLoggerContext(v10, 0);
        if ( !a1 )
          ++EtwpStopTraceCount;
        EtwpStopTrace((__int64)Flink, &v11, 1);
      }
    }
  }
  if ( !a1 )
    EtwpStopTraceCount = 0;
}
