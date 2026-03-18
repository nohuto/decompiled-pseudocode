/*
 * XREFs of ?CheckOcclusionState@CRemoteRenderTarget@@UEAAJ_N@Z @ 0x180254D20
 * Callers:
 *     ?CheckOcclusionState@CRemoteRenderTarget@@WEI@EAAJ_N@Z @ 0x180247200 (-CheckOcclusionState@CRemoteRenderTarget@@WEI@EAAJ_N@Z.c)
 *     ?CheckOcclusionState@CRemoteRenderTarget@@WFA@EAAJ_N@Z @ 0x180247210 (-CheckOcclusionState@CRemoteRenderTarget@@WFA@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x180254DC0 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteRenderTarget::CheckOcclusionState(CRemoteRenderTarget *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = CRemoteRenderTarget::EnsureSwapChain((CRemoteRenderTarget *)((char *)this - 96));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377BA0, 3u, v2, 0x74u, 0LL);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 224LL))(*((_QWORD *)this + 12));
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377BA0, 3u, v4, 0x76u, 0LL);
    else
      *((_BYTE *)this + 2136) = v4 == 142213121;
  }
  return v3;
}
