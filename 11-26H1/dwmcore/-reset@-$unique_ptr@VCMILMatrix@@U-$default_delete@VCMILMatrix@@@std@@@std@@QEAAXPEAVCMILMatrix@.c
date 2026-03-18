/*
 * XREFs of ?reset@?$unique_ptr@VCMILMatrix@@U?$default_delete@VCMILMatrix@@@std@@@std@@QEAAXPEAVCMILMatrix@@@Z @ 0x1800D1F30
 * Callers:
 *     ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z @ 0x1800D1D84 (-TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z.c)
 *     ?SetWorldTransform@CTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1801E5EC0 (-SetWorldTransform@CTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CMILMatrix>::reset(void **a1, void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    operator delete(v2, 0x44uLL);
}
