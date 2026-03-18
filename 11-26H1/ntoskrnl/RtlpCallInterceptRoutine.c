/*
 * XREFs of RtlpCallInterceptRoutine @ 0x1403528A8
 * Callers:
 *     RtlpHpAllocateHeapSlow @ 0x140352630 (RtlpHpAllocateHeapSlow.c)
 *     RtlpFreeNTHeapInternal @ 0x140352C30 (RtlpFreeNTHeapInternal.c)
 *     RtlpAllocateNTHeapInternal @ 0x140498638 (RtlpAllocateNTHeapInternal.c)
 *     RtlDestroyHeap @ 0x140B3BB10 (RtlDestroyHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCallInterceptRoutine(int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  if ( a1 && (_WORD)a1 == 1 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))&CLFS_LSN_NULL_EXT)(a2, a3, a4, a5);
  else
    return 3221225473LL;
}
