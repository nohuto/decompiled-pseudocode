/*
 * XREFs of RtlpCallInterceptRoutine @ 0x14035492C
 * Callers:
 *     RtlpHpAllocateHeapSlow @ 0x1403546B4 (RtlpHpAllocateHeapSlow.c)
 *     RtlpFreeNTHeapInternal @ 0x140354CB0 (RtlpFreeNTHeapInternal.c)
 *     RtlpAllocateNTHeapInternal @ 0x140492188 (RtlpAllocateNTHeapInternal.c)
 *     RtlDestroyHeap @ 0x140B3DD90 (RtlDestroyHeap.c)
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
