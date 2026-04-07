/*
 * XREFs of ?SetTransform@CCaptureControllerProxy@@QEAAJPEAVCMatrixTransformProxy@@@Z @ 0x18009BE90
 * Callers:
 *     ?_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z @ 0x1800A5834 (-_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureControllerProxy::SetTransform(
        CCaptureControllerProxy *this,
        struct CMatrixTransformProxy *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 536LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           *((unsigned int *)a2 + 6));
}
