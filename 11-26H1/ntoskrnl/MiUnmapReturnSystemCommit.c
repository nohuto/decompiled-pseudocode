/*
 * XREFs of MiUnmapReturnSystemCommit @ 0x140AA7B48
 * Callers:
 *     MiDecommitPagedPool @ 0x140353D78 (MiDecommitPagedPool.c)
 * Callees:
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 */

void __fastcall MiUnmapReturnSystemCommit(__int64 a1, __int64 a2)
{
  MiReturnCommit(a1, *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 8), 0);
}
