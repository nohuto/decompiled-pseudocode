/*
 * XREFs of ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x18015F188
 * Callers:
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18015E520 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x18015E48C (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18015F740 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUquaternion@123@@Z @ 0x18015FF5C (-make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUquaternion@123.c)
 */

void __fastcall CComponentTransform3D::GetScaleRotationTranslationRealization(
        CComponentTransform3D *this,
        struct CMILMatrix *a2)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  int v6; // xmm1_4
  float v7; // xmm1_4
  int v8; // xmm0_4
  int v9; // xmm1_4
  _OWORD *float4x4_from_quaternion; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int32 v14; // xmm2_4
  float v15; // [rsp+28h] [rbp-59h] BYREF
  int v16; // [rsp+2Ch] [rbp-55h]
  int v17; // [rsp+30h] [rbp-51h]
  int v18; // [rsp+34h] [rbp-4Dh]
  _OWORD v19[4]; // [rsp+38h] [rbp-49h] BYREF
  int v20; // [rsp+78h] [rbp-9h]
  _BYTE v21[80]; // [rsp+88h] [rbp+7h] BYREF

  *(_QWORD *)((char *)a2 + 60) = 1065353216LL;
  *(_QWORD *)a2 = 1065353216LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a2 + 28) = 0LL;
  *((_DWORD *)a2 + 9) = 0;
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_DWORD *)a2 + 14) = 0;
  *((_BYTE *)a2 + 65) &= 0xE9u;
  *((_BYTE *)a2 + 65) |= 0x29u;
  *((_BYTE *)a2 + 64) = -86;
  v4 = *((float *)this + 51);
  if ( v4 != 1.0 || *((float *)this + 52) != 1.0 || *((float *)this + 53) != 1.0 )
    CMILMatrix::Scale(a2, v4, *((float *)this + 52), *((float *)this + 53));
  v5 = *((float *)this + 58);
  if ( v5 != 0.0 )
  {
    v6 = *((_DWORD *)this + 49);
    v15 = *((float *)this + 48);
    v17 = *((_DWORD *)this + 50);
    v16 = v6;
    v20 = 0;
    CMILMatrix::SetRotation((CMILMatrix *)v19, (const struct Windows::Foundation::Numerics::float3 *)&v15, v5);
    CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v19);
  }
  v7 = *((float *)this + 54);
  if ( v7 != 0.0 || *((float *)this + 55) != 0.0 || *((float *)this + 56) != 0.0 || *((float *)this + 57) != 1.0 )
  {
    v16 = *((_DWORD *)this + 55);
    v8 = *((_DWORD *)this + 57);
    v15 = v7;
    v9 = *((_DWORD *)this + 56);
    v18 = v8;
    v17 = v9;
    float4x4_from_quaternion = (_OWORD *)Windows::Foundation::Numerics::make_float4x4_from_quaternion(v21, &v15);
    v20 = 0;
    v11 = float4x4_from_quaternion[1];
    v19[0] = *float4x4_from_quaternion;
    v12 = float4x4_from_quaternion[2];
    v19[1] = v11;
    v13 = float4x4_from_quaternion[3];
    v19[2] = v12;
    v19[3] = v13;
    CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v19);
  }
  COERCE_FLOAT(v14 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(*((_DWORD *)this + 45) & v14) >= 0.0000011920929
    || COERCE_FLOAT(*((_DWORD *)this + 46) & v14) >= 0.0000011920929
    || COERCE_FLOAT(*((_DWORD *)this + 47) & v14) >= 0.0000011920929 )
  {
    CMILMatrix::Translate(a2, *((float *)this + 45), *((float *)this + 46), *((float *)this + 47));
  }
}
