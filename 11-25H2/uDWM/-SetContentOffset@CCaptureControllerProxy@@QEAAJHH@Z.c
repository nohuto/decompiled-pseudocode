/*
 * XREFs of ?SetContentOffset@CCaptureControllerProxy@@QEAAJHH@Z @ 0x1800A8C00
 * Callers:
 *     ?_SetCaptureControllerContentOffset@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x1800C4620 (-_SetCaptureControllerContentOffset@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureControllerProxy::SetContentOffset(
        CCaptureControllerProxy *this,
        unsigned int a2,
        unsigned int a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 792LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           a3);
}
