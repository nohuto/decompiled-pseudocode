/*
 * XREFs of MiGetNextPageTableTail @ 0x140486330
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 */

__int64 __fastcall MiGetNextPageTableTail(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
    MiFlushTbList(v1);
  return 0LL;
}
