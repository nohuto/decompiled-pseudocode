/*
 * XREFs of HalpDmaFindAdapterByDeviceObject @ 0x14057A35C
 * Callers:
 *     HalGetAdapterV3 @ 0x140783334 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140783920 (HalGetAdapterV2.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140258450 (ObReferenceObjectSafeWithTag.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 *__fastcall HalpDmaFindAdapterByDeviceObject(__int64 a1)
{
  __int64 *v1; // rbx
  KIRQL v4; // bp
  __int64 *i; // rax
  __int64 *v6; // rsi

  v1 = 0LL;
  if ( !a1 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
  for ( i = (__int64 *)HalpDmaAdapterList; i != &HalpDmaAdapterList; i = (__int64 *)*i )
  {
    v6 = i - 58;
    if ( i[8] == a1 )
    {
      if ( ObReferenceObjectSafeWithTag((__int64)(i - 58), 0x746C6644u) )
        v1 = v6;
      break;
    }
  }
  KeReleaseSpinLock(&HalpDmaAdapterListLock, v4);
  return v1;
}
