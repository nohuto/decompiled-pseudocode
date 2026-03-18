/*
 * XREFs of ?GetPresentStatistics@COverlaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1801CB770
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlaySwapChain::GetPresentStatistics(COverlaySwapChain *this, struct DXGI_FRAME_STATISTICS *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _DWORD v7[6]; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER v8; // [rsp+48h] [rbp-50h]

  memset_0(v7, 0, 0x50uLL);
  v4 = (*(__int64 (__fastcall **)(COverlaySwapChain *, _DWORD *))(*(_QWORD *)this + 344LL))(this, v7);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x68u, 0LL);
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
