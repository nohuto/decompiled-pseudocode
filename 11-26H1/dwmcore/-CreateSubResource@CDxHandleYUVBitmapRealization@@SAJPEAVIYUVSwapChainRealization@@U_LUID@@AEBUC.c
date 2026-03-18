/*
 * XREFs of ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1801DCCFC
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180129AD8 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F4FE0 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1800FAA20 (--0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x1801D3550 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 *     ??4?$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleYUVBitmapRealization@@@Z @ 0x1801DC9E4 (--4-$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::CreateSubResource(
        struct IYUVSwapChainRealization *a1,
        struct _LUID a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4,
        struct CDecodeBitmap *a5,
        struct ISwapChainRealization **a6)
{
  CDxHandleYUVBitmapRealization *v6; // rbx
  volatile signed __int32 *v11; // rax
  int v12; // edi
  unsigned int v13; // eax
  CDxHandleYUVBitmapRealization *v14; // rcx
  struct ISwapChainRealization *v15; // rdx
  CDxHandleYUVBitmapRealization *v17; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v17 = 0LL;
  if ( !a1
    || (*(unsigned int (__fastcall **)(struct IYUVSwapChainRealization *))(*(_QWORD *)a1 + 256LL))(a1)
    || !*((_DWORD *)a4 + 8) )
  {
    v12 = -2147024809;
    v13 = 85;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v13, 0LL);
    if ( v6 )
      *((_QWORD *)v6 + 32) = 0LL;
    goto LABEL_14;
  }
  v11 = (volatile signed __int32 *)operator new(0x190uLL);
  if ( v11 )
    v11 = (volatile signed __int32 *)CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(
                                       (__int64)v11,
                                       *((unsigned int *)a1 - 7),
                                       *(_QWORD *)&a2,
                                       (__int64)a3);
  wil::com_ptr_t<CDxHandleYUVBitmapRealization,wil::err_returncode_policy>::operator=(
    (volatile signed __int32 **)&v17,
    v11);
  v6 = v17;
  if ( v17 )
  {
    v12 = CDxHandleYUVBitmapRealization::Initialize(v17, a1);
    if ( v12 >= 0 )
    {
      v14 = v6;
      v6 = 0LL;
      v15 = (struct ISwapChainRealization *)(((unsigned __int64)v14 + 328) & -(__int64)(v14 != 0LL));
      goto LABEL_15;
    }
    v13 = 81;
    goto LABEL_12;
  }
  v12 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x4Fu, 0LL);
LABEL_14:
  v15 = 0LL;
LABEL_15:
  *a6 = v15;
  if ( v6 )
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)v6);
  return (unsigned int)v12;
}
