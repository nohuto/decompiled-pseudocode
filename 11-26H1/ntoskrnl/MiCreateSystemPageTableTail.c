/*
 * XREFs of MiCreateSystemPageTableTail @ 0x140364F30
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

__int64 __fastcall MiCreateSystemPageTableTail(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_QWORD *)(v1 + 136);
  if ( v2 )
  {
    MiFlushTbList(v2);
    MiReleaseProcessorFlushList();
    *(_QWORD *)(v1 + 136) = 0LL;
  }
  return 0LL;
}
