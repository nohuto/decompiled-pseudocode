/*
 * XREFs of ?SetContentOffset@CCaptureControllerProxy@@QEAAJHH@Z @ 0x18009BDF4
 * Callers:
 *     ?_SetCaptureControllerContentOffset@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x1800A57EC (-_SetCaptureControllerContentOffset@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureControllerProxy::SetContentOffset(
        CCaptureControllerProxy *this,
        unsigned int a2,
        unsigned int a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 616LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a2,
           a3);
}
