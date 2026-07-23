/*
 * XREFs of EtwpAcquireLoggerContextByLoggerName @ 0x1409797A0
 * Callers:
 *     WdipSemGetLoggerIds @ 0x140AD786C (WdipSemGetLoggerIds.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140B2CAA0 (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140CE803C (EtwpEnableBootLoggerRegistryProviders.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerName(__int64 a1, const UNICODE_STRING *a2, char a3)
{
  unsigned int i; // edi
  __int64 v7; // rax
  unsigned int *v8; // rbx

  if ( a2 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v7 = EtwpAcquireLoggerContextByLoggerId(a1, i, 0LL);
      v8 = (unsigned int *)v7;
      if ( v7 )
      {
        if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v7 + 136), a2, 1u) )
        {
          if ( a3 )
            KeWaitForSingleObject(v8 + 158, Executive, 0, 0, 0LL);
          if ( v8[80] )
            return v8;
          EtwpReleaseLoggerContext(v8, a3);
        }
        else
        {
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v8 + 170) + 704LL) + 8LL * *v8),
            1u);
        }
      }
    }
  }
  return 0LL;
}
