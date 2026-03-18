/*
 * XREFs of PnpFindBestConfiguration @ 0x1407A3524
 * Callers:
 *     PnpReallocateResources @ 0x1407B33A8 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1407B359C (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1407B3F98 (PnpRebalance.c)
 *     PnpAllocateResources @ 0x140AA525C (PnpAllocateResources.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x1407A357C (PnpFindBestConfigurationWorker.c)
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
