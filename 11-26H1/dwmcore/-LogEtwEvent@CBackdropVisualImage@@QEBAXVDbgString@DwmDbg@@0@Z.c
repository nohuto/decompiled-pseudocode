/*
 * XREFs of ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180110440
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18001AAD4 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x180038EE8 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091390 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180092940 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x1801103D0 (-CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x1801A0388 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1801ADF20 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x1801AF2EC (--1CBackdropVisualImage@@UEAA@XZ.c)
 *     ?CleanUpStaleBackdropVisualImages@CTreeData@@IEAAXXZ @ 0x1801B266C (-CleanUpStaleBackdropVisualImages@CTreeData@@IEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@33333333343@Z @ 0x180001664 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U2@U1@@-$_tlgWrite.c)
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18002C2A0 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x18002C32C (--0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?GetViewBoxToUVTransform@CBackdropVisualImage@@QEBA?AVMatrix3x2F@D2D1@@XZ @ 0x180038D78 (-GetViewBoxToUVTransform@CBackdropVisualImage@@QEBA-AVMatrix3x2F@D2D1@@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180039A10 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?As3DHomogeneous@Matrix3x3@@QEBA?AVCMILMatrix@@XZ @ 0x1800D9628 (-As3DHomogeneous@Matrix3x3@@QEBA-AVCMILMatrix@@XZ.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x1801AE398 (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x1802079DC (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBackdropVisualImage::LogEtwEvent(__int64 a1, void **a2, void **a3)
{
  char v3; // si
  __int64 v7; // rbx
  char v8; // r12
  float *v9; // rax
  __int64 v10; // rax
  CBackdropVisualImage *v11; // rcx
  bool IsValid; // al
  int v13; // r9d
  int v14; // r10d
  const char *v15; // rcx
  __int64 *DebugString; // rax
  const void *v17; // r8
  char v18; // si
  void *v19; // rcx
  float v20; // xmm2_4
  double v21; // xmm3_8
  DwmDbg::DbgString *v22; // rax
  float v23; // xmm2_4
  double v24; // xmm3_8
  DwmDbg::DbgString *v25; // rax
  const void *v26; // rbx
  DwmDbg::DbgString *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  const char *v31; // [rsp+98h] [rbp-80h] BYREF
  void *v32; // [rsp+A0h] [rbp-78h] BYREF
  const char *v33; // [rsp+A8h] [rbp-70h] BYREF
  const char *v34; // [rsp+B0h] [rbp-68h] BYREF
  void *v35; // [rsp+B8h] [rbp-60h] BYREF
  void *v36; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v38; // [rsp+D0h] [rbp-48h] BYREF
  const char *v39; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-38h] BYREF
  void *v41; // [rsp+E8h] [rbp-30h] BYREF
  __int64 v42; // [rsp+F0h] [rbp-28h] BYREF
  void *v43; // [rsp+F8h] [rbp-20h] BYREF
  __int64 v44; // [rsp+100h] [rbp-18h] BYREF
  __int64 v45; // [rsp+108h] [rbp-10h] BYREF
  __int64 v46; // [rsp+110h] [rbp-8h] BYREF
  CComposition *CurrentFrameId; // [rsp+118h] [rbp+0h] BYREF
  struct D2D_RECT_F v48; // [rsp+120h] [rbp+8h] BYREF
  void *v49; // [rsp+138h] [rbp+20h] BYREF
  void *v50; // [rsp+140h] [rbp+28h] BYREF
  void *v51; // [rsp+148h] [rbp+30h] BYREF
  void *v52; // [rsp+150h] [rbp+38h] BYREF
  void *v53; // [rsp+158h] [rbp+40h] BYREF
  void *v54; // [rsp+160h] [rbp+48h] BYREF
  void *v55; // [rsp+168h] [rbp+50h] BYREF
  void *v56; // [rsp+170h] [rbp+58h] BYREF
  void *v57; // [rsp+178h] [rbp+60h] BYREF
  float v58[10]; // [rsp+180h] [rbp+68h] BYREF
  _BYTE v59[72]; // [rsp+1A8h] [rbp+90h] BYREF

  v3 = 0;
  LODWORD(v31) = 0;
  if ( dword_1803DC8B8 )
  {
    v7 = a1 + 1616;
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 1616) + 8LL) + 192LL))(*(_QWORD *)(*(_QWORD *)(a1 + 1616) + 8LL));
    CBackdropVisualImage::GetViewBoxToUVTransform(a1, (D2D1::Matrix3x2F *)&v48);
    Matrix3x3::operator*((float *)(a1 + 1716), v58, v9);
    v48 = 0LL;
    v10 = Matrix3x3::As3DHomogeneous(v58, (__int64)v59);
    CMILMatrix::Transform2DBoundsHelper<0>(v10, (const struct D2D_RECT_F *)(*(_QWORD *)(a1 + 1608) + 172LL), &v48.left);
    if ( (unsigned int)dword_1803DC8B8 > 5 )
    {
      v36 = *a3;
      v37 = *(_QWORD *)(a1 + 1776);
      CBackdropVisualImage::CanUseAsEffectInput((CBackdropVisualImage *)a1);
      IsValid = CBackdropVisualImage::IsValid(v11);
      v38 = *(_QWORD *)DwmDbg::DbgString::DbgString(
                         (char **)&v57,
                         "IsValid=%d, CanUseAsEffectInput=%d, CanUseOcclusion=%d",
                         IsValid,
                         v13,
                         v14);
      if ( *(_BYTE *)(a1 + 1785) )
      {
        v3 = 1;
        v15 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v56, &v48);
      }
      else
      {
        v15 = "NoEffectInputTransform";
      }
      v39 = v15;
      DebugString = (__int64 *)CVisualTreePath::GetDebugString(v7, &v55);
      v17 = *(const void **)(a1 + 120);
      v40 = *DebugString;
      if ( v8 )
      {
        v18 = v3 | 2;
        v19 = *(void **)DwmDbg::DbgString::DbgString((char **)&v54, "0x%p (DesktopRoot)", v17);
      }
      else
      {
        v18 = v3 | 4;
        DwmDbg::DbgString::DbgString((char **)&v35, "0x%p", v17);
        v19 = v35;
      }
      v20 = *(float *)(a1 + 1688);
      v21 = *(float *)(a1 + 1692);
      v41 = v19;
      DwmDbg::DbgString::DbgString((char **)&v34, "%.2f, %.2f", v20, v21);
      DwmDbg::DbgString::DbgString((char **)&v33, "%.2f, %.2f", *(float *)(a1 + 1696), *(float *)(a1 + 1700));
      v22 = DwmDbg::DbgString::DbgString((char **)&v53, "RealizationScale=[%s], DPI=[%s]", v33, v34);
      v23 = *(float *)(a1 + 112);
      v24 = *(float *)(a1 + 116);
      v42 = *(_QWORD *)v22;
      DwmDbg::DbgString::DbgString((char **)&v32, "%.2f x %.2f", v23, v24);
      v43 = v32;
      v44 = *(_QWORD *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v52, (const struct D2D_RECT_F *)(a1 + 1672));
      v25 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v51, (const struct D2D_RECT_F *)(a1 + 96));
      v26 = *(const void **)(a1 + 1608);
      v45 = *(_QWORD *)v25;
      DwmDbg::DbgString::DbgString((char **)&v31, "0x%p", (const void *)a1);
      v27 = DwmDbg::DbgString::DbgString((char **)&v50, "%s, 0x%x", v31, 0);
      v46 = *(_QWORD *)DwmDbg::DbgString::DbgString((char **)&v49, "[%s] -> 0x%p", *(const char **)v27, v26);
      CurrentFrameId = GetCurrentFrameId();
      *(_QWORD *)&v48.left = *a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        v28,
        (__int64)&unk_1803B38A6,
        v29,
        v30,
        &v48,
        (__int64)&CurrentFrameId,
        &v46,
        &v45,
        &v44,
        &v43,
        &v42,
        &v41,
        &v40,
        &v39,
        &v38,
        (__int64)&v37,
        &v36);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v49);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v50);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v31);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v51);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v52);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v32);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v53);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v33);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v34);
      if ( (v18 & 4) != 0 )
        std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v35);
      if ( (v18 & 2) != 0 )
        std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v54);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v55);
      if ( (v18 & 1) != 0 )
        std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v56);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v57);
    }
  }
  std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(a2);
  std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(a3);
}
