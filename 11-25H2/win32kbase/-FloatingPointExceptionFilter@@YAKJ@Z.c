/*
 * XREFs of ?FloatingPointExceptionFilter@@YAKJ@Z @ 0x140212358
 * Callers:
 *     ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x140120D80 (-ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX.c)
 *     ?D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z @ 0x140120F04 (-D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FloatingPointExceptionFilter(int a1)
{
  return a1 == -1073741683
      || a1 == -1073741682
      || a1 == -1073741681
      || a1 == -1073741680
      || a1 == -1073741679
      || a1 == -1073741678
      || a1 == -1073741677;
}
