/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x14030CAB8
 * Callers:
 *     FsRtlpOplockEnqueueRH @ 0x14030C928 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F49E4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlCheckOplockEx2 @ 0x1403F8170 (FsRtlCheckOplockEx2.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403F8BE4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockCleanup @ 0x1403F959C (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1403FAC10 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B8BC0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140AA46C0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FsRtlpOplockDequeueRH(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *result; // rax

  v1 = a1[3];
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 208);
    if ( v2 )
      v2 = *(_QWORD *)(v2 + 56);
    if ( v2 )
      *(_QWORD *)(v2 + 40) = 0LL;
  }
  v3 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (result = (_QWORD *)a1[1], (_QWORD *)*result != a1) )
    __fastfail(3u);
  *result = v3;
  *(_QWORD *)(v3 + 8) = result;
  return result;
}
