/*
 * XREFs of SeMinTcbLowering @ 0x140CDD07C
 * Callers:
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     <none>
 */

__int64 SeMinTcbLowering()
{
  if ( (RtlpBootStatHandleLock.AffinityVersion & 0x400000000LL) != 0 )
    return 1LL;
  if ( KdpBootedNodebug )
    return 0LL;
  return (HIDWORD(RtlpBootStatHandleLock.AffinityVersion) >> 1) & 1;
}
