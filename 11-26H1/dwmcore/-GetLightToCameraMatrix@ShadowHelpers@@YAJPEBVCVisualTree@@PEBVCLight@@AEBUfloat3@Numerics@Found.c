/*
 * XREFs of ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x1801D5068
 * Callers:
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x1800D5BEC (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?make_float4x4_look_at@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@00@Z @ 0x1801C8130 (-make_float4x4_look_at@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@00@Z.c)
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1801D5260 (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShadowHelpers::GetLightToCameraMatrix(
        ShadowHelpers *this,
        const struct CVisualTree *a2,
        const struct CLight *a3,
        const struct Windows::Foundation::Numerics::float3 *a4)
{
  int v8; // eax
  __int64 v9; // r8
  int v10; // r15d
  const struct CLight *v11; // rax
  int LightPosition; // eax
  unsigned int v13; // ebx
  float v14; // xmm1_4
  float v15; // xmm2_4
  _OWORD *float4x4_look_at; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // xmm3
  struct D2D_VECTOR_3F *v21; // [rsp+28h] [rbp-29h]
  __int64 v22; // [rsp+38h] [rbp-19h] BYREF
  float v23; // [rsp+40h] [rbp-11h]
  _QWORD v24[2]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v25[64]; // [rsp+58h] [rbp+7h] BYREF

  v8 = (*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 224LL))(a2);
  v9 = *(_QWORD *)a2;
  v10 = v8;
  memset(v24, 0, 12);
  v11 = (const struct CLight *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(v9 + 208))(a2);
  LightPosition = ShadowHelpers::GetLightPosition(this, a2, v11, (struct CVisual *)v24, v21);
  v13 = LightPosition;
  if ( LightPosition < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, LightPosition, 0x9Bu, 0LL);
  }
  else
  {
    v22 = v24[0];
    v23 = *(float *)&v24[1];
    if ( v10 == 1 )
    {
      v14 = *((float *)v24 + 1) + *((float *)a3 + 1);
      v15 = *(float *)&v24[1] + *((float *)a3 + 2);
      *(float *)&v22 = *(float *)v24 + *(float *)a3;
      *((float *)&v22 + 1) = v14;
      v23 = v15;
    }
    LODWORD(v24[0]) = 0;
    *(_QWORD *)((char *)v24 + 4) = 1065353216LL;
    float4x4_look_at = (_OWORD *)Windows::Foundation::Numerics::make_float4x4_look_at(
                                   (__int64)v25,
                                   (float *)&v22,
                                   (float *)a3,
                                   (__int64)v24);
    v17 = float4x4_look_at[1];
    v18 = float4x4_look_at[2];
    v19 = float4x4_look_at[3];
    *(_OWORD *)a4 = *float4x4_look_at;
    *((_OWORD *)a4 + 1) = v17;
    *((_OWORD *)a4 + 2) = v18;
    *((_OWORD *)a4 + 3) = v19;
    *((_DWORD *)a4 + 16) = 0;
  }
  return v13;
}
