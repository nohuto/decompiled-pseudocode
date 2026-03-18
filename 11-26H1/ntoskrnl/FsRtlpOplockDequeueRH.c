/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x1402C1DF8
 * Callers:
 *     FsRtlpOplockEnqueueRH @ 0x1402C1C68 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F81F0 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlCheckOplockEx2 @ 0x1403FB980 (FsRtlCheckOplockEx2.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403FC3F4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockCleanup @ 0x1403FCDAC (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1403FE420 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1403FEDE8 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B6350 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140AA2BF0 (FsRtlpOplockFsctrlInternal.c)
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
