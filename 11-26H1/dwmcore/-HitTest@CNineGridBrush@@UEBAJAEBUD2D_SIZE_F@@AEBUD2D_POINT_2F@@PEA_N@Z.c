/*
 * XREFs of ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801E2790
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800949F0 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUD2D_RECT_F@@@Z @ 0x18016E300 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUD2D_RECT_F@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z @ 0x18020305C (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridBrush::HitTest(
        CNineGridBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __int64 v5; // rax
  int v9; // eax
  unsigned int v10; // edi
  CSurfaceBrush *v11; // rcx
  int v12; // eax
  struct D2D_RECT_F *v13; // r9
  FLOAT v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  struct D2D_RECT_F v18; // [rsp+30h] [rbp-29h] BYREF
  struct D2D_RECT_F v19; // [rsp+40h] [rbp-19h] BYREF
  struct D2D_RECT_F v20[3]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v21; // [rsp+80h] [rbp+27h]

  *a4 = 0;
  v5 = *(_QWORD *)this;
  v19 = 0LL;
  v9 = (*(__int64 (__fastcall **)(CNineGridBrush *, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(v5 + 192))(
         this,
         a2,
         &v19);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x84u, 0LL);
    return v10;
  }
  if ( IsPointInRect(a3, &v19) )
  {
    *a4 = 1;
    if ( *((_BYTE *)this + 136) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 18) + 64LL))(
             *((_QWORD *)this + 18),
             142LL) )
      {
        v11 = (CSurfaceBrush *)*((_QWORD *)this + 18);
        v21 = 0LL;
        memset(v20, 0, sizeof(v20));
        v12 = CSurfaceBrush::ComputeLayout(v11, a2, (struct CContent::LayoutData *)v20);
        v10 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x92u, 0LL);
          return v10;
        }
        v19 = 0LL;
        D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
          (D2DMatrixHelper *)&v20[1].right,
          v20,
          (const struct D2D_MATRIX_3X2_F *)&v19,
          v13);
      }
      v14 = (float)(*((float *)this + 30) * *((float *)this + 26)) + v19.left;
      v15 = *((float *)this + 33) * *((float *)this + 29);
      v18.top = (float)(*((float *)this + 31) * *((float *)this + 27)) + v19.top;
      v16 = *((float *)this + 32) * *((float *)this + 28);
      v18.left = v14;
      v18.right = v19.right - v16;
      v18.bottom = v19.bottom - v15;
      if ( IsPointInRect(a3, &v18) )
        *a4 = 0;
    }
  }
  return v10;
}
