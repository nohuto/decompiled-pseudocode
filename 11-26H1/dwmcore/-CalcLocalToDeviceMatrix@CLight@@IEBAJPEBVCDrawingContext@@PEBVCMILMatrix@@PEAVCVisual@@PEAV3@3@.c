/*
 * XREFs of ?CalcLocalToDeviceMatrix@CLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x180264860
 * Callers:
 *     ?GetLightInfo@CDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18026D090 (-GetLightInfo@CDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 *     ?GetLightInfo@CPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18027D3B0 (-GetLightInfo@CPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 *     ?GetLightInfo@CSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180282250 (-GetLightInfo@CSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 */

__int64 __fastcall CLight::CalcLocalToDeviceMatrix(
        CLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CVisual *a4,
        struct CMILMatrix *a5,
        struct CMILMatrix *a6)
{
  const struct CVisualTree *v6; // rdx
  int WorldTransform; // eax
  unsigned int v9; // ebx
  struct Windows::Foundation::Numerics::float4x4 *v10; // r8
  __int64 v11; // rdx
  int v12; // r8d
  __int128 v14; // [rsp+30h] [rbp-59h] BYREF
  __int128 v15; // [rsp+40h] [rbp-49h]
  __int128 v16; // [rsp+50h] [rbp-39h]
  __int128 v17; // [rsp+60h] [rbp-29h]
  unsigned int v18; // [rsp+70h] [rbp-19h]
  _OWORD v19[4]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v20; // [rsp+C0h] [rbp+37h]

  v6 = (const struct CVisualTree *)*((_QWORD *)a2 + 993);
  v20 = 0;
  WorldTransform = CVisual::GetWorldTransform(a4, v6, (struct CMILMatrix *)v19, 0LL, 0LL);
  v9 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WorldTransform, 0x70u, 0LL);
  }
  else
  {
    v14 = v19[0];
    v18 = v20;
    v15 = v19[1];
    v16 = v19[2];
    v17 = v19[3];
    CMILMatrix::Multiply((CMILMatrix *)&v14, a3);
    v10 = (struct Windows::Foundation::Numerics::float4x4 *)v18;
    *(_OWORD *)a5 = v14;
    *((_OWORD *)a5 + 1) = v15;
    *((_OWORD *)a5 + 2) = v16;
    *((_OWORD *)a5 + 3) = v17;
    *((_DWORD *)a5 + 16) = (_DWORD)v10;
    CMILMatrix::Invert(a5, v11, v10);
    *(_OWORD *)a6 = v14;
    *((_OWORD *)a6 + 1) = v15;
    *((_OWORD *)a6 + 2) = v16;
    *((_OWORD *)a6 + 3) = v17;
    *((_DWORD *)a6 + 16) = v12;
  }
  return v9;
}
