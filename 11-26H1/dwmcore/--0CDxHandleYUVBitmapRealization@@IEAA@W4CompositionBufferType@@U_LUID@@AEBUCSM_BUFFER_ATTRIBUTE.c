/*
 * XREFs of ??0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1800FAA20
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1800FA640 (-Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1801DCCFC (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 * Callees:
 *     ??0IYUVSwapChainRealization@@QEAA@XZ @ 0x180129520 (--0IYUVSwapChainRealization@@QEAA@XZ.c)
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18012A06C (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // rcx
  __int64 v7; // rax

  CBitmapRealization::CBitmapRealization(a1, a2);
  IYUVSwapChainRealization::IYUVSwapChainRealization((IYUVSwapChainRealization *)(a1 + 328));
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)a1 = &CDxHandleYUVBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *(_QWORD *)(a1 + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(a1 + 80) = &CDxHandleYUVBitmapRealization::`vftable'{for `IBitmapRealization's `CBitmapRealization'};
  *(_QWORD *)(a1 + 88) = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
  *v6 = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(a1 + 336) = &CDxHandleYUVBitmapRealization::`vftable'{for `IBitmapRealization's `IYUVSwapChainRealization'};
  *(_QWORD *)(a1 + 344) = &CDxHandleYUVBitmapRealization::`vftable'{for `IOverlayPlaneResource'};
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_WORD *)(a1 + 392) = 256;
  v7 = *(_QWORD *)(a4 + 8);
  if ( (*(_BYTE *)(a4 + 136) & 1) == 0 || !v7 )
    LODWORD(v7) = -1;
  *(_DWORD *)(a1 + 296) = v7;
  return a1;
}
