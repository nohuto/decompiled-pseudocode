/*
 * XREFs of ?CommitRecordedStatistics@CFlipExSwapchainStatistics@@UEAAJPEAVIOverlaySwapChain@@@Z @ 0x1801C7FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CFlipExSwapchainStatistics::CommitRecordedStatistics(
        CFlipExSwapchainStatistics *this,
        struct IOverlaySwapChain *a2)
{
  unsigned int v2; // edi
  int v3; // eax
  int v5; // ebx

  v2 = 0;
  v3 = NtSetCompositionSurfaceBufferUsage(
         *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
         *((_QWORD *)this + 2) + 136LL,
         *((unsigned int *)this + 6),
         0LL,
         *((_DWORD *)this + 7));
  if ( v3 < 0 )
  {
    v5 = v3 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3 | 0x10000000, 0xB3u, 0LL);
    if ( v5 < 0 )
    {
      v2 = v5;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x63u, 0LL);
    }
  }
  return v2;
}
