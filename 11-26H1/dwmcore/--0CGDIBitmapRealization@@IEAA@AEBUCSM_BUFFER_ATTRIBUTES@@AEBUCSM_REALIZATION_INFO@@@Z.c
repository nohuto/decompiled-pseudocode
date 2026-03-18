/*
 * XREFs of ??0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1801293B0
 * Callers:
 *     ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x180129288 (-Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z.c)
 * Callees:
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180129F50 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 */

CGDIBitmapRealization *__fastcall CGDIBitmapRealization::CGDIBitmapRealization(
        CGDIBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3)
{
  CGDIBitmapRealization *result; // rax
  char v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+30h] [rbp-18h]

  v6 = 0;
  v5 = 0;
  CDxHandleBitmapRealization::CDxHandleBitmapRealization(this, 0LL, 0LL, a2, a3, v5, v6, 0LL);
  *(_QWORD *)this = &CGDIBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CGDIBitmapRealization::`vftable'{for `IBitmapRealization's `CBitmapRealization'};
  *((_QWORD *)this + 11) = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
  *((_QWORD *)this + 41) = &CGDIBitmapRealization::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 42) = &CGDIBitmapRealization::`vftable'{for `IBitmapRealization's `ISwapChainRealization'};
  *((_QWORD *)this + 43) = &CDxHandleStereoBitmapRealization::`vftable'{for `IOverlayPlaneResource'};
  *((_QWORD *)this + 50) = &CGDIBitmapRealization::`vftable';
  result = this;
  *(_OWORD *)((char *)this + 408) = 0LL;
  return result;
}
