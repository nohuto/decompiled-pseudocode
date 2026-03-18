/*
 * XREFs of ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1800FA640
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180129AD8 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F4FE0 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1800FA824 (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1800FAA20 (--0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Create(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  LPVOID v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // edi
  unsigned int v17; // eax

  v10 = operator new(0x190uLL);
  if ( !v10 )
  {
    v13 = 0LL;
    v12 = 0LL;
    goto LABEL_12;
  }
  v11 = CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(v10, a1, a2, a3, a4, a5);
  v12 = v11;
  v13 = v11;
  if ( !v11 )
  {
LABEL_12:
    v15 = -2147024882;
    v17 = 30;
    goto LABEL_9;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 8));
  v14 = CDxHandleYUVBitmapRealization::EnsureTexture((CDxHandleYUVBitmapRealization *)v12);
  v15 = v14;
  if ( v14 >= 0 )
  {
    *(_BYTE *)(v12 + 393) = (*(_DWORD *)(*(_QWORD *)(v12 + 376) + 168LL) & 0x400000) == 0;
    *a6 = v12 + 328;
    return v15;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xA0u, 0LL);
  v17 = 31;
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, v17, 0LL);
  if ( v13 )
    *(_QWORD *)(v13 + 256) = 0LL;
  *a6 = 0LL;
  if ( v12 )
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)v12);
  return v15;
}
