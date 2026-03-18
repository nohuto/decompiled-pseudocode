/*
 * XREFs of KeQueryTimeIncrement @ 0x140457230
 * Callers:
 *     sub_140778138 @ 0x140778138 (sub_140778138.c)
 *     sub_140838310 @ 0x140838310 (sub_140838310.c)
 *     EtwpSendDataBlock @ 0x1409388D8 (EtwpSendDataBlock.c)
 *     SPCallServerHandleQueryPolicy @ 0x140A1DE2C (SPCallServerHandleQueryPolicy.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x140A6C380 (FsRtlCancellableWaitForMultipleObjects.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140A8C0D0 (FsRtlCancellableWaitForSingleObject.c)
 *     sub_140D01E30 @ 0x140D01E30 (sub_140D01E30.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
