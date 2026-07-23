/*
 * XREFs of RtlpCtSelfSubscribe @ 0x14080ECFC
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x140622A40 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
