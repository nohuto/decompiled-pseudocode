/*
 * XREFs of ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802869F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x18001A090 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180037348 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180037374 (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180038840 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18003A430 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800CA388 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1801991E4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowBackdropBrush::GetBrushParameters(
        CWindowBackdropBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  int WindowBackgroundTreatmentEffectInput; // eax
  int v4; // edi
  __int16 v6; // [rsp+30h] [rbp-69h] BYREF
  char v7; // [rsp+32h] [rbp-67h]
  CSurfaceDrawListBrush *v8; // [rsp+40h] [rbp-59h] BYREF
  __int64 (__fastcall ***v9)(_QWORD, __int64); // [rsp+48h] [rbp-51h] BYREF
  CSurfaceDrawListBrush **v10; // [rsp+50h] [rbp-49h] BYREF
  __int64 v11; // [rsp+58h] [rbp-41h] BYREF
  char v12; // [rsp+60h] [rbp-39h]
  __int128 v13; // [rsp+70h] [rbp-29h] BYREF
  char v14; // [rsp+80h] [rbp-19h]
  __int128 v15; // [rsp+88h] [rbp-11h]
  char v16; // [rsp+9Dh] [rbp+4h]
  _OWORD v17[4]; // [rsp+A0h] [rbp+7h] BYREF

  CBrushDrawListGenerator::Reset(a2);
  v14 = 0;
  v13 = 0LL;
  v17[0] = 0LL;
  EffectInput::Reset((struct EffectInput *)&v13);
  WindowBackgroundTreatmentEffectInput = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                           *(CVisual ****)a2,
                                           (const struct D2D_SIZE_F *)((char *)a2 + 44),
                                           (struct EffectInput *)&v13);
  if ( WindowBackgroundTreatmentEffectInput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WindowBackgroundTreatmentEffectInput, 0x30u, 0LL);
    goto LABEL_8;
  }
  if ( v16 )
  {
    *(_OWORD *)((char *)a2 + 56) = v15;
    goto LABEL_9;
  }
  v8 = 0LL;
  v10 = &v8;
  v6 = SamplerMode::k_ClampClampLinear;
  v7 = 1;
  v11 = 0LL;
  v12 = 1;
  v4 = CSurfaceDrawListBrush::CreateWithTextureTransform((__int64 *)&v13, &v6, v17, &v11);
  wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>((__int64)&v10);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x3Au, 0LL);
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v8);
LABEL_8:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_9;
  }
  v9 = (__int64 (__fastcall ***)(_QWORD, __int64))v8;
  v8 = 0LL;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)&v9);
  std::unique_ptr<CShape>::~unique_ptr<CShape>(&v9);
  *((_DWORD *)a2 + 13) |= 0x200u;
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v8);
LABEL_9:
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v13);
  return 0LL;
}
