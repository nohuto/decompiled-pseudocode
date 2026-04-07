/*
 * XREFs of ?_UpdateCaptureControllerTransform@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800C4D08
 * Callers:
 *     ?OnWindowTransformUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800752E0 (-OnWindowTransformUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerTransform(
        struct _RTL_GENERIC_TABLE *this,
        __int64 a2)
{
  return CProjectionBorderManager::_UpdateCaptureControllerProperty(
           this,
           (__int64 (__fastcall *)(struct _RTL_GENERIC_TABLE *, __int64, _QWORD))CProjectionBorderManager::_UpdateCaptureControllerTransformFromWindow,
           a2);
}
