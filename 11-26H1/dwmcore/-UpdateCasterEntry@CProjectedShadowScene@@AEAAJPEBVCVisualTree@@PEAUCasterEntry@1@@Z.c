/*
 * XREFs of ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x1800D5BEC
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1800D78A0 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D49F0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x1800D5F34 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800D6064 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1800D7088 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x1800D70B0 (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ?GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800D711C (-GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x1800D7250 (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180121FE0 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x1801D5068 (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@AEBUfloat3@Numerics@Found.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@PEAV1@1PEAVCMILMatrix@@@Z @ 0x18027E228 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@PEAV1@1PEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowScene::UpdateCasterEntry(
        CProjectedShadowScene *this,
        const struct CVisualTree *a2,
        struct CProjectedShadowScene::CasterEntry *a3)
{
  struct CProjectedShadowCaster *v3; // rsi
  unsigned int v7; // edi
  float *v8; // r12
  __int64 v9; // rax
  struct CVisual *v10; // r13
  bool *v11; // r8
  float *CasterBounds; // rax
  const struct CVisualTree *v13; // rdx
  float v15; // xmm1_4
  FLOAT v16; // xmm0_4
  int v17; // eax
  const struct CVisualTree *v18; // rdx
  int LightToCameraMatrix; // eax
  int v20; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  struct CMILMatrix *v24; // [rsp+28h] [rbp-A9h]
  struct D2D_VECTOR_4F v25; // [rsp+38h] [rbp-99h] BYREF
  struct D2D_VECTOR_4F v26; // [rsp+48h] [rbp-89h] BYREF
  __int128 v27; // [rsp+58h] [rbp-79h] BYREF
  __int128 v28; // [rsp+68h] [rbp-69h]
  __int128 v29; // [rsp+78h] [rbp-59h]
  __int128 v30; // [rsp+88h] [rbp-49h]
  int v31; // [rsp+98h] [rbp-39h]
  _OWORD v32[4]; // [rsp+A8h] [rbp-29h] BYREF
  int v33; // [rsp+E8h] [rbp+17h]
  const struct CVisualTree *v34; // [rsp+138h] [rbp+67h] BYREF

  v3 = *(struct CProjectedShadowCaster **)a3;
  v7 = 0;
  v8 = *(float **)(*(_QWORD *)a3 + 72LL);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 208LL))(*((_QWORD *)this + 13));
  *((_BYTE *)a3 + 152) = 1;
  v10 = (struct CVisual *)v9;
  if ( !CProjectedShadowCaster::IsEmptyMaskContent(v3)
    && CProjectedShadowScene::IsValidVisual(a2, (struct CVisual *)v8)
    && (v34 = a2,
        *(_BYTE *)(std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at((char *)v3 + 88, &v34)
                 + 17))
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(CProjectedShadowCaster::GetEffectiveAlpha(v3, a2, v11)) & _xmm) >= 0.0000011920929
    && (CasterBounds = (float *)CProjectedShadowCaster::GetCasterBounds(v3, a2),
        (float)(CasterBounds[2] - *CasterBounds) >= 0.5)
    && (float)(CasterBounds[3] - CasterBounds[1]) >= 0.5 )
  {
    if ( *((_QWORD *)a3 + 1) < *((_QWORD *)this + 14)
      || *((_QWORD *)a3 + 1) < (unsigned __int64)CVisual::FindTreeData((CVisual *)v8, v13)[28] )
    {
      v15 = v8[36];
      v16 = v8[35] * 0.5;
      v25.z = 0.0;
      v25.w = 1.0;
      v25.x = v16;
      v33 = 0;
      v25.y = v15 * 0.5;
      v17 = CVisual::CalcSrcToDestVisualTransform(a2, (struct CVisual *)v8, v10, (struct CMILMatrix *)v32);
      v7 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x2B2u, 0LL);
      }
      else
      {
        CMILMatrix::Transform4DVector((CMILMatrix *)v32, &v26, &v25);
        v18 = (const struct CVisualTree *)*((_QWORD *)this + 13);
        v25.x = v26.x / v26.w;
        v25.z = v26.z / v26.w;
        v25.y = v26.y / v26.w;
        LightToCameraMatrix = ShadowHelpers::GetLightToCameraMatrix(
                                a2,
                                v18,
                                (const struct CLight *)&v25,
                                (struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84),
                                v24);
        v7 = LightToCameraMatrix;
        if ( LightToCameraMatrix < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, LightToCameraMatrix, 0x2BCu, 0LL);
        }
        else
        {
          v27 = v32[0];
          v31 = v33;
          v28 = v32[1];
          v29 = v32[2];
          v30 = v32[3];
          CMILMatrix::Multiply((CMILMatrix *)&v27, (struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84));
          v20 = v31;
          v21 = v28;
          *((_OWORD *)a3 + 1) = v27;
          v22 = v29;
          *((_OWORD *)a3 + 2) = v21;
          v23 = v30;
          *((_OWORD *)a3 + 3) = v22;
          *((_OWORD *)a3 + 4) = v23;
          *((_DWORD *)a3 + 20) = v20;
          *((_QWORD *)a3 + 1) = *(_QWORD *)(*((_QWORD *)this + 3) + 880LL);
        }
      }
    }
    return v7;
  }
  else
  {
    *((_BYTE *)a3 + 152) = 0;
    CProjectedShadowScene::DiscardCachesForCaster(this, v3);
    return 0LL;
  }
}
