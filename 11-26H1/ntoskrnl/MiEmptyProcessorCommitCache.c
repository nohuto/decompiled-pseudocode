/*
 * XREFs of MiEmptyProcessorCommitCache @ 0x14070A4B8
 * Callers:
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 * Callees:
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 */

void __fastcall MiEmptyProcessorCommitCache(ULONG *a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx
  unsigned __int32 v5; // eax
  unsigned __int32 v6; // ett

  if ( a1 == &MiSystemPartition && (_DWORD)KeNumberProcessors_0 )
  {
    v2 = KiProcessorBlock;
    v3 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v4 = *v2;
      _m_prefetchw((const void *)(*v2 + 35800));
      v5 = *(_DWORD *)(v4 + 35800);
      do
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 35800), 0, v5);
      }
      while ( v6 != v5 );
      if ( v5 )
        MiReturnCommit((__int64)a1, v5, 0);
      ++v2;
      --v3;
    }
    while ( v3 );
  }
}
