/*
 * XREFs of ExpAeMeasureContention @ 0x1406D810C
 * Callers:
 *     ExpAeThresholdInitWorker @ 0x1406D8150 (ExpAeThresholdInitWorker.c)
 *     ExpAeThresholdInitialization @ 0x140CEDB34 (ExpAeThresholdInitialization.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExpAeMeasureContention(__int64 *a1)
{
  unsigned __int64 v1; // r9
  signed __int64 v2; // rax
  __int64 v3; // rtt
  signed __int64 v4; // rtt

  v1 = __rdtsc();
  _m_prefetchw(a1);
  v3 = *a1;
  v2 = _InterlockedCompareExchange64(a1, *a1 + 1, *a1);
  if ( v3 != v2 )
  {
    do
    {
      v4 = v2;
      v2 = _InterlockedCompareExchange64(a1, v2 + 1, v2);
    }
    while ( v4 != v2 );
  }
  return __rdtsc() - v1;
}
