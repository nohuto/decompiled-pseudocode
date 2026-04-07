/*
 * XREFs of ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180060AFC
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180016090 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180022260 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180060C40 (-Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x18008437C (-CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z @ 0x18008C388 (-SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::UpdateTransform(struct CMatrixTransformProxy **this, __int64 a2, __int64 a3)
{
  struct CBaseTransformProxy **v3; // rsi
  int MatrixTransformProxy; // eax
  unsigned int v6; // ebx
  int v8; // eax
  char CurrentTransform; // al
  unsigned int v10; // xmm0_4
  unsigned int v11; // xmm1_4
  CMatrixTransformProxy *v12; // rcx
  int v13; // eax
  struct D2D_MATRIX_3X2_F v14; // [rsp+38h] [rbp-19h] BYREF
  _DWORD v15[4]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v16; // [rsp+68h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+37h]

  v3 = this + 6;
  if ( !this[6] )
  {
    MatrixTransformProxy = CCompositor::CreateMatrixTransformProxy(
                             *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                             this + 6);
    v6 = MatrixTransformProxy;
    if ( MatrixTransformProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MatrixTransformProxy, 0x227u, 0LL);
      return v6;
    }
    v8 = CVisualProxy::SetTransform(this[2], *v3);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x228u, 0LL);
      return v6;
    }
  }
  CurrentTransform = CVisual::GetCurrentTransform((CVisual *)this, (struct D2DMatrix *)v15, a3);
  v10 = v15[0];
  v11 = v15[1];
  *((_BYTE *)this + 36) &= ~2u;
  v12 = *v3;
  *((_BYTE *)this + 36) |= 2 * CurrentTransform;
  *(_QWORD *)&v14.m11 = __PAIR64__(v11, v10);
  *(_QWORD *)&v14.m[1][0] = v16;
  *(_QWORD *)&v14.m[2][0] = v17;
  v13 = CMatrixTransformProxy::Update(v12, &v14);
  v6 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x235u, 0LL);
  return v6;
}
