/*
 * XREFs of ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802AB564
 * Callers:
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180129D70 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCS.c)
 * Callees:
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180129F50 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  CDxHandleBitmapRealization::CDxHandleBitmapRealization(a1, a2, a3, a4, a5, 1, 1);
  *(_QWORD *)a1 = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *(_QWORD *)(a1 + 16) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(a1 + 80) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IBitmapRealization's `CBitmapRealization'};
  *(_QWORD *)(a1 + 88) = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
  *(_QWORD *)(a1 + 328) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(a1 + 336) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IBitmapRealization's `ISwapChainRealization'};
  *(_QWORD *)(a1 + 344) = &CDxHandleStereoBitmapRealization::`vftable'{for `IOverlayPlaneResource'};
  *(_QWORD *)(a1 + 400) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable';
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_BYTE *)(a1 + 432) = 0;
  return a1;
}
