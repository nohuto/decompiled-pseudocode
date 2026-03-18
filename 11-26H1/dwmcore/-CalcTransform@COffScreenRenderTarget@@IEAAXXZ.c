/*
 * XREFs of ?CalcTransform@COffScreenRenderTarget@@IEAAXXZ @ 0x18005F7D4
 * Callers:
 *     ?UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ @ 0x18005F7B0 (-UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18005F520 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 */

void __fastcall COffScreenRenderTarget::CalcTransform(COffScreenRenderTarget *this)
{
  __int64 v1; // rdx
  CMILMatrix *v3; // rbx
  CTransform3D *v4; // rcx
  const struct CMILMatrix *Matrix; // rax

  v1 = *((_QWORD *)this + 14);
  if ( v1 && (v4 = (CTransform3D *)*((_QWORD *)this + 24)) != 0LL )
  {
    v3 = (COffScreenRenderTarget *)((char *)this + 308);
    Matrix = CTransform3D::GetMatrix(v4, (const struct D2D_SIZE_F *)(*(_QWORD *)(v1 + 72) + 140LL));
    *(_OWORD *)((char *)this + 308) = *(_OWORD *)Matrix;
    *(_OWORD *)((char *)this + 324) = *((_OWORD *)Matrix + 1);
    *(_OWORD *)((char *)this + 340) = *((_OWORD *)Matrix + 2);
    *(_OWORD *)((char *)this + 356) = *((_OWORD *)Matrix + 3);
    *((_DWORD *)this + 93) = *((_DWORD *)Matrix + 16);
  }
  else
  {
    v3 = (COffScreenRenderTarget *)((char *)this + 308);
    *(_QWORD *)((char *)this + 308) = 1065353216LL;
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
  CMILMatrix::Translate(v3, *((float *)this + 50), *((float *)this + 51));
}
