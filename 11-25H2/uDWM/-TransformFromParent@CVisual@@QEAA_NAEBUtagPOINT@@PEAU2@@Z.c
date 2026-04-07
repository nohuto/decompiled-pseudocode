/*
 * XREFs of ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x180016360
 * Callers:
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180015D40 (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 *     ?DoHitTest@CContainerVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180016040 (-DoHitTest@CContainerVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 * Callees:
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x1800181F0 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800188F4 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x180069D08 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

bool __fastcall CVisual::TransformFromParent(CVisual *this, const struct tagPOINT *a2, struct tagPOINT *a3)
{
  struct tagPOINT v3; // rax
  struct D2DMatrix *v5; // rax
  float *v6; // rdx
  float y; // xmm1_4
  float x; // [rsp+20h] [rbp-68h] BYREF
  float v10; // [rsp+24h] [rbp-64h]
  _BYTE v11[64]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *a2;
  *a3 = *a2;
  a3->x = v3.x - *((_DWORD *)this + 16);
  a3->y -= *((_DWORD *)this + 17);
  if ( (*((_BYTE *)this + 36) & 2) != 0 )
  {
    CVisual::GetCurrentTransform(this, (struct D2DMatrix *)v11);
    v5 = D2DMatrixInverse((struct D2DMatrix *)v11, v6, (const struct D2DMatrix *)v11);
    if ( !v5 )
      return (char)v5;
    y = (float)a3->y;
    x = (float)a3->x;
    v10 = y;
    D3DXVec2TransformCoord((struct D2DVector2 *)&x, (const struct D2DVector2 *)&x, (const struct D2DMatrix *)v11);
    a3->x = (int)x;
    a3->y = (int)v10;
  }
  LOBYTE(v5) = 1;
  return (char)v5;
}
