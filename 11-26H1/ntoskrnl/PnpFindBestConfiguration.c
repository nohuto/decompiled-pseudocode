/*
 * XREFs of PnpFindBestConfiguration @ 0x1407A6064
 * Callers:
 *     PnpReallocateResources @ 0x1407B6408 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1407B65FC (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1407B6FF8 (PnpRebalance.c)
 *     PnpAllocateResources @ 0x140AA0454 (PnpAllocateResources.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x1407A60BC (PnpFindBestConfigurationWorker.c)
 */

__int64 __fastcall PnpFindBestConfiguration(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 2; ++i )
  {
    result = PnpFindBestConfigurationWorker(a1, a2, a3, i);
    if ( (int)result >= 0 )
      break;
  }
  return result;
}
