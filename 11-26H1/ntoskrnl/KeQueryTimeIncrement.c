/*
 * XREFs of KeQueryTimeIncrement @ 0x14044EAA0
 * Callers:
 *     sub_14077AFD8 @ 0x14077AFD8 (sub_14077AFD8.c)
 *     sub_14083E550 @ 0x14083E550 (sub_14083E550.c)
 *     EtwpSendDataBlock @ 0x140914478 (EtwpSendDataBlock.c)
 *     SPCallServerHandleQueryPolicy @ 0x140A27458 (SPCallServerHandleQueryPolicy.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x140A7D9B0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140A91340 (FsRtlCancellableWaitForSingleObject.c)
 *     sub_140D081D0 @ 0x140D081D0 (sub_140D081D0.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
