/*
 * XREFs of ?SyncDesktopCaptureBits@CCompositor@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x18005DAA0
 * Callers:
 *     ?CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z @ 0x18005D7B0 (-CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositor::SyncDesktopCaptureBits(
        CCompositor *this,
        struct _LUID a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        enum DXGI_FORMAT a7,
        unsigned __int64 a8,
        void *a9)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _LUID, _QWORD, _QWORD, unsigned int, unsigned int, enum DXGI_FORMAT, unsigned __int64, void *))(**((_QWORD **)this + 3) + 288LL))(
           *((_QWORD *)this + 3),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9);
}
