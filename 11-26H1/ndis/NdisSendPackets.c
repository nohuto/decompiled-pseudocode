/*
 * XREFs of NdisSendPackets @ 0x14009EC40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisSendPackets(__int64 a1)
{
  return (*(__int64 (**)(void))(a1 + 168))();
}
