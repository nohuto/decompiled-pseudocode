/*
 * XREFs of RtlpSynchronizeHeapLoggingStateCallback @ 0x1800FCB40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapLoggingStateSync @ 0x1800FCB60 (RtlpHpHeapLoggingStateSync.c)
 */

__int64 __fastcall RtlpSynchronizeHeapLoggingStateCallback(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    RtlpHpHeapLoggingStateSync(a1);
  return 0LL;
}
