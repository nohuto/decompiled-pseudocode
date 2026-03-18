/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x140724630
 * Callers:
 *     DifZwAssociateWaitCompletionPacketWrapper @ 0x14069C180 (DifZwAssociateWaitCompletionPacketWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAssociateWaitCompletionPacket(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
