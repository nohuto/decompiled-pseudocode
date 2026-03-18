/*
 * XREFs of ZwCreateWaitCompletionPacket @ 0x140724E30
 * Callers:
 *     DifZwCreateWaitCompletionPacketWrapper @ 0x1406A33D0 (DifZwCreateWaitCompletionPacketWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWaitCompletionPacket(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
