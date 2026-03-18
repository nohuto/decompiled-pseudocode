/*
 * XREFs of ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x180013F94
 * Callers:
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180013E1C (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransformedGeometryHelper::FlattenGeometry(
        CTransformedGeometryHelper *this,
        const struct ID2D1Geometry *a2)
{
  float v2; // xmm6_4
  unsigned int v3; // ebx
  __int64 v6; // rax
  float v7; // xmm8_4
  float v8; // xmm7_4
  float v9; // xmm10_4
  float v10; // xmm11_4
  unsigned int v11; // ecx
  float *v12; // rax
  float x; // xmm1_4
  float y; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm0_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  float v20; // xmm8_4
  int v21; // eax
  struct D2D_RECT_F v23; // [rsp+38h] [rbp-69h] BYREF
  D2D_POINT_2F v24; // [rsp+48h] [rbp-59h] BYREF
  float v25; // [rsp+50h] [rbp-51h]
  float v26; // [rsp+54h] [rbp-4Dh] BYREF
  float v27; // [rsp+58h] [rbp-49h]
  float v28; // [rsp+5Ch] [rbp-45h]
  float v29; // [rsp+60h] [rbp-41h]
  float v30; // [rsp+64h] [rbp-3Dh]
  __int128 v31; // [rsp+68h] [rbp-39h] BYREF

  v3 = 0;
  if ( !*((_QWORD *)this + 2) )
  {
LABEL_15:
    v21 = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, __int64))(*(_QWORD *)a2 + 72LL))(a2, 1LL);
    v3 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xB8u, 0LL);
    return v3;
  }
  v6 = *(_QWORD *)a2;
  v31 = 0LL;
  (*(void (__fastcall **)(const struct ID2D1Geometry *, _QWORD, __int128 *))(v6 + 32))(a2, 0LL, &v31);
  v7 = *((float *)&v31 + 1);
  *(_QWORD *)&v23.left = v31;
  v23.right = *((FLOAT *)&v31 + 2);
  v23.bottom = v2;
  if ( *((float *)&v31 + 2) > *(float *)&v31 && v2 > *((float *)&v31 + 1) )
  {
    v8 = (float)(*(float *)&v31 - *((float *)&v31 + 2)) * (float)(*(float *)&v31 - *((float *)&v31 + 2));
    v9 = sqrtf_0((float)((float)(*((float *)&v31 + 1) - v2) * (float)(*((float *)&v31 + 1) - v2)) + v8);
    v10 = sqrtf_0((float)((float)(v2 - v7) * (float)(v2 - v7)) + v8);
    CMILMatrix::Transform2DRectToPerspective(*((CMILMatrix **)this + 2), &v23, &v24);
    v11 = 1;
    v12 = &v26;
    x = v24.x;
    y = v24.y;
    v15 = v24.x;
    v16 = v24.y;
    do
    {
      v17 = *(v12 - 1);
      if ( x > v17 )
        x = *(v12 - 1);
      else
        v15 = fmaxf(v17, v15);
      if ( y > *v12 )
        y = *v12;
      else
        v16 = fmaxf(*v12, v16);
      ++v11;
      v12 += 2;
    }
    while ( v11 < 4 );
    if ( v15 > x && v16 > y && (x > -3.4028235e38 || v15 < 3.4028235e38) && (y > -3.4028235e38 || v16 < 3.4028235e38) )
    {
      v18 = v25 - v29;
      v19 = v26 - v30;
      v20 = sqrtf_0(
              (float)((float)(v24.y - v28) * (float)(v24.y - v28))
            + (float)((float)(v24.x - v27) * (float)(v24.x - v27)))
          / v9;
      fminf(fmaxf(v20, sqrtf_0((float)(v19 * v19) + (float)(v18 * v18)) / v10), 1000.0);
      goto LABEL_15;
    }
  }
  return v3;
}
