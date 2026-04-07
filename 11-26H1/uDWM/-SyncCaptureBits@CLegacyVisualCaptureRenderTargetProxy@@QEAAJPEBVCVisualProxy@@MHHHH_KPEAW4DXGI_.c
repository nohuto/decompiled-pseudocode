/*
 * XREFs of ?SyncCaptureBits@CLegacyVisualCaptureRenderTargetProxy@@QEAAJPEBVCVisualProxy@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1800753C8
 * Callers:
 *     ?CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1800DFD50 (-CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyVisualCaptureRenderTargetProxy::SyncCaptureBits(
        CLegacyVisualCaptureRenderTargetProxy *this,
        const struct CVisualProxy *a2,
        float a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 176LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           *((unsigned int *)a2 + 6));
}
