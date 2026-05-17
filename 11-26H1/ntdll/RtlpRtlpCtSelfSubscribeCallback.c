/*
 * XREFs of RtlpRtlpCtSelfSubscribeCallback @ 0x180149790
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetEvent @ 0x18015F100 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpRtlpCtSelfSubscribeCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ZwSetEvent(*(_QWORD *)(a4 + 16), 0LL);
  return 0LL;
}
