/*
 * XREFs of ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18012352C
 * Callers:
 *     ?ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ @ 0x180123640 (-ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x180123D34 (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x180123EB4 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::TryTargetNextBuffer(CCaptureRenderTarget *this)
{
  unsigned int v2; // ebx
  int NextBufferIndexAvailable; // eax
  int RenderTargetForFrameBuffer; // eax

  v2 = 0;
  NextBufferIndexAvailable = CCaptureRenderTarget::GetNextBufferIndexAvailable(this);
  if ( NextBufferIndexAvailable >= 0 )
  {
    *((_DWORD *)this + 664) = NextBufferIndexAvailable;
    if ( !*((_BYTE *)this + 2593) )
    {
      RenderTargetForFrameBuffer = CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(this);
      v2 = RenderTargetForFrameBuffer;
      if ( RenderTargetForFrameBuffer < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, RenderTargetForFrameBuffer, 0x552u, 0LL);
    }
  }
  return v2;
}
