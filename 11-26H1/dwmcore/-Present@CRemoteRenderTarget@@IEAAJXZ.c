/*
 * XREFs of ?Present@CRemoteRenderTarget@@IEAAJXZ @ 0x180255320
 * Callers:
 *     ?RenderAndPresent@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180249CB0 (-RenderAndPresent@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ @ 0x180249480 (-IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteRenderTarget::Present(LARGE_INTEGER *this)
{
  LARGE_INTEGER v1; // rsi
  unsigned int v2; // edi
  int v4; // eax
  _DWORD **QuadPart; // rcx

  v1 = this[24];
  v2 = 0;
  if ( v1.QuadPart
    && (BYTE1(this[279].LowPart)
     || CRemoteRenderTarget::IsPrimaryMonitor((CRemoteRenderTarget *)&this[20]) && !LOBYTE(this[279].LowPart)) )
  {
    v4 = (*(__int64 (__fastcall **)(LARGE_INTEGER, LARGE_INTEGER))(*(_QWORD *)v1.QuadPart + 232LL))(v1, this[100]);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0xE8u, 0LL);
    }
    else
    {
      QueryPerformanceCounter(this + 277);
      this[278].QuadPart = (LONGLONG)GetCurrentFrameId();
      QuadPart = (_DWORD **)this[100].QuadPart;
      if ( QuadPart )
        **QuadPart = 0;
      BYTE1(this[279].LowPart) = 0;
    }
  }
  return v2;
}
