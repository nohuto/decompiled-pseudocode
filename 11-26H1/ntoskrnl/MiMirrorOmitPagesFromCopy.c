/*
 * XREFs of MiMirrorOmitPagesFromCopy @ 0x140C099DC
 * Callers:
 *     MiMirrorZeroFreeListsCallback @ 0x14049AC50 (MiMirrorZeroFreeListsCallback.c)
 *     MiMirrorRemoveInactivePages @ 0x1404C4D10 (MiMirrorRemoveInactivePages.c)
 *     MiBlackRemoveChildPartitionHugeRangesCallback @ 0x1406F4240 (MiBlackRemoveChildPartitionHugeRangesCallback.c)
 *     MiMirrorBlackRemoveChildPartitionPages @ 0x1406F4820 (MiMirrorBlackRemoveChildPartitionPages.c)
 *     MiMirrorHugeRangeZeroFreeListsCallback @ 0x1406F4890 (MiMirrorHugeRangeZeroFreeListsCallback.c)
 *     MiPurgeMirrorPacketPages @ 0x1406F4E70 (MiPurgeMirrorPacketPages.c)
 *     MiRemoveEnclavePagesFromMirror @ 0x140C07F20 (MiRemoveEnclavePagesFromMirror.c)
 *     MiMirrorReduceBlackWrites @ 0x140C09850 (MiMirrorReduceBlackWrites.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 *     RtlInterlockedClearBitRunEx @ 0x140447470 (RtlInterlockedClearBitRunEx.c)
 */

char __fastcall MiMirrorOmitPagesFromCopy(__int64 *a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rsi
  unsigned __int8 *v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  int v12; // r8d
  unsigned __int64 v13; // rax
  void *v14; // r8
  unsigned __int64 v15; // rdx

  v6 = a3;
  v7 = &stru_140E2ED08.WaitBlockFill5[32 * a2 + 48];
  v8 = a4;
  RtlInterlockedClearBitRunEx((__int64)(v7 + 16), a3, a4);
  if ( *(_QWORD *)(*a1 + 24) )
    RtlClearBitsEx((__int64)v7, v6, v8);
  v9 = *a1;
  if ( (*(_DWORD *)(*a1 + 32) & 0x20) != 0 )
  {
    LOBYTE(v9) = stru_140E2ED08.Timer.TimerListEntry.Flink;
    if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 2 )
    {
      LOBYTE(v9) = MiFlags;
      if ( (MiFlags & 0x3C000) == 0 )
      {
        if ( v8 )
        {
          LOBYTE(v9) = 40;
          v10 = (_QWORD *)(48 * v6 - 0x21FFFFFFFFD8LL);
          do
          {
            v11 = -1LL;
            if ( a2 == 1 )
            {
              v12 = 1073741825;
              v11 = v6 << 18;
            }
            else
            {
              LOBYTE(v9) = (*v10 >> 60) & 7;
              if ( (_BYTE)v9 != 3 )
              {
                v9 = *v10;
                if ( (__int64)*v10 >= 0 )
                {
                  LODWORD(v9) = *((_DWORD *)v10 - 6);
                  if ( (v9 & 0x400) == 0 )
                    v11 = v6;
                }
              }
              v12 = 0;
            }
            if ( v11 != -1 )
            {
              v13 = MiMapPageInHyperSpaceWorker(v11, 0LL, v12);
              v14 = (void *)v13;
              v15 = 1024LL;
              if ( (v13 & 4) != 0 )
              {
                *(_DWORD *)v13 = -2;
                v14 = (void *)(v13 + 4);
                v15 = 1023LL;
              }
              memset64(v14, 0xFFFFFFFEFFFFFFFEuLL, v15 >> 1);
              if ( (v15 & 1) != 0 )
                *((_DWORD *)v14 + v15 - 1) = -2;
              LOBYTE(v9) = MiUnmapPageInHyperSpaceWorker(v13, 0x11u, 0);
            }
            ++v6;
            v10 += 6;
            --v8;
          }
          while ( v8 );
        }
      }
    }
  }
  return v9;
}
