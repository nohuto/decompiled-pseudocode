/*
 * XREFs of RaidAdapterStop @ 0x1400509C8
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x14000F504 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterReleaseResources @ 0x140185C48 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1401862D0 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterStopAdapter @ 0x14000EE90 (RaidAdapterStopAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterStop(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 608) || !*(_QWORD *)(a1 + 616) )
    return 0LL;
  if ( RaidIsAdapterControlSupported(a1 + 376, 1) )
    return (unsigned int)RaidAdapterStopAdapter(a1);
  return v1;
}
