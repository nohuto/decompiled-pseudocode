/*
 * XREFs of EtwpAcquireLoggerContextByLoggerName @ 0x14091ED40
 * Callers:
 *     WdipSemGetLoggerIds @ 0x140ADADBC (WdipSemGetLoggerIds.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140B2AA20 (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140CE1C9C (EtwpEnableBootLoggerRegistryProviders.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14091EFC0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     EtwpReleaseLoggerContext @ 0x14093D918 (EtwpReleaseLoggerContext.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerName(__int64 a1, const UNICODE_STRING *a2, char a3)
{
  unsigned int i; // edi
  __int64 v7; // rax
  unsigned int *v8; // rbx
  __int64 v9; // rdx

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
          LOBYTE(v9) = a3;
          EtwpReleaseLoggerContext(v8, v9);
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
