/*
 * XREFs of ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x18022F694
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800EDCF8 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800F0A20 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ @ 0x18022F6E4 (-GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ.c)
 */

__int64 __fastcall CDebugFrameCounter::GetCPUTimePerFrame(CDebugFrameCounter *this)
{
  unsigned int FrameCountInternal; // eax
  __int64 v2; // r9
  unsigned __int64 v3; // r10

  if ( !*((_BYTE *)this + 8) || *(_DWORD *)this == -1 )
    return 0LL;
  FrameCountInternal = CDebugFrameCounter::GetFrameCountInternal(this);
  if ( FrameCountInternal )
    v3 = *(_QWORD *)(v2 + 16) / (unsigned __int64)FrameCountInternal;
  return (unsigned int)(v3 / 0x2710);
}
