/*
 * XREFs of RtlpCtSelfSubscribe @ 0x14080926C
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x14061F9F0 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
