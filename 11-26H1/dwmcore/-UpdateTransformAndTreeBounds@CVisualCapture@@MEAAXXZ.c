/*
 * XREFs of ?UpdateTransformAndTreeBounds@CVisualCapture@@MEAAXXZ @ 0x180286930
 * Callers:
 *     <none>
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800AFF90 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 */

void __fastcall CVisualCapture::UpdateTransformAndTreeBounds(
        CVisualCapture *this,
        __int64 a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  struct CMILMatrix *v3; // rbx
  CVisual *v5; // rcx
  _BYTE v6[64]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+60h] [rbp-18h]

  v3 = (CVisualCapture *)((char *)this + 308);
  if ( *((_BYTE *)this + 2420) )
  {
    *(_QWORD *)v3 = 1065353216LL;
    *(_QWORD *)((char *)this + 316) = 0LL;
    *((_DWORD *)this + 81) = 0;
    *((_QWORD *)this + 41) = 1065353216LL;
    *((_QWORD *)this + 42) = 0LL;
    *((_DWORD *)this + 86) = 0;
    *(_QWORD *)((char *)this + 348) = 1065353216LL;
    *(_QWORD *)((char *)this + 356) = 0LL;
    *((_DWORD *)this + 91) = 0;
    *((_DWORD *)this + 92) = 1065353216;
    *((_BYTE *)this + 373) &= 0xE9u;
    *((_BYTE *)this + 373) |= 0x29u;
    *((_BYTE *)this + 372) = -86;
  }
  else
  {
    CVisual::GetRootTransform(*((CVisual **)this + 299), v3, 0, 0);
    v5 = (CVisual *)*((_QWORD *)this + 298);
    if ( v5 )
    {
      v7 = 0;
      CVisual::GetRootTransform(v5, (struct CMILMatrix *)v6, 0, 0);
      CMILMatrix::Multiply(v3, (const struct CMILMatrix *)v6);
    }
  }
  COffScreenRenderTarget::CalcTreeBounds(this, a2, a3);
}
