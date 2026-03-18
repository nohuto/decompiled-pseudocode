/*
 * XREFs of ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x1800EE104
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE2B0 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FindMajorityScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType@@@Z @ 0x1800EDC64 (-FindMajorityScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType.c)
 *     ?EnsureWNFHandles@CFSVPProvider@@AEAAJXZ @ 0x1800EE1F0 (-EnsureWNFHandles@CFSVPProvider@@AEAAJXZ.c)
 *     ?SignalSEB@CFSVPProvider@@AEAAX_N0@Z @ 0x180196B78 (-SignalSEB@CFSVPProvider@@AEAAX_N0@Z.c)
 *     ?SignalSEBWorker@CFSVPProvider@@AEAAXXZ @ 0x1801C8C04 (-SignalSEBWorker@CFSVPProvider@@AEAAXXZ.c)
 *     ?RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ @ 0x180252D10 (-RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CFSVPProvider::CheckForFullscreenVideoNotifications(CFSVPProvider *this)
{
  __int64 MajorityScreenContent; // rdi
  _QWORD *v3; // rax
  bool v4; // zf
  char v5; // al

  MajorityScreenContent = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this)
    && *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL )
  {
    v3 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this);
    MajorityScreenContent = COverlayContext::FindMajorityScreenContent(v3);
  }
  if ( (int)CFSVPProvider::EnsureWNFHandles(this) >= 0 )
  {
    if ( MajorityScreenContent )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)MajorityScreenContent + 440LL))(MajorityScreenContent);
      CFSVPProvider::SignalSEB(this, 1, v5);
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      v4 = *((_BYTE *)this + 75) == 0;
      *(_WORD *)((char *)this + 73) = 0;
      if ( (!v4 || *((_BYTE *)this + 76)) && (int)CFSVPProvider::RequestThreadpoolWork(this) < 0 )
        CFSVPProvider::SignalSEBWorker(this);
      if ( this != (CFSVPProvider *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    }
  }
}
