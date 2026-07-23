/*
 * XREFs of SeMinTcbLowering @ 0x140CE3414
 * Callers:
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     <none>
 */

__int64 SeMinTcbLowering()
{
  if ( (BYTE4(RtlpBootStatHandleLock.Affinity) & 4) != 0 )
    return 1LL;
  if ( KdpBootedNodebug )
    return 0LL;
  return (HIDWORD(RtlpBootStatHandleLock.Affinity) >> 1) & 1;
}
