/*
 * XREFs of ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18005ECE0
 * Callers:
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801D8030 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ @ 0x180285AA0 (-BreakLinksForCycles@CTransformGroup@@MEAAXXZ.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18005F520 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CTransform3DGroup::GetRealizationWorker(
        CTransform3DGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  int v6; // eax
  CTransform3D **v7; // rbp
  CTransform3D **i; // rdi
  const struct CMILMatrix *Matrix; // rax

  *(_QWORD *)a3 = 1065353216LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_DWORD *)a3 + 4) = 0;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_QWORD *)a3 + 6) = 0LL;
  *((_DWORD *)a3 + 14) = 0;
  *((_DWORD *)a3 + 15) = 1065353216;
  *((_BYTE *)a3 + 65) &= 0xE9u;
  *((_BYTE *)a3 + 65) |= 0x29u;
  *((_BYTE *)a3 + 64) = -86;
  v6 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 10) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 4)) & 0xC;
  if ( (((unsigned __int8)v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 4)) & 0xC) & 0xC) == 4 )
  {
    v7 = (CTransform3D **)*((_QWORD *)this + 21);
    for ( i = (CTransform3D **)*((_QWORD *)this + 20); i != v7; ++i )
    {
      Matrix = CTransform3D::GetMatrix(*i, a2);
      CMILMatrix::Multiply(a3, Matrix);
    }
  }
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ (4 * (*((_DWORD *)this + 10) >> 2) - 4)) & 0xC;
}
