/*
 * XREFs of KsepCacheDeviceFree @ 0x1409D6B70
 * Callers:
 *     KsepDbCacheReadDevice @ 0x1409D6A58 (KsepDbCacheReadDevice.c)
 *     KseQueryDeviceData @ 0x1409D6F80 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140B2E430 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x1409D7848 (KsepStringFree.c)
 */

void __fastcall KsepCacheDeviceFree(void **a1)
{
  void **v1; // rsi
  void **v3; // rbx
  void **v4; // rbp

  if ( a1 )
  {
    v1 = a1 + 7;
    v3 = (void **)a1[7];
    while ( v3 != v1 )
    {
      v4 = v3;
      v3 = (void **)*v3;
      if ( v4 )
      {
        KsepStringFree(v4 + 2);
        KsepPoolFreePaged(v4[5]);
        KsepPoolFreePaged(v4);
      }
    }
    KsepStringFree(a1 + 5);
    KsepPoolFreePaged(a1);
  }
}
