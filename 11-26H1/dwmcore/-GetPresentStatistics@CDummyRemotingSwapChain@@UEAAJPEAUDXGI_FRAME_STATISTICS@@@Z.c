/*
 * XREFs of ?GetPresentStatistics@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1802A2950
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?GetPresentStatisticsDWM@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1802A29F0 (-GetPresentStatisticsDWM@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 */

__int64 __fastcall CDummyRemotingSwapChain::GetPresentStatistics(
        CDummyRemotingSwapChain *this,
        struct DXGI_FRAME_STATISTICS *a2)
{
  int PresentStatisticsDWM; // eax
  unsigned int v5; // ebx
  _DWORD v7[6]; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER v8; // [rsp+48h] [rbp-40h]

  memset_0(v7, 0, 0x50uLL);
  PresentStatisticsDWM = CDummyRemotingSwapChain::GetPresentStatisticsDWM(this, (struct DXGI_FRAME_STATISTICS_DWM *)v7);
  v5 = PresentStatisticsDWM;
  if ( PresentStatisticsDWM < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, PresentStatisticsDWM, 0xA7u, 0LL);
  }
  else
  {
    a2->PresentCount = v7[0];
    a2->PresentRefreshCount = v7[1];
    a2->SyncRefreshCount = v7[4];
    a2->SyncQPCTime = v8;
    a2->SyncGPUTime.QuadPart = 0LL;
  }
  return v5;
}
