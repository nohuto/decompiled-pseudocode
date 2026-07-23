/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x14077E01C
 * Callers:
 *     CmInitSystem2 @ 0x140D10B0C (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140B7192C (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&dword_140E09EE8, 0LL, 0LL);
}
