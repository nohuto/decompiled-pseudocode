/*
 * XREFs of ??0ISwapChainRealization@@QEAA@XZ @ 0x18012A054
 * Callers:
 *     ??0IYUVSwapChainRealization@@QEAA@XZ @ 0x180129520 (--0IYUVSwapChainRealization@@QEAA@XZ.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180129F50 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ??0?$CMILRefCountBaseT@VISwapChainRealization@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x1802AC6A4 (--0-$CMILRefCountBaseT@VISwapChainRealization@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

ISwapChainRealization *__fastcall ISwapChainRealization::ISwapChainRealization(ISwapChainRealization *this)
{
  *((_QWORD *)this + 2) = &Windows::Foundation::Collections::IMapView<_GUID,IInspectable *>::`vftable';
  return this;
}
