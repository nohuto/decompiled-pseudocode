/*
 * XREFs of ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x1800F0834
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800F0A20 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SyncLock@CLegacyRenderTarget@@UEAAXI@Z @ 0x1801B0040 (-SyncLock@CLegacyRenderTarget@@UEAAXI@Z.c)
 *     ?SyncLock@CDDisplayRenderTarget@@UEAAXI@Z @ 0x1801FC760 (-SyncLock@CDDisplayRenderTarget@@UEAAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?LegacyPresentRequired@COverlayContext@@IEBA_NXZ @ 0x1800D7040 (-LegacyPresentRequired@COverlayContext@@IEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?GetAttributes@DesktopPlaneInfo@COverlayContext@@QEBAXAEBVOverlayCaps@@PEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18023B3EC (-GetAttributes@DesktopPlaneInfo@COverlayContext@@QEBAXAEBVOverlayCaps@@PEAUDXGI_MULTIPLANE_OVERL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::SyncLock(
        COverlayContext *this,
        struct IOverlaySwapChain *a2,
        unsigned int a3,
        int a4,
        bool a5)
{
  unsigned int v5; // ebx
  __int64 v9; // rsi
  __int64 v10; // rax
  const struct OverlayCaps *v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  __int64 (__fastcall *v14)(struct IOverlaySwapChain *, __int64, __int64, __int128 *, int); // rax
  int v15; // eax
  __int128 v17; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-C8h]
  _BYTE v19[8]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-B0h]
  _BYTE v21[112]; // [rsp+70h] [rbp-A8h] BYREF

  v5 = 0;
  if ( !*((_BYTE *)this + 19124) || *((_QWORD *)this + 2411) )
  {
    v5 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304309, 0xAC5u, 0LL);
  }
  else if ( a3 )
  {
    v9 = a3;
    do
    {
      if ( a5 || COverlayContext::LegacyPresentRequired(this) )
      {
        v13 = *(_QWORD *)a2;
        v18 = 0LL;
        v14 = *(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64, __int64, __int128 *, int))(v13 + 384);
        v17 = 0LL;
        v15 = v14(a2, 1LL, 2LL, &v17, a4);
        v5 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xABDu, 0LL);
        if ( (_QWORD)v17 )
          std::_Deallocate<16>((void *)v17, (v18 - v17) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      else
      {
        memset_0(v19, 0, 0x80uLL);
        v10 = *(_QWORD *)a2;
        v19[4] = 1;
        v20 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(v10 + 216))(a2);
        COverlayContext::DesktopPlaneInfo::GetAttributes(
          (COverlayContext *)((char *)this + 19056),
          v11,
          (struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)v21);
        v12 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64, __int64, _QWORD, _QWORD, _BYTE *, int))(*(_QWORD *)a2 + 400LL))(
                a2,
                1LL,
                2LL,
                *((unsigned int *)this + 16),
                0LL,
                v19,
                1);
        v5 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xAB4u, 0LL);
      }
      --v9;
    }
    while ( v9 );
  }
  return v5;
}
