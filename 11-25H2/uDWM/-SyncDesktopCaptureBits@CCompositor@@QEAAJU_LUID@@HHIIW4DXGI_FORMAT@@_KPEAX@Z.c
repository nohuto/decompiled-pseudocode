/*
 * XREFs of ?SyncDesktopCaptureBits@CCompositor@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x18006EC14
 * Callers:
 *     ?CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z @ 0x18006E940 (-CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositor::SyncDesktopCaptureBits(CCompositor *this, struct _LUID a2, unsigned int a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _LUID, _QWORD))(**((_QWORD **)this + 3) + 368LL))(
           *((_QWORD *)this + 3),
           a2,
           a3);
}
