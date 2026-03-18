/*
 * XREFs of ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x180015480
 * Callers:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x180014474 (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     ?make_float4x4_scale@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@0@Z @ 0x180009EB0 (-make_float4x4_scale@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@0@Z.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x18018EC24 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z @ 0x1801C7330 (-make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@MAEBUfloat3@123@@Z.c)
 */

void __fastcall CMILMatrix::Set2DAffineMatrix(
        CMILMatrix *this,
        const struct Windows::Foundation::Numerics::float2 *a2,
        float a3,
        const struct Windows::Foundation::Numerics::float2 **a4,
        const struct Windows::Foundation::Numerics::float2 *a5,
        const struct Windows::Foundation::Numerics::float2 *a6)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // [rsp+28h] [rbp-E0h] BYREF
  int v13; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+34h] [rbp-D4h] BYREF
  int v15; // [rsp+3Ch] [rbp-CCh]
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+4Ch] [rbp-BCh]
  int v18; // [rsp+5Ch] [rbp-ACh]
  __int128 v19; // [rsp+60h] [rbp-A8h]
  __int64 v20; // [rsp+70h] [rbp-98h]
  const struct Windows::Foundation::Numerics::float2 *v21; // [rsp+78h] [rbp-90h]
  int v22; // [rsp+80h] [rbp-88h]
  int v23; // [rsp+84h] [rbp-84h]
  _BYTE v24[64]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v25[64]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v26[64]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v27[80]; // [rsp+148h] [rbp+40h] BYREF
  const struct Windows::Foundation::Numerics::float2 *v28; // [rsp+1C8h] [rbp+C0h]

  v15 = 0;
  v13 = 1065353216;
  v14 = *(_QWORD *)a5;
  v12 = *(_QWORD *)a2;
  Windows::Foundation::Numerics::make_float4x4_scale((__int64)v25, (float *)&v12, (float *)&v14);
  v13 = 0;
  v12 = *(_QWORD *)a6;
  Windows::Foundation::Numerics::make_float4x4_rotation_z(v24, v8, &v12);
  v28 = *a4;
  v16 = 1065353216;
  v18 = 1065353216;
  v19 = 0LL;
  v20 = 1065353216LL;
  v17 = 0LL;
  v22 = 0;
  v21 = v28;
  v23 = 1065353216;
  v9 = Windows::Foundation::Numerics::operator*(v26, v25, v24);
  v10 = (_OWORD *)Windows::Foundation::Numerics::operator*(v27, v9, &v16);
  *(_OWORD *)this = *v10;
  *((_OWORD *)this + 1) = v10[1];
  *((_OWORD *)this + 2) = v10[2];
  v11 = v10[3];
  *((_BYTE *)this + 65) &= 0xE8u;
  *((_BYTE *)this + 65) |= 0x28u;
  *((_OWORD *)this + 3) = v11;
  *((_BYTE *)this + 64) = 8;
}
