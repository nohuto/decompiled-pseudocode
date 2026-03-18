/*
 * XREFs of ?GetRealization@CScaleTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18027F590
 * Callers:
 *     <none>
 * Callees:
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x180009DA8 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

void __fastcall CScaleTransform3D::GetRealization(
        CScaleTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  CMILMatrix::SetScale(
    a3,
    *((float *)this + 40),
    *((float *)this + 41),
    *((float *)this + 42),
    *((float *)this + 43),
    *((float *)this + 44),
    *((float *)this + 45));
}
