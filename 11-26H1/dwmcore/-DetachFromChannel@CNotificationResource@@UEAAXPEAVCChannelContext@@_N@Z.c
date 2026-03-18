/*
 * XREFs of ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18018AF00
 * Callers:
 *     ?DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18018AE40 (-DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18018AEA0 (-DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CDDisplayRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z @ 0x180247250 (-DetachFromChannel@CDDisplayRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CLegacyRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z @ 0x1802472B0 (-DetachFromChannel@CLegacyRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CRemoteAppRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180255AA0 (-DetachFromChannel@CRemoteAppRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CInteractionTracker2@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802730B0 (-DetachFromChannel@CInteractionTracker2@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CNotificationResource::DetachFromChannel(CNotificationResource *this, struct CChannelContext *a2)
{
  struct CChannelContext *v2; // rax

  v2 = (struct CChannelContext *)*((_QWORD *)this + 7);
  if ( v2 == a2 )
  {
    if ( v2 && *((_DWORD *)v2 + 29) && *((_DWORD *)this + 18) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 88LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 6384LL));
      v2 = (struct CChannelContext *)*((_QWORD *)this + 7);
    }
    *((_DWORD *)this + 18) = 0;
    if ( a2 == v2 )
      *((_QWORD *)this + 7) = 0LL;
  }
}
