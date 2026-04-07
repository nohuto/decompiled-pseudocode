/*
 * XREFs of ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x180016880
 * Callers:
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180014F5C (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 *     ?DoHitTest@CContainerVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180015050 (-DoHitTest@CContainerVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800220C4 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180022260 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x180059AC4 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

bool __fastcall CVisual::TransformFromParent(CVisual *this, const struct tagPOINT *a2, struct tagPOINT *a3)
{
  struct tagPOINT v3; // rax
  struct D2DMatrix *v5; // rax
  float *v6; // rdx
  float v8[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v9[64]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *a2;
  *a3 = *a2;
  a3->x = v3.x - *((_DWORD *)this + 14);
  a3->y -= *((_DWORD *)this + 15);
  if ( (*((_BYTE *)this + 36) & 2) != 0 )
  {
    CVisual::GetCurrentTransform(this, (struct D2DMatrix *)v9);
    v5 = D2DMatrixInverse((struct D2DMatrix *)v9, v6, (const struct D2DMatrix *)v9);
    if ( !v5 )
      return (char)v5;
    *(_QWORD *)v8 = _mm_unpacklo_ps(
                      (__m128)COERCE_UNSIGNED_INT((float)a3->x),
                      (__m128)COERCE_UNSIGNED_INT((float)a3->y)).m128_u64[0];
    D3DXVec2TransformCoord((struct D2DVector2 *)v8, (const struct D2DVector2 *)v8, (const struct D2DMatrix *)v9);
    a3->x = (int)v8[0];
    a3->y = (int)v8[1];
  }
  LOBYTE(v5) = 1;
  return (char)v5;
}
