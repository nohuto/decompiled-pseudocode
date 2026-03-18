/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x14077B3DC
 * Callers:
 *     CmInitSystem2 @ 0x140D0A83C (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140B6E47C (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&dword_140E09EE8, 0LL, 0LL);
}
