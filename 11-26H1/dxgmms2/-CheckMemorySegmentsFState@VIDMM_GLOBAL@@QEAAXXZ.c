/*
 * XREFs of ?CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ @ 0x140104FA0
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140037C80 (-NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400CF620 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x140105B64 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CheckMemorySegmentsFState(VIDMM_GLOBAL *this)
{
  __int64 i; // rsi
  __int64 v3; // rbx
  __int64 j; // rbp
  __int64 v5; // r14
  __int16 v6; // ax

  if ( *((_BYTE *)this + 41071) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1738); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * i);
      if ( !*(_DWORD *)(v3 + 552) && (*(_BYTE *)(v3 + 557) & 8) == 0 )
      {
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v3 + 136); j = (unsigned int)(j + 1) )
        {
          v5 = *(_QWORD *)(*(_QWORD *)(v3 + 1752) + 8 * j);
          if ( *(_DWORD *)(v5 + 400) != -1 )
          {
            if ( (*(_BYTE *)(v3 + 557) & 8) == 0 )
            {
              v6 = *(_WORD *)(v5 + 70);
              if ( v6 == *(_WORD *)(v3 + 190) || v6 == *(_WORD *)(v3 + 186) )
              {
                if ( *(_QWORD *)(v3 + 584) != v3 + 584 )
                {
                  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, i);
                  VIDMM_GLOBAL::StartPreparation((__int64)this, i, 0LL, 0LL, 0x79u);
                  VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, i);
                  VIDMM_GLOBAL::EndPreparation(this, i, 0LL, 0, 0LL, 0LL);
                }
                VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, i);
                *(_BYTE *)(v3 + 557) |= 8u;
              }
            }
            VIDMM_GLOBAL::NotifyMemorySegmentHasData(this);
          }
        }
      }
    }
    *((_BYTE *)this + 41071) = 0;
  }
}
