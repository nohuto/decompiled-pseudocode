/*
 * XREFs of ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x180212C0C
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1800D78A0 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPlaneOfVisual@ShadowHelpers@@YA?AUD2D_VECTOR_4F@@PEAVCVisual@@@Z @ 0x1800CF100 (-GetPlaneOfVisual@ShadowHelpers@@YA-AUD2D_VECTOR_4F@@PEAVCVisual@@@Z.c)
 *     ?GetProjectionMatrix@ShadowHelpers@@YA?AVCMILMatrix@@AEBUD2D_VECTOR_3F@@AEBUD2D_VECTOR_4F@@_N@Z @ 0x1801CFB5C (-GetProjectionMatrix@ShadowHelpers@@YA-AVCMILMatrix@@AEBUD2D_VECTOR_3F@@AEBUD2D_VECTOR_4F@@_N@Z.c)
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1801D5260 (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShadowHelpers::GetProjectionOntoVisualMatrix(
        ShadowHelpers *this,
        const struct CVisualTree *a2,
        struct CLight *a3,
        struct CVisual *a4)
{
  int LightPosition; // eax
  struct CVisual *v8; // r8
  unsigned int v9; // ebx
  __int128 v10; // xmm0
  __int64 (__fastcall *v11)(const struct CVisualTree *); // rax
  int v12; // eax
  __int64 ProjectionMatrix; // rax
  __int64 v15; // [rsp+30h] [rbp-78h] BYREF
  int v16; // [rsp+38h] [rbp-70h]
  __int128 v17; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v18[80]; // [rsp+50h] [rbp-58h] BYREF

  v15 = 0LL;
  v16 = 0;
  LightPosition = ShadowHelpers::GetLightPosition(this, a2, a3, (FLOAT *)&v15);
  v9 = LightPosition;
  if ( LightPosition < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, LightPosition, 0x35u, 0LL);
  }
  else
  {
    v10 = (__int128)*ShadowHelpers::GetPlaneOfVisual((ShadowHelpers *)&v17, (struct D2D_VECTOR_4F *)a3, v8);
    v11 = *(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 224LL);
    v17 = v10;
    v12 = v11(a2);
    ProjectionMatrix = ShadowHelpers::GetProjectionMatrix((__int64)v18, (float *)&v15, (float *)&v17, v12 == 2);
    *(_OWORD *)a4 = *(_OWORD *)ProjectionMatrix;
    *((_OWORD *)a4 + 1) = *(_OWORD *)(ProjectionMatrix + 16);
    *((_OWORD *)a4 + 2) = *(_OWORD *)(ProjectionMatrix + 32);
    *((_OWORD *)a4 + 3) = *(_OWORD *)(ProjectionMatrix + 48);
    *((_DWORD *)a4 + 16) = *(_DWORD *)(ProjectionMatrix + 64);
  }
  return v9;
}
